/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/_HKComparisonFilter.h>

@class NSRegularExpression;

@interface _HKCDADocumentSampleComparisonFilter : _HKComparisonFilter {

	NSRegularExpression* _comparisonExpression;

}
+(BOOL)isSupportedKeyPath:(id)arg1 ;
+(id)allowedDataTypeClassesForKeyPath:(id)arg1 ;
+(id)allowedValueClassesForKeyPath:(id)arg1 ;
+(BOOL)isAllowedPredicateOperatorType:(unsigned long long)arg1 forKeyPath:(id)arg2 ;
+(BOOL)areValidTypes:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)acceptsDataObject:(id)arg1 ;
-(void)configureInMemoryFilter;
@end

