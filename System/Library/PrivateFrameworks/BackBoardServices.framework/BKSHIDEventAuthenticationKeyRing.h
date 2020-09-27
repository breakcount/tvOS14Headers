/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BackBoardServices/BackBoardServices-Structs.h>
@class BKSHIDEventAuthenticationKeyRetentionPolicy, BKSHIDEventAuthenticationKey, NSArray;

@interface BKSHIDEventAuthenticationKeyRing : NSObject {

	os_unfair_lock_s _lock;
	BKSHIDEventAuthenticationKeyRetentionPolicy* _retentionPolicy;
	BKSHIDEventAuthenticationKey* _authenticationKey;
	double _authenticationKeyTimeout;
	BKSHIDEventAuthenticationKey* _previousAuthenticationKey;
	double _previousAuthenticationKeyTimeout;

}

@property (nonatomic,readonly) BKSHIDEventAuthenticationKey * authenticationKey; 
@property (nonatomic,readonly) NSArray * allAuthenticationKeys; 
+(id)new;
+(id)keyRingWithRetentionPolicy:(id)arg1 ;
-(id)init;
-(BKSHIDEventAuthenticationKey *)authenticationKey;
-(NSArray *)allAuthenticationKeys;
-(void)_timePasses:(double)arg1 ;
@end

