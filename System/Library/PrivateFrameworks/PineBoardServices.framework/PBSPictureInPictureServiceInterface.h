/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:58 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PBSPictureInPictureServiceInterface <NSObject>
@required
-(void)cancelPictureInPictureFromPlayerInterface:(long long)arg1;
-(void)setServiceDelegate:(id)arg1;
-(void)fetchCurrentPictureInPictureStateWithReply:(/*^block*/id)arg1;
-(void)applyPictureInPictureInsetsValue:(id)arg1 fromSource:(id)arg2 withAnimationSettings:(id)arg3 usingAnimationFence:(id)arg4;
-(void)movePictureInPicture;
-(void)expandPictureInPicture;
-(void)mutePictureInPicture:(BOOL)arg1;

@end
