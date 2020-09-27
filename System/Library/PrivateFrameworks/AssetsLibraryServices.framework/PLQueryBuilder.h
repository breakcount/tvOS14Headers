/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLQuery;

@interface PLQueryBuilder : NSObject {

	PLQuery* _query;

}
+(id)andCombineFirstQuery:(id)arg1 secondQuery:(id)arg2 ;
+(id)orCombineFirstQuery:(id)arg1 secondQuery:(id)arg2 ;
+(id)notQuery:(id)arg1 ;
+(id)_combineFirstQuery:(id)arg1 secondQuery:(id)arg2 conjunction:(int)arg3 ;
+(id)validComparatorsForQueryKey:(int)arg1 ;
+(id)validUnitValuesForQueryKey:(int)arg1 ;
-(id)query;
-(id)initWithConjunction:(int)arg1 ;
-(void)_addQueryWithKey:(int)arg1 firstValue:(id)arg2 secondValue:(id)arg3 valueType:(int)arg4 unit:(int)arg5 comparator:(int)arg6 ;
-(void)addIsFavoriteQuery:(BOOL)arg1 ;
-(void)addIsHiddenQuery:(BOOL)arg1 ;
-(void)addIsAdjustedQuery:(BOOL)arg1 ;
-(void)addIsRawQuery:(BOOL)arg1 ;
-(void)addAssetTypeQuery:(int)arg1 exclude:(BOOL)arg2 ;
-(void)addIsInAlbumQuery:(id)arg1 ;
-(void)addIsInAnyAlbumQuery;
-(void)addIsReferencedMediaQuery:(BOOL)arg1 ;
-(BOOL)_isValidDateKey:(int)arg1 ;
-(void)addIsDateQueryKey:(int)arg1 withDate:(id)arg2 exclude:(BOOL)arg3 ;
-(void)addIsAfterDateQueryKey:(int)arg1 withDate:(id)arg2 ;
-(void)addIsBeforeDateQueryKey:(int)arg1 withDate:(id)arg2 ;
-(void)addInTheLastDaysQueryKey:(int)arg1 withCount:(long long)arg2 exclude:(BOOL)arg3 ;
-(void)addInTheLastWeeksQueryKey:(int)arg1 withCount:(long long)arg2 exclude:(BOOL)arg3 ;
-(void)addInTheLastMonthsQueryKey:(int)arg1 withCount:(long long)arg2 exclude:(BOOL)arg3 ;
-(void)addInTheLastYearsQueryKey:(int)arg1 withCount:(long long)arg2 exclude:(BOOL)arg3 ;
-(void)addInTheLastSecondsQueryKey:(int)arg1 withCount:(long long)arg2 exclude:(BOOL)arg3 ;
-(void)_addDateUnitQueryForKey:(int)arg1 withValue:(id)arg2 withType:(int)arg3 withUnit:(int)arg4 exclude:(BOOL)arg5 ;
-(void)_addRangeQueryForKey:(int)arg1 withFirstValue:(id)arg2 withSecondValue:(id)arg3 withType:(int)arg4 ;
-(void)addApertureRangeQueryBetweenValue:(double)arg1 andValue:(double)arg2 ;
-(void)addIsoRangeQueryBetweenValue:(long long)arg1 andValue:(long long)arg2 ;
-(void)addDateRangeQueryKey:(int)arg1 between:(id)arg2 and:(id)arg3 ;
-(BOOL)_isValidStringComparator:(int)arg1 ;
-(void)addFilenameQuery:(id)arg1 comparator:(int)arg2 ;
-(void)addTitleQuery:(id)arg1 comparator:(int)arg2 ;
-(void)addDescriptionQuery:(id)arg1 comparator:(int)arg2 ;
-(void)addTextQuery:(id)arg1 comparator:(int)arg2 ;
-(void)_addStringQueryKey:(int)arg1 stringValue:(id)arg2 comparator:(int)arg3 ;
-(BOOL)_validIsEmptyQueryKey:(int)arg1 ;
-(void)addIsEmptyQueryForKey:(int)arg1 isEmpty:(BOOL)arg2 ;
-(BOOL)_isValidNumericComparator:(int)arg1 ;
-(void)addApertureQuery:(double)arg1 comparator:(int)arg2 ;
-(void)addBitrateQuery:(double)arg1 comparator:(int)arg2 ;
-(void)addCameraModelQuery:(id)arg1 comparator:(int)arg2 ;
-(void)addCameraMakeQuery:(id)arg1 comparator:(int)arg2 ;
-(void)addCodecQuery:(id)arg1 comparator:(int)arg2 ;
-(void)addDurationQuery:(double)arg1 comparator:(int)arg2 ;
-(void)addExposureBiasQuery:(double)arg1 comparator:(int)arg2 ;
-(void)addFlashQuery:(BOOL)arg1 ;
-(void)addFocalLengthQuery:(double)arg1 comparator:(int)arg2 ;
-(void)addIsoQuery:(long long)arg1 comparator:(int)arg2 ;
-(void)addFpsQuery:(double)arg1 comparator:(int)arg2 ;
-(void)addLensModelQuery:(id)arg1 comparator:(int)arg2 ;
-(void)addMeteringModeQuery:(long long)arg1 comparator:(int)arg2 ;
-(void)addSampleRateQuery:(long long)arg1 comparator:(int)arg2 ;
-(void)addShutterSpeedQuery:(double)arg1 comparator:(int)arg2 ;
-(void)addTrackFormatQuery:(long long)arg1 comparator:(int)arg2 ;
-(void)addWhiteBalanceQuery:(long long)arg1 comparator:(int)arg2 ;
-(void)addHasLocationQuery:(BOOL)arg1 ;
-(void)addDoubleQueryKey:(int)arg1 withValue:(double)arg2 comparator:(int)arg3 ;
-(void)addIntegerQueryKey:(int)arg1 withValue:(long long)arg2 comparator:(int)arg3 ;
-(void)addKeywordQuery:(id)arg1 exclude:(BOOL)arg2 ;
-(void)addPersonQuery:(id)arg1 comparator:(int)arg2 ;
-(void)addUnableToUploadQuery;
-(void)_addQueryForKey:(int)arg1 withValue:(id)arg2 withType:(int)arg3 withComparator:(int)arg4 ;
@end

