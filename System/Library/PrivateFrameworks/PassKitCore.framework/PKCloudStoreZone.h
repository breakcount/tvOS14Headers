/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet;

@interface PKCloudStoreZone : NSObject <NSSecureCoding, NSCopying> {

	NSString* _containerName;
	NSString* _zoneName;
	NSString* _ownerName;
	long long _scope;
	NSString* _zoneSubscriptionIdentifier;
	NSSet* _shareParticipants;

}

@property (nonatomic,copy) NSString * containerName;                             //@synthesize containerName=_containerName - In the implementation block
@property (nonatomic,copy) NSString * zoneName;                                  //@synthesize zoneName=_zoneName - In the implementation block
@property (nonatomic,copy) NSString * ownerName;                                 //@synthesize ownerName=_ownerName - In the implementation block
@property (assign,nonatomic) long long scope;                                    //@synthesize scope=_scope - In the implementation block
@property (nonatomic,retain) NSString * zoneSubscriptionIdentifier;              //@synthesize zoneSubscriptionIdentifier=_zoneSubscriptionIdentifier - In the implementation block
@property (nonatomic,copy) NSSet * shareParticipants;                            //@synthesize shareParticipants=_shareParticipants - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)containerName;
-(void)setContainerName:(NSString *)arg1 ;
-(long long)scope;
-(void)setScope:(long long)arg1 ;
-(id)recordZone;
-(NSString *)zoneName;
-(NSString *)ownerName;
-(void)setOwnerName:(NSString *)arg1 ;
-(void)setZoneName:(NSString *)arg1 ;
-(id)initWithZoneID:(id)arg1 containerName:(id)arg2 scope:(long long)arg3 ;
-(id)initWithZoneID:(id)arg1 containerDatabase:(id)arg2 ;
-(id)shareParticipantWithHandle:(id)arg1 ;
-(id)shareParticipantWithLookupInfo:(id)arg1 ;
-(id)zoneSubscription;
-(NSString *)zoneSubscriptionIdentifier;
-(void)setZoneSubscriptionIdentifier:(NSString *)arg1 ;
-(NSSet *)shareParticipants;
-(void)setShareParticipants:(NSSet *)arg1 ;
@end

