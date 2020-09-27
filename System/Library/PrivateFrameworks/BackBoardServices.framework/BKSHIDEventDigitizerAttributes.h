/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSHIDEventBaseAttributes.h>

@class NSArray;

@interface BKSHIDEventDigitizerAttributes : BKSHIDEventBaseAttributes {

	unsigned char _touchStreamIdentifier;
	BOOL _systemGesturesPossible;
	BOOL _systemGestureStateChange;
	float _maximumForce;
	double _digitizerSurfaceWidth;
	double _digitizerSurfaceHeight;
	NSArray* _pathAttributes;
	double _initialTouchTimestamp;

}

@property (assign,nonatomic) float maximumForce;                               //@synthesize maximumForce=_maximumForce - In the implementation block
@property (assign,nonatomic) double digitizerSurfaceWidth;                     //@synthesize digitizerSurfaceWidth=_digitizerSurfaceWidth - In the implementation block
@property (assign,nonatomic) double digitizerSurfaceHeight;                    //@synthesize digitizerSurfaceHeight=_digitizerSurfaceHeight - In the implementation block
@property (nonatomic,retain) NSArray * pathAttributes;                         //@synthesize pathAttributes=_pathAttributes - In the implementation block
@property (assign,nonatomic) double initialTouchTimestamp;                     //@synthesize initialTouchTimestamp=_initialTouchTimestamp - In the implementation block
@property (assign,nonatomic) unsigned char touchStreamIdentifier;              //@synthesize touchStreamIdentifier=_touchStreamIdentifier - In the implementation block
@property (assign,nonatomic) BOOL systemGesturesPossible;                      //@synthesize systemGesturesPossible=_systemGesturesPossible - In the implementation block
@property (assign,nonatomic) BOOL systemGestureStateChange;                    //@synthesize systemGestureStateChange=_systemGestureStateChange - In the implementation block
+(id)protobufSchema;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)appendDescriptionToFormatter:(id)arg1 ;
-(float)maximumForce;
-(void)setMaximumForce:(float)arg1 ;
-(double)digitizerSurfaceWidth;
-(void)setDigitizerSurfaceWidth:(double)arg1 ;
-(double)digitizerSurfaceHeight;
-(void)setDigitizerSurfaceHeight:(double)arg1 ;
-(NSArray *)pathAttributes;
-(void)setPathAttributes:(NSArray *)arg1 ;
-(double)initialTouchTimestamp;
-(void)setInitialTouchTimestamp:(double)arg1 ;
-(unsigned char)touchStreamIdentifier;
-(void)setTouchStreamIdentifier:(unsigned char)arg1 ;
-(BOOL)systemGesturesPossible;
-(void)setSystemGesturesPossible:(BOOL)arg1 ;
-(BOOL)systemGestureStateChange;
-(void)setSystemGestureStateChange:(BOOL)arg1 ;
@end

