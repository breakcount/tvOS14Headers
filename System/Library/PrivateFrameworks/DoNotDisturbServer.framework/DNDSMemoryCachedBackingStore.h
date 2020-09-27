/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/DNDSBackingStoreDelegate.h>
#import <libobjc.A.dylib/DNDSBackingStore.h>

@protocol DNDSBackingStore, DNDSBackingStoreRecord, DNDSBackingStoreDelegate;
@class NSString;

@interface DNDSMemoryCachedBackingStore : NSObject <DNDSBackingStoreDelegate, DNDSBackingStore> {

	id<DNDSBackingStore> _underlyingBackingStore;
	id<DNDSBackingStoreRecord> _cache;
	os_unfair_lock_s _lock;
	id<DNDSBackingStoreDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<DNDSBackingStoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<DNDSBackingStoreDelegate>)delegate;
-(void)setDelegate:(id<DNDSBackingStoreDelegate>)arg1 ;
-(id)backingStore:(id)arg1 migrateDictionaryRepresentation:(id)arg2 fromVersionNumber:(unsigned long long)arg3 toVersionNumber:(unsigned long long)arg4 ;
-(id)readRecordWithError:(id*)arg1 ;
-(unsigned long long)writeRecord:(id)arg1 error:(id*)arg2 ;
-(id)initWithUnderlyingBackingStore:(id)arg1 ;
@end

