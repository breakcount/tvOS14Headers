/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:21 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate, NSDictionary;


@protocol MTID <NSObject>
@property (nonatomic,copy,readonly) NSString * idNamespace; 
@property (nonatomic,readonly) long long idType; 
@property (nonatomic,copy,readonly) NSString * idString; 
@property (nonatomic,readonly) double lifespan; 
@property (nonatomic,copy,readonly) NSDate * effectiveDate; 
@property (nonatomic,copy,readonly) NSDate * expirationDate; 
@property (nonatomic,readonly) BOOL isSynchronized; 
@property (nonatomic,copy,readonly) NSDictionary * metricsFields; 
@required
-(NSDate *)expirationDate;
-(NSString *)idString;
-(BOOL)isSynchronized;
-(double)lifespan;
-(NSString *)idNamespace;
-(long long)idType;
-(NSDictionary *)metricsFields;
-(NSDate *)effectiveDate;

@end
