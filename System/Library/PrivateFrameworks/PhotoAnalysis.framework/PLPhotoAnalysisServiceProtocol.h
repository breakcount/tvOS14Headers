/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLPhotoAnalysisServiceProtocol <PLPhotoAnalysisJobServiceProtocol,PLPhotoAnalysisGraphServiceProtocol,PLPhotoAnalysisVisionServiceTaxonomyProtocol,PLPhotoAnalysisVisionServiceFaceProcessingProtocol,PLPhotoAnalysisPresentationServiceProtocol>
@required
-(void)notifyLibraryAvailableAtURL:(id)arg1;
-(void)writeQALog:(id)arg1;
-(void)cancelOperationsWithIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)dumpAnalysisStatusWithContext:(id)arg1 reply:(/*^block*/id)arg2;

@end

