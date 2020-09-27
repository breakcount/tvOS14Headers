/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/BSCompoundAssertionState.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSMutableOrderedSet, NSString, NSSet, NSOrderedSet;

@interface BSCompoundAssertion : NSObject <BSCompoundAssertionState, BSInvalidatable> {

	os_unfair_lock_s _syncLock;
	BOOL _syncLock_invalid;
	/*^block*/id _syncLock_block;
	os_unfair_lock_s _dataLock;
	NSMutableOrderedSet* _dataLock_acquisitions;
	NSString* _dataLock_identifierPrefix;

}

@property (readonly) NSSet * reasons; 
@property (readonly) NSOrderedSet * orderedReasons; 
@property (getter=isActive,readonly) BOOL active; 
@property (readonly) NSSet * context; 
@property (readonly) NSOrderedSet * orderedContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(id)assertionWithIdentifier:(id)arg1 ;
+(id)assertionWithIdentifier:(id)arg1 stateDidChangeHandler:(/*^block*/id)arg2 ;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(NSSet *)context;
-(BOOL)isActive;
-(NSOrderedSet *)orderedContext;
-(NSOrderedSet *)orderedReasons;
-(id)acquireForReason:(id)arg1 withContext:(id)arg2 ;
-(NSSet *)reasons;
-(id)acquireForReason:(id)arg1 ;
@end

