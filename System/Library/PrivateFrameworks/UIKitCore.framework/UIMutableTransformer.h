/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITransformer.h>

@protocol UIMutableTransformerDelegate;
@interface UIMutableTransformer : UITransformer {

	id<UIMutableTransformerDelegate> _delegate;

}

@property (assign,setter=_setDelegate:,nonatomic,__weak) id<UIMutableTransformerDelegate> _delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<UIMutableTransformerDelegate>)_delegate;
-(void)_setDelegate:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)removeAll;
-(void)_updateTransform;
-(void)_ensureTransformsStructuresExists;
-(void)addTransform:(id)arg1 reason:(id)arg2 ;
-(void)replaceTransform:(id)arg1 withTransform:(id)arg2 reason:(id)arg3 ;
-(void)removeTransform:(id)arg1 ;
@end

