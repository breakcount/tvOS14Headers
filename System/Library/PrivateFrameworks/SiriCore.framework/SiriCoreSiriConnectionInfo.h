/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, SAConnectionPolicyRoute, NSString, NSError, SAConnectionPolicy;

@interface SiriCoreSiriConnectionInfo : NSObject {

	BOOL _prefersWWAN;
	BOOL _skipPeer;
	BOOL _useWiFiHint;
	BOOL _forceReconnect;
	BOOL _imposePolicyBan;
	BOOL _requiresURLSession;
	BOOL _enableSiriServerLogging;
	NSURL* _url;
	SAConnectionPolicyRoute* _connectionPolicyRoute;
	NSString* _aceHost;
	NSString* _languageCode;
	NSError* _skipPeerErrorReason;
	double _timeout;
	NSString* _assistantIdentifier;
	NSString* _peerAssistantIdentifier;
	NSString* _connectionId;
	SAConnectionPolicy* _connectionPolicy;

}

@property (nonatomic,copy) NSURL * url;                                                                   //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) SAConnectionPolicyRoute * connectionPolicyRoute;                               //@synthesize connectionPolicyRoute=_connectionPolicyRoute - In the implementation block
@property (nonatomic,copy) NSString * aceHost;                                                            //@synthesize aceHost=_aceHost - In the implementation block
@property (nonatomic,copy) NSString * languageCode;                                                       //@synthesize languageCode=_languageCode - In the implementation block
@property (assign,nonatomic) BOOL prefersWWAN;                                                            //@synthesize prefersWWAN=_prefersWWAN - In the implementation block
@property (assign,nonatomic) BOOL skipPeer;                                                               //@synthesize skipPeer=_skipPeer - In the implementation block
@property (assign,nonatomic) BOOL useWiFiHint;                                                            //@synthesize useWiFiHint=_useWiFiHint - In the implementation block
@property (nonatomic,copy) NSError * skipPeerErrorReason;                                                 //@synthesize skipPeerErrorReason=_skipPeerErrorReason - In the implementation block
@property (assign,nonatomic) BOOL forceReconnect;                                                         //@synthesize forceReconnect=_forceReconnect - In the implementation block
@property (assign,nonatomic) double timeout;                                                              //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) NSString * assistantIdentifier;                                                //@synthesize assistantIdentifier=_assistantIdentifier - In the implementation block
@property (nonatomic,copy) NSString * peerAssistantIdentifier;                                            //@synthesize peerAssistantIdentifier=_peerAssistantIdentifier - In the implementation block
@property (nonatomic,copy) NSString * connectionId;                                                       //@synthesize connectionId=_connectionId - In the implementation block
@property (assign,nonatomic) BOOL imposePolicyBan;                                                        //@synthesize imposePolicyBan=_imposePolicyBan - In the implementation block
@property (assign,nonatomic) BOOL requiresURLSession;                                                     //@synthesize requiresURLSession=_requiresURLSession - In the implementation block
@property (nonatomic,copy) SAConnectionPolicy * connectionPolicy;                                         //@synthesize connectionPolicy=_connectionPolicy - In the implementation block
@property (assign,getter=isSiriServerLoggingEnabled,nonatomic) BOOL enableSiriServerLogging;              //@synthesize enableSiriServerLogging=_enableSiriServerLogging - In the implementation block
-(id)description;
-(NSString *)languageCode;
-(void)setTimeout:(double)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(double)timeout;
-(void)setLanguageCode:(NSString *)arg1 ;
-(NSString *)connectionId;
-(SAConnectionPolicy *)connectionPolicy;
-(SAConnectionPolicyRoute *)connectionPolicyRoute;
-(void)setConnectionId:(NSString *)arg1 ;
-(void)setConnectionPolicy:(SAConnectionPolicy *)arg1 ;
-(void)setAssistantIdentifier:(NSString *)arg1 ;
-(void)setPeerAssistantIdentifier:(NSString *)arg1 ;
-(void)setAceHost:(NSString *)arg1 ;
-(NSString *)assistantIdentifier;
-(NSString *)peerAssistantIdentifier;
-(NSString *)aceHost;
-(void)setPrefersWWAN:(BOOL)arg1 ;
-(BOOL)useWiFiHint;
-(BOOL)skipPeer;
-(NSError *)skipPeerErrorReason;
-(BOOL)prefersWWAN;
-(BOOL)requiresURLSession;
-(BOOL)forceReconnect;
-(void)setUseWiFiHint:(BOOL)arg1 ;
-(BOOL)isSiriServerLoggingEnabled;
-(BOOL)imposePolicyBan;
-(void)_appendPotentiallyNilString:(id)arg1 toMutableString:(id)arg2 ;
-(void)setConnectionPolicyRoute:(SAConnectionPolicyRoute *)arg1 ;
-(void)setSkipPeer:(BOOL)arg1 ;
-(void)setSkipPeerErrorReason:(NSError *)arg1 ;
-(void)setForceReconnect:(BOOL)arg1 ;
-(void)setImposePolicyBan:(BOOL)arg1 ;
-(void)setRequiresURLSession:(BOOL)arg1 ;
-(void)setEnableSiriServerLogging:(BOOL)arg1 ;
@end

