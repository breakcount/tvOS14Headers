/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:28 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVPhotoSources.framework/TVPhotoSources
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSExtension, NSString;

@interface TVPhotoSource : NSObject {

	NSExtension* _extension;

}

@property (nonatomic,copy,readonly) NSString * sourceName; 
@property (nonatomic,copy,readonly) NSString * sourceIdentifier; 
-(id)description;
-(id)init;
-(NSString *)sourceIdentifier;
-(NSString *)sourceName;
-(void)fetchCollectionsWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchAssetsForCollectionWithIdentifier:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchAssetsForCollectionWithIdentifier:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_performWithExtensionProxy:(/*^block*/id)arg1 ;
-(id)_initWithExtension:(id)arg1 ;
@end

