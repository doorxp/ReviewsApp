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
#import "ReviewsControllerPad.h"
#import "TOSplitViewController.h"

@interface reviewAppIpadDelegate : reviewAppAppDelegate <UIApplicationDelegate> {

    IBOutlet UISplitViewController* spliView;
    IBOutlet UINavigationController* leftNav;
    IBOutlet UINavigationController* rightNav;
    IBOutlet ReviewsControllerPad* reviewsController;
    IBOutlet UIImageView* tableShadow;

}

@property (nonatomic, retain) IBOutlet UISplitViewController* splitView;
@property (nonatomic, retain) IBOutlet UINavigationController* leftNav;
@property (nonatomic, retain) IBOutlet UINavigationController* rightNav;
@property (nonatomic, retain) IBOutlet ReviewsControllerPad* reviewsController;

@end
