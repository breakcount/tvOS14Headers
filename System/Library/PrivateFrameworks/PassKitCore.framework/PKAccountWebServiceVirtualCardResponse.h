/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class PKVirtualCard;

@interface PKAccountWebServiceVirtualCardResponse : PKAccountWebServiceResponse {

	PKVirtualCard* _virtualCard;

}

@property (nonatomic,copy,readonly) PKVirtualCard * virtualCard;              //@synthesize virtualCard=_virtualCard - In the implementation block
-(id)initWithData:(id)arg1 ;
-(PKVirtualCard *)virtualCard;
@end

