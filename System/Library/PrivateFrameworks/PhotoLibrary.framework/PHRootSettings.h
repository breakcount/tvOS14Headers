/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PHSettings.h>

@class PHImageManagerSettings, PHResourceDownloadSettings;

@interface PHRootSettings : PHSettings {

	PHImageManagerSettings* _imageManagerSettings;
	PHResourceDownloadSettings* _resourceDownloadSettings;

}

@property (nonatomic,readonly) PHImageManagerSettings * imageManagerSettings;                      //@synthesize imageManagerSettings=_imageManagerSettings - In the implementation block
@property (nonatomic,readonly) PHResourceDownloadSettings * resourceDownloadSettings;              //@synthesize resourceDownloadSettings=_resourceDownloadSettings - In the implementation block
+(id)settingsControllerModule;
+(id)sharedSettings;
-(id)parentSettings;
-(PHImageManagerSettings *)imageManagerSettings;
-(PHResourceDownloadSettings *)resourceDownloadSettings;
@end

