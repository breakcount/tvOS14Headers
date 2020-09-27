/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface AFConversationTransaction : NSObject {

	NSArray* _updatedItemIndexPaths;
	NSArray* _insertedItemIndexPaths;
	NSArray* _presentationStateChangedItemIndexPaths;

}

@property (nonatomic,readonly) NSArray * updatedItemIndexPaths;                               //@synthesize updatedItemIndexPaths=_updatedItemIndexPaths - In the implementation block
@property (nonatomic,readonly) NSArray * insertedItemIndexPaths;                              //@synthesize insertedItemIndexPaths=_insertedItemIndexPaths - In the implementation block
@property (nonatomic,readonly) NSArray * presentationStateChangedItemIndexPaths;              //@synthesize presentationStateChangedItemIndexPaths=_presentationStateChangedItemIndexPaths - In the implementation block
-(id)initWithUpdatedItemIndexPaths:(id)arg1 insertedItemIndexPaths:(id)arg2 presentationStateChangedItemIndexPaths:(id)arg3 ;
-(NSArray *)updatedItemIndexPaths;
-(NSArray *)insertedItemIndexPaths;
-(NSArray *)presentationStateChangedItemIndexPaths;
@end

