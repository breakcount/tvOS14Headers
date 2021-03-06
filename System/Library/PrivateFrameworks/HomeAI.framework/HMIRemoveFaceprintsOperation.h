/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:57 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFOperation.h>

@protocol HMIPersonManagerDataSource;
@class NSSet;

@interface HMIRemoveFaceprintsOperation : HMFOperation {

	id<HMIPersonManagerDataSource> _dataSource;
	NSSet* _faceprintUUIDs;

}

@property (readonly) id<HMIPersonManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) NSSet * faceprintUUIDs;                                 //@synthesize faceprintUUIDs=_faceprintUUIDs - In the implementation block
+(id)logCategory;
-(void)main;
-(id<HMIPersonManagerDataSource>)dataSource;
-(NSSet *)faceprintUUIDs;
-(id)initWithDataSource:(id)arg1 faceprintUUIDs:(id)arg2 ;
@end

