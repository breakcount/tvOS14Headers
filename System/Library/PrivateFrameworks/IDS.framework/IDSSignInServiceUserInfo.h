/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IDSSignInServiceUserInfo : NSObject {

	unsigned long long _type;
	unsigned long long _status;

}

@property (nonatomic,readonly) unsigned long long type;                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long status;              //@synthesize status=_status - In the implementation block
-(id)description;
-(unsigned long long)type;
-(unsigned long long)status;
-(id)initWithUserType:(unsigned long long)arg1 status:(unsigned long long)arg2 ;
@end

