/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CDPKeychainCircleProxy.h>

@protocol CDPDCircleProxy;
@class KCPairingChannel, NSString;

@interface CDPTTSUPayloadProvider : NSObject <CDPKeychainCircleProxy> {

	KCPairingChannel* _pairingChannel;
	BOOL _complete;
	id<CDPDCircleProxy> _circleProxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isComplete;
-(id)initiatingPayload:(id*)arg1 ;
-(id)processIncomingPayload:(id)arg1 error:(id*)arg2 ;
-(BOOL)supportsInteractiveAuth;
-(BOOL)requiresInitialSync;
-(id)initWithCircleProxy:(id)arg1 ;
@end

