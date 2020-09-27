/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableDictionary;

@interface WAMessage : NSObject <NSCopying, NSSecureCoding> {

	NSString* _metricName;
	NSMutableDictionary* _metricInfo;
	long long _options;

}

@property (nonatomic,copy) NSString * metricName;                         //@synthesize metricName=_metricName - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * metricInfo;              //@synthesize metricInfo=_metricInfo - In the implementation block
@property (assign,nonatomic) long long options;                           //@synthesize options=_options - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)options;
-(void)setOptions:(long long)arg1 ;
-(NSString *)metricName;
-(NSMutableDictionary *)metricInfo;
-(void)setMetricName:(NSString *)arg1 ;
-(void)setMetricInfo:(NSMutableDictionary *)arg1 ;
-(id)initWithMetricName:(id)arg1 options:(long long)arg2 ;
-(void)addFieldForKey:(id)arg1 value:(id)arg2 options:(long long)arg3 ;
@end

