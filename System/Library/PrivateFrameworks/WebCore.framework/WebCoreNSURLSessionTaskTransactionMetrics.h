/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@class NSDate, NSString;

@interface WebCoreNSURLSessionTaskTransactionMetrics : NSObject {

	NetworkLoadMetrics* _metrics;

}

@property (copy,readonly) NSDate * fetchStartDate; 
@property (copy,readonly) NSDate * domainLookupStartDate; 
@property (copy,readonly) NSDate * domainLookupEndDate; 
@property (copy,readonly) NSDate * connectStartDate; 
@property (copy,readonly) NSDate * secureConnectionStartDate; 
@property (copy,readonly) NSDate * connectEndDate; 
@property (copy,readonly) NSDate * requestStartDate; 
@property (copy,readonly) NSDate * responseStartDate; 
@property (copy,readonly) NSDate * responseEndDate; 
@property (copy,readonly) NSString * networkProtocolName; 
@property (getter=isReusedConnection,readonly) BOOL reusedConnection; 
@property (getter=isCellular,readonly) BOOL cellular; 
@property (getter=isExpensive,readonly) BOOL expensive; 
@property (getter=isConstrained,readonly) BOOL constrained; 
@property (getter=isMultipath,readonly) BOOL multipath; 
-(NSDate *)fetchStartDate;
-(NSDate *)domainLookupStartDate;
-(NSDate *)domainLookupEndDate;
-(NSDate *)connectStartDate;
-(NSDate *)secureConnectionStartDate;
-(NSDate *)connectEndDate;
-(NSDate *)requestStartDate;
-(NSDate *)responseStartDate;
-(NSDate *)responseEndDate;
-(NSString *)networkProtocolName;
-(BOOL)isReusedConnection;
-(BOOL)multipath;
-(id)_initWithMetrics:(const NetworkLoadMetrics*)arg1 ;
-(BOOL)cellular;
-(BOOL)expensive;
-(BOOL)constrained;
@end

