/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSURL;

@interface SKStorePageRequest : NSObject {

	long long _pageStyle;
	NSDictionary* _productParameters;
	NSURL* _productURL;

}

@property (assign,nonatomic) long long productPageStyle;                  //@synthesize pageStyle=_pageStyle - In the implementation block
@property (nonatomic,copy) NSDictionary * productParameters;              //@synthesize productParameters=_productParameters - In the implementation block
@property (nonatomic,copy) NSURL * productURL;                            //@synthesize productURL=_productURL - In the implementation block
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setProductPageStyle:(long long)arg1 ;
-(long long)productPageStyle;
-(NSDictionary *)productParameters;
-(void)setProductParameters:(NSDictionary *)arg1 ;
-(NSURL *)productURL;
-(void)setProductURL:(NSURL *)arg1 ;
@end

