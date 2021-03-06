/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:01 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IOGPU/IOGPU-Structs.h>
@class IOGPUMetalResource;

@interface IOGPUMemoryInfo : NSObject {

	void* memlist_key;
	IOGPUMetalResource* fResourceListHead;
	os_unfair_lock_s _memoryInfoLock;

}
+(id)initialize;
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(void)shutdown;
-(void)addResourceToList:(id)arg1 ;
-(void)removeResourceFromList:(id)arg1 ;
-(CFArrayRef)annotationList;
-(void*)addDataSource:(/*^block*/id)arg1 ;
-(void)removeDataSource:(void*)arg1 ;
@end

