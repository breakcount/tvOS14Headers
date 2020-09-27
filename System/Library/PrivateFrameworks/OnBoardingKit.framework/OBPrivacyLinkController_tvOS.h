/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:24 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OnBoardingKit/OBPrivacyLinkController.h>

@class OBPrivacyLinkView;

@interface OBPrivacyLinkController_tvOS : OBPrivacyLinkController {

	OBPrivacyLinkView* _linkView;

}

@property (nonatomic,retain) OBPrivacyLinkView * linkView;              //@synthesize linkView=_linkView - In the implementation block
-(void)loadView;
-(id)initWithBundleIdentifiers:(id)arg1 ;
-(id)initWithPrivacyBundle:(id)arg1 ;
-(void)setLinkEnabled:(BOOL)arg1 ;
-(OBPrivacyLinkView *)linkView;
-(void)setLinkView:(OBPrivacyLinkView *)arg1 ;
@end
