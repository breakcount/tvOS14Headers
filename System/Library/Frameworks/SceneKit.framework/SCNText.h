/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNGeometry.h>

@class UIBezierPath, UIFont, NSString;

@interface SCNText : SCNGeometry {

	float _flatness;
	float _chamferRadius;
	float _extrusionDepth;
	float _discretizedStraightLineMaxLength;
	UIBezierPath* _chamferProfile;
	long long _primitiveType;
	id _string;
	UIFont* _font;
	BOOL _wrapped;
	int _alignmentMode;
	int _truncationMode;
	BOOL _useCustomContainerFrame;
	CGRect _customContainerFrame;
	BOOL __wantsSeparateGeometryElements;

}

@property (assign,nonatomic) double extrusionDepth; 
@property (nonatomic,copy) id string; 
@property (nonatomic,retain) UIFont * font; 
@property (assign,getter=isWrapped,nonatomic) BOOL wrapped; 
@property (assign,nonatomic) CGRect containerFrame; 
@property (nonatomic,copy) NSString * truncationMode; 
@property (nonatomic,copy) NSString * alignmentMode; 
@property (assign,nonatomic) double chamferRadius; 
@property (nonatomic,copy) UIBezierPath * chamferProfile; 
@property (assign,nonatomic) double flatness; 
+(BOOL)supportsSecureCoding;
+(id)text;
+(id)textWithString:(id)arg1 extrusionDepth:(double)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)string;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setString:(id)arg1 ;
-(long long)primitiveType;
-(void)setPrimitiveType:(long long)arg1 ;
-(UIFont *)font;
-(void)setFont:(UIFont *)arg1 ;
-(BOOL)isWrapped;
-(void)setWrapped:(BOOL)arg1 ;
-(NSString *)truncationMode;
-(void)setTruncationMode:(NSString *)arg1 ;
-(NSString *)alignmentMode;
-(void)setAlignmentMode:(NSString *)arg1 ;
-(SCD_Struct_SC162*)params;
-(BOOL)getBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2 ;
-(id)presentationGeometry;
-(BOOL)getBoundingSphereCenter:(SCNVector3*)arg1 radius:(double*)arg2 ;
-(double)flatness;
-(void)setFlatness:(double)arg1 ;
-(_C3DGeometry*)__createCFObject;
-(void)_syncObjCModel:(_C3DTextGeometry*)arg1 ;
-(void)setChamferRadius:(double)arg1 ;
-(double)chamferRadius;
-(double)extrusionDepth;
-(void)setExtrusionDepth:(double)arg1 ;
-(UIBezierPath *)chamferProfile;
-(void)setChamferProfile:(UIBezierPath *)arg1 ;
-(CGRect)containerFrame;
-(void)setContainerFrame:(CGRect)arg1 ;
-(id)patchFont:(id)arg1 ;
-(id)initPresentationTextGeometryWithTextGeometryRef:(_C3DTextGeometry*)arg1 ;
-(id)initWithTextGeometryRef:(_C3DTextGeometry*)arg1 ;
-(void)_customEncodingOfSCNText:(id)arg1 ;
-(void)_customDecodingOfSCNText:(id)arg1 ;
-(void)setDiscretizedStraightLineMaxLength:(double)arg1 ;
-(void)set_wantsSeparateGeometryElements:(BOOL)arg1 ;
-(id)copyAnimationPathForKeyPath:(id)arg1 animation:(id)arg2 ;
-(BOOL)_wantsSeparateGeometryElements;
-(double)discretizedStraightLineMaxLength;
@end

