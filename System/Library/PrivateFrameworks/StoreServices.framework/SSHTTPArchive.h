/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSDictionary, NSString;

@interface SSHTTPArchive : NSObject {

	BOOL _compressed;
	NSData* _backingJSONData;

}

@property (nonatomic,retain) NSData * backingJSONData;                 //@synthesize backingJSONData=_backingJSONData - In the implementation block
@property (assign,nonatomic) BOOL compressed;                          //@synthesize compressed=_compressed - In the implementation block
@property (nonatomic,readonly) NSData * JSONData; 
@property (nonatomic,readonly) NSDictionary * JSONObject; 
@property (nonatomic,readonly) NSString * JSONString; 
+(id)merge:(id)arg1 ;
+(id)_JSONObjectForTaskMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3 ;
+(id)_JSONObjectForEntries:(id)arg1 ;
+(id)outputDirectoryForLogConfig:(id)arg1 ;
+(double)_timeIntervalFromFilename:(id)arg1 ;
+(id)_entryDictionaryForTaskMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3 ;
+(id)_stringFromDate:(id)arg1 ;
+(id)_requestDictionaryForTaskTransactionMetrics:(id)arg1 requestData:(id)arg2 ;
+(id)_responseDictionaryForTaskMetrics:(id)arg1 responseData:(id)arg2 ;
+(id)_generateCommentsForTaskMetrics:(id)arg1 ;
+(id)_creatorDictionary;
+(id)_entriesArrayForTaskMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3 ;
+(id)_localIPAddress;
+(id)_headersArrayForHTTPHeaders:(id)arg1 ;
+(id)_contentDictionaryForResponse:(id)arg1 responseData:(id)arg2 ;
+(id)_dateFormatterForTimeZone:(id)arg1 ;
+(id)merge:(id)arg1 withEstimatedFileSizeLimit:(unsigned long long)arg2 ;
+(void)removeLogsWithLogConfig:(id)arg1 olderThanDate:(id)arg2 ;
+(void)sendWriteAllLogsToDiskNotification;
+(void)sendWriteAllLogsToDiskDecompressedNotification;
-(id)description;
-(void)setCompressed:(BOOL)arg1 ;
-(id)initWithJSONObject:(id)arg1 ;
-(BOOL)compressed;
-(NSData *)backingJSONData;
-(NSData *)JSONData;
-(NSDictionary *)JSONObject;
-(BOOL)writeToDiskWithLogConfig:(id)arg1 compressed:(BOOL)arg2 error:(id*)arg3 ;
-(NSString *)JSONString;
-(id)initWithTaskMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3 ;
-(BOOL)writeToDiskError:(id*)arg1 ;
-(void)setBackingJSONData:(NSData *)arg1 ;
@end

