/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PDAssertion : NSObject {

	BOOL _invalidateWhenBackgrounded;
	unsigned long long _type;
	NSString* _identifier;
	NSString* _reason;

}

@property (nonatomic,readonly) unsigned long long type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * reason;                          //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL invalidateWhenBackgrounded;              //@synthesize invalidateWhenBackgrounded=_invalidateWhenBackgrounded - In the implementation block
-(id)description;
-(NSString *)reason;
-(unsigned long long)type;
-(NSString *)identifier;
-(void)setInvalidateWhenBackgrounded:(BOOL)arg1 ;
-(id)initWithType:(unsigned long long)arg1 identifier:(id)arg2 reason:(id)arg3 ;
-(BOOL)invalidateWhenBackgrounded;
@end

