/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMNoteVersionId : FATObject {

	NSNumber* _updateSequenceNum;
	NSNumber* _updated;
	NSNumber* _saved;
	NSString* _title;
	NSNumber* _lastEditorId;

}

@property (nonatomic,retain) NSNumber * updateSequenceNum;              //@synthesize updateSequenceNum=_updateSequenceNum - In the implementation block
@property (nonatomic,retain) NSNumber * updated;                        //@synthesize updated=_updated - In the implementation block
@property (nonatomic,retain) NSNumber * saved;                          //@synthesize saved=_saved - In the implementation block
@property (nonatomic,retain) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSNumber * lastEditorId;                   //@synthesize lastEditorId=_lastEditorId - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setUpdated:(NSNumber *)arg1 ;
-(NSNumber *)updated;
-(NSNumber *)saved;
-(NSNumber *)updateSequenceNum;
-(void)setUpdateSequenceNum:(NSNumber *)arg1 ;
-(void)setSaved:(NSNumber *)arg1 ;
-(NSNumber *)lastEditorId;
-(void)setLastEditorId:(NSNumber *)arg1 ;
@end

