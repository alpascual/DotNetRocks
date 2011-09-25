//
//  DotNetRocksAppDelegate_iPhone.m
//  DotNetRocks
//
//  Created by Al Pascual on 4/4/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "DotNetRocksAppDelegate_iPhone.h"

@implementation DotNetRocksAppDelegate_iPhone

@synthesize mainScreen;

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    
    for(UIView *subview in [self.window subviews]) {
        [subview removeFromSuperview];
    }
    
    self.mainScreen = [[ShowListController alloc] initWithNibName:@"ShowListController" bundle:nil];
    
    [self.window addSubview:self.mainScreen.view];
    [self.window makeKeyAndVisible];
    
    return YES;
}

- (void)dealloc
{
	[super dealloc];
    
    [self.mainScreen release];
}

@end
