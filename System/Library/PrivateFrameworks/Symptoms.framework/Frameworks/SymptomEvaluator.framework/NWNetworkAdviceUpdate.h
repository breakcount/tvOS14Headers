/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface NWNetworkAdviceUpdate : NSObject <NSSecureCoding, NSCopying> {

	long long _level;
	NSArray* _applications;

}

@property (assign) long long level;                     //@synthesize level=_level - In the implementation block
@property (retain) NSArray * applications;              //@synthesize applications=_applications - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)level;
-(void)setLevel:(long long)arg1 ;
-(NSArray *)applications;
-(void)setApplications:(NSArray *)arg1 ;
@end

