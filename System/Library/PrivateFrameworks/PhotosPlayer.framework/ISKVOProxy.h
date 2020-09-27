/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ISKVOProxyDelegate;
@class NSArray, NSString;

@interface ISKVOProxy : NSObject {

	id _target;
	NSArray* _keyPaths;
	NSString* _identifier;
	id<ISKVOProxyDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ISKVOProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<ISKVOProxyDelegate>)delegate;
-(void)setDelegate:(id<ISKVOProxyDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)stopObservingTarget;
-(void)startObservingTarget;
-(id)initWithTarget:(id)arg1 keyPaths:(id)arg2 identifier:(id)arg3 delegate:(id)arg4 ;
@end

