/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAVRoute.h>

@class NSArray;

@interface MPAVOutputDeviceRoute : MPAVRoute {

	void* _logicalLeaderOutputDevice;
	NSArray* _outputDevices;

}

@property (nonatomic,readonly) NSArray * outputDevices;                            //@synthesize outputDevices=_outputDevices - In the implementation block
@property (nonatomic,readonly) void* logicalLeaderOutputDevice;                    //@synthesize logicalLeaderOutputDevice=_logicalLeaderOutputDevice - In the implementation block
@property (getter=isGroupLeader,nonatomic,readonly) BOOL groupLeader; 
+(id)localDeviceUID;
+(long long)pickableRouteTypeForOutputDevice:(void*)arg1 ;
+(void*)logicalLeaderFromOutputDevices:(id)arg1 ;
-(id)description;
-(long long)routeType;
-(id)routeName;
-(NSArray *)outputDevices;
-(id)productIdentifier;
-(id)initWithOutputDevices:(id)arg1 ;
-(BOOL)isProxyGroupPlayer;
-(BOOL)isVolumeControlAvailable;
-(BOOL)canAccessRemoteAssets;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(BOOL)isGroupLeader;
-(id)clusterComposition;
-(id)routeUID;
-(id)playingPairedDeviceName;
-(BOOL)isPickedOnPairedDevice;
-(id)groupUID;
-(BOOL)requiresPassword;
-(long long)routeSubtype;
-(BOOL)isAppleTVRoute;
-(BOOL)isDeviceRoute;
-(BOOL)supportsGrouping;
-(BOOL)isSplitterCapable;
-(BOOL)isDeviceSpeakerRoute;
-(BOOL)isStereoPair;
-(BOOL)isAirPlayRoute;
-(BOOL)isLowLatencyRoute;
-(BOOL)supportsWirelessDisplay;
-(long long)pickableRouteType;
-(BOOL)isCarplayRoute;
-(BOOL)isHomePodRoute;
-(BOOL)isClusterRoute;
-(long long)originalRouteSubtype;
-(BOOL)_anyOutputDevicePassesMRFunction:(/*function pointer*/void*)arg1 ;
-(BOOL)_anyOutputDevicePassesTest:(/*^block*/id)arg1 ;
-(void*)logicalLeaderOutputDevice;
@end

