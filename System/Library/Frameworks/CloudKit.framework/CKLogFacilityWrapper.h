/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
@class NSObject, NSString;

@interface CKLogFacilityWrapper : NSObject {

	NSObject*<OS_os_log> _facility;
	NSString* _facilityName;

}

@property (nonatomic,readonly) NSObject*<OS_os_log> facility;              //@synthesize facility=_facility - In the implementation block
@property (nonatomic,readonly) NSString * facilityName;                    //@synthesize facilityName=_facilityName - In the implementation block
-(id)initWithFacility:(id)arg1 facilityName:(id)arg2 ;
-(NSObject*<OS_os_log>)facility;
-(NSString *)facilityName;
@end
