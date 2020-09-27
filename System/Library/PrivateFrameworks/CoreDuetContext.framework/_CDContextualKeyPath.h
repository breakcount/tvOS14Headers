/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuetContext/CoreDuetContext-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _CDContextualKeyPath : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isUserCentric;
	BOOL _isEphemeral;
	BOOL _sensitiveContents;
	NSString* _key;
	NSString* _deviceID;

}

@property (nonatomic,copy) NSString * key;                        //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSString * deviceID;                 //@synthesize deviceID=_deviceID - In the implementation block
@property (assign,nonatomic) BOOL isUserCentric;                  //@synthesize isUserCentric=_isUserCentric - In the implementation block
@property (assign,nonatomic) BOOL isEphemeral;                    //@synthesize isEphemeral=_isEphemeral - In the implementation block
@property (assign,nonatomic) BOOL sensitiveContents;              //@synthesize sensitiveContents=_sensitiveContents - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathWithKey:(id)arg1 ;
+(id)ephemeralKeyPathWithKey:(id)arg1 ;
+(id)keyPathWithKey:(id)arg1 isUserCentric:(BOOL)arg2 ;
+(id)remotekeyPathForKeyPath:(id)arg1 forDevice:(unsigned long long)arg2 ;
+(id)remoteKeyPathForKeyPath:(id)arg1 forDeviceID:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(BOOL)isEphemeral;
-(void)setIsEphemeral:(BOOL)arg1 ;
-(void)setSensitiveContents:(BOOL)arg1 ;
-(BOOL)isUserCentric;
-(BOOL)sensitiveContents;
-(id)initWithKey:(id)arg1 forDeviceID:(id)arg2 isUserCentric:(BOOL)arg3 isEphemeral:(BOOL)arg4 ;
-(id)initWithKey:(id)arg1 forDevice:(unsigned long long)arg2 isUserCentric:(BOOL)arg3 isEphemeral:(BOOL)arg4 ;
-(BOOL)isMultiDeviceKeyPath;
-(void)setIsUserCentric:(BOOL)arg1 ;
@end

