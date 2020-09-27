/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, UINavigationItem, NSString;

@interface RUISpinnerRecord : NSObject {

	BOOL _hidesBackButton;
	NSArray* _rightItems;
	NSArray* _leftItems;
	UINavigationItem* _navigationItem;
	NSString* _title;
	NSString* _spinningTitle;

}

@property (nonatomic,copy) NSArray * rightItems;                             //@synthesize rightItems=_rightItems - In the implementation block
@property (nonatomic,copy) NSArray * leftItems;                              //@synthesize leftItems=_leftItems - In the implementation block
@property (nonatomic,retain) UINavigationItem * navigationItem;              //@synthesize navigationItem=_navigationItem - In the implementation block
@property (assign,nonatomic) BOOL hidesBackButton;                           //@synthesize hidesBackButton=_hidesBackButton - In the implementation block
@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * spinningTitle;                         //@synthesize spinningTitle=_spinningTitle - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSArray *)rightItems;
-(void)setRightItems:(NSArray *)arg1 ;
-(NSArray *)leftItems;
-(void)setLeftItems:(NSArray *)arg1 ;
-(UINavigationItem *)navigationItem;
-(void)setNavigationItem:(UINavigationItem *)arg1 ;
-(BOOL)hidesBackButton;
-(void)setHidesBackButton:(BOOL)arg1 ;
-(NSString *)spinningTitle;
-(void)setSpinningTitle:(NSString *)arg1 ;
@end

