/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIHyperregion_Internal.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface _UISimplex : NSObject <_UIHyperregion_Internal, NSSecureCoding, NSCopying> {

	double* __points;
	SCD_Struct_UI29 _clean;
	int __cggetriWorkspaceSize;
	unsigned long long __dimensions;
	unsigned long long __pointCount;
	double* __projection;
	unsigned long long __missingNormalCount;
	double* __missingNormals;
	double* __facetNormals;
	double* __facetNormalOffsets;
	double* __incenter;
	NSArray* __facets;
	double* __cggetriWorkspace;
	double* __temp;

}

@property (nonatomic,readonly) double* _projection;                                 //@synthesize _projection=__projection - In the implementation block
@property (nonatomic,readonly) unsigned long long _missingNormalCount;              //@synthesize _missingNormalCount=__missingNormalCount - In the implementation block
@property (nonatomic,readonly) double* _missingNormals;                             //@synthesize _missingNormals=__missingNormals - In the implementation block
@property (nonatomic,readonly) double* _facetNormals;                               //@synthesize _facetNormals=__facetNormals - In the implementation block
@property (nonatomic,readonly) double* _facetNormalOffsets;                         //@synthesize _facetNormalOffsets=__facetNormalOffsets - In the implementation block
@property (nonatomic,readonly) double* _incenter;                                   //@synthesize _incenter=__incenter - In the implementation block
@property (nonatomic,readonly) NSArray * _facets;                                   //@synthesize _facets=__facets - In the implementation block
@property (nonatomic,readonly) int _cggetriWorkspaceSize;                           //@synthesize _cggetriWorkspaceSize=__cggetriWorkspaceSize - In the implementation block
@property (nonatomic,readonly) double* _cggetriWorkspace;                           //@synthesize _cggetriWorkspace=__cggetriWorkspace - In the implementation block
@property (nonatomic,readonly) double* _temp;                                       //@synthesize _temp=__temp - In the implementation block
@property (nonatomic,readonly) unsigned long long _pointCount;                      //@synthesize _pointCount=__pointCount - In the implementation block
@property (nonatomic,readonly) const double* _points; 
@property (nonatomic,readonly) unsigned long long _dimensions;                      //@synthesize _dimensions=__dimensions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingSelf;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(const double*)_points;
-(unsigned long long)_pointCount;
-(unsigned long long)_dimensions;
-(double*)_projection;
-(void)_closestPoint:(double*)arg1 toPoint:(const double*)arg2 ;
-(double*)_temp;
-(id)initWithDimensions:(unsigned long long)arg1 pointCount:(unsigned long long)arg2 ;
-(void)_mutatePoints:(/*^block*/id)arg1 ;
-(void)_recomputeMetadata;
-(unsigned long long)_missingNormalCount;
-(double*)_missingNormals;
-(double*)_facetNormals;
-(double*)_facetNormalOffsets;
-(double*)_incenter;
-(NSArray *)_facets;
-(int)_cggetriWorkspaceSize;
-(double*)_cggetriWorkspace;
@end

