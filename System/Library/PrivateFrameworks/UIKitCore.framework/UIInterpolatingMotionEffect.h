/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIMotionEffect.h>

@class NSString;

@interface UIInterpolatingMotionEffect : UIMotionEffect {

	double _horizontalAccelerationBoostFactor;
	double _verticalAccelerationBoostFactor;
	NSString* _keyPath;
	long long _type;
	id _minimumRelativeValue;
	id _maximumRelativeValue;

}

@property (nonatomic,readonly) NSString * keyPath;                 //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) long long type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) id minimumRelativeValue;              //@synthesize minimumRelativeValue=_minimumRelativeValue - In the implementation block
@property (nonatomic,retain) id maximumRelativeValue;              //@synthesize maximumRelativeValue=_maximumRelativeValue - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(NSString *)keyPath;
-(id)initWithKeyPath:(id)arg1 type:(long long)arg2 ;
-(void)setMinimumRelativeValue:(id)arg1 ;
-(void)setMaximumRelativeValue:(id)arg1 ;
-(id)keyPathsAndRelativeValuesForViewerOffset:(UIOffset)arg1 ;
-(void)_setType:(long long)arg1 ;
-(id)_keyPathsAndRelativeValuesForPose:(id)arg1 ;
-(double)_horizontalAccelerationBoostFactor;
-(void)_setHorizontalAccelerationBoostFactor:(double)arg1 ;
-(double)_verticalAccelerationBoostFactor;
-(void)_setVerticalAccelerationBoostFactor:(double)arg1 ;
-(void)_setKeyPath:(id)arg1 ;
-(id)minimumRelativeValue;
-(id)maximumRelativeValue;
@end

