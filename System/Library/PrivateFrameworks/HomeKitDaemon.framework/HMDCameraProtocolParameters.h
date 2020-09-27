/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDSupportedVideoStreamConfiguration, HMDSupportedAudioStreamConfiguration, HMDSupportedRTPConfiguration, HMDSetupEndPointRead, HMDSetupEndPointWrite, HMDSelectedStreamConfigurationWrite, HMDReselectedStreamConfigurationWrite;

@interface HMDCameraProtocolParameters : HMFObject <NSSecureCoding> {

	HMDSupportedVideoStreamConfiguration* _supportedVideoStreamConfiguration;
	HMDSupportedAudioStreamConfiguration* _supportedAudioStreamConfiguration;
	HMDSupportedRTPConfiguration* _supportedRTPConfiguration;
	HMDSetupEndPointRead* _setupEndPointRead;
	HMDSetupEndPointWrite* _setupEndPointWrite;
	HMDSelectedStreamConfigurationWrite* _selectedStreamConfigurationWrite;
	HMDReselectedStreamConfigurationWrite* _reselectedStreamConfigurationWrite;

}

@property (nonatomic,retain) HMDSupportedVideoStreamConfiguration * supportedVideoStreamConfiguration;                //@synthesize supportedVideoStreamConfiguration=_supportedVideoStreamConfiguration - In the implementation block
@property (nonatomic,retain) HMDSupportedAudioStreamConfiguration * supportedAudioStreamConfiguration;                //@synthesize supportedAudioStreamConfiguration=_supportedAudioStreamConfiguration - In the implementation block
@property (nonatomic,retain) HMDSupportedRTPConfiguration * supportedRTPConfiguration;                                //@synthesize supportedRTPConfiguration=_supportedRTPConfiguration - In the implementation block
@property (nonatomic,retain) HMDSetupEndPointRead * setupEndPointRead;                                                //@synthesize setupEndPointRead=_setupEndPointRead - In the implementation block
@property (nonatomic,retain) HMDSetupEndPointWrite * setupEndPointWrite;                                              //@synthesize setupEndPointWrite=_setupEndPointWrite - In the implementation block
@property (nonatomic,retain) HMDSelectedStreamConfigurationWrite * selectedStreamConfigurationWrite;                  //@synthesize selectedStreamConfigurationWrite=_selectedStreamConfigurationWrite - In the implementation block
@property (nonatomic,retain) HMDReselectedStreamConfigurationWrite * reselectedStreamConfigurationWrite;              //@synthesize reselectedStreamConfigurationWrite=_reselectedStreamConfigurationWrite - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMDSupportedAudioStreamConfiguration *)supportedAudioStreamConfiguration;
-(HMDSelectedStreamConfigurationWrite *)selectedStreamConfigurationWrite;
-(HMDSetupEndPointWrite *)setupEndPointWrite;
-(HMDSetupEndPointRead *)setupEndPointRead;
-(HMDReselectedStreamConfigurationWrite *)reselectedStreamConfigurationWrite;
-(HMDSupportedVideoStreamConfiguration *)supportedVideoStreamConfiguration;
-(void)setSupportedVideoStreamConfiguration:(HMDSupportedVideoStreamConfiguration *)arg1 ;
-(void)setSupportedAudioStreamConfiguration:(HMDSupportedAudioStreamConfiguration *)arg1 ;
-(HMDSupportedRTPConfiguration *)supportedRTPConfiguration;
-(void)setSupportedRTPConfiguration:(HMDSupportedRTPConfiguration *)arg1 ;
-(void)setSetupEndPointRead:(HMDSetupEndPointRead *)arg1 ;
-(void)setSetupEndPointWrite:(HMDSetupEndPointWrite *)arg1 ;
-(void)setSelectedStreamConfigurationWrite:(HMDSelectedStreamConfigurationWrite *)arg1 ;
-(void)setReselectedStreamConfigurationWrite:(HMDReselectedStreamConfigurationWrite *)arg1 ;
@end

