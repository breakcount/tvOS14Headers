/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface HMCameraClipVideoSegment : NSObject <HMFObject, NSCopying, NSSecureCoding> {

	unsigned long long _byteLength;
	unsigned long long _byteOffset;

}

@property (readonly) unsigned long long byteLength;                               //@synthesize byteLength=_byteLength - In the implementation block
@property (readonly) unsigned long long byteOffset;                               //@synthesize byteOffset=_byteOffset - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)shortDescription;
-(unsigned long long)byteLength;
-(NSString *)privateDescription;
-(unsigned long long)byteOffset;
-(NSArray *)attributeDescriptions;
-(id)initWithByteLength:(unsigned long long)arg1 byteOffset:(unsigned long long)arg2 ;
@end

