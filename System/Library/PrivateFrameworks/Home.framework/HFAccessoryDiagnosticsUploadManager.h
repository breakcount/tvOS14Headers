/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSURLSession, NSString;

@interface HFAccessoryDiagnosticsUploadManager : NSObject <NSURLSessionDelegate> {

	/*^block*/id _backgroundUrlSessionCompletionHandler;
	NSMutableDictionary* _diagnosticItems;
	NSMutableOrderedSet* _pendingIdentifiers;
	NSMutableSet* _failedUploadIdentifiers;
	NSMutableSet* _uploadedIdentifiers;
	NSURLSession* _backgroundSession;

}

@property (nonatomic,retain) NSMutableDictionary * diagnosticItems;                 //@synthesize diagnosticItems=_diagnosticItems - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * pendingIdentifiers;              //@synthesize pendingIdentifiers=_pendingIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableSet * failedUploadIdentifiers;                //@synthesize failedUploadIdentifiers=_failedUploadIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableSet * uploadedIdentifiers;                    //@synthesize uploadedIdentifiers=_uploadedIdentifiers - In the implementation block
@property (nonatomic,retain) NSURLSession * backgroundSession;                      //@synthesize backgroundSession=_backgroundSession - In the implementation block
@property (nonatomic,copy) id backgroundUrlSessionCompletionHandler;                //@synthesize backgroundUrlSessionCompletionHandler=_backgroundUrlSessionCompletionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(id)backgroundURLSessionIdentifier;
-(id)init;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)setBackgroundSession:(NSURLSession *)arg1 ;
-(void)willResignActive:(id)arg1 ;
-(void)resumeServiceForURLSessionIdentifier:(id)arg1 ;
-(NSURLSession *)backgroundSession;
-(BOOL)_didPreviouslySubmitLog:(id)arg1 ;
-(NSMutableDictionary *)diagnosticItems;
-(void)_addToPendingUploads:(id)arg1 ;
-(NSMutableOrderedSet *)pendingIdentifiers;
-(void)_submitNextPendingLog;
-(id)filePathForIdentifier:(id)arg1 ;
-(id)_nextFilenameIdentifierToProcess;
-(NSMutableSet *)failedUploadIdentifiers;
-(NSMutableSet *)uploadedIdentifiers;
-(void)_updatePreviousLogIdentifiers:(id)arg1 forKey:(id)arg2 ;
-(void)_finalizeHandlingOfIdentifier:(id)arg1 ;
-(id)backgroundUrlSessionCompletionHandler;
-(void)_failAttemptToUploadCurrentIdentifier;
-(void)purgeStaleSubmittedLogs;
-(BOOL)_needsToPurgeOldLogs;
-(void)updateLastPurgeDate;
-(id)fileURLForIdentifier:(id)arg1 ;
-(void)_cleanUpLocalFilesForIdentifier:(id)arg1 ;
-(void)uploadDiagnosticLogUsingItem:(id)arg1 ;
-(BOOL)_isValidFilenameIdentifier:(id)arg1 ;
-(void)setBackgroundUrlSessionCompletionHandler:(id)arg1 ;
-(void)setDiagnosticItems:(NSMutableDictionary *)arg1 ;
-(void)setPendingIdentifiers:(NSMutableOrderedSet *)arg1 ;
-(void)setFailedUploadIdentifiers:(NSMutableSet *)arg1 ;
-(void)setUploadedIdentifiers:(NSMutableSet *)arg1 ;
@end

