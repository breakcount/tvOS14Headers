/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKNotification.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKRecordZoneID;

@interface CKRecordZoneNotification : CKNotification <NSSecureCoding> {

	CKRecordZoneID* _recordZoneID;
	long long _databaseScope;

}

@property (nonatomic,copy) CKRecordZoneID * recordZoneID;              //@synthesize recordZoneID=_recordZoneID - In the implementation block
@property (assign,nonatomic) long long databaseScope;                  //@synthesize databaseScope=_databaseScope - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)databaseScope;
-(void)setDatabaseScope:(long long)arg1 ;
-(id)CKPropertiesDescription;
-(id)initWithRemoteNotificationDictionary:(id)arg1 ;
-(void)setRecordZoneID:(CKRecordZoneID *)arg1 ;
-(CKRecordZoneID *)recordZoneID;
@end

