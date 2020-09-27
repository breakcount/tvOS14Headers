/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSAttributedString;

@interface MKUGCCallToActionViewAppearance : NSObject {

	/*^block*/id _ctaTextBlock;
	long long _type;
	NSString* _leadingGlyphName;
	NSString* _trailingGlyphName;
	long long _ratingState;
	unsigned long long _numberOfPhotosAdded;

}

@property (assign,nonatomic) long long ratingState;                                //@synthesize ratingState=_ratingState - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPhotosAdded;               //@synthesize numberOfPhotosAdded=_numberOfPhotosAdded - In the implementation block
@property (nonatomic,readonly) long long type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSAttributedString * callToActionText; 
@property (nonatomic,readonly) NSString * leadingGlyphName;                        //@synthesize leadingGlyphName=_leadingGlyphName - In the implementation block
@property (nonatomic,readonly) NSString * trailingGlyphName;                       //@synthesize trailingGlyphName=_trailingGlyphName - In the implementation block
+(id)passiveThumbsUpAppearanceForThirdPartyPlacecard;
+(id)_photosCallToActionViewWithTextRefreshBlock:(/*^block*/id)arg1 hasPhotoLibraryEmphasis:(BOOL)arg2 ;
+(id)_editSubmissionCallToActionViewWithTextRefreshBlock:(/*^block*/id)arg1 ;
+(id)_ratingsCallToActionViewWithTextRefreshBlock:(/*^block*/id)arg1 ;
+(id)activeThumbsUpAppearanceForThirdPartyPlacecard;
+(id)activeAddPhotosAppearanceForThirdPartyPlacecardWithNumberOfPhotos:(unsigned long long)arg1 ;
+(id)userRecommendedAppearanceForRatingState:(long long)arg1 numberOfPhotosAdded:(unsigned long long)arg2 ;
+(id)userRecommendedFailureAppearance;
+(id)userRecommendedLoadingAppearance;
+(id)headerAppearanceForFirstPartyPlacecardWithMapItem:(id)arg1 ;
+(id)passiveAddPhotosAppearanceForThirdPartyPlacecard;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)type;
-(id)initWithType:(long long)arg1 callToActionTextRefreshBlock:(/*^block*/id)arg2 ;
-(id)initWithType:(long long)arg1 callToActionTextRefreshBlock:(/*^block*/id)arg2 leadingGlpyhName:(id)arg3 ;
-(id)initWithType:(long long)arg1 callToActionTextRefreshBlock:(/*^block*/id)arg2 leadingGlpyhName:(id)arg3 trailingGlyphName:(id)arg4 ;
-(void)setRatingState:(long long)arg1 ;
-(void)setNumberOfPhotosAdded:(unsigned long long)arg1 ;
-(NSAttributedString *)callToActionText;
-(NSString *)leadingGlyphName;
-(NSString *)trailingGlyphName;
-(long long)ratingState;
-(unsigned long long)numberOfPhotosAdded;
@end

