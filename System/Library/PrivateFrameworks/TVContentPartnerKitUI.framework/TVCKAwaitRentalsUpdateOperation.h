/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:09 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVContentPartnerKitUI/TVCKAsynchronousOperation.h>

@class NSOperation;

@interface TVCKAwaitRentalsUpdateOperation : TVCKAsynchronousOperation {

	NSOperation* _requestSuccessOperation;
	NSOperation* _requestFailureOperation;
	NSOperation* _requestTimeoutOperation;

}

@property (retain) NSOperation * requestSuccessOperation;              //@synthesize requestSuccessOperation=_requestSuccessOperation - In the implementation block
@property (retain) NSOperation * requestFailureOperation;              //@synthesize requestFailureOperation=_requestFailureOperation - In the implementation block
@property (retain) NSOperation * requestTimeoutOperation;              //@synthesize requestTimeoutOperation=_requestTimeoutOperation - In the implementation block
-(void)cancel;
-(void)executionDidBegin;
-(NSOperation *)requestSuccessOperation;
-(NSOperation *)requestFailureOperation;
-(NSOperation *)requestTimeoutOperation;
-(void)setRequestFailureOperation:(NSOperation *)arg1 ;
-(void)setRequestSuccessOperation:(NSOperation *)arg1 ;
-(void)setRequestTimeoutOperation:(NSOperation *)arg1 ;
-(void)_cleanupOperationsAndFinishExecutionIfPossible;
@end

