/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/DNDSModeAssertionStoreRecordDictionaryEncoding.h>

@class NSString, NSNumber, DNDSModeAssertionLifetimeRecord;

@interface DNDSModeAssertionDetailsRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding> {

	NSString* _identifier;
	NSString* _modeIdentifier;
	NSNumber* _userVisibleEndDate;
	DNDSModeAssertionLifetimeRecord* _lifetime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * modeIdentifier;                               //@synthesize modeIdentifier=_modeIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * userVisibleEndDate;                           //@synthesize userVisibleEndDate=_userVisibleEndDate - In the implementation block
@property (nonatomic,retain) DNDSModeAssertionLifetimeRecord * lifetime;              //@synthesize lifetime=_lifetime - In the implementation block
+(id)recordForDictionary:(id)arg1 keys:(const SCD_Struct_DN9*)arg2 ;
+(id)recordForAssertionDetails:(id)arg1 ;
-(id)object;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(DNDSModeAssertionLifetimeRecord *)lifetime;
-(void)setLifetime:(DNDSModeAssertionLifetimeRecord *)arg1 ;
-(NSString *)modeIdentifier;
-(NSNumber *)userVisibleEndDate;
-(void)setModeIdentifier:(NSString *)arg1 ;
-(void)setUserVisibleEndDate:(NSNumber *)arg1 ;
-(id)dictionaryWithKeys:(const SCD_Struct_DN9*)arg1 options:(unsigned long long)arg2 ;
@end

