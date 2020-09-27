/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSPersistentStoreResult.h>

@interface NSPersistentCloudKitContainerEventResult : NSPersistentStoreResult {

	id _result;
	long long _resultType;

}

@property (readonly) id result;                         //@synthesize result=_result - In the implementation block
@property (readonly) long long resultType;              //@synthesize resultType=_resultType - In the implementation block
+(id)stringForEventResultType:(long long)arg1 ;
-(void)dealloc;
-(id)result;
-(long long)resultType;
-(id)initWithSubresults:(id)arg1 ;
-(id)initWithResult:(id)arg1 ofType:(long long)arg2 ;
@end
