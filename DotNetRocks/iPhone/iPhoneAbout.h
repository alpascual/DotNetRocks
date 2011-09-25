//
//  iPhoneAbout.h
//  SilverlightNews
//
//  Created by Albert Pascual on 1/17/11.
//  Copyright 2011 Al. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface iPhoneAbout : UIViewController <UIWebViewDelegate> {

	UIWebView *aWebView;
	NSURL *urlToOpen;
	UIActivityIndicatorView *aLoadingIndicator;
	UIToolbar *toolbar;
	
}

@property (nonatomic , retain) IBOutlet UIWebView *aWebView;
@property (nonatomic , retain) NSURL *urlToOpen;
@property (nonatomic , retain) IBOutlet UIActivityIndicatorView *aLoadingIndicator;
@property (nonatomic , retain) IBOutlet UIToolbar *toolbar;

- (IBAction) dismissAboutUsViewController;
- (IBAction) closeCalled;

@end
