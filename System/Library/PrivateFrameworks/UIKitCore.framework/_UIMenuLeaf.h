/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UIImage;


@protocol _UIMenuLeaf <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) UIImage * image; 
@property (nonatomic,copy) NSString * discoverabilityTitle; 
@property (assign,nonatomic) unsigned long long attributes; 
@property (assign,nonatomic) long long state; 
@property (nonatomic,readonly) BOOL requiresAuthenticatedInput; 
@required
-(long long)state;
-(void)setState:(long long)arg1;
-(unsigned long long)attributes;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(void)setAttributes:(unsigned long long)arg1;
-(UIImage *)image;
-(void)setImage:(id)arg1;
-(void)setDiscoverabilityTitle:(id)arg1;
-(BOOL)requiresAuthenticatedInput;
-(id)_leafAlternates;
-(id)_leafKeyInput;
-(long long)_leafKeyModifierFlags;
-(BOOL)_isDefaultCommand;
-(void)_performWithTarget:(id)arg1;
-(id)_resolvedTargetFromFirstTarget:(id)arg1;
-(id)_validatedLeafWithAlternate:(id)arg1 target:(id)arg2 validation:(id)arg3;
-(NSString *)discoverabilityTitle;

@end

