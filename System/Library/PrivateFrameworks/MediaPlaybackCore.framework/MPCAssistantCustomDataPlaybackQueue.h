/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlaybackCore/MPCAssistantPlaybackQueue.h>

@class NSString, NSData;

@interface MPCAssistantCustomDataPlaybackQueue : MPCAssistantPlaybackQueue {

	NSString* _identifier;
	NSData* _customData;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSData * customData;                //@synthesize customData=_customData - In the implementation block
+(id)customDataQueueWithContextID:(id)arg1 identifier:(id)arg2 customData:(id)arg3 ;
-(id)description;
-(NSString *)identifier;
-(NSData *)customData;
-(MRSystemAppPlaybackQueueRef)createRemotePlaybackQueue;
-(id)initWithContextID:(id)arg1 identifier:(id)arg2 customData:(id)arg3 ;
@end

