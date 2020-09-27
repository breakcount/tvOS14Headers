/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:30 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PPScoredItem;

@interface PPCoalescedScoredNamedEntity : NSObject {

	unsigned short _occurrencesInSource;
	PPScoredItem* _scoredNamedEntity;

}

@property (nonatomic,readonly) PPScoredItem * scoredNamedEntity;                //@synthesize scoredNamedEntity=_scoredNamedEntity - In the implementation block
@property (nonatomic,readonly) unsigned short occurrencesInSource;              //@synthesize occurrencesInSource=_occurrencesInSource - In the implementation block
-(id)init;
-(unsigned short)occurrencesInSource;
-(id)initWithScoredNamedEntity:(id)arg1 occurrencesInSource:(unsigned short)arg2 ;
-(PPScoredItem *)scoredNamedEntity;
@end

