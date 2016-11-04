//
//  SettingsViewController.h
//  BarTop
//
//  Created by Hunter Lynch on 6/15/15.
//  Copyright (c) 2016 Hunter Lynch. All rights reserved.
//

//#import "ViewController.h"

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <MediaPlayer/MediaPlayer.h>
#import <iAd/iAd.h>
#import <GameKit/GameKit.h>
#import "GameCenterManager.h"



@class SettingsViewController;

@protocol SettingsDelegate

- (void)settingsDidFinish:(SettingsViewController *) controller;

@end


@interface SettingsViewController : UIViewController <ADBannerViewDelegate>


@property (weak, nonatomic) id <SettingsDelegate> delegate;


@end
