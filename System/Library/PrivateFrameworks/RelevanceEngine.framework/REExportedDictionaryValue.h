/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:17 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REExportedValue.h>

@class NSDictionary;

@interface REExportedDictionaryValue : REExportedValue {

	NSDictionary* _dictionary;

}
-(unsigned long long)type;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryValue;
-(unsigned long long)propertyCount;
-(void)enumerateValuesUsingBlock:(/*^block*/id)arg1 ;
-(id)exportedValueForKey:(id)arg1 ;
@end

