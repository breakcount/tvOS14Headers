/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NAQueueingStrategy.h>

@class NSString;

@interface _NABoundedQueueingStrategy : NSObject <NAQueueingStrategy> {

	unsigned long long _capacity;
	/*^block*/id _overflowHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 overflowHandler:(/*^block*/id)arg2 ;
-(void)enqueueObject:(id)arg1 buffer:(id)arg2 ;
@end

