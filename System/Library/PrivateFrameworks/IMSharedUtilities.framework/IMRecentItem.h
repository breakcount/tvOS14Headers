/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString, NSURL, NSData, NSDictionary;

@interface IMRecentItem : NSObject {

	NSNumber* _timestamp;
	NSString* _GUID;
	NSURL* _fileURL;
	NSData* _payloadData;
	NSDictionary* _messageItemInfo;
	NSString* _accessibilityString;

}

@property (nonatomic,retain) NSNumber * timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (getter=UID,nonatomic,copy) NSString * GUID;                    //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                             //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSData * payloadData;                        //@synthesize payloadData=_payloadData - In the implementation block
@property (nonatomic,retain) NSDictionary * messageItemInfo;              //@synthesize messageItemInfo=_messageItemInfo - In the implementation block
@property (nonatomic,retain) NSString * accessibilityString;              //@synthesize accessibilityString=_accessibilityString - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)dealloc;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSNumber *)timestamp;
-(void)setTimestamp:(NSNumber *)arg1 ;
-(NSString *)accessibilityString;
-(void)setAccessibilityString:(NSString *)arg1 ;
-(NSString *)GUID;
-(void)setGUID:(NSString *)arg1 ;
-(void)setPayloadData:(NSData *)arg1 ;
-(NSData *)payloadData;
-(id)initWithGUID:(id)arg1 data:(id)arg2 messageItemInfo:(id)arg3 ;
-(id)asJSONObject;
-(NSDictionary *)messageItemInfo;
-(void)setMessageItemInfo:(NSDictionary *)arg1 ;
@end

