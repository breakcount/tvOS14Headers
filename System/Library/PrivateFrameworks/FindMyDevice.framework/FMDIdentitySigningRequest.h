/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface FMDIdentitySigningRequest : NSObject <NSSecureCoding> {

	BOOL _useSCRT;
	NSData* _dataToSign;
	long long _validityInMinutes;

}

@property (nonatomic,retain) NSData * dataToSign;                      //@synthesize dataToSign=_dataToSign - In the implementation block
@property (assign,nonatomic) BOOL useSCRT;                             //@synthesize useSCRT=_useSCRT - In the implementation block
@property (assign,nonatomic) long long validityInMinutes;              //@synthesize validityInMinutes=_validityInMinutes - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDataToSign:(NSData *)arg1 ;
-(void)setValidityInMinutes:(long long)arg1 ;
-(void)setUseSCRT:(BOOL)arg1 ;
-(NSData *)dataToSign;
-(long long)validityInMinutes;
-(BOOL)useSCRT;
@end

