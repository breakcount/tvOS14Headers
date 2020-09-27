/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@class NSDictionary, NSArray;

@interface VUIDebugMetricsEventValidatorTableViewController : UITableViewController {

	NSDictionary* _event;
	NSArray* _results;

}

@property (nonatomic,retain) NSDictionary * event;              //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) NSArray * results;                 //@synthesize results=_results - In the implementation block
-(NSArray *)results;
-(NSDictionary *)event;
-(void)setResults:(NSArray *)arg1 ;
-(void)setEvent:(NSDictionary *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)initWithEvent:(id)arg1 ;
-(void)_reloadResults:(id)arg1 ;
@end

