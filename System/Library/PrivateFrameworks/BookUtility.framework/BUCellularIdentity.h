/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:40:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BUCellularIdentity : NSObject {

	BOOL _roaming;
	NSString* _defaultsKey;
	NSString* _simIdentity;

}

@property (assign,getter=isRoaming,nonatomic) BOOL roaming;              //@synthesize roaming=_roaming - In the implementation block
@property (nonatomic,readonly) NSString * defaultsKey;                   //@synthesize defaultsKey=_defaultsKey - In the implementation block
@property (nonatomic,readonly) NSString * simIdentity;                   //@synthesize simIdentity=_simIdentity - In the implementation block
+(id)_digestMD5:(id)arg1 ;
+(id)identityForSubscription:(id)arg1 usingClient:(id)arg2 error:(id*)arg3 ;
-(id)description;
-(NSString *)defaultsKey;
-(id)initWithSIMIdentity:(id)arg1 roaming:(BOOL)arg2 ;
-(BOOL)isRoaming;
-(void)setRoaming:(BOOL)arg1 ;
-(NSString *)simIdentity;
@end

