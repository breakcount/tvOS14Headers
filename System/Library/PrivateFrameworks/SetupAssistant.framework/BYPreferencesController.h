/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface BYPreferencesController : NSObject {

	NSString* _domain;
	NSMutableDictionary* _preferences;

}

@property (nonatomic,retain) NSString * domain;                              //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * preferences;              //@synthesize preferences=_preferences - In the implementation block
+(void)flushEverything;
+(id)buddyPreferences;
+(id)buddyPreferencesExcludedFromBackup;
+(id)buddyPreferencesInternal;
+(id)buddyPreferencesEphemeral;
+(void)persistEverything;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(NSString *)domain;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setDomain:(NSString *)arg1 ;
-(BOOL)boolForKey:(id)arg1 ;
-(void)reset;
-(void)flush;
-(NSMutableDictionary *)preferences;
-(void)setPreferences:(NSMutableDictionary *)arg1 ;
-(id)initWithDomain:(id)arg1 ;
-(void)persist;
-(id)objectForKey:(id)arg1 includeCache:(BOOL)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 persistImmediately:(BOOL)arg3 ;
-(void)removeObjectForKey:(id)arg1 onlyFromMemory:(BOOL)arg2 ;
@end

