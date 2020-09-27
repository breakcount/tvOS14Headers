/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSPersistentHistoryTransaction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, NSData, NSPersistentStoreCoordinator, NSManagedObjectID;

@interface _NSPersistentHistoryTransaction : NSPersistentHistoryTransaction <NSSecureCoding> {

	long long _rowIdentifier;
	double _timestamp;
	NSArray* _changes;
	NSString* _storeID;
	NSString* _bundleID;
	NSString* _processID;
	NSString* _contextName;
	NSString* _author;
	NSData* _queryGeneration;
	NSPersistentStoreCoordinator* _coordinator;
	NSManagedObjectID* _backingObjectID;

}
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)token;
-(id)bundleID;
-(id)changes;
-(id)timestamp;
-(id)storeID;
-(long long)transactionNumber;
-(id)processID;
-(id)contextName;
-(id)author;
-(id)initialQueryGenerationToken;
-(id)postQueryGenerationToken;
-(id)objectIDNotification;
@end

