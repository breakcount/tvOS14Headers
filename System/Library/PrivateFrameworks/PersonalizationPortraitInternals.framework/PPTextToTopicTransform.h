/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:32 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _PASLock, NSString, _PASNotificationToken;

@interface PPTextToTopicTransform : NSObject {

	_PASLock* _lock;
	NSString* _vocabularyPath;
	NSString* _weightsPath;
	NSString* _mappingId;
	_PASNotificationToken* _assetUpdateNotificationToken;

}

@property (nonatomic,readonly) unsigned long long outputTopicCount; 
@property (nonatomic,readonly) float threshold; 
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(float)threshold;
-(unsigned long long)outputTopicCount;
-(id)_initWithVocabulary:(id)arg1 weights:(id)arg2 ;
-(BOOL)_updateFromAssetData;
-(void)iterateTopicsForText:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)_payloadForTopic:(unsigned)arg1 ;
@end
