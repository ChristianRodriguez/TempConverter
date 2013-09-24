//
//  TempConverterAppDelegate.h
//  TempConverter
//
//  Created by Christian Rodriguez on 3/7/13.
//  Copyright (c) 2013 Christian Rodriguez. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TempConverterViewController;

@interface TempConverterAppDelegate : UIResponder <UIApplicationDelegate>
{
    //add instance variable
    TempConverterViewController *tempConverterViewController;
}

@property (strong, nonatomic) UIWindow *window;
// turns instance into a property
@property (strong, nonatomic) TempConverterViewController *tempviewController;

@end
