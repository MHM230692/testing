//
//  AppDelegate.h
//  TwitterApi
//
//  Created by UBL OMNI on 03/05/2018.
//  Copyright © 2018 UBL OMNI. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

