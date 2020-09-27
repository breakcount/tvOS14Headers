/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UITextField, UIColor;


@protocol _UISearchSuggestionControllerDelegate <NSObject>
@property (nonatomic,readonly) UITextField * searchTextField; 
@property (nonatomic,readonly) UIColor * searchTextColor; 
@property (nonatomic,readonly) UIColor * searchPlaceholderColor; 
@optional
-(UITextField *)searchTextField;
-(UIColor *)searchTextColor;
-(UIColor *)searchPlaceholderColor;

@required
-(void)searchSuggestionController:(id)arg1 didSelectSuggestion:(id)arg2;

@end
