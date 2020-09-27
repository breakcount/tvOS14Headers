/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:30 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class SASampleStore;

@interface PASampleTimeSeriesDataStore : NSObject <NSSecureCoding> {

	SASampleStore* _sampleStore;

}

@property (retain) SASampleStore * sampleStore;              //@synthesize sampleStore=_sampleStore - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSampleStore:(id)arg1 ;
-(SASampleStore *)sampleStore;
-(void)setSampleStore:(SASampleStore *)arg1 ;
@end
