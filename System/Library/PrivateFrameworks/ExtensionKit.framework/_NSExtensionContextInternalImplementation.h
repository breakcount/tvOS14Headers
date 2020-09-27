/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:44:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ExtensionKit.framework/ExtensionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSUUID, NSXPCConnection;


@protocol _NSExtensionContextInternalImplementation <NSObject>
@property (copy,readonly) NSArray * inputItems; 
@property (copy,readonly) NSUUID * _UUID; 
@property (readonly) NSXPCConnection * _auxiliaryConnection; 
@property (setter=_setRequestCleanUpBlock:,copy) id _requestCleanUpBlock; 
@property (readonly) id _principalObject; 
@property (readonly) SCD_Struct_EX1 _extensionHostAuditToken; 
@required
-(NSUUID *)_UUID;
-(NSArray *)inputItems;
-(void)completeRequestReturningItems:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)cancelRequestWithError:(id)arg1;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 extensionContext:(id)arg4;
-(NSXPCConnection *)_auxiliaryConnection;
-(SCD_Struct_EX1)_extensionHostAuditToken;
-(id)_requestCleanUpBlock;
-(void)_setRequestCleanUpBlock:(/*^block*/id)arg1;
-(id)_principalObject;

@end

