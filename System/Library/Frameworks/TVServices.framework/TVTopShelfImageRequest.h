/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, NSDictionary;

@interface TVTopShelfImageRequest : NSObject <NSSecureCoding> {

	NSURL* _URL;
	NSString* _imageIdentifier;
	NSDictionary* _customHeaders;

}

@property (nonatomic,copy,readonly) NSURL * URL;                             //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageIdentifier;              //@synthesize imageIdentifier=_imageIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * customHeaders;                     //@synthesize customHeaders=_customHeaders - In the implementation block
+(id)new;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(void)setCustomHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)customHeaders;
-(NSString *)imageIdentifier;
-(id)initWithURL:(id)arg1 imageIdentifier:(id)arg2 ;
-(id)_comparisonObjectKey;
@end

