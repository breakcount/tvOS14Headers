/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface UIPointFIFO : NSObject {

	UIPointFIFO* _nextFIFO;

}

@property (nonatomic,retain) UIPointFIFO * nextFIFO;              //@synthesize nextFIFO=_nextFIFO - In the implementation block
-(void)dealloc;
-(void)clear;
-(void)flush;
-(void)addPoint:;
-(UIPointFIFO *)nextFIFO;
-(void)emitPoint:;
-(id)initWithFIFO:(id)arg1 ;
-(void)setNextFIFO:(UIPointFIFO *)arg1 ;
@end

