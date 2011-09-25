//
//  iPhoneAbout.m
//  SilverlightNews
//
//  Created by Albert Pascual on 1/17/11.
//  Copyright 2011 Al. All rights reserved.
//

#import "iPhoneAbout.h"


@implementation iPhoneAbout

@synthesize aWebView,urlToOpen,aLoadingIndicator,toolbar;

/*
 // The designated initializer.  Override if you create the controller programmatically and want to perform customization that is not appropriate for viewDidLoad.
 - (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
 if ((self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil])) {
 // Custom initialization
 }
 return self;
 }
 */


// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad 
{
	[super viewDidLoad];
	
	if (UI_USER_INTERFACE_IDIOM() != UIUserInterfaceIdiomPad)
	{
		toolbar.hidden = YES;
	}
	
	self.aWebView.backgroundColor = [UIColor clearColor];
	self.aWebView.opaque = NO;
	
	if (self.urlToOpen != nil) 
	{
		[self.aLoadingIndicator startAnimating];
		NSURLRequest *aReq = [NSURLRequest requestWithURL:self.urlToOpen];
		[self.aWebView loadRequest:aReq];
	}	
	
}

-(void) viewWillAppear:(BOOL)animated{
	
	[self.aWebView stringByEvaluatingJavaScriptFromString:@"window.scrollTo(0,0)"];
}



- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
    // Overriden to allow any orientation.
    return YES;
}


- (void)didReceiveMemoryWarning {
    // Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
    
    // Release any cached data, images, etc that aren't in use.
}

- (void)viewDidUnload {
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}


- (void)dealloc {
    [self.aWebView release];
	[self.aLoadingIndicator release];
	[self.urlToOpen release];
    [super dealloc];
}

#pragma mark -
#pragma mark UIWebViewDelegate
- (void)webViewDidStartLoad:(UIWebView *)webView{
	[self.aLoadingIndicator startAnimating];
}

- (void)webViewDidFinishLoad:(UIWebView *)webView{
	[self.aLoadingIndicator stopAnimating];	
}

- (void)webView:(UIWebView *)webView didFailLoadWithError:(NSError *)error{
	if ([self.aLoadingIndicator isAnimating]) {
		[self.aLoadingIndicator stopAnimating];
	}
}

#pragma mark -
#pragma mark IBAction

- (IBAction) dismissAboutUsViewController{
	[self dismissModalViewControllerAnimated:YES];
}

- (IBAction) closeCalled
{
	[self dismissModalViewControllerAnimated:YES];
}
@end
