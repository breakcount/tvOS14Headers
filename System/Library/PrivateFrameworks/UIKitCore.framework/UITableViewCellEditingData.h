/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UITableViewCell, UITableViewCellEditControl, UITableViewCellReorderControl, UIView;

@interface UITableViewCellEditingData : NSObject {

	UITableViewCell* _cell;
	long long _editingStyle;
	UITableViewCellEditControl* _editControl;
	UITableViewCellReorderControl* _reorderControl;
	UIView* _reorderSeparatorView;

}

@property (getter=isDataRequired,nonatomic,readonly) BOOL dataRequired; 
@property (nonatomic,readonly) BOOL wantsMaskingWhileAnimatingDisabled; 
-(void)dealloc;
-(id)editControl:(BOOL)arg1 ;
-(id)reorderControl:(BOOL)arg1 ;
-(id)reorderSeparatorView:(BOOL)arg1 ;
-(id)initWithTableViewCell:(id)arg1 editingStyle:(long long)arg2 ;
-(BOOL)wantsMaskingWhileAnimatingDisabled;
-(BOOL)isDataRequired;
@end

