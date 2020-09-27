/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFFeedback.h>

@class NSString;

@interface SFClientTimingFeedback : SFFeedback {

	NSString* _input;
	NSString* _eventName;
	unsigned long long _nanosecondInterval;

}

@property (nonatomic,copy) NSString * input;                           //@synthesize input=_input - In the implementation block
@property (nonatomic,copy) NSString * eventName;                       //@synthesize eventName=_eventName - In the implementation block
@property (assign) unsigned long long nanosecondInterval;              //@synthesize nanosecondInterval=_nanosecondInterval - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)input;
-(void)setInput:(NSString *)arg1 ;
-(NSString *)eventName;
-(void)setEventName:(NSString *)arg1 ;
-(id)initWithEvent:(id)arg1 timeInterval:(unsigned long long)arg2 queryId:(unsigned long long)arg3 ;
-(unsigned long long)nanosecondInterval;
-(void)setNanosecondInterval:(unsigned long long)arg1 ;
@end

