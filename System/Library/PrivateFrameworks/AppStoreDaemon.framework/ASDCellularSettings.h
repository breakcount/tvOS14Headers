/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ASDCellularSettings : NSObject {

	NSString* _defaultsKey;

}

@property (assign,nonatomic) BOOL allowAutomaticDownloads; 
@property (assign,nonatomic) long long cellularDataPrompt; 
+(id)settingsForIdentity:(id)arg1 ;
-(id)initWithDefaultsKey:(id)arg1 ;
-(id)_cellularSettings;
-(BOOL)allowAutomaticDownloads;
-(void)setAllowAutomaticDownloads:(BOOL)arg1 ;
-(long long)cellularDataPrompt;
-(void)setCellularDataPrompt:(long long)arg1 ;
@end

