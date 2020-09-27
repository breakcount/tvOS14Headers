/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFColorProfile.h>

@class NSString;

@interface HFTemperatureColorProfile : NSObject <HFColorProfile> {

	float _minimumTemperature;
	float _maximumTemperature;

}

@property (nonatomic,readonly) float minimumTemperature;              //@synthesize minimumTemperature=_minimumTemperature - In the implementation block
@property (nonatomic,readonly) float maximumTemperature;              //@synthesize maximumTemperature=_maximumTemperature - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)adjustedColorPrimitiveForPrimitive:(id)arg1 ;
-(float)adjustedTemperatureForTemperature:(float)arg1 ;
-(id)initWithMinimumTemperature:(float)arg1 maximumTemperature:(float)arg2 ;
-(float)minimumTemperature;
-(float)maximumTemperature;
@end

