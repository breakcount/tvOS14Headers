/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData, NSError;

@interface ATMessageParser : NSObject {

	NSMutableData* _parserData;
	unsigned long long _curObjectLength;
	void* _objectDataBuffer;
	unsigned long long _objectDataLen;
	char _varIntBuf[10];
	unsigned long long _varIntDataLen;
	NSError* _parserError;
	Class _messageClass;
	/*^block*/id _objectParsedBlock;

}

@property (nonatomic,readonly) NSError * parserError;              //@synthesize parserError=_parserError - In the implementation block
@property (nonatomic,readonly) Class messageClass;                 //@synthesize messageClass=_messageClass - In the implementation block
@property (nonatomic,copy) id objectParsedBlock;                   //@synthesize objectParsedBlock=_objectParsedBlock - In the implementation block
-(void)dealloc;
-(NSError *)parserError;
-(Class)messageClass;
-(id)initWithMessageClass:(Class)arg1 ;
-(BOOL)_parseObjectFromData:(id)arg1 ;
-(BOOL)_parseObjectLength:(const char*)arg1 length:(unsigned long long)arg2 bytesConsumed:(unsigned long long*)arg3 ;
-(BOOL)processData:(const char*)arg1 length:(long long)arg2 ;
-(id)objectParsedBlock;
-(void)setObjectParsedBlock:(id)arg1 ;
@end

