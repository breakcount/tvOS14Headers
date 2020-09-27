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
@class NSMutableDictionary, NSString;

@interface WFWeatherChannelAPIConfiguration : NSObject <WFAPIConfigurationProtocol> {

	NSMutableDictionary* _requestFormatterForForecastType;
	NSMutableDictionary* _requestParserForForecastType;
	Class _defaultForecastRequestFormatterClass;
	id<WFForecastDataParser> _defaultForecastParser;

}

@property (nonatomic,retain) NSMutableDictionary * requestFormatterForForecastType;              //@synthesize requestFormatterForForecastType=_requestFormatterForForecastType - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * requestParserForForecastType;                 //@synthesize requestParserForForecastType=_requestParserForForecastType - In the implementation block
@property (nonatomic,retain) Class defaultForecastRequestFormatterClass;                         //@synthesize defaultForecastRequestFormatterClass=_defaultForecastRequestFormatterClass - In the implementation block
@property (nonatomic,retain) id<WFForecastDataParser> defaultForecastParser;                     //@synthesize defaultForecastParser=_defaultForecastParser - In the implementation block
@property (nonatomic,readonly) BOOL isValid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(id)initWithVersion:(id)arg1 ;
-(id)hostUrl;
-(id)forecastRequestForTypes:(unsigned long long)arg1 location:(id)arg2 units:(int)arg3 date:(id)arg4 error:(id*)arg5 rules:(id)arg6 ;
-(id)parseForecast:(unsigned long long)arg1 data:(id)arg2 location:(id)arg3 units:(int)arg4 locale:(id)arg5 date:(id)arg6 error:(id*)arg7 rules:(id)arg8 ;
-(void)setDefaultForecastFormatter:(Class)arg1 ;
-(void)setDefaultForecastParser:(id<WFForecastDataParser>)arg1 ;
-(void)setRequestFormatterForForecastType:(NSMutableDictionary *)arg1 ;
-(void)setRequestParserForForecastType:(NSMutableDictionary *)arg1 ;
-(void)setRequestFormatter:(Class)arg1 forForecastType:(unsigned long long)arg2 ;
-(void)setRequestParser:(id)arg1 forForecastType:(unsigned long long)arg2 ;
-(NSMutableDictionary *)requestFormatterForForecastType;
-(Class)defaultForecastRequestFormatterClass;
-(NSMutableDictionary *)requestParserForForecastType;
-(id<WFForecastDataParser>)defaultForecastParser;
-(void)setDefaultForecastRequestFormatterClass:(Class)arg1 ;
@end
