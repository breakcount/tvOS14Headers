/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSTextRange;


@protocol NSTextSelectionDataSource <NSObject>
@property (readonly) NSTextRange * documentRange; 
@optional
-(long long)layoutOrientationAtLocation:(id)arg1;
-(void)enumerateContainerBoundariesFromLocation:(id)arg1 reverse:(BOOL)arg2 usingBlock:(/*^block*/id)arg3;

@required
-(long long)offsetFromLocation:(id)arg1 toLocation:(id)arg2;
-(NSTextRange *)documentRange;
-(id)locationFromLocation:(id)arg1 offset:(long long)arg2;
-(long long)baseWritingDirectionAtLocation:(id)arg1;
-(void)enumerateCaretOffsetsInLineFragmentAtLocation:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(void)enumerateSubstringsFromLocation:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3;
-(id)lineFragmentRangeForPoint:(CGPoint)arg1 inContainerAtLocation:(id)arg2;
-(id)textRangeForSelectionGranularity:(long long)arg1 enclosingLocation:(id)arg2;

@end
