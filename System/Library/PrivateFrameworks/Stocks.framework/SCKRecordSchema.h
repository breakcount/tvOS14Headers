/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface SCKRecordSchema : NSObject {

	NSString* _recordType;
	NSArray* _fieldSchemas;

}

@property (nonatomic,copy,readonly) NSString * recordType;               //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * fieldNames; 
@property (nonatomic,copy,readonly) NSArray * fieldSchemas;              //@synthesize fieldSchemas=_fieldSchemas - In the implementation block
-(NSString *)recordType;
-(BOOL)isValidRecord:(id)arg1 ;
-(NSArray *)fieldNames;
-(id)initWithRecordType:(id)arg1 fieldSchemas:(id)arg2 ;
-(NSArray *)fieldSchemas;
-(id)schemaForFieldName:(id)arg1 ;
@end

