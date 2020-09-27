/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class TVLScriptArrayElement, TVLDocument;

@interface TVLScriptViewController : UIViewController {

	TVLScriptArrayElement* _feedElement;
	TVLDocument* _feedDocument;

}

@property (nonatomic,retain) TVLScriptArrayElement * feedElement;              //@synthesize feedElement=_feedElement - In the implementation block
@property (nonatomic,retain) TVLDocument * feedDocument;                       //@synthesize feedDocument=_feedDocument - In the implementation block
-(id)context;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(TVLDocument *)feedDocument;
-(id)initWithFeedElement:(id)arg1 ;
-(void)setFeedDocument:(TVLDocument *)arg1 ;
-(TVLScriptArrayElement *)feedElement;
-(void)setFeedElement:(TVLScriptArrayElement *)arg1 ;
@end

