/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIEnhancementCalculation.h>

@interface CIEnhancementCalculator : CIEnhancementCalculation {

	BOOL faceBalanceEnabled;
	BOOL vibranceEnabled;
	BOOL curvesEnabled;
	BOOL shadowsEnabled;

}

@property (assign) BOOL faceBalanceEnabled; 
@property (assign) BOOL vibranceEnabled; 
@property (assign) BOOL curvesEnabled; 
@property (assign) BOOL shadowsEnabled; 
-(id)init;
-(void)dealloc;
-(void)setFaceBalanceEnabled:(BOOL)arg1 ;
-(void)setVibranceEnabled:(BOOL)arg1 ;
-(void)setCurvesEnabled:(BOOL)arg1 ;
-(void)setShadowsEnabled:(BOOL)arg1 ;
-(BOOL)faceBalanceEnabled;
-(void)setupFaceColorFromImage:(id)arg1 usingContext:(id)arg2 features:(id)arg3 ;
-(void)setupHistogramsUsing:(id)arg1 redIndex:(int)arg2 greenIndex:(int)arg3 blueIndex:(int)arg4 ;
-(BOOL)vibranceEnabled;
-(BOOL)curvesEnabled;
-(BOOL)shadowsEnabled;
-(void)analyzeFeatures:(id)arg1 usingContext:(id)arg2 baseImage:(id)arg3 ;
-(id)histogramFromRows:(id)arg1 componentOffset:(unsigned)arg2 ;
-(id)setupFaceColorFromImage:(id)arg1 usingContext:(id)arg2 detectorOpts:(id)arg3 ;
@end

