/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDVideoResolution, NSNumber;

@interface HMDCameraVideoTier : HMFObject <NSSecureCoding> {

	HMDVideoResolution* _videoResolution;
	NSNumber* _maxBitRate;
	NSNumber* _minBitRate;
	NSNumber* _rtcpInterval;
	NSNumber* _framerate;

}

@property (nonatomic,readonly) HMDVideoResolution * videoResolution;              //@synthesize videoResolution=_videoResolution - In the implementation block
@property (nonatomic,readonly) NSNumber * maxBitRate;                             //@synthesize maxBitRate=_maxBitRate - In the implementation block
@property (nonatomic,readonly) NSNumber * minBitRate;                             //@synthesize minBitRate=_minBitRate - In the implementation block
@property (nonatomic,readonly) NSNumber * rtcpInterval;                           //@synthesize rtcpInterval=_rtcpInterval - In the implementation block
@property (nonatomic,retain) NSNumber * framerate;                                //@synthesize framerate=_framerate - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMDVideoResolution *)videoResolution;
-(NSNumber *)framerate;
-(void)setFramerate:(NSNumber *)arg1 ;
-(NSNumber *)rtcpInterval;
-(id)initWithVideoResolution:(id)arg1 framerate:(id)arg2 minBitRate:(id)arg3 maxBitRate:(id)arg4 rtcpInterval:(id)arg5 ;
-(NSNumber *)maxBitRate;
-(NSNumber *)minBitRate;
@end

