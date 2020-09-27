/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLChangePublisher.h>

@class PLAssetsdClient, NSString;

@interface PLClientChangePublisher : NSObject <PLChangePublisher> {

	PLAssetsdClient* _assetsdClient;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAssetsdClient:(id)arg1 ;
-(void)pauseLaunchEventNotifications;
-(void)unpauseLaunchEventNotifications;
-(id)publishChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 transaction:(id)arg3 ;
@end

