/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:40:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AudioTransportCommon.framework/AudioTransportCommon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IOKService, IOKConnection, ATCIOA2StreamFormat, NSArray;

@interface ATCIOA2Stream : NSObject {

	IOKService* _service;
	IOKConnection* _connection;
	unsigned long long _index;
	unsigned _physicalID;
	BOOL _input;
	unsigned _startingChannel;
	ATCIOA2StreamFormat* _currentFormat;
	NSArray* _availableFormats;

}

@property (getter=isInput,nonatomic,readonly) BOOL input;                             //@synthesize input=_input - In the implementation block
@property (nonatomic,copy,readonly) ATCIOA2StreamFormat * currentFormat;              //@synthesize currentFormat=_currentFormat - In the implementation block
@property (nonatomic,copy,readonly) NSArray * availableFormats;                       //@synthesize availableFormats=_availableFormats - In the implementation block
@property (nonatomic,readonly) unsigned startingChannel;                              //@synthesize startingChannel=_startingChannel - In the implementation block
-(unsigned)startingChannel;
-(BOOL)isInput;
-(NSArray *)availableFormats;
-(id)initWithService:(id)arg1 connection:(id)arg2 index:(unsigned long long)arg3 input:(BOOL)arg4 description:(id)arg5 ;
-(ATCIOA2StreamFormat *)currentFormat;
@end

