/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFUnfairLock.h>

@interface __HMFOSUnfairRecursiveLock : HMFUnfairLock {

	os_unfair_recursive_lock_s _internal;
	unsigned _internalOptions;

}
-(void)lock;
-(void)unlock;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)assertOwner;
-(void)assertNotOwner;
@end
