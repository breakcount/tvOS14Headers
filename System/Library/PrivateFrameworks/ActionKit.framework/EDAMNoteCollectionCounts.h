/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSDictionary, NSNumber;

@interface EDAMNoteCollectionCounts : FATObject {

	NSDictionary* _notebookCounts;
	NSDictionary* _tagCounts;
	NSNumber* _trashCount;

}

@property (nonatomic,retain) NSDictionary * notebookCounts;              //@synthesize notebookCounts=_notebookCounts - In the implementation block
@property (nonatomic,retain) NSDictionary * tagCounts;                   //@synthesize tagCounts=_tagCounts - In the implementation block
@property (nonatomic,retain) NSNumber * trashCount;                      //@synthesize trashCount=_trashCount - In the implementation block
+(id)structName;
+(id)structFields;
-(NSDictionary *)notebookCounts;
-(void)setNotebookCounts:(NSDictionary *)arg1 ;
-(NSDictionary *)tagCounts;
-(void)setTagCounts:(NSDictionary *)arg1 ;
-(NSNumber *)trashCount;
-(void)setTrashCount:(NSNumber *)arg1 ;
@end

