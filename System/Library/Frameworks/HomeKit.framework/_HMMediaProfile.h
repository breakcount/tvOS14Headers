/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/_HMAccessoryProfile.h>

@protocol _HMMediaProfileDelegate;
@class HMMediaSession, NSString;

@interface _HMMediaProfile : _HMAccessoryProfile {

	HMMediaSession* _mediaSession;
	NSString* _routeUID;
	unsigned long long _capability;
	id<_HMMediaProfileDelegate> _delegate;

}

@property (__weak) id<_HMMediaProfileDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (retain) HMMediaSession * mediaSession;                        //@synthesize mediaSession=_mediaSession - In the implementation block
@property (readonly) NSString * routeUID;                                //@synthesize routeUID=_routeUID - In the implementation block
@property (assign,nonatomic) unsigned long long capability;              //@synthesize capability=_capability - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<_HMMediaProfileDelegate>)delegate;
-(void)setDelegate:(id<_HMMediaProfileDelegate>)arg1 ;
-(void)setRouteUID:(NSString *)arg1 ;
-(NSString *)routeUID;
-(void)handleRuntimeStateUpdate:(id)arg1 ;
-(void)__configureWithContext:(id)arg1 accessory:(id)arg2 ;
-(HMMediaSession *)mediaSession;
-(void)_notifyDelegateOfUpdatedMediaSession:(id)arg1 ;
-(void)setMediaSession:(HMMediaSession *)arg1 ;
-(unsigned long long)capability;
-(void)setCapability:(unsigned long long)arg1 ;
@end

