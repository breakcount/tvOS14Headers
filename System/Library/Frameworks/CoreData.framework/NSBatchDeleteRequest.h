/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSPersistentStoreRequest.h>

@class NSFetchRequest;

@interface NSBatchDeleteRequest : NSPersistentStoreRequest {

	unsigned long long _resultType;
	NSFetchRequest* _deleteTarget;
	long long _flags;

}

@property (assign) unsigned long long resultType;                     //@synthesize resultType=_resultType - In the implementation block
@property (copy,readonly) NSFetchRequest * fetchRequest; 
+(id)decodeFromXPCArchive:(id)arg1 withContext:(id)arg2 ;
-(id)description;
-(void)dealloc;
-(unsigned long long)resultType;
-(id)encodeForXPC;
-(BOOL)_secureOperation;
-(void)setResultType:(unsigned long long)arg1 ;
-(void)_setSecureOperation:(BOOL)arg1 ;
-(NSFetchRequest *)fetchRequest;
-(id)initWithFetchRequest:(id)arg1 ;
-(void)_resolveEntityWithContext:(id)arg1 ;
-(unsigned long long)requestType;
-(void)setShouldPerformSecureOperation:(BOOL)arg1 ;
-(BOOL)shouldPerformSecureOperation;
-(id)initWithObjectIDs:(id)arg1 ;
@end

