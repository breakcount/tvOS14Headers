/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, OSLogPreferencesSubsystem;

@interface OSLogPreferencesCategory : NSObject {

	NSString* _name;
	OSLogPreferencesSubsystem* _subsystem;

}

@property (nonatomic,readonly) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) OSLogPreferencesSubsystem * subsystem;              //@synthesize subsystem=_subsystem - In the implementation block
@property (nonatomic,readonly) BOOL isLocked; 
@property (nonatomic,readonly) long long effectiveEnabledLevel; 
@property (nonatomic,readonly) long long effectivePersistedLevel; 
@property (assign,nonatomic) long long enabledLevel; 
@property (assign,nonatomic) long long persistedLevel; 
@property (assign,nonatomic) BOOL signpostEnabled; 
@property (assign,nonatomic) BOOL signpostPersisted; 
-(NSString *)name;
-(void)reset;
-(BOOL)isLocked;
-(OSLogPreferencesSubsystem *)subsystem;
-(long long)enabledLevel;
-(long long)persistedLevel;
-(void)setEnabledLevel:(long long)arg1 ;
-(void)setPersistedLevel:(long long)arg1 ;
-(long long)effectiveEnabledLevel;
-(long long)effectivePersistedLevel;
-(long long)defaultEnabledLevel;
-(long long)defaultPersistedLevel;
-(id)initWithName:(id)arg1 subsystem:(id)arg2 ;
-(BOOL)signpostEnabled;
-(BOOL)signpostPersisted;
-(void)setSignpostEnabled:(BOOL)arg1 ;
-(void)setSignpostPersisted:(BOOL)arg1 ;
@end

