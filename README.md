# react-native-ios-alicloud-oss
upload file to aliyun oss only on ios

1.remove libresolv.tbd, libresolv.9.tbd, SystemConfiguration.framework, CoreTelephony.framework in RCTAliCloudOSS.xcodeproj after link.
2.replace NSObject  to RCTEventEmitter <RCTBridgeModule> in RCTAliCloudOSS/RCTAliCloudOSS.h 
3. add RCTAliCloudOSS to project->Target Dependencies
