/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIStatusBarSystemNavigationItemView.h>

@class UISystemNavigationAction, NSString;

@interface UIStatusBarOpenInSafariItemView : UIStatusBarSystemNavigationItemView {

	UISystemNavigationAction* _systemNavigationAction;
	NSString* _destinationText;

}

@property (nonatomic,retain) UISystemNavigationAction * systemNavigationAction;              //@synthesize systemNavigationAction=_systemNavigationAction - In the implementation block
@property (nonatomic,retain) NSString * destinationText;                                     //@synthesize destinationText=_destinationText - In the implementation block
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(void)setSystemNavigationAction:(UISystemNavigationAction *)arg1 ;
-(UISystemNavigationAction *)systemNavigationAction;
-(NSString *)destinationText;
-(void)setDestinationText:(NSString *)arg1 ;
-(id)shortenedTitleWithCompressionLevel:(int)arg1 ;
-(void)userDidActivateButton:(id)arg1 ;
-(id)_displayStringFromURL:(id)arg1 ;
-(id)_nominalTitleWithDestinationText:(id)arg1 ;
-(BOOL)layoutImageOnTrailingEdge;
@end

