/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@class VUIDebugMetricsEvent;

@interface VUIDebugMetricsEventViewController : UITableViewController {

	VUIDebugMetricsEvent* _event;

}

@property (nonatomic,retain) VUIDebugMetricsEvent * event;              //@synthesize event=_event - In the implementation block
-(VUIDebugMetricsEvent *)event;
-(void)setEvent:(VUIDebugMetricsEvent *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(id)initWithEvent:(id)arg1 ;
-(void)performValidation;
@end
