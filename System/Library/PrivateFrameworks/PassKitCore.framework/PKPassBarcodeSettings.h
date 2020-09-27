/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL;

@interface PKPassBarcodeSettings : NSObject <NSSecureCoding> {

	long long _initialBarcodeFetchCount;
	NSURL* _barcodeServiceURL;

}

@property (nonatomic,readonly) long long initialBarcodeFetchCount;              //@synthesize initialBarcodeFetchCount=_initialBarcodeFetchCount - In the implementation block
@property (nonatomic,readonly) NSURL * barcodeServiceURL;                       //@synthesize barcodeServiceURL=_barcodeServiceURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(long long)initialBarcodeFetchCount;
-(NSURL *)barcodeServiceURL;
@end

