/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVLReadWriteFeedResource;
@class NSDateFormatter, NSNumberFormatter, NSMutableDictionary;

@interface TVLEvaluator : NSObject {

	NSDateFormatter* _zuluDateFormatter;
	NSNumberFormatter* _numberFormatter;
	NSMutableDictionary* _dateFormatterCache;
	id<TVLReadWriteFeedResource> _feedResource;

}
+(id)evaluatePlist:(id)arg1 withFeedResource:(id)arg2 ;
-(id)_lookup:(id)arg1 ;
-(id)initWithFeedResource:(id)arg1 ;
-(id)_evaluateObject:(id)arg1 withRecursionLevel:(int)arg2 ;
-(id)_evaluateFunctionString:(id)arg1 ;
-(id)_evaluateArguments:(id)arg1 commandForErrorLogging:(id)arg2 ;
-(id)_evaluateStoreCoverArts:(id)arg1 ;
-(id)_ifElse:(id)arg1 ;
-(id)_localtime:(id)arg1 ;
-(id)_setPreference:(id)arg1 ;
-(id)_removePreferences:(id)arg1 ;
@end

