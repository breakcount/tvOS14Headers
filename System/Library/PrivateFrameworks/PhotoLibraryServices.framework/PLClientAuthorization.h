/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol PLClientAuthorization <NSObject>
@property (nonatomic,readonly) NSString * trustedCallerBundleID; 
@property (nonatomic,readonly) NSString * fetchFilterIdentifier; 
@property (nonatomic,readonly) NSString * trustedCallerDisplayName; 
@property (nonatomic,readonly) NSString * trustedCallerPhotoLibraryUsageDescription; 
@property (nonatomic,readonly) int clientProcessIdentifier; 
@property (nonatomic,readonly) BOOL photoKitEntitled; 
@property (nonatomic,readonly) SCD_Struct_PL34 clientAuditToken; 
@property (nonatomic,readonly) BOOL directDatabaseAccessAuthorized; 
@property (nonatomic,readonly) BOOL directDatabaseWriteAuthorized; 
@property (nonatomic,readonly) BOOL cloudInternalEntitled; 
@property (nonatomic,readonly) BOOL limitedLibraryMode; 
@property (getter=isClientLimitedLibraryCapable,nonatomic,readonly) BOOL clientLimitedLibraryCapable; 
@required
-(int)clientProcessIdentifier;
-(BOOL)directDatabaseWriteAuthorized;
-(BOOL)cloudInternalEntitled;
-(NSString *)trustedCallerBundleID;
-(BOOL)limitedLibraryMode;
-(BOOL)directDatabaseAccessAuthorized;
-(SCD_Struct_PL34)clientAuditToken;
-(NSString *)fetchFilterIdentifier;
-(BOOL)photoKitEntitled;
-(BOOL)photoKitEntitledFor:(id)arg1;
-(NSString *)trustedCallerDisplayName;
-(NSString *)trustedCallerPhotoLibraryUsageDescription;
-(BOOL)isClientLimitedLibraryCapable;

@end

