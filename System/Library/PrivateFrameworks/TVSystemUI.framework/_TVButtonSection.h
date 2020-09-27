/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:41 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSString;

@interface _TVButtonSection : NSObject {

	NSMutableArray* _alertButtons;
	NSString* _title;

}

@property (nonatomic,retain) NSString * title;              //@synthesize title=_title - In the implementation block
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)addButton:(id)arg1 ;
-(long long)alertButtonCount;
-(id)alertButtonAtIndex:(unsigned long long)arg1 ;
-(void)addFirstButton:(id)arg1 ;
-(unsigned long long)indexOfFirstInitialSelectionButton;
-(unsigned long long)indexOfButton:(id)arg1 ;
-(void)applyToAllVisibleButtons:(/*^block*/id)arg1 ;
-(void)applyToAllCancelButtons:(/*^block*/id)arg1 ;
@end

