/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString, NSMutableDictionary;

@interface ASTErrorStatus : NSObject {

	NSNumber* _code;
	NSString* _reason;
	NSMutableDictionary* _data;

}

@property (nonatomic,retain) NSNumber * code;                         //@synthesize code=_code - In the implementation block
@property (nonatomic,retain) NSString * reason;                       //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * data;              //@synthesize data=_data - In the implementation block
+(id)errorStatusWithCode:(long long)arg1 ;
-(id)init;
-(NSNumber *)code;
-(NSMutableDictionary *)data;
-(NSString *)reason;
-(id)dictionary;
-(void)setData:(NSMutableDictionary *)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(void)setCode:(NSNumber *)arg1 ;
-(id)reasonForCode:(id)arg1 ;
@end
