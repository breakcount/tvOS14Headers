/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppStoreOverlays.framework/AppStoreOverlays
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreOverlays/AppStoreOverlays-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface ASOOverlayTransitionContext : NSObject <NSSecureCoding> {

	NSMutableArray* _animationBlocks;
	CGRect _startFrame;
	CGRect _endFrame;

}

@property (nonatomic,retain) NSMutableArray * animationBlocks;              //@synthesize animationBlocks=_animationBlocks - In the implementation block
@property (assign,nonatomic) CGRect startFrame;                             //@synthesize startFrame=_startFrame - In the implementation block
@property (assign,nonatomic) CGRect endFrame;                               //@synthesize endFrame=_endFrame - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)endFrame;
-(NSMutableArray *)animationBlocks;
-(CGRect)startFrame;
-(void)addAnimationBlock:(/*^block*/id)arg1 ;
-(void)setStartFrame:(CGRect)arg1 ;
-(void)setEndFrame:(CGRect)arg1 ;
-(id)initWithStartFrame:(CGRect)arg1 endFrame:(CGRect)arg2 ;
-(void)setAnimationBlocks:(NSMutableArray *)arg1 ;
@end

