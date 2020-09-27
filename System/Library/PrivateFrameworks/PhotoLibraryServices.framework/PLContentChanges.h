/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface PLContentChanges : NSObject {

	NSMutableArray* _container;
	NSMutableArray* _updatedContent;

}

@property (nonatomic,retain) NSMutableArray * container;                   //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) NSMutableArray * updatedContent;              //@synthesize updatedContent=_updatedContent - In the implementation block
-(NSMutableArray *)container;
-(void)setContainer:(NSMutableArray *)arg1 ;
-(void)cleanupState;
-(NSMutableArray *)updatedContent;
-(void)setUpdatedContent:(NSMutableArray *)arg1 ;
@end

