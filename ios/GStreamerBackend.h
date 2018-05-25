//
//  GStreamerBackend.h
//  gstreameroscillatorapp
//
//  Created by Zia on 25/05/2018.
//  Copyright © 2018 Facebook. All rights reserved.
//

#ifndef GStreamerBackend_h
#define GStreamerBackend_h


#endif /* GStreamerBackend_h */

#import <Foundation/Foundation.h>
//#import "GStreamerBackendDelegate.h"

@interface GStreamerBackend : NSObject

/* Initialization method. Pass the delegate that will take care of the UI.
 * This delegate must implement the GStreamerBackendDelegate protocol */
-(id) init:(id) uiDelegate;

/* Set the pipeline to PLAYING */
-(void) play;

/* Set the pipeline to PAUSED */
-(void) pause;

@end
