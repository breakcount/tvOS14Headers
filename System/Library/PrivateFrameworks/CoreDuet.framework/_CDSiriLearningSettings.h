/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreDuet/CoreDuet-Structs.h>
@class NSArray, NSMutableArray;

@interface _CDSiriLearningSettings : NSObject {

	BOOL _hasPrefsAccess;
	int _notifyToken;
	os_unfair_lock_s _lock;
	NSArray* _allLearningDisabledBundleIDs;
	NSMutableArray* _delegates;

}

@property (nonatomic,readonly) NSArray * allLearningDisabledBundleIDs; 
+(id)sharedInstance;
-(NSArray *)allLearningDisabledBundleIDs;
-(BOOL)isLearningDisabledForBundleID:(id)arg1 ;
-(void)startSanitizingKnowledgeStore:(id)arg1 ;
-(void)startSanitizingInteractionStore:(id)arg1 ;
-(void)stopSanitizing;
@end

