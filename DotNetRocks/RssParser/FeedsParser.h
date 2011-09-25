//
//  FeedsParser.h
//  SilverlightNews
//
//  Created by Albert Pascual on 1/15/11.
//  Copyright 2011 Al. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MWFeedParser.h"


@interface FeedsParser : NSObject <MWFeedParserDelegate> {

	// Displaying
	NSArray *itemsToDisplay;
	
	MWFeedParser *feedParser;
	NSMutableArray *parsedItems;
}

// Properties
@property (nonatomic, retain) NSArray *itemsToDisplay;
@property (nonatomic, retain) MWFeedParser *feedParser;

- (void) parseOne:(NSString *)sUrl;
- (void) parseMultiple:(NSMutableArray *)sUrls;

@end
