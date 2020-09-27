/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/AXEventRepresentationDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AXEventPathInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying> {

	unsigned char _pathIndex;
	unsigned char _pathIdentity;
	unsigned char _pathProximity;
	BOOL _shouldSetTouchFlag;
	unsigned _pathWindowContextID;
	float _pathPressure;
	float _pathMajorRadius;
	float _pathMinorRadius;
	float _pathMajorRadiusTolerance;
	float _pathTwist;
	float _pathQuality;
	float _pathDensity;
	unsigned _pathEventMask;
	float _orbValue;
	unsigned _transducerType;
	float _altitude;
	float _azimuth;
	float _barrelPressure;
	unsigned _willUpdateMask;
	unsigned _didUpdateMask;
	void* _pathWindow;
	CGPoint _pathLocation;

}

@property (assign,nonatomic) void* pathWindow;                            //@synthesize pathWindow=_pathWindow - In the implementation block
@property (assign,nonatomic) unsigned char pathIndex;                     //@synthesize pathIndex=_pathIndex - In the implementation block
@property (assign,nonatomic) unsigned char pathIdentity;                  //@synthesize pathIdentity=_pathIdentity - In the implementation block
@property (assign,nonatomic) CGPoint pathLocation;                        //@synthesize pathLocation=_pathLocation - In the implementation block
@property (assign,nonatomic) unsigned pathWindowContextID;                //@synthesize pathWindowContextID=_pathWindowContextID - In the implementation block
@property (assign,nonatomic) unsigned char pathProximity;                 //@synthesize pathProximity=_pathProximity - In the implementation block
@property (assign,nonatomic) float pathPressure;                          //@synthesize pathPressure=_pathPressure - In the implementation block
@property (assign,nonatomic) float pathMajorRadius;                       //@synthesize pathMajorRadius=_pathMajorRadius - In the implementation block
@property (assign,nonatomic) float pathMinorRadius;                       //@synthesize pathMinorRadius=_pathMinorRadius - In the implementation block
@property (assign,nonatomic) float pathMajorRadiusTolerance;              //@synthesize pathMajorRadiusTolerance=_pathMajorRadiusTolerance - In the implementation block
@property (assign,nonatomic) float pathTwist;                             //@synthesize pathTwist=_pathTwist - In the implementation block
@property (assign,nonatomic) float pathQuality;                           //@synthesize pathQuality=_pathQuality - In the implementation block
@property (assign,nonatomic) float pathDensity;                           //@synthesize pathDensity=_pathDensity - In the implementation block
@property (assign,nonatomic) unsigned pathEventMask;                      //@synthesize pathEventMask=_pathEventMask - In the implementation block
@property (assign,nonatomic) float orbValue;                              //@synthesize orbValue=_orbValue - In the implementation block
@property (assign,nonatomic) unsigned transducerType;                     //@synthesize transducerType=_transducerType - In the implementation block
@property (assign,nonatomic) float altitude;                              //@synthesize altitude=_altitude - In the implementation block
@property (assign,nonatomic) float azimuth;                               //@synthesize azimuth=_azimuth - In the implementation block
@property (assign,nonatomic) float barrelPressure;                        //@synthesize barrelPressure=_barrelPressure - In the implementation block
@property (assign,nonatomic) unsigned willUpdateMask;                     //@synthesize willUpdateMask=_willUpdateMask - In the implementation block
@property (assign,nonatomic) unsigned didUpdateMask;                      //@synthesize didUpdateMask=_didUpdateMask - In the implementation block
@property (assign,nonatomic) BOOL shouldSetTouchFlag;                     //@synthesize shouldSetTouchFlag=_shouldSetTouchFlag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)representationWithPathInfo:(SCD_Struct_AX2*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)pathIndex;
-(void)setPathIndex:(unsigned char)arg1 ;
-(void)setAltitude:(float)arg1 ;
-(float)altitude;
-(float)azimuth;
-(void)setAzimuth:(float)arg1 ;
-(void)writeToPathInfo:(SCD_Struct_AX2*)arg1 ;
-(id)accessibilityEventRepresentationTabularDescription;
-(unsigned)transducerType;
-(void)setPathIdentity:(unsigned char)arg1 ;
-(void)setPathProximity:(unsigned char)arg1 ;
-(void)setPathPressure:(float)arg1 ;
-(void)setPathMajorRadius:(float)arg1 ;
-(void)setPathLocation:(CGPoint)arg1 ;
-(void)setPathWindowContextID:(unsigned)arg1 ;
-(void)setPathWindow:(void*)arg1 ;
-(unsigned char)pathIdentity;
-(unsigned char)pathProximity;
-(float)pathPressure;
-(float)pathMajorRadius;
-(CGPoint)pathLocation;
-(unsigned)pathWindowContextID;
-(void*)pathWindow;
-(float)pathMajorRadiusTolerance;
-(void)setPathMajorRadiusTolerance:(float)arg1 ;
-(float)pathTwist;
-(void)setPathTwist:(float)arg1 ;
-(float)pathMinorRadius;
-(void)setPathMinorRadius:(float)arg1 ;
-(float)pathQuality;
-(void)setPathQuality:(float)arg1 ;
-(float)pathDensity;
-(void)setPathDensity:(float)arg1 ;
-(unsigned)pathEventMask;
-(void)setPathEventMask:(unsigned)arg1 ;
-(float)orbValue;
-(void)setOrbValue:(float)arg1 ;
-(void)setTransducerType:(unsigned)arg1 ;
-(float)barrelPressure;
-(void)setBarrelPressure:(float)arg1 ;
-(unsigned)willUpdateMask;
-(void)setWillUpdateMask:(unsigned)arg1 ;
-(unsigned)didUpdateMask;
-(void)setDidUpdateMask:(unsigned)arg1 ;
-(BOOL)shouldSetTouchFlag;
-(void)setShouldSetTouchFlag:(BOOL)arg1 ;
@end

