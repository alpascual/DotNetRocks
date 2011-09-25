//
//  ShowListController.h
//  DotNetRocks
//
//  Created by Al Pascual on 4/4/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <iAd/iAd.h>


#import "MWFeedParser.h"
#import "dnrServiceSvc.h"
#import "iPhoneStreamingPlayerViewController.h"
#import "iPhoneAbout.h"


@interface ShowListController : UIViewController <UITableViewDataSource, UITableViewDelegate, MWFeedParserDelegate> {
    
    UITableView *mytableView;
    
    MWFeedParser *feedParser; 
    NSMutableArray *parsedItems;
    NSArray *itemsToDisplay;
    NSDateFormatter *formatter;
    
    dnrServiceSvc_GetTop20Shows *getShows;
    
    iPhoneStreamingPlayerViewController *streamer;
    UIToolbar *toolBar;
    ADBannerView *adView; 
    
    
}

@property (nonatomic,retain) IBOutlet UITableView *mytableView;
@property (nonatomic,retain) MWFeedParser *feedParser;
@property (nonatomic,retain) NSArray *itemsToDisplay;

@property (nonatomic,retain) dnrServiceSvc_GetTop20Shows *getShows;
@property (nonatomic,retain) iPhoneStreamingPlayerViewController *streamer;

@property (nonatomic,retain) IBOutlet UIToolbar *toolBar;
@property (nonatomic,retain) IBOutlet ADBannerView *adView; 

- (void) displayPodcast:(NSIndexPath *)indexPath;
- (IBAction) aboutCalled:(id)sender;

@end
