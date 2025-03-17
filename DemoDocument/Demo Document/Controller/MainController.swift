import UIKit
import brscan_sdk_documento_ios

class MainController: UIViewController {
    
    // MARK: - Properties
    private var message: String
    private let btnActionCapture: UIButton = .customButton(title: "Document Capture", textColor: .white, backgroundColor: .primary)
    
    // MARK: - Life cycle
    
    init(message: String = "") {
        self.message = message
        super.init(nibName: nil, bundle: nil)
        self.showMessage()
    }
    
    required init?(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        setup()
    }
    
    func setup() {
        view.backgroundColor = .background
        
        btnActionCapture.addTarget(self, action: #selector(startCapture), for: .touchUpInside)
        
        btnActionCapture.translatesAutoresizingMaskIntoConstraints = false
        
        view.addSubview(btnActionCapture)
        btnActionCapture.centerYAnchor.constraint(equalTo: view.centerYAnchor).isActive = true
        btnActionCapture.centerXAnchor.constraint(equalTo: view.centerXAnchor).isActive = true
        btnActionCapture.leftAnchor.constraint(equalTo: view.leftAnchor, constant: 24).isActive = true
        btnActionCapture.rightAnchor.constraint(equalTo: view.rightAnchor, constant: -24).isActive = true
        btnActionCapture.heightAnchor.constraint(equalToConstant: 40).isActive = true
        
    }
    
    func showMessage() {
        if !message.isEmpty {
            Toast.show(message: message, controller: self)
        }
    }
    
    @objc func startCapture() {
        let controller = CaptureViewController()
        navigationController?.pushViewController(controller, animated: true)
    }
}

