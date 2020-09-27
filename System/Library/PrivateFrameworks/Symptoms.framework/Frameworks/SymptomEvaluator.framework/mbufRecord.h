/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface mbufRecord : NSObject {

	NSDate* _reportTime;
	unsigned long long _mbuf256BTotal;
	unsigned long long _mbuf2KBTotal;
	unsigned long long _mbuf4KBTotal;
	unsigned long long _mbuf16KBTotal;
	unsigned long long _sockMBcnt;
	unsigned long long _sockAtMBLimit;
	unsigned long long _mbufMemReleased;
	unsigned long long _mbufDrainCount;
	unsigned long long _sockSbMBFloor;

}

@property (nonatomic,readonly) NSDate * reportTime;                             //@synthesize reportTime=_reportTime - In the implementation block
@property (nonatomic,readonly) unsigned long long mbuf256BTotal;                //@synthesize mbuf256BTotal=_mbuf256BTotal - In the implementation block
@property (nonatomic,readonly) unsigned long long mbuf2KBTotal;                 //@synthesize mbuf2KBTotal=_mbuf2KBTotal - In the implementation block
@property (nonatomic,readonly) unsigned long long mbuf4KBTotal;                 //@synthesize mbuf4KBTotal=_mbuf4KBTotal - In the implementation block
@property (nonatomic,readonly) unsigned long long mbuf16KBTotal;                //@synthesize mbuf16KBTotal=_mbuf16KBTotal - In the implementation block
@property (nonatomic,readonly) unsigned long long sockMBcnt;                    //@synthesize sockMBcnt=_sockMBcnt - In the implementation block
@property (nonatomic,readonly) unsigned long long sockAtMBLimit;                //@synthesize sockAtMBLimit=_sockAtMBLimit - In the implementation block
@property (nonatomic,readonly) unsigned long long mbufMemReleased;              //@synthesize mbufMemReleased=_mbufMemReleased - In the implementation block
@property (nonatomic,readonly) unsigned long long mbufDrainCount;               //@synthesize mbufDrainCount=_mbufDrainCount - In the implementation block
@property (nonatomic,readonly) unsigned long long sockSbMBFloor;                //@synthesize sockSbMBFloor=_sockSbMBFloor - In the implementation block
-(id)description;
-(unsigned long long)mbuf256BTotal;
-(unsigned long long)mbuf2KBTotal;
-(unsigned long long)mbuf4KBTotal;
-(unsigned long long)mbuf16KBTotal;
-(unsigned long long)sockMBcnt;
-(unsigned long long)sockAtMBLimit;
-(unsigned long long)mbufMemReleased;
-(unsigned long long)mbufDrainCount;
-(NSDate *)reportTime;
-(unsigned long long)sockSbMBFloor;
-(id)initWithReport:(id)arg1 ;
-(BOOL)isHighWaterMarkGiven:(id)arg1 ;
@end
