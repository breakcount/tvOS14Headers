/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:21 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSURL, NSDictionary;


@protocol RBBundleProperties <RBSProcessBundleDataSource>
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,copy,readonly) NSString * bundlePath; 
@property (nonatomic,copy,readonly) NSString * executablePath; 
@property (nonatomic,copy,readonly) NSString * extensionPointIdentifier; 
@property (nonatomic,readonly) NSURL * dataContainerURL; 
@property (nonatomic,readonly) NSDictionary * environmentVariables; 
@property (nonatomic,readonly) BOOL supportsBackgroundContentFetching; 
@property (nonatomic,readonly) BOOL supportsBackgroundNetworkAuthentication; 
@property (nonatomic,readonly) BOOL supportsBackgroundAudio; 
@property (nonatomic,readonly) BOOL supportsUnboundedTaskCompletion; 
@property (nonatomic,readonly) BOOL usesSocketMonitoring; 
@property (getter=isBackgroundRefreshEnabled,nonatomic,readonly) BOOL backgroundRefreshEnabled; 
@property (nonatomic,readonly) int preferredJetsamBand; 
@property (nonatomic,readonly) BOOL hasPreferredJetsamBand; 
@property (nonatomic,readonly) BOOL isExtension; 
@property (nonatomic,readonly) int platform; 
@required
-(NSString *)bundleIdentifier;
-(NSString *)bundlePath;
-(NSString *)executablePath;
-(BOOL)isExtension;
-(NSURL *)dataContainerURL;
-(NSDictionary *)environmentVariables;
-(int)platform;
-(NSString *)extensionPointIdentifier;
-(BOOL)usesSocketMonitoring;
-(BOOL)supportsBackgroundContentFetching;
-(BOOL)supportsBackgroundNetworkAuthentication;
-(id)bundleInfoValuesForKeys:(id)arg1;
-(BOOL)supportsBackgroundAudio;
-(BOOL)supportsUnboundedTaskCompletion;
-(BOOL)isBackgroundRefreshEnabled;
-(int)preferredJetsamBand;
-(BOOL)hasPreferredJetsamBand;

@end

