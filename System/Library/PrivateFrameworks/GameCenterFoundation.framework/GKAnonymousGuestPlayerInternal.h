/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:24:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKPlayerInternal.h>

@class GKPlayerInternal, NSString;

@interface GKAnonymousGuestPlayerInternal : GKPlayerInternal {

	GKPlayerInternal* _hostPlayerInternal;
	NSString* _guestIdentifier;

}

@property (nonatomic,retain) GKPlayerInternal * hostPlayerInternal;              //@synthesize hostPlayerInternal=_hostPlayerInternal - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(id)playerID;
-(id)initWithHostPlayerInternal:(id)arg1 guestIdentifier:(id)arg2 ;
-(BOOL)isGuestPlayer;
-(GKPlayerInternal *)hostPlayerInternal;
-(id)guestIdentifier;
-(void)setHostPlayerInternal:(GKPlayerInternal *)arg1 ;
-(void)setGuestIdentifier:(id)arg1 ;
@end

