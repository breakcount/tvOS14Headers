/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:24:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSDate, SFNetworkAttachment;

@interface SFLiveRoutePerf : NSManagedObject

@property (nonatomic,copy) NSNumber * adminDisables; 
@property (nonatomic,copy) NSNumber * bytesIn; 
@property (nonatomic,copy) NSNumber * bytesOut; 
@property (nonatomic,copy) NSNumber * captivityRedirects; 
@property (nonatomic,copy) NSNumber * certErrors; 
@property (nonatomic,copy) NSNumber * connAttempts; 
@property (nonatomic,copy) NSNumber * connSuccesses; 
@property (nonatomic,copy) NSNumber * dataStalls; 
@property (nonatomic,copy) NSNumber * epochs; 
@property (nonatomic,copy) NSNumber * faultyStay; 
@property (nonatomic,copy) NSNumber * kind; 
@property (nonatomic,copy) NSNumber * lowLqmStay; 
@property (nonatomic,copy) NSNumber * lowqStay; 
@property (nonatomic,copy) NSNumber * lqmTransitionCount; 
@property (nonatomic,copy) NSNumber * overallStay; 
@property (nonatomic,copy) NSNumber * overallStayM2; 
@property (nonatomic,copy) NSNumber * packetsIn; 
@property (nonatomic,copy) NSNumber * packetsOut; 
@property (nonatomic,copy) NSNumber * reTxBytes; 
@property (nonatomic,copy) NSNumber * rttAvg; 
@property (nonatomic,copy) NSNumber * rttMin; 
@property (nonatomic,copy) NSNumber * rttVar; 
@property (nonatomic,copy) NSNumber * rxDupeBytes; 
@property (nonatomic,copy) NSNumber * rxOOOBytes; 
@property (nonatomic,copy) NSDate * timeStamp; 
@property (nonatomic,copy) NSNumber * topDownloadRate; 
@property (nonatomic,retain) SFNetworkAttachment * hasNetworkAttachment; 
+(id)entityName;
+(id)fetchRequest;
@end

