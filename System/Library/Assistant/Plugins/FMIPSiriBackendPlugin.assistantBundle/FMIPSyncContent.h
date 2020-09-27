/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Assistant/Plugins/FMIPSiriBackendPlugin.assistantBundle/FMIPSiriBackendPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface FMIPSyncContent : NSObject {

	NSString* _firstAnchor;
	NSString* _postAnchor;
	NSString* _validity;
	NSDictionary* _syncObjects;

}

@property (nonatomic,retain) NSDictionary * syncObjects;              //@synthesize syncObjects=_syncObjects - In the implementation block
@property (nonatomic,retain) NSString * firstAnchor;                  //@synthesize firstAnchor=_firstAnchor - In the implementation block
@property (nonatomic,retain) NSString * postAnchor;                   //@synthesize postAnchor=_postAnchor - In the implementation block
@property (nonatomic,retain) NSString * validity;                     //@synthesize validity=_validity - In the implementation block
-(NSString *)validity;
-(void)setValidity:(NSString *)arg1 ;
-(NSString *)firstAnchor;
-(void)setPostAnchor:(NSString *)arg1 ;
-(void)setFirstAnchor:(NSString *)arg1 ;
-(void)setSyncObjects:(NSDictionary *)arg1 ;
-(NSDictionary *)syncObjects;
-(id)initWithObjects:(id)arg1 anchor:(id)arg2 ;
-(void)objectForPreAnchor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)postAnchor;
@end

