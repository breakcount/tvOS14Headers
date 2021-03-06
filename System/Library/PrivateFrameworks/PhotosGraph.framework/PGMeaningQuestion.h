/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:54 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGSurveyQuestion.h>

@class NSDictionary, NSString;

@interface PGMeaningQuestion : PGSurveyQuestion {

	unsigned short _state;
	NSDictionary* _additionalInfo;
	NSString* _entityIdentifier;
	double _localFactoryScore;

}
-(unsigned short)type;
-(unsigned short)state;
-(unsigned short)displayType;
-(id)additionalInfo;
-(unsigned short)entityType;
-(id)entityIdentifier;
-(double)localFactoryScore;
-(id)initWithMeaningLabel:(id)arg1 assetUUID:(id)arg2 localFactoryScore:(double)arg3 ;
-(id)initWithConfirmedMeaningLabel:(id)arg1 assetUUID:(id)arg2 ;
@end

