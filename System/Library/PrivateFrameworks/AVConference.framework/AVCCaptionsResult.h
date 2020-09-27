/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray, NSString;

@interface AVCCaptionsResult : NSObject {

	BOOL _utteranceComplete;
	NSMutableArray* _tokens;
	unsigned _utteranceNumber;
	unsigned _updateNumber;

}

@property (nonatomic,readonly) BOOL utteranceComplete;                //@synthesize utteranceComplete=_utteranceComplete - In the implementation block
@property (nonatomic,readonly) NSArray * tokens;                      //@synthesize tokens=_tokens - In the implementation block
@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,readonly) unsigned utteranceNumber;              //@synthesize utteranceNumber=_utteranceNumber - In the implementation block
@property (nonatomic,readonly) unsigned updateNumber;                 //@synthesize updateNumber=_updateNumber - In the implementation block
-(id)description;
-(void)dealloc;
-(NSString *)text;
-(NSArray *)tokens;
-(unsigned)utteranceNumber;
-(unsigned)updateNumber;
-(id)initWithCapacity:(long long)arg1 utteranceComplete:(BOOL)arg2 utteranceNumber:(unsigned)arg3 updateNumber:(unsigned)arg4 ;
-(BOOL)addTokenWithString:(id)arg1 confidence:(double)arg2 spaceAfter:(BOOL)arg3 ;
-(BOOL)utteranceComplete;
@end

