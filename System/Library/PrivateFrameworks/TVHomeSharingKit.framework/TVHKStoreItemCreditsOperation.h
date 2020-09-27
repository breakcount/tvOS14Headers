/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:19 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHKAsynchronousOperation.h>

@class TVHKStoreItemCredits, NSError, NSString, NSOperation;

@interface TVHKStoreItemCreditsOperation : TVHKAsynchronousOperation {

	unsigned long long _storeID;
	unsigned long long _storefrontID;
	TVHKStoreItemCredits* _credits;
	NSError* _error;
	NSString* _title;
	unsigned long long _mediaCategoryType;
	NSOperation* _productOperation;

}

@property (nonatomic,copy,readonly) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaCategoryType;              //@synthesize mediaCategoryType=_mediaCategoryType - In the implementation block
@property (nonatomic,retain) NSOperation * productOperation;                      //@synthesize productOperation=_productOperation - In the implementation block
@property (nonatomic,retain) TVHKStoreItemCredits * credits;                      //@synthesize credits=_credits - In the implementation block
@property (nonatomic,retain) NSError * error;                                     //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) unsigned long long storeID;                          //@synthesize storeID=_storeID - In the implementation block
@property (assign,nonatomic) unsigned long long storefrontID;                     //@synthesize storefrontID=_storefrontID - In the implementation block
+(id)new;
+(id)_contributorsFromStoreCredits:(id)arg1 ;
-(id)init;
-(NSError *)error;
-(void)cancel;
-(void)setError:(NSError *)arg1 ;
-(NSString *)title;
-(unsigned long long)storeID;
-(void)setStoreID:(unsigned long long)arg1 ;
-(void)_handleResponse:(id)arg1 ;
-(unsigned long long)storefrontID;
-(void)setStorefrontID:(unsigned long long)arg1 ;
-(void)executionDidBegin;
-(TVHKStoreItemCredits *)credits;
-(void)setCredits:(TVHKStoreItemCredits *)arg1 ;
-(unsigned long long)mediaCategoryType;
-(id)initWithItemTitle:(id)arg1 mediaCategoryType:(unsigned long long)arg2 ;
-(void)setProductOperation:(NSOperation *)arg1 ;
-(NSOperation *)productOperation;
@end

