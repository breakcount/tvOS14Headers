/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IDSCKRecordZoneID;

@interface IDSCKRecordZone : NSObject <NSSecureCoding, NSCopying> {

	IDSCKRecordZoneID* _zoneID;

}

@property (nonatomic,readonly) IDSCKRecordZoneID * zoneID;              //@synthesize zoneID=_zoneID - In the implementation block
+(id)alloc;
+(Class)__class;
-(IDSCKRecordZoneID *)zoneID;
@end

