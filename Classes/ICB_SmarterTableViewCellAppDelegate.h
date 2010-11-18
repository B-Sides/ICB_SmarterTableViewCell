//
//  ICB_SmarterTableViewCellAppDelegate.h
//  ICB_SmarterTableViewCell
//
//  Created by Collin Ruffenach on 11/18/10.
//  Copyright 2010 ELC Technologies. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ICB_SmarterTableViewCellAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@end

