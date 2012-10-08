//
//  AppDelegate.h
//  laoying
//
//  Created by Qing on 12-10-8.
//  Copyright __MyCompanyName__ 2012年. All rights reserved.
//

#import "cocos2d.h"

@interface laoyingAppDelegate : NSObject <NSApplicationDelegate>
{
	NSWindow	*window_;
	MacGLView	*glView_;
}

@property (assign) IBOutlet NSWindow	*window;
@property (assign) IBOutlet MacGLView	*glView;

- (IBAction)toggleFullScreen:(id)sender;

@end
