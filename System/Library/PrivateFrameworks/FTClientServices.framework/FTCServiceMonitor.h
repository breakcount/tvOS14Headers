/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/FTClientServices.framework/FTClientServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FTCServiceMonitor : NSObject {

	long long _availability;
	long long _type;
	int _token;

}

@property (nonatomic,readonly) long long serviceType; 
-(void)dealloc;
-(long long)serviceType;
-(long long)serviceAvailability;
-(void)updateAvailability;
-(void)_updateAvailability;
-(void)_postAvailability:(long long)arg1 ;
-(id)initWithServiceType:(long long)arg1 ;
@end

