/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ICUserIdentity, NSDictionary, NSString;

@interface MPRemotePlaybackQueue : NSObject <NSSecureCoding> {

	MRSystemAppPlaybackQueueRef _mediaRemotePlaybackQueue;
	ICUserIdentity* _userIdentity;
	NSDictionary* _mediaRemoteOptions;

}

@property (nonatomic,readonly) MRSystemAppPlaybackQueueRef _mediaRemotePlaybackQueue; 
@property (nonatomic,readonly) NSDictionary * mediaRemoteOptions;                                                //@synthesize mediaRemoteOptions=_mediaRemoteOptions - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (assign,getter=isRequestingImmediatePlayback,nonatomic) BOOL requestingImmediatePlayback; 
@property (assign,nonatomic) BOOL shouldOverrideManuallyCuratedQueue; 
@property (assign,nonatomic) long long replaceIntent; 
@property (nonatomic,copy) NSString * siriRecommendationIdentifier; 
@property (nonatomic,copy,readonly) NSString * siriAssetInfo; 
@property (nonatomic,copy,readonly) NSString * featureName; 
@property (nonatomic,copy,readonly) NSDictionary * siriWHAMetricsInfo; 
@property (nonatomic,readonly) ICUserIdentity * userIdentity;                                                    //@synthesize userIdentity=_userIdentity - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)queueWithMediaRemotePlaybackQueue:(MRSystemAppPlaybackQueueRef)arg1 ;
+(id)queueWithMediaRemotePlaybackQueue:(MRSystemAppPlaybackQueueRef)arg1 options:(id)arg2 ;
+(void)registerRemotePlaybackQueueClass:(Class)arg1 forPlaybackQueueType:(int)arg2 ;
-(id)init;
-(void)dealloc;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(ICUserIdentity *)userIdentity;
-(NSString *)featureName;
-(void)setShouldOverrideManuallyCuratedQueue:(BOOL)arg1 ;
-(long long)replaceIntent;
-(void)setReplaceIntent:(long long)arg1 ;
-(BOOL)shouldOverrideManuallyCuratedQueue;
-(NSDictionary *)siriWHAMetricsInfo;
-(id)initWithMediaRemotePlaybackQueue:(MRSystemAppPlaybackQueueRef)arg1 options:(id)arg2 ;
-(BOOL)verifyWithError:(id*)arg1 ;
-(MRSystemAppPlaybackQueueRef)_mediaRemotePlaybackQueue;
-(BOOL)isRequestingImmediatePlayback;
-(void)setRequestingImmediatePlayback:(BOOL)arg1 ;
-(NSString *)siriRecommendationIdentifier;
-(NSString *)siriAssetInfo;
-(void)setSiriRecommendationIdentifier:(NSString *)arg1 ;
-(NSDictionary *)mediaRemoteOptions;
@end

