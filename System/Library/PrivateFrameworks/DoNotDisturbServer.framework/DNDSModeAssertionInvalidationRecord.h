/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:44:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/DNDSModeAssertionStoreRecordDictionaryEncoding.h>

@class DNDSModeAssertionRecord, NSNumber, DNDSModeAssertionInvalidationDetailsRecord, DNDSModeAssertionSourceRecord, NSString;

@interface DNDSModeAssertionInvalidationRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding> {

	DNDSModeAssertionRecord* _assertion;
	NSNumber* _invalidationDate;
	DNDSModeAssertionInvalidationDetailsRecord* _details;
	DNDSModeAssertionSourceRecord* _source;
	NSString* _reason;
	NSString* _reasonOverride;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) DNDSModeAssertionRecord * assertion;                               //@synthesize assertion=_assertion - In the implementation block
@property (nonatomic,retain) NSNumber * invalidationDate;                                       //@synthesize invalidationDate=_invalidationDate - In the implementation block
@property (nonatomic,retain) DNDSModeAssertionInvalidationDetailsRecord * details;              //@synthesize details=_details - In the implementation block
@property (nonatomic,retain) DNDSModeAssertionSourceRecord * source;                            //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSString * reason;                                                 //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSString * reasonOverride;                                         //@synthesize reasonOverride=_reasonOverride - In the implementation block
+(id)recordForDictionary:(id)arg1 keys:(const SCD_Struct_DN9*)arg2 ;
+(id)recordForInvalidation:(id)arg1 ;
-(id)object;
-(NSString *)reason;
-(DNDSModeAssertionSourceRecord *)source;
-(void)setSource:(DNDSModeAssertionSourceRecord *)arg1 ;
-(DNDSModeAssertionInvalidationDetailsRecord *)details;
-(void)setReason:(NSString *)arg1 ;
-(DNDSModeAssertionRecord *)assertion;
-(void)setDetails:(DNDSModeAssertionInvalidationDetailsRecord *)arg1 ;
-(void)setAssertion:(DNDSModeAssertionRecord *)arg1 ;
-(void)setInvalidationDate:(NSNumber *)arg1 ;
-(NSNumber *)invalidationDate;
-(NSString *)reasonOverride;
-(id)dictionaryWithKeys:(const SCD_Struct_DN9*)arg1 options:(unsigned long long)arg2 ;
-(void)setReasonOverride:(NSString *)arg1 ;
@end

