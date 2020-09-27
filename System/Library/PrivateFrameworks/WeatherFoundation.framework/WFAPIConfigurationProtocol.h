/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFAPIConfigurationProtocol <NSObject,NSCopying>
@property (nonatomic,readonly) BOOL isValid; 
@required
-(BOOL)isValid;
-(id)hostUrl;
-(id)forecastRequestForTypes:(unsigned long long)arg1 location:(id)arg2 units:(int)arg3 date:(id)arg4 error:(id*)arg5 rules:(id)arg6;
-(id)parseForecast:(unsigned long long)arg1 data:(id)arg2 location:(id)arg3 units:(int)arg4 locale:(id)arg5 date:(id)arg6 error:(id*)arg7 rules:(id)arg8;

@end
