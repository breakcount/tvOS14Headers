/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:58 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IPAAdjustmentVersionInfo, NSArray;

@interface IPAAdjustmentStack : NSObject <NSCopying> {

	IPAAdjustmentVersionInfo* _versionInfo;
	NSArray* _adjustments;

}

@property (nonatomic,copy) IPAAdjustmentVersionInfo * versionInfo;              //@synthesize versionInfo=_versionInfo - In the implementation block
@property (nonatomic,copy) NSArray * adjustments;                               //@synthesize adjustments=_adjustments - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(NSArray *)adjustments;
-(void)setAdjustments:(NSArray *)arg1 ;
-(IPAAdjustmentVersionInfo *)versionInfo;
-(id)minimumVersionForFormat:(id)arg1 ;
-(id)_debugDescriptionSuffix;
-(BOOL)isEqualToAdjustmentStack:(id)arg1 ;
-(void)setVersionInfo:(IPAAdjustmentVersionInfo *)arg1 ;
@end

