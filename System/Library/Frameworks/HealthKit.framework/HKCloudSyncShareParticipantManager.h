/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>

@class HKTaskServerProxyProvider, HKHealthStore, NSString;

@interface HKCloudSyncShareParticipantManager : NSObject <_HKXPCExportable> {

	HKTaskServerProxyProvider* _proxyProvider;
	HKHealthStore* _healthStore;

}

@property (nonatomic,readonly) long long lastKnownParticipantSharingStatus; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
+(id)serverInterface;
+(id)clientInterface;
-(id)exportedInterface;
-(void)connectionInvalidated;
-(id)remoteInterface;
-(id)initWithHealthStore:(id)arg1 ;
-(long long)lastKnownParticipantSharingStatus;
-(void)fetchAllShareParticipantEmailAddressesWithCompletion:(/*^block*/id)arg1 ;
-(void)revokeAccessForAllShareParticipantsWithCompletion:(/*^block*/id)arg1 ;
-(void)tearDownHealthSharingForProfile:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

