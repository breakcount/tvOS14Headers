/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIContextualAction.h>

@class UIVisualEffect, UIColor, UIImage;

@interface UISwipeAction : UIContextualAction {

	BOOL _canBeTriggeredBySwipe;
	BOOL _resetsSwipedRow;
	UIVisualEffect* _backgroundEffect;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                           //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) UIColor * color; 
@property (nonatomic,copy) UIImage * icon; 
@property (nonatomic,copy) UIVisualEffect * backgroundEffect;              //@synthesize backgroundEffect=_backgroundEffect - In the implementation block
@property (assign,nonatomic) BOOL canBeTriggeredBySwipe;                   //@synthesize canBeTriggeredBySwipe=_canBeTriggeredBySwipe - In the implementation block
@property (assign,nonatomic) BOOL resetsSwipedRow;                         //@synthesize resetsSwipedRow=_resetsSwipedRow - In the implementation block
+(id)swipeActionWithStyle:(long long)arg1 title:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)init;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(UIVisualEffect *)backgroundEffect;
-(void)setBackgroundEffect:(UIVisualEffect *)arg1 ;
-(BOOL)resetsSwipedRow;
-(void)setResetsSwipedRow:(BOOL)arg1 ;
-(void)setCanBeTriggeredBySwipe:(BOOL)arg1 ;
-(void)resetSwipedRow;
-(BOOL)canBeTriggeredBySwipe;
@end

