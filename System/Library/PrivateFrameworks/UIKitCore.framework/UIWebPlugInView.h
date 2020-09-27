/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <WebCore/WAKView.h>

@class UIWebDocumentView, CALayer, UIView;

@interface UIWebPlugInView : WAKView {

	UIWebDocumentView* _webView;
	CALayer* _hostingLayer;
	UIView* _uiView;
	CFRunLoopObserverRef _mainRunLoopDrawObserver;
	BOOL _isFullScreen;
	BOOL _parentedInLayer;
	BOOL _isQuickTimePlugIn;
	BOOL _isMapViewPlugIn;
	BOOL _isiAdPlugIn;

}

@property (assign,getter=isParentedInLayer,nonatomic) BOOL parentedInLayer;              //@synthesize parentedInLayer=_parentedInLayer - In the implementation block
@property (assign,nonatomic) BOOL isQuickTimePlugIn;                                     //@synthesize isQuickTimePlugIn=_isQuickTimePlugIn - In the implementation block
@property (assign,nonatomic) BOOL isMapViewPlugIn;                                       //@synthesize isMapViewPlugIn=_isMapViewPlugIn - In the implementation block
@property (assign,nonatomic) BOOL isiAdPlugIn;                                           //@synthesize isiAdPlugIn=_isiAdPlugIn - In the implementation block
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)dealloc;
-(void)layout;
-(void)setFrame:(CGRect)arg1 ;
-(id)objectForWebScript;
-(void)mouseDown:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)viewDidMoveToWindow;
-(void)invalidateGState;
-(BOOL)isQuickTimePlugIn;
-(void)webPlugInStop;
-(void)webPlugInDestroy;
-(void)webPlugInStart;
-(void)webPlugInInitialize;
-(id)pluginLayer;
-(BOOL)willProvidePluginLayer;
-(void)attachPluginLayer;
-(void)detachPluginLayer;
-(void)setWebView:(id)arg1 ;
-(void)reshape;
-(id)initWithWebView:(id)arg1 plugInView:(id)arg2 ;
-(void)setIsQuickTimePlugIn:(BOOL)arg1 ;
-(void)setIsMapViewPlugIn:(BOOL)arg1 ;
-(void)setIsiAdPlugIn:(BOOL)arg1 ;
-(id)plugInView;
-(void)_viewDidMoveToWindowOnMainThread;
-(void)_reshapeOnMainThread;
-(BOOL)isParented;
-(BOOL)isParentedInLayer;
-(void)setParentedInLayer:(BOOL)arg1 ;
-(void)_connectPluginLayers;
-(void)_disconnectPluginLayers;
-(void)_attachPluginLayerOnMainThread;
-(void)_detachPluginLayerOnMainThread;
-(BOOL)isMapViewPlugIn;
-(BOOL)isiAdPlugIn;
@end

