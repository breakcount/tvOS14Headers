/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SKPurchaseIntent : NSObject {

	NSString* _bundleId;
	NSString* _productIdentifer;
	NSString* _appName;
	NSString* _productName;

}
-(void)send:(/*^block*/id)arg1 ;
-(id)initWithBundleId:(id)arg1 productIdentifier:(id)arg2 appName:(id)arg3 productName:(id)arg4 ;
-(id)initWithBundleId:(id)arg1 productIdentifier:(id)arg2 ;
@end

