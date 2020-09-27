/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:24:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MobileCalDAVAccount, NSURL;

@interface MobileCalUserAddress : NSObject {

	MobileCalDAVAccount* _account;
	NSURL* _address;

}

@property (nonatomic,copy) NSURL * address;                                     //@synthesize address=_address - In the implementation block
@property (assign,nonatomic,__weak) MobileCalDAVAccount * account;              //@synthesize account=_account - In the implementation block
+(id)userAddress:(id)arg1 forAccount:(id)arg2 ;
+(id)userAddressFromDictionaryRepresentation:(id)arg1 forAccount:(id)arg2 ;
-(id)description;
-(NSURL *)address;
-(id)dictionaryRepresentation;
-(void)setAddress:(NSURL *)arg1 ;
-(MobileCalDAVAccount *)account;
-(void)setAccount:(MobileCalDAVAccount *)arg1 ;
-(id)initWithAddress:(id)arg1 account:(id)arg2 ;
@end

