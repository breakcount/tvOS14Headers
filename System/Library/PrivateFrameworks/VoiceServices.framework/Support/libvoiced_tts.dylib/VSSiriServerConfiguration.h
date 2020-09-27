/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKKnowledgeStore, NSArray;

@interface VSSiriServerConfiguration : NSObject {

	CKKnowledgeStore* _knowledgeStore;

}

@property (nonatomic,retain) CKKnowledgeStore * knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,readonly) BOOL disableOsprey; 
@property (nonatomic,readonly) BOOL shouldDelayVoiceUpdate; 
@property (nonatomic,readonly) NSArray * whitelistedAppId; 
+(id)defaultConfig;
-(id)init;
-(CKKnowledgeStore *)knowledgeStore;
-(void)setKnowledgeStore:(CKKnowledgeStore *)arg1 ;
-(id)experimentIdentifier;
-(BOOL)disableOsprey;
-(double)deviceWaitTimeForAppId:(id)arg1 ;
-(double)timeoutForAppId:(id)arg1 ;
-(BOOL)shouldDelayVoiceUpdate;
-(id)dictForKey:(id)arg1 ;
-(id)configForAppId:(id)arg1 key:(id)arg2 ;
-(NSArray *)whitelistedAppId;
@end
