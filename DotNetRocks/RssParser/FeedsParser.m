//
//  FeedsParser.m
//  SilverlightNews
//
//  Created by Albert Pascual on 1/15/11.
//  Copyright 2011 Al. All rights reserved.
//

#import "FeedsParser.h"


@implementation FeedsParser

@synthesize itemsToDisplay, feedParser;

- (void) parseMultiple:(NSMutableArray *)sUrls
{
	for ( NSString *surl in sUrls)
	{
		[self parseOne:surl];
	}
}

- (void) parseOne:(NSString *)sUrl
{
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
	
	
	//self.tableView.userInteractionEnabled = YES;
	//self.tableView.alpha = 1;
	//[self.tableView reloadData];
}

 // Parsing failed
- (void)feedParser:(MWFeedParser *)parser didFailWithError:(NSError *)error
{
	UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Error"
	 message:[NSString stringWithFormat:@"Cannot access the internet to download the latest feeds"]
	 delegate:nil
	 cancelButtonTitle:@"OK"                                          
	 otherButtonTitles:nil];
	 
	 [alert show];
	 [alert release];
}

@end
