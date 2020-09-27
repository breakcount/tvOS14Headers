/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:38 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate;

@interface PGEarlyMomentsWithPeopleMemoryGenerator : PGMemoryGenerator {

	BOOL _shouldGenerateAllMemories;
	NSDate* _localDate;

}

@property (nonatomic,retain) NSDate * localDate;                          //@synthesize localDate=_localDate - In the implementation block
@property (assign,nonatomic) BOOL shouldGenerateAllMemories;              //@synthesize shouldGenerateAllMemories=_shouldGenerateAllMemories - In the implementation block
+(unsigned long long)numberOfPotentialMemoriesForGraph:(id)arg1 ;
+(id)earlyMomentNodesByPersonNodeWithPersonNodes:(id)arg1 ;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(NSDate *)localDate;
-(void)setLocalDate:(NSDate *)arg1 ;
-(void)_enumerateEarlyMomentsWithPeopleForLocalDate:(id)arg1 enumerationBlock:(/*^block*/id)arg2 ;
-(BOOL)shouldGenerateAllMemories;
-(void)setShouldGenerateAllMemories:(BOOL)arg1 ;
@end

