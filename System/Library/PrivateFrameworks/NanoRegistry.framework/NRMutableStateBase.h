/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <libobjc.A.dylib/NRMutableStateProtocol.h>

@protocol NRMutableStateParentDelegate;
@class NSMutableSet, NSString;

@interface NRMutableStateBase : NSObject <NRMutableStateProtocol> {

	NSMutableSet* _observers;
	os_unfair_lock_s _lock;
	id<NRMutableStateParentDelegate> _parentDelegate;

}

@property (assign,nonatomic,__weak) id<NRMutableStateParentDelegate> parentDelegate;              //@synthesize parentDelegate=_parentDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)enclosedClassTypes;
+(id)diffFrom:(id)arg1 to:(id)arg2 ;
+(id)classTypes;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)applyDiff:(id)arg1 ;
-(void)setParentDelegate:(id<NRMutableStateParentDelegate>)arg1 ;
-(id)addObserverQueue:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)applyDiff:(id)arg1 upOnly:(BOOL)arg2 notifyParent:(BOOL)arg3 unconditional:(BOOL)arg4 ;
-(id<NRMutableStateParentDelegate>)parentDelegate;
-(void)notifyParentWithDiff:(id)arg1 ;
-(void)notifyObserversWithDiff:(id)arg1 ;
@end

