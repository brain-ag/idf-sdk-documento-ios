import UIKit
import brscan_sdk_documento_ios

class CaptureViewController: UIViewController {
    
    // MARK: - Properties
    
    override var prefersStatusBarHidden: Bool {
        return true
    }
    
    init() {
        super.init(nibName: nil, bundle: nil)
    }
    
    required init?(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    // MARK: - Lifecycle
    
    override func viewDidLoad() {
        super.viewDidLoad()
        let configuracaoTexto = ConfiguracaoTextoDocumento()
        
        let captura = CapturarDocumentoViewController(
            chave: "", // INSERT KEY HERE
            cropDocumento: true,
            validaDocumento: true,
            wizard: true,
            aceitaAB: true,
            tiposDocumentosAceitos: ["cnh","rg", "dni", "rnm", "rne", "cnhcel2022", "cnhdig2022", "outros", "outrosdig"],
            segurancaExtraSslPinning: true, // TO VALIDATE REQUESTS WITH SSL PINNING (BY DEFAULT IS FALSE)
            segurancaExtraRootCheck: true, // TO CHECK IF DEVICE IS RUNNING IN ROOT MODE (BY DEFAULT IS FALSE)
            telaSelecaoDocumento: true,
            resolucao: "low",
            ladoDocumentoAceito: "",
            tipoRetorno: "base64",
            telaPreview: true,
            scoreMinimo: 60,
            customizacaoTexto: configuracaoTexto,
            retornarErros: false,
            verificarLuminosidade: false,
            segurancaExtraEmulatorCheck: true, // TO CHECK IF DEVICE IS A EMULATOR (BY DEFAULT IS FALSE)
            tokenTentativa: 0,
            orientacaoCaptura: "portrait",
            capturaManual: false,
            tentativasDeCaptura: 0,
            telaConfirmacaoDeSaida: true,
            spoof: false,
            tentativasExibicaoBotao: 3,
            playCaptureSound: true,
            spoofValidationExceptions: []
        )
        view.backgroundColor = .white
        captura.delegate = self
        addChild(captura)
        view.addSubview(captura.view)
        captura.didMove(toParent: self)
        captura.view.topAnchor.constraint(equalTo: view.topAnchor).isActive = true
        captura.view.leftAnchor.constraint(equalTo: view.leftAnchor).isActive = true
        captura.view.bottomAnchor.constraint(equalTo: view.bottomAnchor).isActive = true
        captura.view.rightAnchor.constraint(equalTo: view.rightAnchor).isActive = true
    }
}

// MARK: - CapturarDocumentoViewControllerDelegate

extension CaptureViewController: CapturarDocumentoViewControllerDelegate {
    func documentCallbackListener(_ documentCallback: [String : Any]) {
        let code = documentCallback["code"]  as! Int
        let description = documentCallback["description"] as! String
        let time = documentCallback["time"] as! Int
        let id = documentCallback["id"]  as! String
        let type = documentCallback["type"] as! String
        let docType = documentCallback["docType"] as! String
        let image = documentCallback["image"] as! String
        if let statusRequest = documentCallback["statusRequest"] as? Int {
            print("CallbackListener, statusRequest: \(statusRequest)")
        }

        print("CallbackListener, Code: \(code)")
        print("CallbackListener, Id: \(id)")
        print("CallbackListener, Description: \(description)")
        print("CallbackListener, Time: \(time)")
        print("CallbackListener, Type: \(type)")
        print("CallbackListener, DocType: \(docType)")
        print("CallbackListener, Image: \(image)")
    }
    
    func sucesso(_ documento: [[String : Any]]) {
        print("documents: \(documento)")
        
        let controller = MainController(message: "Success")
        navigationController?.pushViewController(controller, animated: true)
    }
    
    func erro(_ erro: [String : Any]) {
        let description = erro["descricao"] as! String
        
        print("error: \(erro)")
        
        let controller = MainController(message: description)
        navigationController?.pushViewController(controller, animated: true)
    }
}


