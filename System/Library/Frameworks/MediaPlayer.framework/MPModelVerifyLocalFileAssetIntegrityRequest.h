/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPIdentifierSet, MPModelFileAsset;

@interface MPModelVerifyLocalFileAssetIntegrityRequest : NSObject {

	MPIdentifierSet* _sourceItemIdentifiers;
	MPModelFileAsset* _fileAsset;

}

@property (nonatomic,retain) MPIdentifierSet * sourceItemIdentifiers;              //@synthesize sourceItemIdentifiers=_sourceItemIdentifiers - In the implementation block
@property (nonatomic,retain) MPModelFileAsset * fileAsset;                         //@synthesize fileAsset=_fileAsset - In the implementation block
+(id)_operationQueue;
-(void)performWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithFileAsset:(id)arg1 sourceItemIdentifiers:(id)arg2 ;
-(id)mediaLibraryForItemIdentifiers:(id)arg1 ;
-(MPIdentifierSet *)sourceItemIdentifiers;
-(void)setSourceItemIdentifiers:(MPIdentifierSet *)arg1 ;
-(MPModelFileAsset *)fileAsset;
-(void)setFileAsset:(MPModelFileAsset *)arg1 ;
@end

