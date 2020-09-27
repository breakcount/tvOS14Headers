/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WFBlacklistTriggerNode : NSObject {

	unsigned long long _triggerReason;
	long long _triggerReasonData;
	NSString* _triggerReasonString;
	double _triggerReasonTimestamp;
	NSString* _bssid;

}

@property (assign) unsigned long long triggerReason;              //@synthesize triggerReason=_triggerReason - In the implementation block
@property (assign) long long triggerReasonData;                   //@synthesize triggerReasonData=_triggerReasonData - In the implementation block
@property (copy) NSString * triggerReasonString;                  //@synthesize triggerReasonString=_triggerReasonString - In the implementation block
@property (assign) double triggerReasonTimestamp;                 //@synthesize triggerReasonTimestamp=_triggerReasonTimestamp - In the implementation block
@property (copy) NSString * bssid;                                //@synthesize bssid=_bssid - In the implementation block
-(id)init;
-(void)setBssid:(NSString *)arg1 ;
-(NSString *)bssid;
-(unsigned long long)triggerReason;
-(double)triggerReasonTimestamp;
-(long long)triggerReasonData;
-(NSString *)triggerReasonString;
-(void)setTriggerReason:(unsigned long long)arg1 ;
-(void)setTriggerReasonData:(long long)arg1 ;
-(void)setTriggerReasonString:(NSString *)arg1 ;
-(void)setTriggerReasonTimestamp:(double)arg1 ;
@end

