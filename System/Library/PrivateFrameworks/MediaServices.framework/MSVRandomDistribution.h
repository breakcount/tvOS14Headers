/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSVRandom.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol MSVRandom;
@interface MSVRandomDistribution : NSObject <MSVRandom, NSSecureCoding> {

	id<MSVRandom> _source;
	long long _lowestValue;
	long long _highestValue;
	unsigned long long _numberOfPossibleOutcomes;

}

@property (nonatomic,readonly) long long lowestValue;                                    //@synthesize lowestValue=_lowestValue - In the implementation block
@property (nonatomic,readonly) long long highestValue;                                   //@synthesize highestValue=_highestValue - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfPossibleOutcomes;              //@synthesize numberOfPossibleOutcomes=_numberOfPossibleOutcomes - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1 ;
-(id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3 ;
-(long long)lowestValue;
-(long long)highestValue;
-(unsigned long long)numberOfPossibleOutcomes;
@end

