//
//  DotNetRocksAppDelegate_iPhone.h
//  DotNetRocks
//
//  Created by Al Pascual on 4/4/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DotNetRocksAppDelegate.h"
#import "ShowListController.h"

@interface DotNetRocksAppDelegate_iPhone : DotNetRocksAppDelegate {
    
    ShowListController *mainScreen;
}

@property (nonatomic,retain) ShowListController *mainScreen;
@end
