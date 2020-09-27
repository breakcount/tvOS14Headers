/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/SFDigestOperationInternal.h>
#import <libobjc.A.dylib/SFDigestOperation.h>

@class NSData, NSString;

@interface _SFSHA512DigestOperation : NSObject <SFDigestOperationInternal, SFDigestOperation> {

	id _sha512DigestOperationInternal;

}

@property (getter=_secKeyECDSAAlgorithm,nonatomic,readonly) const CFStringRef secKeyECDSAAlgorithm; 
@property (getter=_ccDigestInfo,nonatomic,readonly) const ccdigest_info* ccDigestInfo; 
@property (copy,readonly) NSData * hashValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(long long)outputSize;
+(long long)blockSize;
+(id)digest:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)hashValue;
-(void)addData:(id)arg1 ;
-(const CFStringRef)_secKeyECDSAAlgorithm;
-(const ccdigest_info*)_ccDigestInfo;
@end

