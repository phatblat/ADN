//
//  AppDelegate.h
//  ADN
//
//  Created by Ben Chatelain on 9/15/13.
//  Copyright (c) 2013 Ben Chatelain. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ADNService;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) ADNService *service;

@end
