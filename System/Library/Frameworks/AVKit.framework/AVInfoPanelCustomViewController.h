/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVInfoPanelContentViewController.h>

@class UIViewController;

@interface AVInfoPanelCustomViewController : AVInfoPanelContentViewController {

	UIViewController* _externalViewController;

}

@property (nonatomic,readonly) UIViewController * externalViewController;              //@synthesize externalViewController=_externalViewController - In the implementation block
-(id)title;
-(BOOL)hasContent;
-(void)loadView;
-(id)preferredFocusEnvironments;
-(id)initWithExternalViewController:(id)arg1 ;
-(double)_preferredContentHeight;
-(UIViewController *)externalViewController;
@end

