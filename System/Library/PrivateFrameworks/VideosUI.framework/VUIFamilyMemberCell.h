/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/TVContainerCollectionViewCell.h>
#import <libobjc.A.dylib/VUIFamilyMemberDelegate.h>

@class VUIFamilyMember, VUILabel, TVImageLayout, _TVMonogramView, _TVImageView, _TVStackingPosterView, NSString;

@interface VUIFamilyMemberCell : TVContainerCollectionViewCell <VUIFamilyMemberDelegate> {

	VUIFamilyMember* _familyMember;
	VUILabel* _nameLabel;
	TVImageLayout* _monogramImageLayout;
	_TVMonogramView* _monogramView;
	_TVImageView* _familyMemberImageView;
	_TVStackingPosterView* _stackingPosterView;

}

@property (nonatomic,retain) _TVImageView * familyMemberImageView;                    //@synthesize familyMemberImageView=_familyMemberImageView - In the implementation block
@property (nonatomic,readonly) CGSize monogramSize; 
@property (nonatomic,retain) _TVStackingPosterView * stackingPosterView;              //@synthesize stackingPosterView=_stackingPosterView - In the implementation block
@property (nonatomic,retain) VUIFamilyMember * familyMember;                          //@synthesize familyMember=_familyMember - In the implementation block
@property (nonatomic,retain) VUILabel * nameLabel;                                    //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) TVImageLayout * monogramImageLayout;                     //@synthesize monogramImageLayout=_monogramImageLayout - In the implementation block
@property (nonatomic,retain) _TVMonogramView * monogramView;                          //@synthesize monogramView=_monogramView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_monogramViewForFamilyMemberCell:(id)arg1 ;
+(double)monogramHeight;
+(void)configureVUIFamilyMemberCell:(id)arg1 withFamilyMember:(id)arg2 metricsOnly:(BOOL)arg3 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(VUILabel *)nameLabel;
-(void)setNameLabel:(VUILabel *)arg1 ;
-(VUIFamilyMember *)familyMember;
-(void)setFamilyMember:(VUIFamilyMember *)arg1 ;
-(id)selectingView;
-(void)setMonogramView:(_TVMonogramView *)arg1 ;
-(_TVMonogramView *)monogramView;
-(CGSize)_tvOS_layoutSubviewsWithSize:(CGSize)arg1 computationOnly:(BOOL)arg2 ;
-(void)setStackingPosterView:(_TVStackingPosterView *)arg1 ;
-(_TVStackingPosterView *)stackingPosterView;
-(TVImageLayout *)monogramImageLayout;
-(void)setFamilyMemberImageView:(_TVImageView *)arg1 ;
-(CGSize)monogramSize;
-(void)familyMember:(id)arg1 photoRequestDidCompleteWithImage:(id)arg2 ;
-(void)setMonogramImageLayout:(TVImageLayout *)arg1 ;
-(_TVImageView *)familyMemberImageView;
@end

