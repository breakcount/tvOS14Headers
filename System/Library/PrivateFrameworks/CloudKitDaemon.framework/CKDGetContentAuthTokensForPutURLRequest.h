/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKDAssetTokenRequest, NSMapTable, NSDictionary;

@interface CKDGetContentAuthTokensForPutURLRequest : CKDURLRequest {

	BOOL _useEncryption;
	CKDAssetTokenRequest* _assetTokenRequest;
	NSMapTable* _transactionStateByRequestIDs;
	NSDictionary* _headers;

}

@property (nonatomic,retain) CKDAssetTokenRequest * assetTokenRequest;               //@synthesize assetTokenRequest=_assetTokenRequest - In the implementation block
@property (nonatomic,retain) NSMapTable * transactionStateByRequestIDs;              //@synthesize transactionStateByRequestIDs=_transactionStateByRequestIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * headers;                                 //@synthesize headers=_headers - In the implementation block
@property (assign,nonatomic) BOOL useEncryption;                                     //@synthesize useEncryption=_useEncryption - In the implementation block
-(NSDictionary *)headers;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(void)setUseEncryption:(BOOL)arg1 ;
-(BOOL)useEncryption;
-(CKDAssetTokenRequest *)assetTokenRequest;
-(void)setAssetTokenRequest:(CKDAssetTokenRequest *)arg1 ;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(BOOL)allowsAnonymousAccount;
-(void)setTransactionStateByRequestIDs:(NSMapTable *)arg1 ;
-(NSMapTable *)transactionStateByRequestIDs;
-(id)initWithOperation:(id)arg1 assetTokenRequest:(id)arg2 headers:(id)arg3 ;
@end

