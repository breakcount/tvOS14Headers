/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCRedundancyControlAlgorithm <NSObject>
@property (nonatomic,readonly) unsigned redundancyPercentage; 
@property (nonatomic,readonly) double redundancyInterval; 
@optional
-(SCD_Struct_VC50*)getFecLevelPerFrameSizeVector;

@required
-(void)updateRedundancyStrategyWithNetworkStatistics:(SCD_Struct_AV32)arg1;
-(unsigned)redundancyPercentage;
-(double)redundancyInterval;

@end

