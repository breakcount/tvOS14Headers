/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSMPIdentity.h>

@interface IDSMPFullDeviceIdentity : IDSMPIdentity
+(id)deviceIdentityFromDataRepresentation:(id)arg1 publicAdminServiceIdentity:(id)arg2 error:(id*)arg3 ;
+(id)deviceIdentityWithFullAdminServiceIdentity:(id)arg1 error:(id*)arg2 ;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(id)publicDeviceIdentityWithError:(id*)arg1 ;
-(BOOL)purgeFromKeychain:(id*)arg1 ;
@end
