/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/DNDSModeAssertionStoreRecordDictionaryEncoding.h>

@class NSString, NSNumber, DNDSModeAssertionDetailsRecord, DNDSModeAssertionSourceRecord;

@interface DNDSModeAssertionRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding> {

	NSString* _UUID;
	NSNumber* _startDate;
	DNDSModeAssertionDetailsRecord* _details;
	DNDSModeAssertionSourceRecord* _source;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * UUID;                                       //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,retain) NSNumber * startDate;                                  //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) DNDSModeAssertionDetailsRecord * details;              //@synthesize details=_details - In the implementation block
@property (nonatomic,retain) DNDSModeAssertionSourceRecord * source;                //@synthesize source=_source - In the implementation block
+(id)recordForDictionary:(id)arg1 keys:(const SCD_Struct_DN9*)arg2 ;
+(id)recordForAssertion:(id)arg1 ;
-(id)object;
-(DNDSModeAssertionSourceRecord *)source;
-(NSString *)UUID;
-(void)setSource:(DNDSModeAssertionSourceRecord *)arg1 ;
-(NSNumber *)startDate;
-(DNDSModeAssertionDetailsRecord *)details;
-(void)setStartDate:(NSNumber *)arg1 ;
-(void)setUUID:(NSString *)arg1 ;
-(void)setDetails:(DNDSModeAssertionDetailsRecord *)arg1 ;
-(id)dictionaryWithKeys:(const SCD_Struct_DN9*)arg1 options:(unsigned long long)arg2 ;
@end

