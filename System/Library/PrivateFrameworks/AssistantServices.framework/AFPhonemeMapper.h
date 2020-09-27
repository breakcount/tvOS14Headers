/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSRegularExpression;

@interface AFPhonemeMapper : NSObject {

	NSString* _languageCode;
	NSDictionary* _phonemeMap;
	NSRegularExpression* _regex;

}
+(id)_mapForLanguageCode:(id)arg1 ;
+(id)_buildRegexMatchingSubstrings:(id)arg1 ;
-(id)initWithLanguageCode:(id)arg1 ;
-(id)stringByReplacingPhonemesInString:(id)arg1 ;
@end
