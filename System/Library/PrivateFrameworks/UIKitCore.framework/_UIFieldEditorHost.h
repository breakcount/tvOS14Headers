/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIFieldEditorHostingViewRequirements;
@class UIView, UIFieldEditor;

@interface _UIFieldEditorHost : NSObject {

	UIView*<_UIFieldEditorHostingViewRequirements> _hostingView;
	UIFieldEditor* _hostedFieldEditor;

}

@property (nonatomic,__weak,readonly) UIView*<_UIFieldEditorHostingViewRequirements> hostingView;              //@synthesize hostingView=_hostingView - In the implementation block
@property (nonatomic,readonly) UIFieldEditor * hostedFieldEditor;                                              //@synthesize hostedFieldEditor=_hostedFieldEditor - In the implementation block
@property (getter=isHostingFieldEditor,nonatomic,readonly) BOOL hostingFieldEditor; 
+(id)fieldEditorHostForTextField:(id)arg1 ;
-(id)description;
-(void)layoutIfNeeded;
-(UIView*<_UIFieldEditorHostingViewRequirements>)hostingView;
-(id)initWithHostingView:(id)arg1 ;
-(id)_viewForHostingFieldEditor;
-(BOOL)isHostingFieldEditor;
-(void)addFieldEditor:(id)arg1 ;
-(void)removeFieldEditor;
-(void)addPlaceholderLabel:(id)arg1 ;
-(UIFieldEditor *)hostedFieldEditor;
@end

