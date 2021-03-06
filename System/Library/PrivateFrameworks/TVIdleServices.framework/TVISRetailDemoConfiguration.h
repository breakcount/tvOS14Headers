/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:22 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVIdleServices.framework/TVIdleServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface TVISRetailDemoConfiguration : NSObject {

	NSURL* _remoteManifestURL;
	NSURL* _localManifestURL;
	NSURL* _cacheURL;

}

@property (nonatomic,readonly) NSURL * remoteManifestURL;              //@synthesize remoteManifestURL=_remoteManifestURL - In the implementation block
@property (nonatomic,readonly) NSURL * localManifestURL;               //@synthesize localManifestURL=_localManifestURL - In the implementation block
@property (nonatomic,readonly) NSURL * cacheURL;                       //@synthesize cacheURL=_cacheURL - In the implementation block
+(id)defaultConfiguration;
-(NSURL *)cacheURL;
-(NSURL *)localManifestURL;
-(NSURL *)remoteManifestURL;
-(id)initWithRemoteManifestURL:(id)arg1 cacheURL:(id)arg2 localManifestURL:(id)arg3 ;
@end

