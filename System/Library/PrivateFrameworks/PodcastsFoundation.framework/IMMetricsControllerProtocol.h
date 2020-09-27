/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:03 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol IMMetricsControllerProtocol <NSObject>
@property (nonatomic,readonly) NSString * topic; 
@required
-(NSString *)topic;
-(BOOL)shouldSuppressUserInfo;
-(void)recordEvent:(id)arg1;
-(void)flushImmediately;
-(BOOL)shouldIgnoreDNU;

@end

