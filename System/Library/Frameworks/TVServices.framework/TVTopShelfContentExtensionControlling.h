/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol TVTopShelfContentExtensionControlling <NSObject,BSDescriptionProviding>
@property (nonatomic,copy,readonly) NSString * extensionPointIdentifier; 
@property (nonatomic,copy,readonly) NSString * containingBundleIdentifier; 
@property (assign,nonatomic,__weak) id<TVTopShelfContentExtensionControllingDelegate> delegate; 
@required
-(void)invalidate;
-(id<TVTopShelfContentExtensionControllingDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(NSString *)containingBundleIdentifier;
-(NSString *)extensionPointIdentifier;
-(void)loadTopShelfContentAndAttributes:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;
-(void)performCustomActionWithURL:(id)arg1 actionUserInfo:(id)arg2 forItemWithIdentifier:(id)arg3 itemUserInfo:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)didSelectActionWithURL:(id)arg1 actionUserInfo:(id)arg2 forItemWithIdentifier:(id)arg3 itemUserInfo:(id)arg4;
-(void)didShowItemWithIdentifier:(id)arg1 userInfo:(id)arg2;

@end

