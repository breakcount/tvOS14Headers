/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSArray;

@interface PKAccountWebServicePaymentsResponse : PKAccountWebServiceResponse {

	NSArray* _payments;

}

@property (nonatomic,copy,readonly) NSArray * payments;              //@synthesize payments=_payments - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSArray *)payments;
-(id)initWithData:(id)arg1 account:(id)arg2 ;
@end

