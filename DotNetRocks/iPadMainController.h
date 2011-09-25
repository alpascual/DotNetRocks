//
//  iPadMainController.h
//  DotNetRocks
//
//  Created by Al Pascual on 4/4/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "ShowListController.h"
#import "iPhoneAbout.h"


@interface iPadMainController : UIViewController{
    
    UIPopoverController *myPopOverController;
    ShowListController *showList;
    UIToolbar *toolbar;
}

@property (nonatomic,retain) UIPopoverController *myPopOverController;
@property (nonatomic,retain) ShowListController *showList;
@property (nonatomic,retain) IBOutlet UIToolbar *toolbar;

- (IBAction) feedsCalled;
- (IBAction) aboutCalled:(id)sender;

@end
