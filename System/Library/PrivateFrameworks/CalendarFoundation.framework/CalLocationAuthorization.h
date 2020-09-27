/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarFoundation/CalendarFoundation-Structs.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_group;
@class NSObject, CLLocationManager, CalLocationAuthorizationStatus, NSString;

@interface CalLocationAuthorization : NSObject <CLLocationManagerDelegate> {

	id _bundleOrBundleIdentifier;
	NSObject*<OS_dispatch_group> _initializationGroup;
	CLLocationManager* _locationManager;
	CalLocationAuthorizationStatus* _status;
	os_unfair_lock_s _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logHandle;
+(int)authorizationStatusForBundleIdentifier:(id)arg1 ;
+(int)authorizationStatusForBundle:(id)arg1 ;
+(int)authorizationStatusForBundleIdentifier:(id)arg1 bundle:(id)arg2 ;
+(id)authorizationForBundleIdentifier:(id)arg1 bundle:(id)arg2 createIfNecessary:(BOOL)arg3 ;
+(unsigned long long)locationPrecisionForBundleIdentifier:(id)arg1 bundle:(id)arg2 ;
+(BOOL)preciseLocationAuthorizedForBundleIdentifier:(id)arg1 bundle:(id)arg2 ;
+(unsigned long long)locationPrecisionForBundleIdentifier:(id)arg1 ;
+(unsigned long long)locationPrecisionForBundle:(id)arg1 ;
+(BOOL)preciseLocationAuthorizedForBundleIdentifier:(id)arg1 ;
+(BOOL)preciseLocationAuthorizedForBundle:(id)arg1 ;
+(unsigned long long)ttlLocationStatus;
-(id)authorizationStatus;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(unsigned long long)waitForPrecision;
-(id)initWithBundleID:(id)arg1 bundle:(id)arg2 queue:(id)arg3 ;
@end

