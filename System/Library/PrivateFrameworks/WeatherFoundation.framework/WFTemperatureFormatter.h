/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSLocale, NSString;

@interface WFTemperatureFormatter : NSFormatter {

	BOOL _includeDegreeSymbol;
	int _inputUnit;
	int _outputUnit;
	int _symbolType;
	UAMeasureFormatRef _measureFormatter;
	NSLocale* _locale;
	NSString* _fallbackTemperatureString;
	unsigned long long _roundingMode;
	unsigned long long _maximumFractionDigits;

}

@property (assign,nonatomic) UAMeasureFormatRef measureFormatter;                   //@synthesize measureFormatter=_measureFormatter - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                     //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy) NSString * fallbackTemperatureString;                    //@synthesize fallbackTemperatureString=_fallbackTemperatureString - In the implementation block
@property (assign,nonatomic) int inputUnit;                                         //@synthesize inputUnit=_inputUnit - In the implementation block
@property (assign,nonatomic) int outputUnit;                                        //@synthesize outputUnit=_outputUnit - In the implementation block
@property (assign,nonatomic) unsigned long long roundingMode;                       //@synthesize roundingMode=_roundingMode - In the implementation block
@property (assign,nonatomic) unsigned long long maximumFractionDigits;              //@synthesize maximumFractionDigits=_maximumFractionDigits - In the implementation block
@property (assign,nonatomic) int symbolType;                                        //@synthesize symbolType=_symbolType - In the implementation block
@property (assign,nonatomic) BOOL includeDegreeSymbol;                              //@synthesize includeDegreeSymbol=_includeDegreeSymbol - In the implementation block
+(id)temperatureFormatterWithInputUnit:(int)arg1 outputUnit:(int)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(unsigned long long)roundingMode;
-(void)setRoundingMode:(unsigned long long)arg1 ;
-(unsigned long long)maximumFractionDigits;
-(void)setMaximumFractionDigits:(unsigned long long)arg1 ;
-(void)_localeDidChangeNotification:(id)arg1 ;
-(void)setInputUnit:(int)arg1 ;
-(void)setOutputUnit:(int)arg1 ;
-(void)setFallbackTemperatureString:(NSString *)arg1 ;
-(void)setSymbolType:(int)arg1 ;
-(int)inputUnit;
-(int)outputUnit;
-(NSString *)fallbackTemperatureString;
-(int)symbolType;
-(void)setMeasureFormatter:(UAMeasureFormatRef)arg1 ;
-(id)formattedTemperatureFromString:(id)arg1 ;
-(id)formattedStringFromTemperature:(id)arg1 ;
-(id)_formatTemperatureValue:(id)arg1 toUnit:(int)arg2 ;
-(UAMeasureFormatRef)measureFormatter;
-(BOOL)includeDegreeSymbol;
-(void)setIncludeDegreeSymbol:(BOOL)arg1 ;
@end

