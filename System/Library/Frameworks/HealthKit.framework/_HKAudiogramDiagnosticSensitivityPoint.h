/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _HKAudiogramDiagnosticSensitivityPoint : NSObject {

	double _earSensitivityDBHL;
	double _frequencyHz;

}

@property (nonatomic,readonly) double earSensitivityDBHL;              //@synthesize earSensitivityDBHL=_earSensitivityDBHL - In the implementation block
@property (nonatomic,readonly) double frequencyHz;                     //@synthesize frequencyHz=_frequencyHz - In the implementation block
-(double)frequencyHz;
-(double)earSensitivityDBHL;
-(id)initWithEarSensitivity:(id)arg1 frequency:(id)arg2 ;
@end

