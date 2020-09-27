/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMFNetAddressInternal : HMFObject {

	unsigned long long _addressFamily;
	NSString* _addressString;

}

@property (nonatomic,readonly) unsigned long long addressFamily;              //@synthesize addressFamily=_addressFamily - In the implementation block
@property (nonatomic,copy,readonly) NSString * addressString;                 //@synthesize addressString=_addressString - In the implementation block
-(id)dataUsingEncoding:(unsigned long long)arg1 ;
-(NSString *)addressString;
-(unsigned long long)addressFamily;
@end

