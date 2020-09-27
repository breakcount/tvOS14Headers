/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextSelectionRect.h>

@interface _UITextKitSelectionRect : UITextSelectionRect {

	BOOL _containsEnd;
	BOOL _containsStart;
	BOOL _vertical;
	BOOL __drawsOwnHighlight;
	long long _writingDirection;
	CGRect _rect;

}

@property (nonatomic,readonly) CGRect rect;                                                      //@synthesize rect=_rect - In the implementation block
@property (assign,nonatomic) BOOL containsStart;                                                 //@synthesize containsStart=_containsStart - In the implementation block
@property (assign,nonatomic) BOOL containsEnd;                                                   //@synthesize containsEnd=_containsEnd - In the implementation block
@property (assign,nonatomic) long long writingDirection;                                         //@synthesize writingDirection=_writingDirection - In the implementation block
@property (assign,getter=isVertical,nonatomic) BOOL vertical;                                    //@synthesize vertical=_vertical - In the implementation block
@property (assign,setter=_setDrawsOwnHighlight:,nonatomic) BOOL _drawsOwnHighlight;              //@synthesize _drawsOwnHighlight=__drawsOwnHighlight - In the implementation block
+(id)selectionRectWithRect:(CGRect)arg1 fromView:(id)arg2 ;
-(id)description;
-(CGRect)rect;
-(void)setWritingDirection:(long long)arg1 ;
-(void)setContainsStart:(BOOL)arg1 ;
-(void)setContainsEnd:(BOOL)arg1 ;
-(BOOL)containsStart;
-(long long)writingDirection;
-(BOOL)containsEnd;
-(BOOL)isVertical;
-(void)setVertical:(BOOL)arg1 ;
-(BOOL)_drawsOwnHighlight;
-(void)setRect:(CGRect)arg1 fromView:(id)arg2 ;
-(void)_setDrawsOwnHighlight:(BOOL)arg1 ;
@end

