/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MCObject.h>

@class MCPlug;

@interface MCPlugProxy : MCObject {

	MCPlug* _plug;

}

@property (retain) MCPlug * plug;              //@synthesize plug=_plug - In the implementation block
-(BOOL)isKindOfClass:(Class)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)dealloc;
-(void)setContainer:(id)arg1 ;
-(long long)zIndex;
-(void)setPlug:(MCPlug *)arg1 ;
-(MCPlug *)plug;
-(void)_copySelfToSnapshot:(id)arg1 ;
@end

