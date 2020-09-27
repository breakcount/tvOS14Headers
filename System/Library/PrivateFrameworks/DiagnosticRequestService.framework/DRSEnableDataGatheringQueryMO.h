/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSData, NSDate, NSUUID;

@interface DRSEnableDataGatheringQueryMO : NSManagedObject

@property (assign,nonatomic) short attemptCount; 
@property (nonatomic,copy) NSString * build; 
@property (nonatomic,retain) NSData * contextDictionaryData; 
@property (nonatomic,copy) NSString * issueCategory; 
@property (nonatomic,copy) NSString * logType; 
@property (nonatomic,copy) NSDate * queryDate; 
@property (nonatomic,copy) NSUUID * queryID; 
@property (nonatomic,copy) NSString * rejectionReason; 
@property (assign,nonatomic) short response; 
@property (nonatomic,copy) NSString * teamID; 
+(id)fetchRequest;
@end
