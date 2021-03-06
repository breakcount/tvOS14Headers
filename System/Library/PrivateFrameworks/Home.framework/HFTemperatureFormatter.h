/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Foundation/NSMeasurementFormatter.h>
#import <libobjc.A.dylib/HFTemperatureUnitObserver.h>

@class NSNumber, NSString;

@interface HFTemperatureFormatter : NSMeasurementFormatter <HFTemperatureUnitObserver> {

	BOOL _inputIsCelsius;
	BOOL _outputIsCelsius;
	NSNumber* _stepValue;
	NSString* _fallbackTemperatureString;

}

@property (assign,nonatomic) BOOL inputIsCelsius;                             //@synthesize inputIsCelsius=_inputIsCelsius - In the implementation block
@property (assign,nonatomic) BOOL outputIsCelsius;                            //@synthesize outputIsCelsius=_outputIsCelsius - In the implementation block
@property (nonatomic,retain) NSNumber * stepValue;                            //@synthesize stepValue=_stepValue - In the implementation block
@property (nonatomic,copy) NSString * fallbackTemperatureString;              //@synthesize fallbackTemperatureString=_fallbackTemperatureString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)stringForObjectValue:(id)arg1 ;
-(unsigned long long)minimumFractionDigits;
-(void)setMinimumFractionDigits:(unsigned long long)arg1 ;
-(unsigned long long)maximumFractionDigits;
-(void)setMaximumFractionDigits:(unsigned long long)arg1 ;
-(void)setFallbackTemperatureString:(NSString *)arg1 ;
-(NSString *)fallbackTemperatureString;
-(NSNumber *)stepValue;
-(void)setStepValue:(NSNumber *)arg1 ;
-(void)setInputIsCelsius:(BOOL)arg1 ;
-(void)setOutputIsCelsius:(BOOL)arg1 ;
-(BOOL)inputIsCelsius;
-(BOOL)outputIsCelsius;
-(void)temperatureUnitObserver:(id)arg1 didChangeTemperatureUnit:(BOOL)arg2 ;
@end

