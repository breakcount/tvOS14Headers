/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SFMessageAuthenticationCodeOperation.h>

@interface SFHMACOperation : SFMessageAuthenticationCodeOperation {

	id _hmacOperationInternal;

}

@property (nonatomic,copy) id<SFDigestOperation> digestOperation; 
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<SFDigestOperation>)digestOperation;
-(id)initWithDigestOperation:(id)arg1 ;
-(void)setDigestOperation:(id<SFDigestOperation>)arg1 ;
@end
