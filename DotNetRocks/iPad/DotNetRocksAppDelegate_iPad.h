//
//  DotNetRocksAppDelegate_iPad.h
//  DotNetRocks
//
//  Created by Al Pascual on 4/4/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DotNetRocksAppDelegate.h"

#import "iPadMainController.h"

@interface DotNetRocksAppDelegate_iPad : DotNetRocksAppDelegate  {
    
    iPadMainController *mainScreen;
}

@property (nonatomic,retain) iPadMainController *mainScreen;
@end
