/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSArray;

@interface AMSCircularBuffer : NSObject {

	unsigned long long _maxSize;
	NSObject*<OS_dispatch_queue> _accessQueue;
	unsigned long long _currentIndex;
	NSMutableArray* _buffer;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (assign,nonatomic) unsigned long long currentIndex;                       //@synthesize currentIndex=_currentIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * buffer;                               //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allObjects; 
@property (nonatomic,readonly) unsigned long long count; 
@property (assign,nonatomic) unsigned long long maxSize; 
+(id)_rearrangeObjects:(id)arg1 forCurrentIndex:(unsigned long long)arg2 ;
-(id)description;
-(id)init;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(NSArray *)allObjects;
-(NSMutableArray *)buffer;
-(id)flush;
-(void)setBuffer:(NSMutableArray *)arg1 ;
-(id)_flush;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(id)initWithMaxSize:(unsigned long long)arg1 ;
-(unsigned long long)maxSize;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCurrentIndex:(unsigned long long)arg1 ;
-(unsigned long long)currentIndex;
-(void)setMaxSize:(unsigned long long)arg1 ;
@end

