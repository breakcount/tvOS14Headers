/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntentResponse.h>

@class NSArray;

@interface WFSplitTextIntentResponse : INIntentResponse {

	long long _code;

}

@property (assign,nonatomic) long long code;              //@synthesize code=_code - In the implementation block
@property (nonatomic,copy) NSArray * text; 
-(long long)code;
-(void)setCode:(long long)arg1 ;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
@end

