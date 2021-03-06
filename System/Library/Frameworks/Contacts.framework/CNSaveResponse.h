/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface CNSaveResponse : NSObject <NSSecureCoding> {

	NSMutableDictionary* _contactSnapshotsByIndexPath;
	NSMutableDictionary* _groupSnapshotsByIndexPath;
	NSMutableDictionary* _containerSnapshotsByIndexPath;
	BOOL _didAffectMeCard;

}

@property (readonly) BOOL didAffectMeCard; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)applySnapshotsToSaveRequest:(id)arg1 ;
-(BOOL)didAffectMeCard;
@end

