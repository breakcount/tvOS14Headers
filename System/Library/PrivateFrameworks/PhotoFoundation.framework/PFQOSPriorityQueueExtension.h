/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:36 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PFPriorityQueueExtension.h>
#import <libobjc.A.dylib/PFQOSPriorityEnqueuing.h>

@interface PFQOSPriorityQueueExtension : PFPriorityQueueExtension <PFQOSPriorityEnqueuing>
-(void)enqueueWithCurrentQOSPriority:(/*^block*/id)arg1 ;
-(void)enqueueWithQOSPriority:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithConcurrentScheduling:(BOOL)arg1 ;
@end

