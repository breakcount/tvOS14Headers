/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <UIKitCore/_UIIVCResponseDelegate.h>

@protocol _UIIVCResponseDelegate;
@class NSString;

@interface UIRemoteInputViewControllerInterface : NSExtensionContext <_UIIVCResponseDelegate> {

	id<_UIIVCResponseDelegate> _responseDelegate;

}

@property (nonatomic,retain) id<_UIIVCResponseDelegate> responseDelegate;              //@synthesize responseDelegate=_responseDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)dealloc;
-(void)_openURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setResponseDelegate:(id<_UIIVCResponseDelegate>)arg1 ;
-(id<_UIIVCResponseDelegate>)responseDelegate;
-(void)_tearDownRemoteService;
-(void)_handleInputViewControllerState:(id)arg1 ;
-(void)_performInputViewControllerOutput:(id)arg1 ;
@end

