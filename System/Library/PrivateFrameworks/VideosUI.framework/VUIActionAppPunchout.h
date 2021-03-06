/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIAction.h>

@class NSURL;

@interface VUIActionAppPunchout : VUIAction {

	NSURL* _punchoutURLWithoutAssociatedPlayable;

}

@property (nonatomic,readonly) NSURL * punchoutURLWithoutAssociatedPlayable;              //@synthesize punchoutURLWithoutAssociatedPlayable=_punchoutURLWithoutAssociatedPlayable - In the implementation block
-(id)initWithContextData:(id)arg1 ;
-(BOOL)_openPunchoutURL:(id)arg1 isPlaybackURL:(BOOL)arg2 ;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSURL *)punchoutURLWithoutAssociatedPlayable;
@end

