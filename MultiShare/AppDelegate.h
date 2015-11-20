//
//  AppDelegate.h
//  MultiShare
//
//  Created by Alexander Person on 11/16/15.
//  Copyright © 2015 Alexander Person. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MCManager.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (nonatomic, strong) MCManager *mcManager;

@end

