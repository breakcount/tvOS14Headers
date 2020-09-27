/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVXPerforming.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface SVXQueuePerformer : NSObject <SVXPerforming> {

	NSString* _identifier;
	unsigned long long _options;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedMainQueuePerformer;
-(NSString *)description;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 afterDelay:(double)arg2 ;
-(void)performBlock:(/*^block*/id)arg1 withOptions:(unsigned long long)arg2 ;
-(id)_initWithIdentifier:(id)arg1 queue:(id)arg2 options:(unsigned long long)arg3 ;
-(void)_performBlock:(/*^block*/id)arg1 withOptions:(unsigned long long)arg2 ;
-(BOOL)_isExecutingInContext;
-(id)initWithIdentifier:(id)arg1 qosClass:(unsigned)arg2 relativePriority:(int)arg3 options:(unsigned long long)arg4 ;
@end

