/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFActionBuilder.h>

@class NSSet, NSNumber, HFPlaybackArchive, HMMediaPlaybackAction, NSString;

@interface HFMediaPlaybackActionBuilder : HFActionBuilder {

	NSSet* _mediaProfiles;
	long long _targetPlayState;
	NSNumber* _targetVolume;
	HFPlaybackArchive* _playbackArchive;
	NSSet* _accessories;

}

@property (nonatomic,copy) NSSet * accessories;                                   //@synthesize accessories=_accessories - In the implementation block
@property (nonatomic,readonly) HMMediaPlaybackAction * action; 
@property (nonatomic,copy) NSSet * mediaProfiles;                                 //@synthesize mediaProfiles=_mediaProfiles - In the implementation block
@property (assign,nonatomic) long long targetPlayState;                           //@synthesize targetPlayState=_targetPlayState - In the implementation block
@property (nonatomic,retain) NSNumber * targetVolume;                             //@synthesize targetVolume=_targetVolume - In the implementation block
@property (nonatomic,retain) HFPlaybackArchive * playbackArchive;                 //@synthesize playbackArchive=_playbackArchive - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDescription; 
+(Class)homeKitRepresentationClass;
-(NSString *)localizedDescription;
-(NSSet *)accessories;
-(HFPlaybackArchive *)playbackArchive;
-(BOOL)requiresDeviceUnlock;
-(NSSet *)mediaProfiles;
-(void)setMediaProfiles:(NSSet *)arg1 ;
-(void)setPlaybackArchive:(HFPlaybackArchive *)arg1 ;
-(void)setAccessories:(NSSet *)arg1 ;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(id)commitItem;
-(id)createNewAction;
-(BOOL)updateWithActionBuilder:(id)arg1 ;
-(id)copyForCreatingNewAction;
-(BOOL)isAffectedByEndEvents;
-(BOOL)hasSameTargetAsAction:(id)arg1 ;
-(id)performValidation;
-(id)mediaProfileContainersForAccessories:(id)arg1 home:(id)arg2 ;
-(long long)targetPlayState;
-(BOOL)isMediaActionValid:(id*)arg1 ;
-(NSNumber *)targetVolume;
-(void)setTargetPlayState:(long long)arg1 ;
-(void)setTargetVolume:(NSNumber *)arg1 ;
-(void)_ensureConsistency;
-(void)defaultActionIfMediaActionInvalid;
@end

