/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMSymptom, HMSymptomFixSession, HMAccessory;

@interface HFSymptomFixManagerItem : NSObject {

	HMSymptom* _symptom;
	HMSymptomFixSession* _fixSession;
	HMAccessory* _accessory;

}

@property (nonatomic,readonly) HMSymptom * symptom;                           //@synthesize symptom=_symptom - In the implementation block
@property (nonatomic,readonly) HMSymptomFixSession * fixSession;              //@synthesize fixSession=_fixSession - In the implementation block
@property (nonatomic,readonly) HMAccessory * accessory;                       //@synthesize accessory=_accessory - In the implementation block
-(id)description;
-(HMSymptom *)symptom;
-(HMAccessory *)accessory;
-(HMSymptomFixSession *)fixSession;
-(id)initWithSymptom:(id)arg1 fixSession:(id)arg2 accessory:(id)arg3 ;
@end

