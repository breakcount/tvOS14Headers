/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <QuartzCore/CALayer.h>

@interface MKLayer : CALayer {

	CGRect _hitBounds;
	CGPoint _hitOffset;
	CGPoint _hitOutset;

}

@property (nonatomic,readonly) CGRect hitBounds;              //@synthesize hitBounds=_hitBounds - In the implementation block
@property (assign,nonatomic) CGPoint hitOffset;               //@synthesize hitOffset=_hitOffset - In the implementation block
@property (assign,nonatomic) CGPoint hitOutset;               //@synthesize hitOutset=_hitOutset - In the implementation block
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(void)setHitOffset:(CGPoint)arg1 ;
-(void)setHitOutset:(CGPoint)arg1 ;
-(CGRect)hitBounds;
-(CGPoint)hitOffset;
-(CGPoint)hitOutset;
@end

