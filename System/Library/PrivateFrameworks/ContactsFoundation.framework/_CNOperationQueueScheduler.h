/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNScheduler.h>

@class NSOperationQueue, NSString;

@interface _CNOperationQueueScheduler : NSObject <CNScheduler> {

	NSOperationQueue* _queue;
	BOOL _isQualityOfServiceSpecified;

}

@property (readonly) double timestamp; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)operationWithQualityOfService:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(NSString *)description;
-(id)init;
-(void)performBlock:(/*^block*/id)arg1 ;
-(double)timestamp;
-(void)performBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 qualityOfService:(unsigned long long)arg3 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(id)initWithMaxConcurrentOperationCount:(long long)arg1 ;
-(id)initWithMaxConcurrentOperationCount:(long long)arg1 qualityOfService:(unsigned long long)arg2 ;
-(/*^block*/id)blockWithCurrentQualityOfServiceForBlock:(/*^block*/id)arg1 ifAllowedForRequestedQualityOfService:(unsigned long long)arg2 ;
-(void)_enqueueBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)initWithQualityOfService:(unsigned long long)arg1 ;
@end

