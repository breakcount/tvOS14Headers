/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface CIDualRedEyeRepairTuning : NSObject {

	NSDictionary* repairTuning;
	NSDictionary* sessionTuning;

}

@property (nonatomic,retain) NSDictionary * repairTuning; 
@property (nonatomic,retain) NSDictionary * sessionTuning; 
+(id)repairParametersForTuning:(unsigned long long)arg1 ;
+(id)sessionParametersForTuning:(unsigned long long)arg1 ;
+(id)defaultRepairParameters;
+(id)defaultSessionParameters;
-(void)dealloc;
-(id)initWithTuning:(unsigned long long)arg1 ;
-(NSDictionary *)repairTuning;
-(NSDictionary *)sessionTuning;
-(void)setTuningParametersByPortType:(id)arg1 withCameraMetadata:(id)arg2 ;
-(void)setRepairTuning:(NSDictionary *)arg1 ;
-(void)setSessionTuning:(NSDictionary *)arg1 ;
-(unsigned long long)tuningFromCameraModel:(id)arg1 portType:(id)arg2 ;
-(void)updateWithCaptureSetup:(id)arg1 portType:(id)arg2 ;
@end

