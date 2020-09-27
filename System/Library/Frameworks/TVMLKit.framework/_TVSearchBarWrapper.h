/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UISearchBar;

@interface _TVSearchBarWrapper : UIView {

	UISearchBar* _searchBar;
	BOOL _enabled;

}

@property (nonatomic,retain) UISearchBar * searchBar;                    //@synthesize searchBar=_searchBar - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(UISearchBar *)searchBar;
-(BOOL)canBecomeFocused;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
@end

