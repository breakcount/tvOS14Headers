/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:55 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriPlaybackControlIntents.framework/SiriPlaybackControlIntents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INObject.h>

@class NSString, NSDate;

@interface DeviceContext : INObject

@property (readonly,nonatomic) NSString * description; 
@property (nonatomic,copy) NSString * routeId; 
@property (assign,nonatomic) long long proximity; 
@property (assign,nonatomic) long long nowPlayingState; 
@property (nonatomic,copy) NSDate * nowPlayingTimestamp; 
@property (assign,nonatomic) long long nowPlayingMediaType; 
@property (nonatomic,copy) NSString * groupId; 
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
@end

