/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>

@class CKRecordID, NSArray;

@interface CKDUpdateMissingAssetStatusOperationInfo : CKDatabaseOperationInfo {

	BOOL _recovered;
	BOOL _isPackage;
	CKRecordID* _repairRecordID;
	NSArray* _assetSizes;
	NSArray* _assetPutReceipts;

}

@property (nonatomic,retain) CKRecordID * repairRecordID;              //@synthesize repairRecordID=_repairRecordID - In the implementation block
@property (assign,nonatomic) BOOL recovered;                           //@synthesize recovered=_recovered - In the implementation block
@property (assign,nonatomic) BOOL isPackage;                           //@synthesize isPackage=_isPackage - In the implementation block
@property (nonatomic,retain) NSArray * assetSizes;                     //@synthesize assetSizes=_assetSizes - In the implementation block
@property (nonatomic,retain) NSArray * assetPutReceipts;               //@synthesize assetPutReceipts=_assetPutReceipts - In the implementation block
-(BOOL)isPackage;
-(void)setRepairRecordID:(CKRecordID *)arg1 ;
-(CKRecordID *)repairRecordID;
-(void)setRecovered:(BOOL)arg1 ;
-(BOOL)recovered;
-(void)setIsPackage:(BOOL)arg1 ;
-(NSArray *)assetSizes;
-(void)setAssetSizes:(NSArray *)arg1 ;
-(NSArray *)assetPutReceipts;
-(void)setAssetPutReceipts:(NSArray *)arg1 ;
@end

