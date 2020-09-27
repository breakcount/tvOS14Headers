/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CMSCoding.h>

@class NSString, NSDictionary, NSDate, CMSPlayerContext, CMSContentFailure;

@interface CMSUpdateActivityRequest : NSObject <CMSCoding> {

	NSString* _sessionIdentifier;
	NSDictionary* _constraints;
	NSDictionary* _userActivityDictionary;
	NSDate* _timestamp;
	unsigned long long _report;
	CMSPlayerContext* _nowPlaying;
	CMSPlayerContext* _previouslyPlaying;
	CMSContentFailure* _contentFailure;

}

@property (nonatomic,retain) NSString * sessionIdentifier;                       //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * constraints;                         //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) NSDictionary * userActivityDictionary;              //@synthesize userActivityDictionary=_userActivityDictionary - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) unsigned long long report;                          //@synthesize report=_report - In the implementation block
@property (nonatomic,retain) CMSPlayerContext * nowPlaying;                      //@synthesize nowPlaying=_nowPlaying - In the implementation block
@property (nonatomic,retain) CMSPlayerContext * previouslyPlaying;               //@synthesize previouslyPlaying=_previouslyPlaying - In the implementation block
@property (nonatomic,retain) CMSContentFailure * contentFailure;                 //@synthesize contentFailure=_contentFailure - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(unsigned long long)report;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setReport:(unsigned long long)arg1 ;
-(NSDictionary *)constraints;
-(NSString *)sessionIdentifier;
-(void)setSessionIdentifier:(NSString *)arg1 ;
-(CMSPlayerContext *)nowPlaying;
-(void)setNowPlaying:(CMSPlayerContext *)arg1 ;
-(void)setConstraints:(NSDictionary *)arg1 ;
-(id)cmsCoded;
-(id)initForActivity:(id)arg1 report:(unsigned long long)arg2 nowPlaying:(id)arg3 previouslyPlaying:(id)arg4 ;
-(id)initForActivity:(id)arg1 failure:(id)arg2 whilePlaying:(id)arg3 nowPlaying:(id)arg4 ;
-(NSDictionary *)userActivityDictionary;
-(void)setUserActivityDictionary:(NSDictionary *)arg1 ;
-(CMSPlayerContext *)previouslyPlaying;
-(void)setPreviouslyPlaying:(CMSPlayerContext *)arg1 ;
-(CMSContentFailure *)contentFailure;
-(void)setContentFailure:(CMSContentFailure *)arg1 ;
@end

