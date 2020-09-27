/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVExternalPlaybackMonitorInternal;

@interface AVExternalPlaybackMonitor : NSObject {

	AVExternalPlaybackMonitorInternal* _ivars;

}

@property (getter=isAirPlayVideoActive,readonly) BOOL airPlayVideoActive; 
@property (getter=isAirPlayVideoPlaying,readonly) BOOL airPlayVideoPlaying; 
+(void)initialize;
+(id)longFormVideoExternalPlaybackMonitor;
-(id)description;
-(id)init;
-(void)dealloc;
-(BOOL)isAirPlayVideoActive;
-(id)initWithFigRoutingSessionManager:(OpaqueFigRoutingSessionManagerRef)arg1 ;
-(BOOL)isAirPlayVideoPlaying;
@end

