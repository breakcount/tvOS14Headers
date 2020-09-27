/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class IKViewElement, OBPrivacyLinkController;

@interface _TVPrivacyLinkViewController : UIViewController {

	IKViewElement* _viewElement;
	OBPrivacyLinkController* _impl;

}

@property (nonatomic,retain) OBPrivacyLinkController * impl;              //@synthesize impl=_impl - In the implementation block
@property (nonatomic,readonly) IKViewElement * viewElement;               //@synthesize viewElement=_viewElement - In the implementation block
-(OBPrivacyLinkController *)impl;
-(void)loadView;
-(void)setImpl:(OBPrivacyLinkController *)arg1 ;
-(IKViewElement *)viewElement;
-(void)updateWithViewElement:(id)arg1 ;
@end

