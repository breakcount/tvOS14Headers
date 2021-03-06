/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:22 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/TVHomeSharingServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVHSMediaServerDiscoveryConfiguration;

@interface TVHSManager : NSObject {

	TVHSMediaServerDiscoveryConfiguration* _mediaServerDiscoveryConfiguration;

}

@property (nonatomic,copy) TVHSMediaServerDiscoveryConfiguration * mediaServerDiscoveryConfiguration;              //@synthesize mediaServerDiscoveryConfiguration=_mediaServerDiscoveryConfiguration - In the implementation block
+(id)sharedInstance;
-(id)init;
-(TVHSMediaServerDiscoveryConfiguration *)mediaServerDiscoveryConfiguration;
-(void)setMediaServerDiscoveryConfiguration:(TVHSMediaServerDiscoveryConfiguration *)arg1 ;
-(void)startManagementWithCompletion:(/*^block*/id)arg1 ;
-(void)enableMediaServerDiscoverWithDiscoveryMode:(unsigned long long)arg1 homeSharingAccountName:(id)arg2 homeSharingPassword:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

