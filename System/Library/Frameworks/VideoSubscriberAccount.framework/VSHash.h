/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
@class NSData;

@interface VSHash : NSObject {

	BOOL _finalized;
	NSData* _finalData;
	CC_SHA256state_st _ctx;

}

@property (assign,getter=isFinalized,nonatomic) BOOL finalized;              //@synthesize finalized=_finalized - In the implementation block
@property (assign,nonatomic) CC_SHA256state_st ctx;                          //@synthesize ctx=_ctx - In the implementation block
@property (nonatomic,copy) NSData * finalData;                               //@synthesize finalData=_finalData - In the implementation block
-(id)init;
-(void)dealloc;
-(CC_SHA256state_st)ctx;
-(void)setCtx:(CC_SHA256state_st)arg1 ;
-(void)updateWithData:(id)arg1 ;
-(NSData *)finalData;
-(void)setFinalData:(NSData *)arg1 ;
-(void)updateWithInteger:(long long)arg1 ;
-(void)updateWithString:(id)arg1 ;
-(void)updateWithDate:(id)arg1 ;
-(BOOL)isFinalized;
-(void)setFinalized:(BOOL)arg1 ;
-(void)updateWithUUID:(id)arg1 ;
@end
