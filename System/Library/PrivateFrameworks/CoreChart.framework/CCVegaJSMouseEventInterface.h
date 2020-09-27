/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CCVegaJSMouseEventInterface <JSExport>
@property (assign,nonatomic) double clientX; 
@property (assign,nonatomic) double clientY; 
@property (assign,nonatomic) double movementX; 
@property (assign,nonatomic) double movementY; 
@property (assign,nonatomic) BOOL propagationStopped; 
@property (assign,nonatomic) BOOL defaultPrevented; 
@property (assign,nonatomic) BOOL isConsumed; 
@required
-(BOOL)defaultPrevented;
-(void)stopPropagation;
-(void)preventDefault;
-(double)clientX;
-(double)clientY;
-(BOOL)isConsumed;
-(void)setDefaultPrevented:(BOOL)arg1;
-(id)initWithLocation:(CGPoint)arg1 movement:(CGPoint)arg2;
-(void)setPropagationStopped:(BOOL)arg1;
-(BOOL)propagationStopped;
-(void)setIsConsumed:(BOOL)arg1;
-(void)setClientX:(double)arg1;
-(void)setClientY:(double)arg1;
-(void)setMovementX:(double)arg1;
-(void)setMovementY:(double)arg1;
-(double)movementX;
-(double)movementY;

@end

