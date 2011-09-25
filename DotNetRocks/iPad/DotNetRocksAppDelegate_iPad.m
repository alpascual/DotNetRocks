//
//  DotNetRocksAppDelegate_iPad.m
//  DotNetRocks
//
//  Created by Al Pascual on 4/4/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "DotNetRocksAppDelegate_iPad.h"

@implementation DotNetRocksAppDelegate_iPad

@synthesize mainScreen;


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    self.mainScreen = [[iPadMainController alloc] initWithNibName:@"iPadMainController" bundle:nil];
    
    [self.window addSubview:self.mainScreen.view];
    
    [self.window makeKeyAndVisible];
    
    [self.mainScreen viewDidAppear:YES];
    
    return YES;
}

- (void)dealloc
{
	[super dealloc];
    
    [self.mainScreen release];
}

@end
