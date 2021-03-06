/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UARPAccessoryID, NSMutableArray, NSString;

@interface UARPAccessory : NSObject {

	UARPAccessoryID* _id;
	NSMutableArray* _internalPendingAssets;
	BOOL _reachable;
	BOOL _assetTransfersPaused;
	BOOL _userInitiatedFirmwareStaging;
	BOOL _userInitiatedFirmwareApply;
	BOOL _enableFirmwareDownloadOnDemand;
	unsigned _firmwareUpdateBytesTransferred;
	unsigned _firmwareUpdateBytesTotal;
	NSString* _stagedFirmwareVersion;
	NSString* _availableFirmwareVersion;
	NSString* _filepathCurrentAsset;

}

@property (readonly) NSString * serialNumber; 
@property (readonly) NSString * modelName; 
@property (readonly) NSString * manufacturer; 
@property (readonly) NSString * firmwareVersion; 
@property (readonly) NSString * productNumber; 
@property (readonly) NSString * productGroup; 
@property (copy) NSString * stagedFirmwareVersion;                       //@synthesize stagedFirmwareVersion=_stagedFirmwareVersion - In the implementation block
@property (copy) NSString * availableFirmwareVersion;                    //@synthesize availableFirmwareVersion=_availableFirmwareVersion - In the implementation block
@property (assign) BOOL userInitiatedFirmwareStaging;                    //@synthesize userInitiatedFirmwareStaging=_userInitiatedFirmwareStaging - In the implementation block
@property (assign) BOOL userInitiatedFirmwareApply;                      //@synthesize userInitiatedFirmwareApply=_userInitiatedFirmwareApply - In the implementation block
@property (assign) unsigned firmwareUpdateBytesTransferred;              //@synthesize firmwareUpdateBytesTransferred=_firmwareUpdateBytesTransferred - In the implementation block
@property (assign) unsigned firmwareUpdateBytesTotal;                    //@synthesize firmwareUpdateBytesTotal=_firmwareUpdateBytesTotal - In the implementation block
@property (copy) NSString * filepathCurrentAsset;                        //@synthesize filepathCurrentAsset=_filepathCurrentAsset - In the implementation block
@property (assign) BOOL enableFirmwareDownloadOnDemand;                  //@synthesize enableFirmwareDownloadOnDemand=_enableFirmwareDownloadOnDemand - In the implementation block
@property (assign) BOOL downloadOnCellularAllowed; 
@property (assign) BOOL autoDownloadAllowed; 
@property (assign) long long transport; 
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(long long)transport;
-(void)setTransport:(long long)arg1 ;
-(NSString *)serialNumber;
-(NSString *)manufacturer;
-(NSString *)firmwareVersion;
-(NSString *)modelName;
-(id)initWithID:(id)arg1 ;
-(void)setReachable:(BOOL)arg1 ;
-(NSString *)productNumber;
-(BOOL)downloadOnCellularAllowed;
-(void)setDownloadOnCellularAllowed:(BOOL)arg1 ;
-(BOOL)reachable;
-(NSString *)productGroup;
-(id)initWithManufacturer:(id)arg1 modelName:(id)arg2 serialNumber:(id)arg3 firmwareVersion:(id)arg4 ;
-(BOOL)autoDownloadAllowed;
-(id)initWithManufacturer:(id)arg1 modelName:(id)arg2 serialNumber:(id)arg3 firmwareVersion:(id)arg4 productGroup:(id)arg5 productNumber:(id)arg6 ;
-(void)setAutoDownloadAllowed:(BOOL)arg1 ;
-(id)getID;
-(void)addPendingAsset:(id)arg1 ;
-(void)removePendingAsset:(id)arg1 ;
-(id)pendingAssets;
-(void)setAssetTransfersPaused:(BOOL)arg1 ;
-(BOOL)assetTransfersPaused;
-(NSString *)stagedFirmwareVersion;
-(void)setStagedFirmwareVersion:(NSString *)arg1 ;
-(NSString *)availableFirmwareVersion;
-(void)setAvailableFirmwareVersion:(NSString *)arg1 ;
-(BOOL)userInitiatedFirmwareStaging;
-(void)setUserInitiatedFirmwareStaging:(BOOL)arg1 ;
-(BOOL)userInitiatedFirmwareApply;
-(void)setUserInitiatedFirmwareApply:(BOOL)arg1 ;
-(unsigned)firmwareUpdateBytesTransferred;
-(void)setFirmwareUpdateBytesTransferred:(unsigned)arg1 ;
-(unsigned)firmwareUpdateBytesTotal;
-(void)setFirmwareUpdateBytesTotal:(unsigned)arg1 ;
-(NSString *)filepathCurrentAsset;
-(void)setFilepathCurrentAsset:(NSString *)arg1 ;
-(BOOL)enableFirmwareDownloadOnDemand;
-(void)setEnableFirmwareDownloadOnDemand:(BOOL)arg1 ;
@end

