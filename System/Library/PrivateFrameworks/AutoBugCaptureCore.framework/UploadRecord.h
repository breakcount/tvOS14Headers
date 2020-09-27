/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:40:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSMutableArray, NSDate, NSString, DiagnosticCaseStorage;

@interface UploadRecord : NSManagedObject {

	NSMutableArray* fileURLs;

}

@property (assign,nonatomic) short environment; 
@property (nonatomic,copy) NSDate * finishTime; 
@property (assign,nonatomic) short numberOfFiles; 
@property (nonatomic,copy) NSString * operationID; 
@property (assign,nonatomic) float progress; 
@property (assign,nonatomic) short uploadState; 
@property (nonatomic,copy) NSDate * startTime; 
@property (assign,nonatomic) long long totalBytes; 
@property (assign,nonatomic) short preflightResult; 
@property (assign,nonatomic) short priority; 
@property (assign,nonatomic) BOOL allowsCellular; 
@property (nonatomic,retain) DiagnosticCaseStorage * caseStorage; 
@property (nonatomic,retain) NSMutableArray * fileURLs; 
+(id)fetchRequest;
-(NSMutableArray *)fileURLs;
-(void)setFileURLs:(NSMutableArray *)arg1 ;
@end

