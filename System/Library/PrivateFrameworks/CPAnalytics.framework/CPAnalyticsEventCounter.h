/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:41:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, CPAnalyticsEventMatcher;

@interface CPAnalyticsEventCounter : NSObject {

	NSString* _name;
	unsigned long long _count;
	CPAnalyticsEventMatcher* _matcher;
	NSString* _countKey;

}

@property (nonatomic,readonly) CPAnalyticsEventMatcher * matcher;              //@synthesize matcher=_matcher - In the implementation block
@property (nonatomic,readonly) NSString * countKey;                            //@synthesize countKey=_countKey - In the implementation block
@property (assign,nonatomic) unsigned long long count;                         //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
+(id)_validateAndParseEventName:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)count;
-(void)setCount:(unsigned long long)arg1 ;
-(id)initWithConfig:(id)arg1 ;
-(id)initWithEventName:(id)arg1 ;
-(void)resetCount;
-(id)initWithName:(id)arg1 matcher:(id)arg2 ;
-(void)countEvent:(id)arg1 ;
-(CPAnalyticsEventMatcher *)matcher;
-(NSString *)countKey;
@end

