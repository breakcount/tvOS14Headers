/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACMTicketManager.h>
#import <libobjc.A.dylib/ACMTicketManagerProtocol.h>

@class NSString;

@interface ACMExternalTicketManager : ACMTicketManager <ACMTicketManagerProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)identifier;
-(unsigned long long)clientID;
-(id)preferences;
-(id)deviceIdentifier;
-(id)defaultPublicKeyVersionForRealm:(id)arg1 ;
-(id)twoSVPersonIDForPrincipal:(id)arg1 ;
-(id)twoSVSecretForPrincipal:(id)arg1 ;
-(id)twoSVCreateDateForPrincipal:(id)arg1 ;
-(void)tokenDidReceive2SVSecret:(id)arg1 ;
@end

