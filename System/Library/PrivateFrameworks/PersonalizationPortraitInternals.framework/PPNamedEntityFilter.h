/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:32 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MLModel;

@interface PPNamedEntityFilter : NSObject {

	MLModel* _model;

}
-(id)init;
-(id)initWithModel:(id)arg1 ;
-(id)filterScoredNamedEntities:(id)arg1 ;
-(id)filterNamedEntityRecords:(id)arg1 ;
-(BOOL)isAcceptableRecord:(id)arg1 ;
@end
