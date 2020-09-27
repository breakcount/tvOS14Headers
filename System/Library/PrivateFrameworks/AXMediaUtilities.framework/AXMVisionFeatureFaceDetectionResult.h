/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID, AXMVisionFeatureFaceAttributes, NSDictionary, AXMVisionFeatureFaceLandmarks;

@interface AXMVisionFeatureFaceDetectionResult : NSObject <NSSecureCoding> {

	long long _likelyExpression;
	NSString* _name;
	NSUUID* _uuid;
	unsigned long long _faceId;
	double _rectanglesConfidence;
	double _nameConfidence;
	AXMVisionFeatureFaceAttributes* _attributes;
	double _attributesConfidence;
	NSDictionary* _expressionsAndConfidence;
	AXMVisionFeatureFaceLandmarks* _landmarks;
	AXMVisionFeatureFaceLandmarks* _landmarks3d;
	double _landmarksConfidence;
	double _poseConfidence;
	CGRect _frame;
	SCD_Struct_AX8 _pose;

}

@property (nonatomic,retain) NSUUID * uuid;                                            //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) unsigned long long faceId;                                //@synthesize faceId=_faceId - In the implementation block
@property (assign,nonatomic) CGRect frame;                                             //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) double rectanglesConfidence;                              //@synthesize rectanglesConfidence=_rectanglesConfidence - In the implementation block
@property (nonatomic,retain) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double nameConfidence;                                    //@synthesize nameConfidence=_nameConfidence - In the implementation block
@property (nonatomic,retain) AXMVisionFeatureFaceAttributes * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) double attributesConfidence;                              //@synthesize attributesConfidence=_attributesConfidence - In the implementation block
@property (nonatomic,retain) NSDictionary * expressionsAndConfidence;                  //@synthesize expressionsAndConfidence=_expressionsAndConfidence - In the implementation block
@property (nonatomic,readonly) long long likelyExpression; 
@property (nonatomic,retain) AXMVisionFeatureFaceLandmarks * landmarks;                //@synthesize landmarks=_landmarks - In the implementation block
@property (nonatomic,retain) AXMVisionFeatureFaceLandmarks * landmarks3d;              //@synthesize landmarks3d=_landmarks3d - In the implementation block
@property (assign,nonatomic) double landmarksConfidence;                               //@synthesize landmarksConfidence=_landmarksConfidence - In the implementation block
@property (assign,nonatomic) SCD_Struct_AX8 pose;                                      //@synthesize pose=_pose - In the implementation block
@property (assign,nonatomic) double poseConfidence;                                    //@synthesize poseConfidence=_poseConfidence - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localizedStringFormatterForExpression:(id)arg1 ;
+(id)nameForFaceExpression:(long long)arg1 ;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(void)setName:(NSString *)arg1 ;
-(AXMVisionFeatureFaceAttributes *)attributes;
-(void)setAttributes:(AXMVisionFeatureFaceAttributes *)arg1 ;
-(NSUUID *)uuid;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(unsigned long long)faceId;
-(void)setFaceId:(unsigned long long)arg1 ;
-(AXMVisionFeatureFaceLandmarks *)landmarks;
-(void)setLandmarks:(AXMVisionFeatureFaceLandmarks *)arg1 ;
-(SCD_Struct_AX8)pose;
-(void)setPoseConfidence:(double)arg1 ;
-(double)poseConfidence;
-(NSDictionary *)expressionsAndConfidence;
-(double)nameConfidence;
-(AXMVisionFeatureFaceLandmarks *)landmarks3d;
-(void)setRectanglesConfidence:(double)arg1 ;
-(void)setAttributesConfidence:(double)arg1 ;
-(void)setExpressionsAndConfidence:(NSDictionary *)arg1 ;
-(void)setLandmarks3d:(AXMVisionFeatureFaceLandmarks *)arg1 ;
-(void)setLandmarksConfidence:(double)arg1 ;
-(void)setPose:(SCD_Struct_AX8)arg1 ;
-(long long)likelyExpression;
-(double)rectanglesConfidence;
-(double)attributesConfidence;
-(double)landmarksConfidence;
-(void)setNameConfidence:(double)arg1 ;
-(id)descriptionForExpression:(long long)arg1 ;
-(long long)_expressionForString:(id)arg1 ;
-(double)confidenceForExpression:(long long)arg1 ;
@end

