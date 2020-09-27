/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:19 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTEnvironmentDelegate <NSObject>
@optional
-(id)hostAppVersion;
-(id)environmentDataCenter;
-(id)environmentBuild;
-(id)environmentInstance;
-(id)parentPageUrl;

@required
-(id)cookies;
-(id)userAgent;
-(id)connectionType;
-(id)os;
-(id)osVersion;
-(id)hardwareModel;
-(id)userType;
-(id)appVersion;
-(id)pixelRatio;
-(id)screenHeight;
-(id)screenWidth;
-(id)pageUrl;
-(id)app;
-(id)osBuildNumber;
-(BOOL)isAnonymous;
-(id)capacityData;
-(id)capacityDataAvailable;
-(id)capacityDisk;
-(id)capacitySystem;
-(id)capacitySystemAvailable;
-(id)dsId;
-(id)hardwareFamily;
-(id)hostApp;
-(id)osLanguages;
-(id)resourceRevNum;
-(id)storeFrontHeader;
-(id)windowInnerHeight;
-(id)windowInnerWidth;
-(id)windowOuterHeight;
-(id)windowOuterWidth;

@end
