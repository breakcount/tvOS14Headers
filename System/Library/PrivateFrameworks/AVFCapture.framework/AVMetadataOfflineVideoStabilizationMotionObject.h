/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVMetadataObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVMetadataOfflineVideoStabilizationMotionObjectInternal, NSDictionary;

@interface AVMetadataOfflineVideoStabilizationMotionObject : AVMetadataObject <NSCopying> {

	AVMetadataOfflineVideoStabilizationMotionObjectInternal* _offlineVISMotionObjectInternal;

}

@property (readonly) NSDictionary * payload; 
+(id)offlineVideoStabilizationMotionObjectWithTime:(SCD_Struct_AV0)arg1 motionDictionary:(id)arg2 input:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(NSDictionary *)payload;
-(id)initWithTime:(SCD_Struct_AV0)arg1 motionDictionary:(id)arg2 input:(id)arg3 ;
@end

