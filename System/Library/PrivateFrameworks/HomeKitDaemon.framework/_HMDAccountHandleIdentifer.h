/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/_HMDAccountIdentifier.h>

@class HMDAccountHandle;

@interface _HMDAccountHandleIdentifer : _HMDAccountIdentifier {

	HMDAccountHandle* _accountHandle;

}

@property (copy,readonly) HMDAccountHandle * accountHandle;              //@synthesize accountHandle=_accountHandle - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(HMDAccountHandle *)accountHandle;
-(id)initWithAccountHandle:(id)arg1 ;
@end
