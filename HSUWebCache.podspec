Pod::Spec.new do |s|
  s.name     = 'HSUWebCache'
  s.version  = '0.1.0'
  s.platform = :ios, '6.0'
  s.license  = 'MIT'
  s.summary  = 'Additions for UIImageView and UIButton, set image with url.'
  s.homepage = 'https://github.com/ronaldwang/HSUWebCache'
  s.author   = { 'Feng Wang' => ' twieface@gmail.com' }
  s.source   = { :git => 'https://github.com/ronaldwang/HSUWebCache.git', :tag => s.version.to_s }
  s.description = 'HSUWebCache is Additions for UIImageView and UIButton, set image with url.'
  s.source_files = '*.{h,m}'
  s.framework    = ['Foundation', 'UIKit']
  s.requires_arc = true
  s.dependency 'AFNetworking', '~> 2.0'
end
