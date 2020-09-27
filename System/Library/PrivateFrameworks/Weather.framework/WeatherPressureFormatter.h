/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@class NSLocale;

@interface WeatherPressureFormatter : NSFormatter {

	NSLocale* _locale;

}

@property (nonatomic,retain) NSLocale * locale;              //@synthesize locale=_locale - In the implementation block
+(id)convenienceFormatter;
-(id)init;
-(void)dealloc;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(void)resetFormatter;
-(id)stringFromMillibars:(float)arg1 ;
-(void*)createNumberFormatter;
-(id)stringFromInchesHG:(float)arg1 ;
-(int)pressureUnit;
-(float)convertMBarPressure:(float)arg1 toUnit:(int)arg2 ;
-(id)formatStringForPressure:(float)arg1 inUnit:(int)arg2 ;
-(id)fallbackStringForPressure:(float)arg1 ;
-(float)convertInchesHGPressure:(float)arg1 toUnit:(int)arg2 ;
-(id)stringFromPressure:(float)arg1 isDataMetric:(BOOL)arg2 ;
@end

