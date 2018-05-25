//  Created by react-native-create-bridge

#import "RNGStreamer.h"
#import "GStreamerBackend.h"

// import RCTBridge
#if __has_include(<React/RCTBridge.h>)
#import <React/RCTBridge.h>
#elif __has_include(“RCTBridge.h”)
#import “RCTBridge.h”
#else
#import “React/RCTBridge.h” // Required when used as a Pod in a Swift project
#endif

// import RCTEventDispatche

@implementation RNGStreamer {
  GStreamerBackend *gst_backend;
}

@synthesize bridge = _bridge;


- (id)init {
  self = [super init];
  
  dispatch_async(dispatch_get_main_queue(), ^{
    gst_backend = [[GStreamerBackend alloc] init:self];
  });
  return self;
}

-(void) play
{
  dispatch_async(dispatch_get_main_queue(), ^{

    [gst_backend play];
  });
}

// Export a native module
// https://facebook.github.io/react-native/docs/native-modules-ios.html
RCT_EXPORT_MODULE();

// Export constants
// https://facebook.github.io/react-native/releases/next/docs/native-modules-ios.html#exporting-constants
- (NSDictionary *)constantsToExport
{
  return @{
           @"EXAMPLE": @"example"
         };
}

// Export methods to a native module
// https://facebook.github.io/react-native/docs/native-modules-ios.html
RCT_EXPORT_METHOD(exampleMethod)
{
  NSLog(@"MADE IT HERE");
  [self play];
}

#pragma mark - Private methods

@end
