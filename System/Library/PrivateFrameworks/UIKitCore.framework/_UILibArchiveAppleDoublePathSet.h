/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface _UILibArchiveAppleDoublePathSet : NSObject {

	NSMutableSet* _confirmAppleDoublePaths;
	NSMutableSet* _pathsWithDotUnderscorePrefixedFilenames;

}
+(BOOL)isPossibleAppleDoubleByApplyingMatchingHeuristicToItem:(id)arg1 ;
-(id)init;
-(BOOL)isConfirmedExactAppleDoubleItem:(id)arg1 ;
-(void)confirmExactAppleDoubleFilesAppearingAfterRealFilesByPrescanningArchivePath:(id)arg1 ;
-(void)confirmExactAppleDoubleFilesForItem:(id)arg1 ;
-(id)pathToRealFileIfConfirmedAppleDoubleItem:(id)arg1 ;
@end

