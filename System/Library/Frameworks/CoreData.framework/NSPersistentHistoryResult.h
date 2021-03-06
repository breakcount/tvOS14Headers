/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSPersistentStoreResult.h>

@interface NSPersistentHistoryResult : NSPersistentStoreResult {

	id _aggregatedResult;
	long long _resultType;

}

@property (readonly) id result;                         //@synthesize aggregatedResult=_aggregatedResult - In the implementation block
@property (readonly) long long resultType;              //@synthesize resultType=_resultType - In the implementation block
-(id)description;
-(void)dealloc;
-(id)result;
-(long long)resultType;
-(id)initWithResultType:(long long)arg1 andResult:(id)arg2 ;
-(id)initWithSubresults:(id)arg1 ;
@end

