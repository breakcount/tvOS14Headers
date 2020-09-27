/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNConstraint.h>

@class SCNNode;

@interface SCNReplicatorConstraint : SCNConstraint {

	SCNNode* _target;
	BOOL _replicateOrientation;
	BOOL _replicatePosition;
	BOOL _replicateScale;
	SCNVector4 _orientationOffset;
	SCNVector3 _positionOffset;
	SCNVector3 _scaleOffset;

}

@property (nonatomic,retain) SCNNode * target; 
@property (assign,nonatomic) BOOL replicatesOrientation; 
@property (assign,nonatomic) BOOL replicatesPosition; 
@property (assign,nonatomic) BOOL replicatesScale; 
@property (assign,nonatomic) SCNVector4 orientationOffset; 
@property (assign,nonatomic) SCNVector3 positionOffset; 
@property (assign,nonatomic) SCNVector3 scaleOffset; 
+(BOOL)supportsSecureCoding;
+(id)replicatorConstraint;
+(id)replicatorConstraintWithTarget:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTarget:(SCNNode *)arg1 ;
-(SCNNode *)target;
-(SCNVector3)scaleOffset;
-(SCNVector3)positionOffset;
-(void)setPositionOffset:(SCNVector3)arg1 ;
-(BOOL)replicatesOrientation;
-(void)setReplicatesOrientation:(BOOL)arg1 ;
-(BOOL)replicatesPosition;
-(void)setReplicatesPosition:(BOOL)arg1 ;
-(BOOL)replicatesScale;
-(void)setReplicatesScale:(BOOL)arg1 ;
-(SCNVector4)orientationOffset;
-(void)setOrientationOffset:(SCNVector4)arg1 ;
-(void)setScaleOffset:(SCNVector3)arg1 ;
-(void)_customEncodingOfSCNReplicatorConstraint:(id)arg1 ;
-(void)_customDecodingOfSCNReplicatorConstraint:(id)arg1 ;
@end

