/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView;


@protocol _UIRemoteKeyboardInputViewPlaceholder
@property (assign,nonatomic) CGSize fixedSize; 
@property (retain,readonly) UIView * placeheldView; 
@property (nonatomic,retain) UIView * fallbackView; 
@property (nonatomic,retain) UIView * associatedView; 
@required
-(void)setAssociatedView:(id)arg1;
-(UIView *)associatedView;
-(CGSize)fixedSize;
-(void)setFixedSize:(CGSize)arg1;
-(void)_isPlaceholderViewSelector;
-(UIView *)placeheldView;
-(void)setFallbackView:(id)arg1;
-(BOOL)refreshPlaceholder;
-(UIView *)fallbackView;

@end

