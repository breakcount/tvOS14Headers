/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface HMCameraClipEncryptionContext : NSObject <NSCopying, NSSecureCoding> {

	NSData* _key;
	unsigned long long _scheme;

}

@property (copy,readonly) NSData * key;                      //@synthesize key=_key - In the implementation block
@property (readonly) unsigned long long scheme;              //@synthesize scheme=_scheme - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)scheme;
-(NSData *)key;
-(id)initWithKey:(id)arg1 scheme:(unsigned long long)arg2 ;
@end

