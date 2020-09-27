/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSNumber, EDAMContact;

@interface EDAMIdentity : FATObject {

	NSNumber* _id;
	EDAMContact* _contact;
	NSNumber* _userId;
	NSNumber* _deactivated;
	NSNumber* _sameBusiness;
	NSNumber* _blocked;
	NSNumber* _userConnected;
	NSNumber* _eventId;

}

@property (nonatomic,retain) NSNumber * id;                         //@synthesize id=_id - In the implementation block
@property (nonatomic,retain) EDAMContact * contact;                 //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) NSNumber * userId;                     //@synthesize userId=_userId - In the implementation block
@property (nonatomic,retain) NSNumber * deactivated;                //@synthesize deactivated=_deactivated - In the implementation block
@property (nonatomic,retain) NSNumber * sameBusiness;               //@synthesize sameBusiness=_sameBusiness - In the implementation block
@property (nonatomic,retain) NSNumber * blocked;                    //@synthesize blocked=_blocked - In the implementation block
@property (nonatomic,retain) NSNumber * userConnected;              //@synthesize userConnected=_userConnected - In the implementation block
@property (nonatomic,retain) NSNumber * eventId;                    //@synthesize eventId=_eventId - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setEventId:(NSNumber *)arg1 ;
-(NSNumber *)eventId;
-(void)setBlocked:(NSNumber *)arg1 ;
-(NSNumber *)blocked;
-(EDAMContact *)contact;
-(void)setContact:(EDAMContact *)arg1 ;
-(NSNumber *)id;
-(NSNumber *)userId;
-(void)setUserId:(NSNumber *)arg1 ;
-(void)setId:(NSNumber *)arg1 ;
-(NSNumber *)deactivated;
-(void)setDeactivated:(NSNumber *)arg1 ;
-(NSNumber *)sameBusiness;
-(void)setSameBusiness:(NSNumber *)arg1 ;
-(NSNumber *)userConnected;
-(void)setUserConnected:(NSNumber *)arg1 ;
@end

