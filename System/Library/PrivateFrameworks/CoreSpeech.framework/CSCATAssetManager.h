/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CSCATAssetManagerDelegate;
@class NSObject;

@interface CSCATAssetManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<CSCATAssetManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSCATAssetManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
+(id)getCATXPCConnection;
-(id)init;
-(id<CSCATAssetManagerDelegate>)delegate;
-(void)setDelegate:(id<CSCATAssetManagerDelegate>)arg1 ;
-(void)fetchRemoteCATAssetForResource:(id)arg1 withNameOfFile:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)downloadForManifest:(id)arg1 withAssetName:(id)arg2 ;
@end
