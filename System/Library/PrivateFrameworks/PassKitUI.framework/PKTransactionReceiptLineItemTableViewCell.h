/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIImageView, UILabel, UIImage, NSString;

@interface PKTransactionReceiptLineItemTableViewCell : UITableViewCell {

	UIImageView* _imageView;
	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UILabel* _tertiaryLabel;
	UILabel* _amountLabel;
	BOOL _hasTrailingLineSeparator;
	BOOL _suppressImage;
	UIImage* _image;
	NSString* _primaryText;
	NSString* _secondaryText;
	NSString* _tertiaryText;
	NSString* _amountText;

}

@property (nonatomic,retain) UIImage * image;                            //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * primaryText;                       //@synthesize primaryText=_primaryText - In the implementation block
@property (nonatomic,copy) NSString * secondaryText;                     //@synthesize secondaryText=_secondaryText - In the implementation block
@property (nonatomic,copy) NSString * tertiaryText;                      //@synthesize tertiaryText=_tertiaryText - In the implementation block
@property (nonatomic,copy) NSString * amountText;                        //@synthesize amountText=_amountText - In the implementation block
@property (assign,nonatomic) BOOL hasTrailingLineSeparator;              //@synthesize hasTrailingLineSeparator=_hasTrailingLineSeparator - In the implementation block
@property (assign,nonatomic) BOOL suppressImage;                         //@synthesize suppressImage=_suppressImage - In the implementation block
-(void)prepareForReuse;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)primaryText;
-(NSString *)secondaryText;
-(void)setPrimaryText:(NSString *)arg1 ;
-(void)setSecondaryText:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setTertiaryText:(NSString *)arg1 ;
-(NSString *)tertiaryText;
-(void)setAmountText:(NSString *)arg1 ;
-(NSString *)amountText;
-(void)setHasTrailingLineSeparator:(BOOL)arg1 ;
-(void)setSuppressImage:(BOOL)arg1 ;
-(BOOL)hasTrailingLineSeparator;
-(BOOL)suppressImage;
@end

