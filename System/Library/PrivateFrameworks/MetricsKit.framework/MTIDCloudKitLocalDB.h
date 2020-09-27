/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:21 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKSyncEngineDataSource.h>

@protocol MTIDCloudKitLocalDBDelegate;
@class NSString, CKRecordZoneID, NSURL;

@interface MTIDCloudKitLocalDB : NSObject <CKSyncEngineDataSource> {

	BOOL _zoneCreated;
	id<MTIDCloudKitLocalDBDelegate> _delegate;
	NSString* _recordType;
	CKRecordZoneID* _recordZoneID;
	NSURL* _pathURL;

}

@property (nonatomic,retain) NSString * recordType;                                        //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,retain) CKRecordZoneID * recordZoneID;                                //@synthesize recordZoneID=_recordZoneID - In the implementation block
@property (nonatomic,retain) NSURL * pathURL;                                              //@synthesize pathURL=_pathURL - In the implementation block
@property (assign,nonatomic) BOOL zoneCreated;                                             //@synthesize zoneCreated=_zoneCreated - In the implementation block
@property (assign,nonatomic,__weak) id<MTIDCloudKitLocalDBDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MTIDCloudKitLocalDBDelegate>)delegate;
-(void)setDelegate:(id<MTIDCloudKitLocalDBDelegate>)arg1 ;
-(id)metadata;
-(NSString *)recordType;
-(void)setRecordType:(NSString *)arg1 ;
-(void)syncEngine:(id)arg1 didUpdateMetadata:(id)arg2 ;
-(void)syncEngine:(id)arg1 didSaveRecord:(id)arg2 ;
-(void)syncEngine:(id)arg1 failedToSaveRecord:(id)arg2 error:(id)arg3 ;
-(void)syncEngine:(id)arg1 didDeleteRecordWithID:(id)arg2 ;
-(void)syncEngine:(id)arg1 failedToDeleteRecordWithID:(id)arg2 error:(id)arg3 ;
-(void)syncEngine:(id)arg1 failedToSaveRecordZone:(id)arg2 error:(id)arg3 ;
-(id)syncEngine:(id)arg1 recordToSaveForRecordID:(id)arg2 ;
-(void)syncEngine:(id)arg1 didFetchRecord:(id)arg2 ;
-(void)syncEngine:(id)arg1 recordWithIDWasDeleted:(id)arg2 recordType:(id)arg3 ;
-(void)setRecordZoneID:(CKRecordZoneID *)arg1 ;
-(CKRecordZoneID *)recordZoneID;
-(void)clearData;
-(id)allRecords;
-(void)setZoneCreated:(BOOL)arg1 ;
-(BOOL)writeRecord:(id)arg1 error:(id*)arg2 ;
-(id)initWithFolder:(id)arg1 recordType:(id)arg2 recordZoneID:(id)arg3 ;
-(BOOL)setUserRecordIDName:(id)arg1 clearDataIfChanged:(BOOL)arg2 ;
-(id)pendingRecordIDs;
-(id)recordWithID:(id)arg1 error:(id*)arg2 ;
-(void)setPathURL:(NSURL *)arg1 ;
-(NSURL *)pathURL;
-(BOOL)deleteIfExists:(id)arg1 error:(id*)arg2 ;
-(id)dataForName:(id)arg1 error:(id*)arg2 ;
-(id)userRecordIDName;
-(BOOL)writeData:(id)arg1 forName:(id)arg2 error:(id*)arg3 ;
-(BOOL)fileExists:(id)arg1 ;
-(BOOL)zoneCreated;
-(BOOL)deleteRecordWithID:(id)arg1 error:(id*)arg2 ;
@end
