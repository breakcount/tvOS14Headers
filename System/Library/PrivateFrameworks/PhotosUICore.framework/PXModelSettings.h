/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:54 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXSettings.h>

@interface PXModelSettings : PXSettings {

	double _photoAnalysisGraphInitialGraceDelay;
	double _photoAnalysisGraphProgressUpdateInterval;

}

@property (assign,nonatomic) double photoAnalysisGraphInitialGraceDelay;                   //@synthesize photoAnalysisGraphInitialGraceDelay=_photoAnalysisGraphInitialGraceDelay - In the implementation block
@property (assign,nonatomic) double photoAnalysisGraphProgressUpdateInterval;              //@synthesize photoAnalysisGraphProgressUpdateInterval=_photoAnalysisGraphProgressUpdateInterval - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(id)parentSettings;
-(double)photoAnalysisGraphInitialGraceDelay;
-(void)setPhotoAnalysisGraphInitialGraceDelay:(double)arg1 ;
-(double)photoAnalysisGraphProgressUpdateInterval;
-(void)setPhotoAnalysisGraphProgressUpdateInterval:(double)arg1 ;
@end

