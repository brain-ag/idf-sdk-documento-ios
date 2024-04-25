Pod::Spec.new do |s|  
    s.name              = 'brscan-sdk-documento-ios'
    s.version           = '4.0.1-dynamic-nobitcode'
    s.summary           = 'Framework em IOS para captura de documento.'
    s.homepage          = 'https://github.com/brain-ag/idf-sdk-documento-ios'

    s.author            = { 'Celso Junio Silva Santos' => 'celsoj18@gmail.com'}
    s.license           = 'MIT'

    s.platform          = :ios
    s.source            = { :git => 'https://github.com/brain-ag/idf-sdk-documento-ios.git', :tag => s.version.to_s }

    s.resource_bundles = {
     'brscan-sdk-documento-ios-resources' => ['resources/*/*.{png,gif,ttf,plist,tflite,xcprivacy}'] 
    }
    
    s.ios.deployment_target = '11.0'    
    s.ios.vendored_frameworks = 'brscan_sdk_documento_ios.xcframework'
    
    s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
    s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

end 
