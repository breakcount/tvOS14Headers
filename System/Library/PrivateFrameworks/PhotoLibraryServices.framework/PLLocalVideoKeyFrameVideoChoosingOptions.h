/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLVideoChoosingOptions.h>

@class NSString;

@interface PLLocalVideoKeyFrameVideoChoosingOptions : NSObject <PLVideoChoosingOptions>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isNetworkAccessAllowed;
-(long long)videoVersion;
-(BOOL)restrictToPlayableOnCurrentDevice;
-(long long)videoDeliveryMode;
-(BOOL)isMediumHighQualityAllowed;
-(BOOL)isStreamingAllowed;
@end
