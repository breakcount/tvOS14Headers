/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSTextLocation;
#import <UIFoundation/UIFoundation-Structs.h>
@class UIView, NSTextContainer, NSTextAttachment, NSLayoutManager;

@interface NSTextAttachmentViewProvider : NSObject {

	UIView* _view;
	unsigned long long _characterIndex;
	id<NSTextLocation> _location;
	NSTextContainer* _textContainer;
	BOOL _tracksTextAttachmentViewBounds;
	NSTextAttachment* _textAttachment;
	NSLayoutManager* _layoutManager;

}

@property (__weak) NSTextAttachment * textAttachment;                //@synthesize textAttachment=_textAttachment - In the implementation block
@property (__weak) NSLayoutManager * layoutManager;                  //@synthesize layoutManager=_layoutManager - In the implementation block
@property (readonly) unsigned long long characterIndex;              //@synthesize characterIndex=_characterIndex - In the implementation block
@property (readonly) id<NSTextLocation> location;                    //@synthesize location=_location - In the implementation block
@property (retain) UIView * view; 
@property (assign) BOOL tracksTextAttachmentViewBounds;              //@synthesize tracksTextAttachmentViewBounds=_tracksTextAttachmentViewBounds - In the implementation block
-(void)dealloc;
-(id<NSTextLocation>)location;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(NSLayoutManager *)layoutManager;
-(void)removeView;
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(void)setLayoutManager:(NSLayoutManager *)arg1 ;
-(unsigned long long)characterIndex;
-(BOOL)tracksTextAttachmentViewBounds;
-(id)initWithTextAttachment:(id)arg1 parentView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4 ;
-(CGRect)attachmentBoundsForAttributes:(id)arg1 location:(id)arg2 textContainer:(id)arg3 proposedLineFragment:(CGRect)arg4 position:(CGPoint)arg5 ;
-(void)setTextAttachment:(NSTextAttachment *)arg1 ;
-(void)setTracksTextAttachmentViewBounds:(BOOL)arg1 ;
-(void)loadView;
-(NSTextAttachment *)textAttachment;
-(id)initWithTextAttachment:(id)arg1 parentView:(id)arg2 location:(id)arg3 ;
@end

