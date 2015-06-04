Pod::Spec.new do |s|
  s.name         = "PlusoSDK"
  s.version      = “0.0.10”
  s.summary      = "PlusoSDK is a simple way to add rich functionality to your app"

  s.homepage     = "http://pluso.io"
  s.screenshots  = "https://github.com/RV-Labs/PlusoSDK-iOS/blob/master/screen4.png"
  s.license      = {
    :type => 'Copyright',
    :text => <<-LICENSE
                All text and design is copyright RusVe
                All rights reserved.
                http://www.rusve.com
    LICENSE
  }
  s.author       = { "Alexey Sidorov" => "ody344@gmail.com" }
  s.platform     = :ios, "8.0"
  s.source       = { :git => "https://github.com/RV-Labs/PlusoSDK-iOS.git", :tag => s.version.to_s }

  s.source_files  = "PlusoSDK.framework/Headers/*.h"
  s.frameworks = "CoreGraphics", "UIKit"
  s.ios.vendored_frameworks = "PlusoSDK.framework"

  s.requires_arc = true
  s.preserve_paths = "PlusoSDK.framework"

  #s.xcconfig = { 'FRAMEWORK_SEARCH_PATHS' => '$(PODS_ROOT)/PlusoSDK/' }
  #s.library = "PlusoSDK.framework"
  s.dependency "ShareKit/Core"
  s.dependency "ShareKit/WhatsApp"

end

