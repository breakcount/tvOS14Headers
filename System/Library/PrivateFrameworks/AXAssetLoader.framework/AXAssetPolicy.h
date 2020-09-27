/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AXAssetLoader.framework/AXAssetLoader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString;

@interface AXAssetPolicy : NSObject {

	NSNumber* _minSupportedFormatVersion;
	NSNumber* _maxSupportedFormatVersion;
	double _downloadResourceTimeout;
	double _updateCatalogTimeout;
	double _refreshRetryInterval;
	double _downloadRetryInterval;
	NSString* _launchActivityIdentifier;
	double _updateInterval;

}

@property (nonatomic,readonly) NSString * assetType; 
@property (nonatomic,retain) NSNumber * minSupportedFormatVersion;               //@synthesize minSupportedFormatVersion=_minSupportedFormatVersion - In the implementation block
@property (nonatomic,retain) NSNumber * maxSupportedFormatVersion;               //@synthesize maxSupportedFormatVersion=_maxSupportedFormatVersion - In the implementation block
@property (assign,nonatomic) double downloadResourceTimeout;                     //@synthesize downloadResourceTimeout=_downloadResourceTimeout - In the implementation block
@property (assign,nonatomic) double updateCatalogTimeout;                        //@synthesize updateCatalogTimeout=_updateCatalogTimeout - In the implementation block
@property (assign,nonatomic) double refreshRetryInterval;                        //@synthesize refreshRetryInterval=_refreshRetryInterval - In the implementation block
@property (assign,nonatomic) double downloadRetryInterval;                       //@synthesize downloadRetryInterval=_downloadRetryInterval - In the implementation block
@property (nonatomic,readonly) BOOL shouldCopyLocally; 
@property (nonatomic,readonly) NSString * launchActivityIdentifier;              //@synthesize launchActivityIdentifier=_launchActivityIdentifier - In the implementation block
@property (assign,nonatomic) double updateInterval;                              //@synthesize updateInterval=_updateInterval - In the implementation block
+(id)policy;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)setUpdateInterval:(double)arg1 ;
-(double)updateInterval;
-(NSString *)assetType;
-(NSString *)launchActivityIdentifier;
-(BOOL)shouldCopyLocally;
-(id)downloadOptionsForOperation:(unsigned long long)arg1 userInitiated:(BOOL)arg2 ;
-(BOOL)shouldDownloadAsset:(id)arg1 withInstalledAssets:(id)arg2 ;
-(id)assetsToPurgeFromInstalledAssets:(id)arg1 ;
-(double)refreshRetryInterval;
-(id)assetsToDownloadFromRefreshedAssets:(id)arg1 ;
-(double)downloadRetryInterval;
-(BOOL)isAssetSupportedBasedOnMinMaxFormatVersion:(id)arg1 ;
-(BOOL)isAssetContentVersion:(id)arg1 greatherThanInstalledAssets:(id)arg2 ;
-(void)setDownloadResourceTimeout:(double)arg1 ;
-(void)setUpdateCatalogTimeout:(double)arg1 ;
-(void)setRefreshRetryInterval:(double)arg1 ;
-(void)setDownloadRetryInterval:(double)arg1 ;
-(NSNumber *)minSupportedFormatVersion;
-(NSNumber *)maxSupportedFormatVersion;
-(void)setMinSupportedFormatVersion:(NSNumber *)arg1 ;
-(void)setMaxSupportedFormatVersion:(NSNumber *)arg1 ;
-(double)downloadResourceTimeout;
-(double)updateCatalogTimeout;
-(id)newAssetQuery;
@end

