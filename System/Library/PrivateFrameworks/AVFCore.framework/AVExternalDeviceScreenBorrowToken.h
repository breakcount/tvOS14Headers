/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVExternalDevice, NSString;

@interface AVExternalDeviceScreenBorrowToken : NSObject {

	AVExternalDevice* _externalDevice;
	NSString* _client;
	NSString* _reason;

}

@property (nonatomic,readonly) NSString * client;              //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)reason;
-(NSString *)client;
-(id)initWithExternalDevice:(id)arg1 client:(id)arg2 reason:(id)arg3 ;
@end
