/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSNumber, NSDate;

@interface CEMDeviceInformationCommand_StatusQueryResponsesOSUpdateSettings : CEMPayloadBase {

	NSString* _statusCatalogURL;
	NSNumber* _statusIsDefaultCatalog;
	NSDate* _statusPreviousScanDate;
	NSString* _statusPreviousScanResult;
	NSNumber* _statusPerformPeriodicCheck;
	NSNumber* _statusAutomaticCheckEnabled;
	NSNumber* _statusBackgroundDownloadEnabled;
	NSNumber* _statusAutomaticAppInstallationEnabled;
	NSNumber* _statusAutomaticOSInstallationEnabled;
	NSNumber* _statusAutomaticSecurityUpdatesEnabled;

}

@property (nonatomic,copy) NSString * statusCatalogURL;                                   //@synthesize statusCatalogURL=_statusCatalogURL - In the implementation block
@property (nonatomic,copy) NSNumber * statusIsDefaultCatalog;                             //@synthesize statusIsDefaultCatalog=_statusIsDefaultCatalog - In the implementation block
@property (nonatomic,copy) NSDate * statusPreviousScanDate;                               //@synthesize statusPreviousScanDate=_statusPreviousScanDate - In the implementation block
@property (nonatomic,copy) NSString * statusPreviousScanResult;                           //@synthesize statusPreviousScanResult=_statusPreviousScanResult - In the implementation block
@property (nonatomic,copy) NSNumber * statusPerformPeriodicCheck;                         //@synthesize statusPerformPeriodicCheck=_statusPerformPeriodicCheck - In the implementation block
@property (nonatomic,copy) NSNumber * statusAutomaticCheckEnabled;                        //@synthesize statusAutomaticCheckEnabled=_statusAutomaticCheckEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * statusBackgroundDownloadEnabled;                    //@synthesize statusBackgroundDownloadEnabled=_statusBackgroundDownloadEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * statusAutomaticAppInstallationEnabled;              //@synthesize statusAutomaticAppInstallationEnabled=_statusAutomaticAppInstallationEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * statusAutomaticOSInstallationEnabled;               //@synthesize statusAutomaticOSInstallationEnabled=_statusAutomaticOSInstallationEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * statusAutomaticSecurityUpdatesEnabled;              //@synthesize statusAutomaticSecurityUpdatesEnabled=_statusAutomaticSecurityUpdatesEnabled - In the implementation block
+(id)allowedStatusKeys;
+(id)buildRequiredOnly;
+(id)buildWithCatalogURL:(id)arg1 withIsDefaultCatalog:(id)arg2 withPreviousScanDate:(id)arg3 withPreviousScanResult:(id)arg4 withPerformPeriodicCheck:(id)arg5 withAutomaticCheckEnabled:(id)arg6 withBackgroundDownloadEnabled:(id)arg7 withAutomaticAppInstallationEnabled:(id)arg8 withAutomaticOSInstallationEnabled:(id)arg9 withAutomaticSecurityUpdatesEnabled:(id)arg10 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusCatalogURL:(NSString *)arg1 ;
-(void)setStatusIsDefaultCatalog:(NSNumber *)arg1 ;
-(void)setStatusPreviousScanDate:(NSDate *)arg1 ;
-(void)setStatusPreviousScanResult:(NSString *)arg1 ;
-(void)setStatusPerformPeriodicCheck:(NSNumber *)arg1 ;
-(void)setStatusAutomaticCheckEnabled:(NSNumber *)arg1 ;
-(void)setStatusBackgroundDownloadEnabled:(NSNumber *)arg1 ;
-(void)setStatusAutomaticAppInstallationEnabled:(NSNumber *)arg1 ;
-(void)setStatusAutomaticOSInstallationEnabled:(NSNumber *)arg1 ;
-(void)setStatusAutomaticSecurityUpdatesEnabled:(NSNumber *)arg1 ;
-(NSString *)statusCatalogURL;
-(NSNumber *)statusIsDefaultCatalog;
-(NSDate *)statusPreviousScanDate;
-(NSString *)statusPreviousScanResult;
-(NSNumber *)statusPerformPeriodicCheck;
-(NSNumber *)statusAutomaticCheckEnabled;
-(NSNumber *)statusBackgroundDownloadEnabled;
-(NSNumber *)statusAutomaticAppInstallationEnabled;
-(NSNumber *)statusAutomaticOSInstallationEnabled;
-(NSNumber *)statusAutomaticSecurityUpdatesEnabled;
@end

