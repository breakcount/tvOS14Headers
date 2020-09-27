/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BackBoardServices/BackBoardServices-Structs.h>
@class BSCompoundAssertion, BKSHIDUISensorMode, BKSHIDUISensorCharacteristics;

@interface BKSHIDUISensorService : NSObject {

	BSCompoundAssertion* _modeAssertion;
	BKSHIDUISensorMode* _prevailingMode;
	os_unfair_lock_s _lock;

}

@property (nonatomic,readonly) BKSHIDUISensorCharacteristics * sensorCharacteristics; 
+(id)sharedInstance;
-(id)init;
-(id)requestUISensorMode:(id)arg1 ;
-(BKSHIDUISensorCharacteristics *)sensorCharacteristics;
-(void)_lock_setupAssertion;
@end

