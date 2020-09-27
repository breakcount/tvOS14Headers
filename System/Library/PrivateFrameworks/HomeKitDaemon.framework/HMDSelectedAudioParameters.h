/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDAudioCodecGroup, HMDAudioCodecParameters, HMDSelectedRTPParameters, NSNumber;

@interface HMDSelectedAudioParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	HMDAudioCodecGroup* _codecGroup;
	HMDAudioCodecParameters* _codecParameters;
	HMDSelectedRTPParameters* _rtpParameters;
	NSNumber* _comfortNoiseEnabled;

}

@property (nonatomic,copy,readonly) HMDAudioCodecGroup * codecGroup;                        //@synthesize codecGroup=_codecGroup - In the implementation block
@property (nonatomic,copy,readonly) HMDAudioCodecParameters * codecParameters;              //@synthesize codecParameters=_codecParameters - In the implementation block
@property (nonatomic,copy,readonly) HMDSelectedRTPParameters * rtpParameters;               //@synthesize rtpParameters=_rtpParameters - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * comfortNoiseEnabled;                         //@synthesize comfortNoiseEnabled=_comfortNoiseEnabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(HMDAudioCodecParameters *)codecParameters;
-(BOOL)_parseFromTLVData;
-(id)tlvData;
-(HMDAudioCodecGroup *)codecGroup;
-(HMDSelectedRTPParameters *)rtpParameters;
-(NSNumber *)comfortNoiseEnabled;
-(id)initWithCodecGroup:(id)arg1 codecParameter:(id)arg2 rtpParameter:(id)arg3 comfortNoiseEnabled:(id)arg4 ;
@end

