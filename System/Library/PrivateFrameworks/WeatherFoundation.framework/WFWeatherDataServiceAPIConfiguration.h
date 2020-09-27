/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/WFAPIConfigurationProtocol.h>

@protocol WFForecastDataParser;
@class NSString;

@interface WFWeatherDataServiceAPIConfiguration : NSObject <WFAPIConfigurationProtocol> {

	Class _forecastRequestFormatterClass;
	id<WFForecastDataParser> _forecastParser;
	NSString* _environment;

}

@property (nonatomic,retain) Class forecastRequestFormatterClass;                  //@synthesize forecastRequestFormatterClass=_forecastRequestFormatterClass - In the implementation block
@property (nonatomic,retain) id<WFForecastDataParser> forecastParser;              //@synthesize forecastParser=_forecastParser - In the implementation block
@property (nonatomic,readonly) NSString * environment;                             //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) BOOL isValid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(NSString *)environment;
-(id)hostUrl;
-(id)forecastRequestForTypes:(unsigned long long)arg1 location:(id)arg2 units:(int)arg3 date:(id)arg4 error:(id*)arg5 rules:(id)arg6 ;
-(id)parseForecast:(unsigned long long)arg1 data:(id)arg2 location:(id)arg3 units:(int)arg4 locale:(id)arg5 date:(id)arg6 error:(id*)arg7 rules:(id)arg8 ;
-(id)initWithVersion:(id)arg1 environment:(id)arg2 ;
-(void)setForecastRequestFormatterClass:(Class)arg1 ;
-(void)setForecastParser:(id<WFForecastDataParser>)arg1 ;
-(Class)forecastRequestFormatterClass;
-(id<WFForecastDataParser>)forecastParser;
@end
