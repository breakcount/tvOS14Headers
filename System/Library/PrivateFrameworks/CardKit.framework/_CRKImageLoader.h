/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:24:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFResourceLoader.h>

@protocol _CRKImageLoaderDelegate;
@class INUIImageLoader, NSString;

@interface _CRKImageLoader : NSObject <SFResourceLoader> {

	INUIImageLoader* _imageLoader;
	BOOL _active;
	id<_CRKImageLoaderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_CRKImageLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL active;                                              //@synthesize active=_active - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)sharedInstanceWithInitialDelegate:(id)arg1 ;
-(id<_CRKImageLoaderDelegate>)delegate;
-(void)setDelegate:(id<_CRKImageLoaderDelegate>)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)active;
-(BOOL)loadImage:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_registerWithSearchFoundation;
-(void)_unregisterWithSearchFoundaton;
-(id)resourceIdentifierForLocalImageType:(int)arg1 ;
-(void)_loadSFImageForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

