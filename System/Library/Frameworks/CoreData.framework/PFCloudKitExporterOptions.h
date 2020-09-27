/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKRecordZone, CKDatabase, NSCloudKitMirroringDelegateOptions;

@interface PFCloudKitExporterOptions : NSObject {

	CKRecordZone* _recordZone;
	CKDatabase* _database;
	NSCloudKitMirroringDelegateOptions* _mirroringDelegateOptions;
	unsigned long long _perOperationBytesThreshold;
	unsigned long long _perOperationObjectThreshold;

}

@property (nonatomic,readonly) CKRecordZone * recordZone;                                                  //@synthesize recordZone=_recordZone - In the implementation block
@property (nonatomic,readonly) CKDatabase * database;                                                      //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringDelegateOptions * mirroringDelegateOptions;              //@synthesize mirroringDelegateOptions=_mirroringDelegateOptions - In the implementation block
@property (assign,nonatomic) unsigned long long perOperationBytesThreshold;                                //@synthesize perOperationBytesThreshold=_perOperationBytesThreshold - In the implementation block
@property (assign,nonatomic) unsigned long long perOperationObjectThreshold;                               //@synthesize perOperationObjectThreshold=_perOperationObjectThreshold - In the implementation block
-(id)copy;
-(void)dealloc;
-(CKDatabase *)database;
-(CKRecordZone *)recordZone;
-(unsigned long long)perOperationObjectThreshold;
-(void)setPerOperationObjectThreshold:(unsigned long long)arg1 ;
-(NSCloudKitMirroringDelegateOptions *)mirroringDelegateOptions;
-(id)initWithZone:(id)arg1 database:(id)arg2 options:(id)arg3 ;
-(void)setPerOperationBytesThreshold:(unsigned long long)arg1 ;
-(unsigned long long)perOperationBytesThreshold;
@end
