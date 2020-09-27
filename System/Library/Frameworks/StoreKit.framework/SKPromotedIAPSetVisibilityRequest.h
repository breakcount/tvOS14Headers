/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKit/SKRequest.h>

@class NSString;

@interface SKPromotedIAPSetVisibilityRequest : SKRequest {

	/*^block*/id _completionHandler;
	long long _visibility;
	NSString* _productId;
	NSString* _bundleId;

}

@property (nonatomic,copy) id completionHandler;                //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) long long visibility;              //@synthesize visibility=_visibility - In the implementation block
@property (nonatomic,copy) NSString * productId;                //@synthesize productId=_productId - In the implementation block
@property (nonatomic,copy) NSString * bundleId;                 //@synthesize bundleId=_bundleId - In the implementation block
-(void)setBundleId:(NSString *)arg1 ;
-(void)setVisibility:(long long)arg1 ;
-(long long)visibility;
-(void)_start;
-(NSString *)bundleId;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setProductId:(NSString *)arg1 ;
-(NSString *)productId;
-(void)_handleReply:(id)arg1 ;
-(id)initWithVisibility:(long long)arg1 productId:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithVisibility:(long long)arg1 productId:(id)arg2 bundleId:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

