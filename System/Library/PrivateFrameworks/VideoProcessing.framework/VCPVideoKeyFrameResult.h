/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPVideoKeyFrameResult : NSObject {

	float _score;
	SCD_Struct_VC6 _timeStamp;

}

@property (nonatomic,readonly) SCD_Struct_VC6 timeStamp;              //@synthesize timeStamp=_timeStamp - In the implementation block
@property (nonatomic,readonly) float score;                           //@synthesize score=_score - In the implementation block
-(float)score;
-(SCD_Struct_VC6)timeStamp;
-(id)initWithTime:(SCD_Struct_VC6)arg1 andScore:(float)arg2 ;
@end

