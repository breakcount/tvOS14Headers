/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>
#import <libobjc.A.dylib/EKParticipantSemanticIdentifierGeneratorDelegate.h>

@interface EKPersistentParticipant : EKPersistentObject <EKParticipantSemanticIdentifierGeneratorDelegate>
+(id)defaultPropertiesToLoad;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)URL;
-(id)UUID;
-(void)setURL:(id)arg1 ;
-(id)url;
-(id)comment;
-(id)phoneNumber;
-(id)displayName;
-(id)firstName;
-(id)lastName;
-(void)setPhoneNumber:(id)arg1 ;
-(void)setUUID:(id)arg1 ;
-(id)emailAddress;
-(void)setEmailAddress:(id)arg1 ;
-(void)setComment:(id)arg1 ;
-(void)setFirstName:(id)arg1 ;
-(void)setLastName:(id)arg1 ;
-(id)owner;
-(id)semanticIdentifier;
-(void)setDisplayNameRaw:(id)arg1 ;
-(id)displayNameRaw;
-(id)proposedStartDate;
-(void)setProposedStartDate:(id)arg1 ;
-(void)setProposedStartDateStatus:(int)arg1 ;
-(id)invitedBy;
-(int)proposedStartDateStatus;
@end

