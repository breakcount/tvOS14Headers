/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:02 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsFoundation/PodcastsFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableSet;

@interface MTLibraryEntityChanges : NSObject <NSCopying> {

	NSString* _entityName;
	NSMutableSet* _insertedObjectIDs;
	NSMutableSet* _deletedObjectIDs;
	NSMutableSet* _updatedObjectIDs;

}

@property (nonatomic,retain) NSMutableSet * insertedObjectIDs;              //@synthesize insertedObjectIDs=_insertedObjectIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * deletedObjectIDs;               //@synthesize deletedObjectIDs=_deletedObjectIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * updatedObjectIDs;               //@synthesize updatedObjectIDs=_updatedObjectIDs - In the implementation block
@property (nonatomic,readonly) NSString * entityName;                       //@synthesize entityName=_entityName - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)hasChanges;
-(NSString *)entityName;
-(id)initWithEntityName:(id)arg1 ;
-(NSMutableSet *)deletedObjectIDs;
-(NSMutableSet *)updatedObjectIDs;
-(BOOL)hasInserts;
-(BOOL)hasDeletes;
-(NSMutableSet *)insertedObjectIDs;
-(void)setInsertedObjectIDs:(NSMutableSet *)arg1 ;
-(void)setDeletedObjectIDs:(NSMutableSet *)arg1 ;
-(void)setUpdatedObjectIDs:(NSMutableSet *)arg1 ;
-(BOOL)hasUpdates;
-(id)insertedAndUpdatedObjectIDs;
-(void)combineChanges:(id)arg1 ;
-(void)add:(id)arg1 changeType:(int)arg2 ;
@end

