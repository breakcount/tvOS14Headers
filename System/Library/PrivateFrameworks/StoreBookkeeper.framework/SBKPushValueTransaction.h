/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreBookkeeper/SBKTransaction.h>

@protocol SBKKeyValuePayloadPair;
@class NSString;

@interface SBKPushValueTransaction : SBKTransaction {

	BOOL _isRechedulable;
	BOOL _success;
	id<SBKKeyValuePayloadPair> _clientItemPayloadPair;
	NSString* _clientItemVersionAnchor;
	id<SBKKeyValuePayloadPair> _requestItemPayloadPair;
	NSString* _requestItemVersionAnchor;
	id<SBKKeyValuePayloadPair> _resultItemPayloadPair;
	NSString* _resultItemVersionAnchor;
	NSString* _resultDomainVersion;

}

@property (readonly) id<SBKKeyValuePayloadPair> clientItemPayloadPair;               //@synthesize clientItemPayloadPair=_clientItemPayloadPair - In the implementation block
@property (readonly) NSString * clientItemVersionAnchor;                             //@synthesize clientItemVersionAnchor=_clientItemVersionAnchor - In the implementation block
@property (readonly) id<SBKKeyValuePayloadPair> requestItemPayloadPair;              //@synthesize requestItemPayloadPair=_requestItemPayloadPair - In the implementation block
@property (readonly) NSString * requestItemVersionAnchor;                            //@synthesize requestItemVersionAnchor=_requestItemVersionAnchor - In the implementation block
@property (readonly) BOOL success;                                                   //@synthesize success=_success - In the implementation block
@property (readonly) id<SBKKeyValuePayloadPair> resultItemPayloadPair;               //@synthesize resultItemPayloadPair=_resultItemPayloadPair - In the implementation block
@property (readonly) NSString * resultItemVersionAnchor;                             //@synthesize resultItemVersionAnchor=_resultItemVersionAnchor - In the implementation block
@property (readonly) NSString * resultDomainVersion;                                 //@synthesize resultDomainVersion=_resultDomainVersion - In the implementation block
-(id)description;
-(BOOL)success;
-(NSString *)clientItemVersionAnchor;
-(id)clampsKey;
-(id)newRequest;
-(void)processDataInResponse:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_resolveConflictBetweenClientPayloadPair:(id)arg1 andServerPayloadPair:(id)arg2 ;
-(id)initWithStoreBagContext:(id)arg1 clientItemPayloadPair:(id)arg2 clientItemVersionAnchor:(id)arg3 ;
-(id<SBKKeyValuePayloadPair>)clientItemPayloadPair;
-(id<SBKKeyValuePayloadPair>)requestItemPayloadPair;
-(NSString *)requestItemVersionAnchor;
-(id<SBKKeyValuePayloadPair>)resultItemPayloadPair;
-(NSString *)resultItemVersionAnchor;
-(NSString *)resultDomainVersion;
@end

