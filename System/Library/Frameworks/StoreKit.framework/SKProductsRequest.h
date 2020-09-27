/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKit/SKRequest.h>

@interface SKProductsRequest : SKRequest {

	id _productsRequestInternal;

}

@property (assign,nonatomic,__weak) id<SKProductsRequestDelegate> delegate; 
-(id)init;
-(void)_start;
-(void)_startWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithProductIdentifiers:(id)arg1 ;
-(id)_newResponseForProducts:(id)arg1 invalidIdentifiers:(id)arg2 ;
@end

