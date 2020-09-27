/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:51 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSError;


@protocol TRIDownloadNotificationProtocol <NSObject>
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) unsigned long long progress; 
@property (nonatomic,readonly) unsigned long long progressMaxValue; 
@property (nonatomic,readonly) NSError * error; 
@required
-(unsigned long long)type;
-(NSError *)error;
-(unsigned long long)progress;
-(unsigned long long)progressMaxValue;

@end
