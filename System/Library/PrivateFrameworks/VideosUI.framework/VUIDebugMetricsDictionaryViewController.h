/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@class NSDictionary;

@interface VUIDebugMetricsDictionaryViewController : UITableViewController {

	NSDictionary* _dictionary;

}

@property (nonatomic,retain) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
-(void)setDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
-(id)sortedKeys;
@end

