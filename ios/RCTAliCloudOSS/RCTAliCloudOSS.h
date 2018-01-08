//
//  RCTAliCloudOSS.h
//  RCTAliCloudOSS
//
//  Created by zero on 2018/1/7.
//  Copyright © 2018年 Canzhijia. All rights reserved.
//

#import <Foundation/Foundation.h>
#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#else
#import "RCTBridgeModule.h"
#endif

#import "RCTEventEmitter.h"

@interface RCTAliCloudOSS : RCTEventEmitter <RCTBridgeModule>

@end
