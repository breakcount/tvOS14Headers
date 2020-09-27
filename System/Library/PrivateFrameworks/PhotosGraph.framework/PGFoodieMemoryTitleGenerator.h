/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:56 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGTitleGenerator.h>

@protocol PGGraphLocationOrArea;
@class PGGraphLocationCityNode, PGGraphBusinessNode, PGGraphPersonNode, PGGraphAddressNode, PGGraphNode;

@interface PGFoodieMemoryTitleGenerator : PGTitleGenerator {

	long long _type;
	PGGraphLocationCityNode* _cityNode;
	PGGraphBusinessNode* _businessNode;
	PGGraphPersonNode* _personNode;
	PGGraphAddressNode* _addressNode;
	PGGraphNode*<PGGraphLocationOrArea> _tripLocationNode;

}
-(id)_typeString;
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(id)_timeTitleForTripAndWeekend;
-(id)initWithMomentNodes:(id)arg1 cityNode:(id)arg2 ;
-(id)initWithMomentNodes:(id)arg1 businessNode:(id)arg2 ;
-(id)initWithMomentNodes:(id)arg1 personNode:(id)arg2 ;
-(id)initWithMomentNodes:(id)arg1 addressNode:(id)arg2 ;
-(id)initWithMomentNodes:(id)arg1 tripLocationNode:(id)arg2 ;
@end

