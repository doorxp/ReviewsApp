//
//  reviewAppIpadDelegate.h
//  reviewApp
//
//  Created by Danilo Bonardi on 14/12/10.
//  Copyright 2010 Shiny Frog. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "reviewAppAppDelegate.h"
#import "RootViewControllerPad.h"
#import "MGSplitViewController.h"

@interface reviewAppIpadDelegate : reviewAppAppDelegate <UIApplicationDelegate> {
    
    IBOutlet MGSplitViewController* spliView;
    IBOutlet UINavigationController* leftNav;
    IBOutlet UINavigationController* rightNav;    
    
}

@property (nonatomic, retain) IBOutlet MGSplitViewController* spliView;
@property (nonatomic, retain) IBOutlet IBOutlet UINavigationController* leftNav;
@property (nonatomic, retain) IBOutlet IBOutlet UINavigationController* rightNav;

@end
