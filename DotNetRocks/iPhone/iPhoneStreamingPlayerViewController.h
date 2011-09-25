//
//  iPhoneStreamingPlayerViewController.h
//  iPhoneStreamingPlayer
//
//  Created by Matt Gallagher on 28/10/08.
//  Copyright Matt Gallagher 2008. All rights reserved.
//
//  Permission is given to use this source code file, free of charge, in any
//  project, commercial or otherwise, entirely at your risk, with the condition
//  that any redistribution (in part or whole) of source code must retain
//  this copyright and permission notice. Attribution in compiled projects is
//  appreciated but not required.
//

#import <UIKit/UIKit.h>

@class AudioStreamer;

@interface iPhoneStreamingPlayerViewController : UIViewController
{	
	IBOutlet UIButton *button;
	IBOutlet UIView *volumeSlider;
	IBOutlet UILabel *positionLabel;
	IBOutlet UISlider *progressSlider;
	AudioStreamer *streamer;
	NSTimer *progressUpdateTimer;
    
    NSString *url;
    UILabel *podcastTitle;
    
    NSString *myTitle;
}

@property (nonatomic,retain) NSString *url;
@property (nonatomic,retain) IBOutlet UILabel *podcastTitle;
@property (nonatomic,retain) NSString *myTitle;

- (IBAction)buttonPressed:(id)sender;
- (void)spinButton;
- (void)updateProgress:(NSTimer *)aNotification;
- (IBAction)sliderMoved:(UISlider *)aSlider;
- (IBAction)closeButton:(id)sender;

@end

