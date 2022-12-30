#ifdef __cplusplus
#import "react-native-calc.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNCalcSpec.h"

@interface Calc : NSObject <NativeCalcSpec>
#else
#import <React/RCTBridgeModule.h>

@interface Calc : NSObject <RCTBridgeModule>
#endif

@end
