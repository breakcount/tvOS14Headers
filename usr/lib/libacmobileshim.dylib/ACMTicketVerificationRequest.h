/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSNumber;


@protocol ACMTicketVerificationRequest <NSObject>
@property (retain) NSString * userName; 
@property (retain) NSString * realm; 
@property (retain) NSString * token; 
@property (retain) NSString * appIDKey; 
@property (retain) NSNumber * appID; 
@property (retain) NSNumber * serverResponseTimeout; 
@property (retain) id userInfo; 
@required
-(id)userInfo;
-(NSString *)realm;
-(NSString *)token;
-(void)setUserInfo:(id)arg1;
-(NSString *)userName;
-(void)setToken:(id)arg1;
-(void)setRealm:(id)arg1;
-(NSNumber *)appID;
-(void)setAppID:(id)arg1;
-(void)setUserName:(id)arg1;
-(void)setAppIDKey:(id)arg1;
-(NSString *)appIDKey;
-(NSNumber *)serverResponseTimeout;
-(void)setServerResponseTimeout:(id)arg1;

@end

