/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSArray, _UITextPlaceholderAttachment;

@interface UITextPlaceholder : NSObject {

	NSArray* _rects;
	_UITextPlaceholderAttachment* _attachment;
	CGRect _caretRectBeforeInsertion;

}

@property (nonatomic,copy) NSArray * rects;                                          //@synthesize rects=_rects - In the implementation block
@property (assign,nonatomic) CGRect caretRectBeforeInsertion;                        //@synthesize caretRectBeforeInsertion=_caretRectBeforeInsertion - In the implementation block
@property (nonatomic,retain) _UITextPlaceholderAttachment * attachment;              //@synthesize attachment=_attachment - In the implementation block
-(id)init;
-(_UITextPlaceholderAttachment *)attachment;
-(void)setAttachment:(_UITextPlaceholderAttachment *)arg1 ;
-(NSArray *)rects;
-(void)setRects:(NSArray *)arg1 ;
-(CGRect)caretRectBeforeInsertion;
-(void)setCaretRectBeforeInsertion:(CGRect)arg1 ;
@end

