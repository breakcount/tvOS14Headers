/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSManagedObjectID, NSFetchRequest;

@interface NSSQLObjectFaultRequestContext : NSSQLStoreRequestContext {

	NSManagedObjectID* _objectID;
	NSFetchRequest* _fetchRequest;
	BOOL _forConflictAnalysis;

}

@property (nonatomic,readonly) NSManagedObjectID * objectID;              //@synthesize objectID=_objectID - In the implementation block
@property (assign,nonatomic) BOOL forConflictAnalysis;                    //@synthesize forConflictAnalysis=_forConflictAnalysis - In the implementation block
-(void)dealloc;
-(NSManagedObjectID *)objectID;
-(id)fetchRequest;
-(BOOL)executeRequestCore:(id*)arg1 ;
-(id)initWithObjectID:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 ;
-(BOOL)forConflictAnalysis;
-(id)createFetchRequestContext;
-(void)setForConflictAnalysis:(BOOL)arg1 ;
@end

