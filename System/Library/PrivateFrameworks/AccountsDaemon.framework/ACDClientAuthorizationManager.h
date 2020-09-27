/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACDDatabaseConnection;

@interface ACDClientAuthorizationManager : NSObject {

	ACDDatabaseConnection* _databaseConnection;

}
-(id)initWithDatabaseConnection:(id)arg1 ;
-(id)allAuthorizationsForAccountTypeWithIdentifier:(id)arg1 ;
-(id)authorizationForClient:(id)arg1 accountTypeWithIdentifier:(id)arg2 ;
-(id)removeAuthorizationForClient:(id)arg1 accountType:(id)arg2 ;
-(id)authorizationForClient:(id)arg1 accountType:(id)arg2 ;
-(id)_setFromCSVString:(id)arg1 ;
-(id)_csvStringFromSet:(id)arg1 ;
-(id)removeAuthorizationForClient:(id)arg1 accountTypeWithIdentifier:(id)arg2 ;
-(id)removeAllClientAuthorizationsForAccountTypeWithIdentifier:(id)arg1 ;
-(id)setAuthorization:(id)arg1 forClient:(id)arg2 onAccountType:(id)arg3 ;
-(id)allAuthorizationsForAccountType:(id)arg1 ;
-(id)removeAllClientAuthorizationsForAccountType:(id)arg1 ;
@end

