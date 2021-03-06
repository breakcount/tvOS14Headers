/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:57 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol PXFeedbackFormDelegate <NSObject>
@optional
-(BOOL)wantsCustomFeedbackSection;
-(BOOL)wantsPositiveFeedbackSection;
-(BOOL)shouldContinuePresentingFormAfterFeedback;
-(void)userDidFinish:(BOOL)arg1;

@required
-(id)longTitleText;
-(id)viewTitleForRadar;
-(id)negativeFeedbackKeys;
-(id)positiveFeedbackKeys;
-(BOOL)shouldDisplaySecondaryFeedbackButtons;
-(void)userIndicatedLike;
-(void)userIndicatedDislike;
-(void)userSentPositiveFeedback:(id)arg1 negativeFeedback:(id)arg2 customFeedback:(id)arg3;

@end

