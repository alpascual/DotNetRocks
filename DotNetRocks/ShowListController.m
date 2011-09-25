//
//  ShowListController.m
//  DotNetRocks
//
//  Created by Al Pascual on 4/4/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "ShowListController.h"


@implementation ShowListController

@synthesize mytableView, feedParser, itemsToDisplay, getShows, streamer, toolBar, adView;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)dealloc
{
    [super dealloc];
    
    [parsedItems release];
    [self.streamer release];
}

- (void)didReceiveMemoryWarning
{
    // Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
    
    // Release any cached data, images, etc that aren't in use.
}

#pragma mark - View lifecycle

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    if (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
    {
        // iPad
        self.toolBar.hidden = YES;
        self.adView.hidden = YES; 
    }
    
    
    /*self.getShows = [[dnrServiceSvc_GetTop20Shows alloc] init];
    
    NSString *temp = [self.getShows description];*/
    
    
    // Uncomment the following line to display an Edit button in the navigation bar for this view controller.
    // self.navigationItem.rightBarButtonItem = self.editButtonItem;
	formatter = [[NSDateFormatter alloc] init];
	[formatter setDateStyle:NSDateFormatterShortStyle];
	[formatter setTimeStyle:NSDateFormatterShortStyle];
    
    self.itemsToDisplay = nil;
    
    NSString *sUrl = [[NSString alloc] initWithFormat:@"http://www.pwop.com/feed.aspx?showname=dotnetrocks"];
    
    // All
    //http://www.pwop.com/feed.aspx?showname=dotnetrocks&filetype=master
    
    if ( parsedItems == nil )
		parsedItems = [[NSMutableArray alloc] init];	
	
	// Create feed parser and pass the URL of the feed
	if ( self.feedParser == nil )
		self.feedParser = [[MWFeedParser alloc] initWithFeedURL:sUrl];
	else {
		[self.feedParser setTheUrl:sUrl];
	}
	
	// Delegate must conform to `MWFeedParserDelegate`
	self.feedParser.delegate = self;
	
	// Set the parsing type. Options are ParseTypeFull, ParseTypeInfoOnly, ParseTypeItemsOnly. Info refers to the information about the feed, such as it's title and description. Items are the individual items or stories.
	// Parse the feeds info (title, link) and all feed items
	self.feedParser.feedParseType = ParseTypeFull;
	
	
	// Set whether the parser should connect and download the feed data synchronously or asynchronously. 
	// Note, this only affects the download of the feed data, not the parsing operation itself.
	// Connection type
	self.feedParser.connectionType = ConnectionTypeSynchronously;
	
	// Begin parsing
	[self.feedParser parse];
    
    [sUrl release];
    
    self.mytableView.delegate = self;
    
}

- (void)feedParser:(MWFeedParser *)parser didParseFeedItem:(MWFeedItem *)item {
	NSLog(@"Parsed Feed Item: “%@”", item.title);
	if (item) [parsedItems addObject:item];	
}

// Parsing complete or stopped at any time by `stopParsing`
- (void)feedParserDidFinish:(MWFeedParser *)parser
{
	NSLog(@"Finished Parsing%@", (parser.stopped ? @" (Stopped)" : @""));
	self.itemsToDisplay = [parsedItems sortedArrayUsingDescriptors:
						   [NSArray arrayWithObject:[[[NSSortDescriptor alloc] initWithKey:@"date" 
																				 ascending:NO] autorelease]]];
	
	
	self.mytableView.userInteractionEnabled = YES;
	self.mytableView.alpha = 1;
	[self.mytableView reloadData];
}

// Parsing failed
- (void)feedParser:(MWFeedParser *)parser didFailWithError:(NSError *)error
{
	UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Error"
                                                    message:[NSString stringWithFormat:@"Cannot access the internet to download the latest shows"]
                                                   delegate:nil
                                          cancelButtonTitle:@"OK"                                          
                                          otherButtonTitles:nil];
    
    [alert show];
    [alert release];
}


- (void)viewDidUnload
{
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}


#pragma mark -
#pragma mark Table view data source
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    NSLog(@"Returning num sections");
    
    return 1;
    
}


- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    NSLog(@"Returning num rows");
    
    if ( self.itemsToDisplay == nil )
        return 0;
    
    NSLog(@"Returning num rows are %d" , [self.itemsToDisplay count]);
    return [self.itemsToDisplay count];
}


- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    NSLog(@"Trying to return cell");
    
    static NSString *CellIdentifier = @"Cell";
    
    
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:CellIdentifier];
    if (cell == nil) {
        cell = [[[UITableViewCell alloc] initWithFrame:CGRectZero reuseIdentifier:CellIdentifier] autorelease];
        
        cell.selectionStyle = UITableViewCellSelectionStyleBlue;
        cell.accessoryType = UITableViewCellAccessoryDetailDisclosureButton;
        
        CGRect frame;
        frame.origin.x = 10;
        frame.origin.y = 5;
        frame.size.height = 15;
        frame.size.width = 300;
        
        UILabel *title = [[UILabel alloc] initWithFrame:frame];
        [title setFont:[UIFont fontWithName:@"TimesNewRomanPS-ItalicMT" size:16]];
        title.textColor = [UIColor grayColor];
        title.tag = 1;
        [cell.contentView addSubview:title];
        [title release];
        
        frame.origin.y += 18;
        
        UILabel *details = [[UILabel alloc] initWithFrame:frame];
        [details setFont:[UIFont fontWithName:@"TimesNewRomanPS-ItalicMT" size:9]];
        details.tag = 2;
        [cell.contentView addSubview:details];
        [details release];      
        
    }

    UILabel * title = (UILabel *) [cell.contentView viewWithTag:1];
    UILabel * details = (UILabel *) [cell.contentView viewWithTag:2];
    
    /*UITableViewCell *cell = [self.mytableView dequeueReusableCellWithIdentifier:CellIdentifier];
    if (cell == nil) {
        //cell = [[[UITableViewCell alloc] initWithFrame:CGRectZero reuseIdentifier:CellIdentifier] autorelease];
        cell = [[[UITableViewCell alloc] initWithStyle:UITableViewCellStyleValue2
                                       reuseIdentifier:CellIdentifier] autorelease];
        
        cell.selectionStyle = UITableViewCellSelectionStyleBlue;
        cell.accessoryType = UITableViewCellAccessoryDetailDisclosureButton;
    }*/
    
    
    MWFeedItem *item = [self.itemsToDisplay objectAtIndex:indexPath.row];
	if (item) {
		
		// Process
		NSString *itemTitle = item.title ? [item.title stringByConvertingHTMLToPlainText] : @"[No Title]";
		NSString *itemSummary = item.summary ? [item.summary stringByConvertingHTMLToPlainText] : @"[No Summary]";
		
		// Set
		/*cell.textLabel.font = [UIFont boldSystemFontOfSize:15];
		cell.textLabel.text = itemTitle;
                
        cell.detailTextLabel.text = itemSummary;
        cell.detailTextLabel.textColor = [UIColor grayColor];*/
        title.text = itemTitle;
        details.text = itemSummary;
        
        if ([item.enclosures count] > 0 ) {
            NSDictionary *mp3Item = [item.enclosures objectAtIndex:0];            
            cell.accessibilityValue = [mp3Item objectForKey:@"url"];
        }
		
		// Make it gray
		/*NSDate * date = [NSDate date];
         NSTimeInterval timeInterval = 1;
         [date ti
         if ( item.date < date ) {
         cell.textLabel.textColor = [UIColor grayColor];
         cell.detailTextLabel.textColor = [UIColor grayColor];
         }*/
		
		/*NSMutableString *subtitle = [NSMutableString string];
		if (item.date) [subtitle appendFormat:@"%@: ", [formatter stringFromDate:item.date]];
		[subtitle appendString:itemSummary];
		cell.detailTextLabel.text = subtitle;
		*/
	}
   

    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    [self displayPodcast:indexPath];    
}

- (void)tableView:(UITableView *)tableView accessoryButtonTappedForRowWithIndexPath:(NSIndexPath *)indexPath
{
    [self displayPodcast:indexPath];
}

- (void) displayPodcast:(NSIndexPath *)indexPath
{    
    NSString *streamUrl = nil;
    
    MWFeedItem *item = [self.itemsToDisplay objectAtIndex:indexPath.row];
    if (item) {
		
        if ([item.enclosures count] > 0 ) {
            NSDictionary *mp3Item = [item.enclosures objectAtIndex:0];
            
            streamUrl = [mp3Item objectForKey:@"url"];
            
        }
    }
    
    if ( streamUrl != nil )
    {
        self.streamer = [[[iPhoneStreamingPlayerViewController alloc] initWithNibName:@"iPhoneStreamingPlayerViewController" bundle:nil] autorelease];
       
        self.streamer.url = streamUrl;
        self.streamer.myTitle = item.title;
        
        if (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
        {
            // iPad
            self.streamer.modalPresentationStyle = UIModalPresentationFormSheet;
            self.streamer.modalTransitionStyle = UIModalTransitionStyleCrossDissolve;            
        }
        else
        {
            // iPhone
        }
            
        [self presentModalViewController:self.streamer animated:YES];	
    }
    
    // TODO Alert no podcast here
    
}

- (IBAction) aboutCalled:(id)sender
{
    iPhoneAbout *about = [[[iPhoneAbout alloc] initWithNibName:@"iPhoneAbout" bundle:nil] autorelease];
    
    about.urlToOpen = [NSURL URLWithString:@"http://www.dotnetrocks.com/about.aspx"];
    
    if (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
    {
        // iPad
        about.modalPresentationStyle = UIModalPresentationFormSheet;
        about.modalTransitionStyle = UIModalTransitionStyleCrossDissolve;   
        [self presentModalViewController:about animated:YES];
    }
    else
    {
        // iPhone
        [self.navigationController pushViewController:about animated:YES];
    }
}

@end
