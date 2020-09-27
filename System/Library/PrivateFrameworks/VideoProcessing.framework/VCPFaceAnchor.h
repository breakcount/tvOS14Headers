/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, VCPFaceGeometry;

@interface VCPFaceAnchor : NSObject <NSSecureCoding> {

	NSDictionary* _blendShapes;
	VCPFaceGeometry* _geometry;
	SCD_Struct_VC48 _transform;

}

@property (nonatomic,readonly) SCD_Struct_VC48 transform;               //@synthesize transform=_transform - In the implementation block
@property (nonatomic,readonly) NSDictionary * blendShapes;              //@synthesize blendShapes=_blendShapes - In the implementation block
@property (nonatomic,readonly) VCPFaceGeometry * geometry;              //@synthesize geometry=_geometry - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_VC48)transform;
-(VCPFaceGeometry *)geometry;
-(id)initWithTransform:(SCD_Struct_VC48)arg1 blendShapes:(id)arg2 geometry:(id)arg3 ;
-(NSDictionary *)blendShapes;
@end

