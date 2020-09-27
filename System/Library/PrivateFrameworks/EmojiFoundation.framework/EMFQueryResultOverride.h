/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface EMFQueryResultOverride : NSObject {

	unsigned long long _overrideSearchType;
	unsigned long long _overrideBehavior;
	NSArray* _results;

}

@property (nonatomic,readonly) NSArray * results;                                  //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) unsigned long long overrideSearchType;              //@synthesize overrideSearchType=_overrideSearchType - In the implementation block
@property (nonatomic,readonly) unsigned long long overrideBehavior;                //@synthesize overrideBehavior=_overrideBehavior - In the implementation block
-(id)description;
-(NSArray *)results;
-(unsigned long long)overrideBehavior;
-(unsigned long long)overrideSearchType;
-(id)initWithOverridesArray:(id)arg1 searchType:(unsigned long long)arg2 behavior:(unsigned long long)arg3 ;
@end
