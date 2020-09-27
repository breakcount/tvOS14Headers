/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableData, NSError;

@interface CKDResponseBodyParser : NSObject {

	NSObject*<OS_dispatch_queue> _parseQueue;
	NSMutableData* _parserData;
	BOOL _testRepeatedParseResults;
	NSError* _parserError;
	/*^block*/id _objectParsedBlock;
	long long _qualityOfService;

}

@property (nonatomic,retain) NSError * parserError;                                  //@synthesize parserError=_parserError - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> parseQueue; 
@property (nonatomic,retain) NSMutableData * parserData; 
@property (assign,nonatomic) long long qualityOfService;                             //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign,nonatomic) BOOL testRepeatedParseResults;                          //@synthesize testRepeatedParseResults=_testRepeatedParseResults - In the implementation block
@property (nonatomic,copy) id objectParsedBlock;                                     //@synthesize objectParsedBlock=_objectParsedBlock - In the implementation block
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(NSError *)parserError;
-(NSObject*<OS_dispatch_queue>)parseQueue;
-(void)setParserError:(NSError *)arg1 ;
-(void)processData:(id)arg1 ;
-(void)finishWithCompletion:(/*^block*/id)arg1 ;
-(id)objectParsedBlock;
-(void)setObjectParsedBlock:(id)arg1 ;
-(id)initWithQoS:(long long)arg1 ;
-(void)setTestRepeatedParseResults:(BOOL)arg1 ;
-(NSMutableData *)parserData;
-(void)setParserData:(NSMutableData *)arg1 ;
-(BOOL)testRepeatedParseResults;
@end

