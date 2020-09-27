/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface SupplyLevelView : UIView {

	int supplyLevel;
	NSArray* colors;

}

@property (assign,nonatomic) int supplyLevel; 
@property (nonatomic,retain) NSArray * colors; 
-(BOOL)isOpaque;
-(NSArray *)colors;
-(void)setColors:(NSArray *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(int)supplyLevel;
-(void)setSupplyLevel:(int)arg1 ;
@end

