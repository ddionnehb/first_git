//
//  AppDelegate.h
//  testttt
//
//  Created by Dennis Dionne on 5/20/11.
//  Copyright Self 2011. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
