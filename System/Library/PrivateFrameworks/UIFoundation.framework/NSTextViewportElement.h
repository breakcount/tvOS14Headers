/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSTextRange;


@protocol NSTextViewportElement <NSObject>
@property (readonly) NSTextRange * representedRange; 
@property (readonly) CGSize layoutSize; 
@property (assign) CGPoint layoutPoint; 
@required
-(CGSize)layoutSize;
-(CGPoint)layoutPoint;
-(void)drawAtPoint:(CGPoint)arg1 context:(CGContextRef)arg2;
-(NSTextRange *)representedRange;
-(id)representedRangeAtPoint:(CGPoint)arg1;
-(double)verticalOffsetOfTextLocation:(id)arg1 withAffinity:(long long)arg2;
-(void)setLayoutPoint:(CGPoint)arg1;

@end

