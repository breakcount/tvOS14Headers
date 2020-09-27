/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKSearchAutocompleteToken.h>

@class PKPaymentTransactionGroup, NSString;

@interface PKSearchTransactionGroupResult : NSObject <PKSearchAutocompleteToken> {

	PKPaymentTransactionGroup* _group;

}

@property (nonatomic,retain) PKPaymentTransactionGroup * group;              //@synthesize group=_group - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setGroup:(PKPaymentTransactionGroup *)arg1 ;
-(PKPaymentTransactionGroup *)group;
-(unsigned long long)tokenType;
@end

