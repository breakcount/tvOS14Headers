/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TKTokenSessionDelegate, OS_dispatch_queue;
#import <CryptoTokenKit/CryptoTokenKit-Structs.h>
@class TKToken, NSObject, LAContext, NSDictionary, NSXPCConnection, NSNumber, NSString;

@interface TKTokenSession : NSObject {

	TKToken* _token;
	id<TKTokenSessionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	id _keepAlive;
	LAContext* _LAContext;
	NSDictionary* _parameters;
	NSXPCConnection* _caller;
	NSNumber* _callerPID;
	SCD_Struct_TK0 _creatorAuditToken;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,retain) id keepAlive;                                           //@synthesize keepAlive=_keepAlive - In the implementation block
@property (nonatomic,readonly) LAContext * LAContext;                                //@synthesize LAContext=_LAContext - In the implementation block
@property (retain) NSDictionary * parameters;                                        //@synthesize parameters=_parameters - In the implementation block
@property (assign,nonatomic) SCD_Struct_TK0 creatorAuditToken;                       //@synthesize creatorAuditToken=_creatorAuditToken - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * caller;                             //@synthesize caller=_caller - In the implementation block
@property (retain) NSNumber * callerPID;                                             //@synthesize callerPID=_callerPID - In the implementation block
@property (readonly) id<TKTokenSessionPrivateDelegate> privateDelegate; 
@property (readonly) TKToken * token;                                                //@synthesize token=_token - In the implementation block
@property (__weak) id<TKTokenSessionDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
-(NSString *)name;
-(id<TKTokenSessionDelegate>)delegate;
-(void)setDelegate:(id<TKTokenSessionDelegate>)arg1 ;
-(TKToken *)token;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)terminate;
-(NSDictionary *)parameters;
-(LAContext *)LAContext;
-(id)initWithToken:(id)arg1 ;
-(id<TKTokenSessionPrivateDelegate>)privateDelegate;
-(void)setParameters:(NSDictionary *)arg1 ;
-(NSXPCConnection *)caller;
-(void)setCaller:(NSXPCConnection *)arg1 ;
-(id)keepAlive;
-(void)endRequest;
-(void)auditAuthOperation:(id)arg1 auditToken:(SCD_Struct_TK0)arg2 success:(BOOL)arg3 ;
-(void)setKeepAlive:(id)arg1 ;
-(void)beginRequest;
-(void)setLAContext:(LAContext *)arg1 ;
-(void)setCreatorAuditToken:(SCD_Struct_TK0)arg1 ;
-(void)setCallerPID:(NSNumber *)arg1 ;
-(void)getAdvertisedItemsWithReply:(/*^block*/id)arg1 ;
-(void)evaluateAccessControl:(id)arg1 forOperation:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)getAttributesOfObject:(id)arg1 isCertificate:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(void)objectID:(id)arg1 operation:(long long)arg2 inputData:(id)arg3 algorithms:(id)arg4 parameters:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)createObjectWithAttributes:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)deleteObject:(id)arg1 reply:(/*^block*/id)arg2 ;
-(NSNumber *)callerPID;
-(void)evaluateAuthOperation:(id)arg1 retry:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(void)finalizeAuthOperation:(id)arg1 evaluatedAuthOperation:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)evaluateAuthOperation:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)beginAuthForOperation:(long long)arg1 constraint:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)checkOperation:(long long)arg1 usingKey:(id)arg2 algorithm:(id)arg3 parameters:(id)arg4 ;
-(id)errorWithResult:(id)arg1 operation:(id)arg2 forError:(id)arg3 ;
-(void)signData:(id)arg1 usingKey:(id)arg2 algorithm:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)decryptData:(id)arg1 usingKey:(id)arg2 algorithm:(id)arg3 parameters:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)performKeyExchangeWithPublicKey:(id)arg1 usingKey:(id)arg2 algorithm:(id)arg3 parameters:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)attestKey:(id)arg1 usingKey:(id)arg2 nonce:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)bumpKey:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)commitKey:(id)arg1 reply:(/*^block*/id)arg2 ;
-(SCD_Struct_TK0)creatorAuditToken;
@end

