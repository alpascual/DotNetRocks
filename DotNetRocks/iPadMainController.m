//
//  iPadMainController.m
//  DotNetRocks
//
//  Created by Al Pascual on 4/4/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "iPadMainController.h"


@implementation iPadMainController

@synthesize myPopOverController, showList, toolbar;

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
       
    //[self feedsCalled];
}

- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
	
	[self feedsCalled];
}

- (IBAction) feedsCalled
{
	//self.feeds.modalPresentationStyle = UIModalPresentationFullScreen;
	
	//[self presentModalViewController:self.feeds animated:YES];
	
	if ( self.showList == nil)
		self.showList = [[ShowListController alloc] initWithNibName:@"ShowListController" bundle:nil];
	
	if ( self.myPopOverController == nil)
		self.myPopOverController = [[UIPopoverController alloc] initWithContentViewController:self.showList];			
	
	[self.myPopOverController setPopoverContentSize:CGSizeMake(350, 700)];
	[self.myPopOverController presentPopoverFromRect:CGRectMake(20.0f, 20.0f, 10.0f, 5.0f) inView:self.view permittedArrowDirections:UIPopoverArrowDirectionUp animated:YES];
	
}

- (void)viewDidUnload {
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
	
	[self feedsCalled];
}



- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    // Return YES for supported orientations
	return YES;
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
