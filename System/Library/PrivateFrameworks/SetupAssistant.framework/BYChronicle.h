/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface BYChronicle : NSObject {

	NSMutableDictionary* _featureEntries;

}

@property (nonatomic,retain) NSMutableDictionary * featureEntries;              //@synthesize featureEntries=_featureEntries - In the implementation block
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)addEntry:(id)arg1 forFeature:(unsigned long long)arg2 ;
-(NSMutableDictionary *)featureEntries;
-(void)recordFeatureShown:(unsigned long long)arg1 ;
-(id)entryForFeature:(unsigned long long)arg1 ;
-(void)setFeatureEntries:(NSMutableDictionary *)arg1 ;
@end
