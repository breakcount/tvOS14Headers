/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATMessage.h>

@class NSUUID, NSString, NSDictionary;

@interface CATNotificationMessage : CATMessage {

	NSUUID* _taskUUID;
	NSString* _name;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy) NSUUID * taskUUID;                    //@synthesize taskUUID=_taskUUID - In the implementation block
@property (nonatomic,copy) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSUUID *)taskUUID;
-(void)setTaskUUID:(NSUUID *)arg1 ;
-(id)initWithName:(id)arg1 userInfo:(id)arg2 ;
-(id)initWithTaskUUID:(id)arg1 name:(id)arg2 userInfo:(id)arg3 ;
@end

