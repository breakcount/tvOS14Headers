/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperationQueue.h>

@class NSOperation;

@interface AVOperationQueueWithFundamentalDependency : NSOperationQueue {

	NSOperation* _fundamentalOperation;

}
-(void)dealloc;
-(void)addOperation:(id)arg1 ;
-(void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2 ;
-(id)initWithFundamentalOperation:(id)arg1 ;
@end
