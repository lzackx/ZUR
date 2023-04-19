use_frameworks!

platform :ios, '14.0'

target 'UniversalReaderDylib' do
  # Zoo Frameworks
  pod 'Zoo'
  pod 'Zoo.General'
  pod 'Zoo.Logger'
  pod 'Zoo.GPS'
  pod 'Zoo.UI'
  pod 'Zoo.Performance'
  pod 'Zoo.MemoryLeakFinder', :git => 'https://github.com/lzackx/Zoo.MemoryLeakFinder.git'
  pod 'FBRetainCycleDetector', :git => 'https://github.com/facebook/FBRetainCycleDetector.git' # Depend by Zoo.MemoryLeakFinde
end


post_install do |installer|
  # =================== Xcode14 & CocoaPods1.11.3 issue =================
  post_install_xcode14_pods_project_code_sign(installer)
end


# Xcode14 & CocoaPods1.11.3 issue: https://github.com/CocoaPods/CocoaPods/issues/11402
def post_install_xcode14_pods_project_code_sign(installer)
  installer.pods_project.targets.each do |target|
    if target.respond_to?(:product_type) and target.product_type == "com.apple.product-type.bundle"
      target.build_configurations.each do |config|
        config.build_settings["CODE_SIGNING_ALLOWED"] = "NO"
      end
    end
    target.build_configurations.each do |config|
          config.build_settings["IPHONEOS_DEPLOYMENT_TARGET"] = "14.0"
    end
  end
end
