/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@class NSDictionary;

@interface WFKnownNetworkScoreViewController : UITableViewController {

	NSDictionary* _score;

}

@property (nonatomic,retain) NSDictionary * score;              //@synthesize score=_score - In the implementation block
-(NSDictionary *)score;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setScore:(NSDictionary *)arg1 ;
-(void)viewDidLoad;
@end

