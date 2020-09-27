/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
@class CKAsset;

@interface CKDDownloadAssetURLInfo : NSObject {

	CKAsset* _asset;
	OpaquePCSShareProtectionRef _recordPCS;

}

@property (nonatomic,retain) CKAsset * asset;                                    //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) OpaquePCSShareProtectionRef recordPCS;              //@synthesize recordPCS=_recordPCS - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CKAsset *)asset;
-(void)setRecordPCS:(OpaquePCSShareProtectionRef)arg1 ;
-(OpaquePCSShareProtectionRef)recordPCS;
-(void)setAsset:(CKAsset *)arg1 ;
@end

