/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPSpecializationMetadata.h>
#import <libobjc.A.dylib/LPLinkMetadataPresentationTransformer.h>
#import <libobjc.A.dylib/LPLinkMetadataPreviewTransformer.h>
#import <libobjc.A.dylib/LPLinkMetadataBackwardCompatibility.h>

@class NSString, LPImage, NSDate;

@interface LPApplePhotosMomentMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility> {

	NSString* _title;
	unsigned long long _photoCount;
	unsigned long long _videoCount;
	unsigned long long _otherItemCount;
	LPImage* _keyPhoto;
	NSDate* _expirationDate;
	NSDate* _earliestAssetDate;
	NSDate* _latestAssetDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) unsigned long long photoCount;                  //@synthesize photoCount=_photoCount - In the implementation block
@property (assign,nonatomic) unsigned long long videoCount;                  //@synthesize videoCount=_videoCount - In the implementation block
@property (assign,nonatomic) unsigned long long otherItemCount;              //@synthesize otherItemCount=_otherItemCount - In the implementation block
@property (nonatomic,retain) LPImage * keyPhoto;                             //@synthesize keyPhoto=_keyPhoto - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                          //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy) NSDate * earliestAssetDate;                       //@synthesize earliestAssetDate=_earliestAssetDate - In the implementation block
@property (nonatomic,copy) NSDate * latestAssetDate;                         //@synthesize latestAssetDate=_latestAssetDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)previewSummaryForTransformer:(id)arg1 ;
-(id)previewImageForTransformer:(id)arg1 ;
-(void)_enumerateAsynchronousFields:(/*^block*/id)arg1 ;
-(void)populateMetadataForBackwardCompatibility:(id)arg1 ;
-(unsigned long long)photoCount;
-(void)setPhotoCount:(unsigned long long)arg1 ;
-(unsigned long long)videoCount;
-(void)setVideoCount:(unsigned long long)arg1 ;
-(unsigned long long)otherItemCount;
-(void)setOtherItemCount:(unsigned long long)arg1 ;
-(LPImage *)keyPhoto;
-(void)setKeyPhoto:(LPImage *)arg1 ;
-(NSDate *)earliestAssetDate;
-(void)setEarliestAssetDate:(NSDate *)arg1 ;
-(NSDate *)latestAssetDate;
-(void)setLatestAssetDate:(NSDate *)arg1 ;
-(id)presentationPropertiesForTransformer:(id)arg1 ;
-(BOOL)canGeneratePresentationPropertiesForURL:(id)arg1 ;
@end

