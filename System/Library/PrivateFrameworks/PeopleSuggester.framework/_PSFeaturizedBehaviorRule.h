/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:27 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BMRule, NSMutableDictionary;

@interface _PSFeaturizedBehaviorRule : NSObject {

	BMRule* _rule;
	NSMutableDictionary* _features;
	double _score;

}

@property (nonatomic,retain) BMRule * rule;                               //@synthesize rule=_rule - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * features;              //@synthesize features=_features - In the implementation block
@property (assign,nonatomic) double score;                                //@synthesize score=_score - In the implementation block
-(double)score;
-(NSMutableDictionary *)features;
-(void)setScore:(double)arg1 ;
-(void)setFeatures:(NSMutableDictionary *)arg1 ;
-(BMRule *)rule;
-(void)setRule:(BMRule *)arg1 ;
-(id)initWithRule:(id)arg1 score:(double)arg2 features:(id)arg3 ;
@end
