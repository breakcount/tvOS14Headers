/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLEngineComponent <NSObject>
@optional
-(void)getStatusWithCompletionHandler:(/*^block*/id)arg1;
-(void)getStatusDictionaryWithCompletionHandler:(/*^block*/id)arg1;

@required
-(void)openWithCompletionHandler:(/*^block*/id)arg1;
-(void)closeAndDeactivate:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;
-(id)componentName;

@end

