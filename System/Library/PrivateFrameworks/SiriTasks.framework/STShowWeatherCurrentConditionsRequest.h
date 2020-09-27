/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class STWeatherCurrentConditions, STCity, STWeatherUnits;

@interface STShowWeatherCurrentConditionsRequest : AFSiriRequest {

	STWeatherCurrentConditions* _currentConditions;
	STCity* _city;
	STWeatherUnits* _units;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)units;
-(id)city;
-(id)createResponse;
-(id)currentConditions;
-(id)_initWithCurrentConditions:(id)arg1 city:(id)arg2 units:(id)arg3 ;
@end

