/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:44 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriInference.framework/SiriInference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInference/SiriInference-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface AppMatches : NSObject <NSCopying, NSSecureCoding> {

	 recommendation;
	 bundleIds;
	 signals;

}

@property (readonly,nonatomic) long long recommendation; 
@property (readonly,nonatomic) NSArray * bundleIds; 
@property (readonly,nonatomic) NSString * description; 
+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg1 ;
-(id)copyWithZone:(void*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)bundleIds;
-(long long)recommendation;
@end

