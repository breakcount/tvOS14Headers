/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TISKEventProtocol.h>

@class TISKTap;

@interface TISKEvent : NSObject <TISKEventProtocol> {

	BOOL _hasTimestamp;
	int _type;
	TISKTap* _tap;
	unsigned long long _order;

}

@property (assign,nonatomic) int type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) TISKTap * tap;                         //@synthesize tap=_tap - In the implementation block
@property (assign,nonatomic) unsigned long long order;              //@synthesize order=_order - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp;                     //@synthesize hasTimestamp=_hasTimestamp - In the implementation block
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(unsigned long long)order;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setOrder:(unsigned long long)arg1 ;
-(void)setTap:(TISKTap *)arg1 ;
-(TISKTap *)tap;
-(id)upTouchEvent;
-(id)downTouchEvent;
-(double)touchDownTimestamp;
-(double)touchUpTimestamp;
-(void)reportToSession:(id)arg1 ;
-(void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2 ;
-(id)init:(int)arg1 order:(long long)arg2 ;
-(id)init:(int)arg1 order:(long long)arg2 tap:(id)arg3 ;
-(BOOL)isMissingATouch;
-(BOOL)isValidCandidate:(id)arg1 ;
@end

