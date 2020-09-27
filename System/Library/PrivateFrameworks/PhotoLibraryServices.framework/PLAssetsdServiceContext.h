/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSError;


@protocol PLAssetsdServiceContext <NSObject>
@property (nonatomic,readonly) BOOL isClientAuthorizedForTCCServicePhotos; 
@property (nonatomic,readonly) BOOL isClientAuthorizedForTCCServicePhotosAdd; 
@property (nonatomic,copy,readonly) NSString * clientDebugDescription; 
@property (nonatomic,copy) NSError * replyWarning; 
@required
-(BOOL)hasEntitlement:(id)arg1;
-(NSString *)clientDebugDescription;
-(BOOL)isClientAuthorizedForTCCServicePhotos;
-(BOOL)isClientAuthorizedForTCCServicePhotosAdd;
-(void)awaitLibraryState:(long long)arg1 completionHandler:(/*^block*/id)arg2;
-(NSError *)replyWarning;
-(void)setReplyWarning:(id)arg1;

@end

