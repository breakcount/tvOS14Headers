/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:46 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageAlignmentObservation.h>

@interface VNImageTranslationAlignmentObservation : VNImageAlignmentObservation {

	CGAffineTransform _alignmentTransform;

}

@property (assign,nonatomic) CGAffineTransform alignmentTransform;              //@synthesize alignmentTransform=_alignmentTransform - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGAffineTransform)alignmentTransform;
-(void)setAlignmentTransform:(CGAffineTransform)arg1 ;
@end
