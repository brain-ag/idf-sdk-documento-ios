import UIKit

extension UIButton {
    
    static func customButton(title: String, textColor: UIColor, backgroundColor: UIColor) -> UIButton {
        let button = UIButton(type: .system)
        button.setTitle(title, for: .normal)
        button.setTitleColor(textColor, for: .normal)
        button.layer.cornerRadius = 20
        button.layer.masksToBounds = true
        button.backgroundColor = backgroundColor
        return button
    }
}
