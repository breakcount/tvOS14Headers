/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:09 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/PTRowObserver.h>

@class NSIndexPath, PTChoiceRow, NSString;

@interface PTUIChoiceViewController : UITableViewController <PTRowObserver> {

	NSIndexPath* _valueIndexPath;
	PTChoiceRow* _row;

}

@property (nonatomic,retain) PTChoiceRow * row;                     //@synthesize row=_row - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setRow:(PTChoiceRow *)arg1 ;
-(PTChoiceRow *)row;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)rowDidChangeValue:(id)arg1 ;
-(void)rowDidReload:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)_checkAppropriateCell;
-(id)initWithPresentingRow:(id)arg1 ;
@end

