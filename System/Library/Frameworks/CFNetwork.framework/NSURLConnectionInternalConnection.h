/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLConnectionInternal.h>
#import <libobjc.A.dylib/NSURLConnectionRequired.h>

@class NSURLAuthenticationChallenge, NSString;

@interface NSURLConnectionInternalConnection : NSURLConnectionInternal <NSURLConnectionRequired> {

	int _cfConnLock;
	CFURLConnectionRef _cfConn;
	CFURLAuthChallengeRef _currCFChallenge;
	NSURLAuthenticationChallenge* _currNSChallenge;
	CFStringRef _fileName;
	BOOL _shouldSkipCancelOnRelease;
	long long _totalBytes;
	long long _expectedTotalBytes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)cancel;
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2 ;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg1 ;
-(void)start;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1 ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1 ;
-(void)cancelAuthenticationChallenge:(id)arg1 ;
-(void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)_suspendLoading;
-(void)_resumeLoading;
-(void)_setDelegateQueue:(id)arg1 ;
-(id)initWithInfo:(const InternalInit*)arg1 ;
-(id)_timingData;
-(void)_setShouldSkipCancelOnRelease:(BOOL)arg1 ;
-(void)invokeForDelegate:(/*^block*/id)arg1 ;
-(void)_invalidate;
@end

