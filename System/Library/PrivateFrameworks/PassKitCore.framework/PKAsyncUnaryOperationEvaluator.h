/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PKCancelable.h>

@class NSMutableArray, PKAsyncOperationState, NSString;

@interface PKAsyncUnaryOperationEvaluator : NSObject <PKCancelable> {

	os_unfair_lock_s _lock;
	NSMutableArray* _operations;
	AB _crashed;
	id _value;
	/*^block*/id _completion;
	BOOL _started;
	BOOL _escaped;
	BOOL _canceled;
	PKAsyncOperationState* _runningOperationState;

}

@property (getter=isCanceled,nonatomic,readonly) BOOL canceled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)cancel;
-(BOOL)isCanceled;
-(BOOL)_performOperation;
-(id)_initWithOperations:(id)arg1 input:(id)arg2 ;
-(id)evaluateWithCompletion:(/*^block*/id)arg1 ;
@end

