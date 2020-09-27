/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHCollectionReference.h>

@class NSArray;

@interface PHAssetCollectionReference : PHCollectionReference {

	long long _assetCollectionType;
	long long _assetCollectionSubtype;
	NSArray* _transientAssetReferences;

}

@property (nonatomic,copy,readonly) NSArray * transientAssetReferences;              //@synthesize transientAssetReferences=_transientAssetReferences - In the implementation block
@property (nonatomic,readonly) long long assetCollectionType;                        //@synthesize assetCollectionType=_assetCollectionType - In the implementation block
@property (nonatomic,readonly) long long assetCollectionSubtype;                     //@synthesize assetCollectionSubtype=_assetCollectionSubtype - In the implementation block
+(id)representedType;
+(id)referenceForAssetCollection:(id)arg1 ;
-(long long)assetCollectionType;
-(long long)assetCollectionSubtype;
-(id)initWithDictionary:(id)arg1 referenceType:(id)arg2 ;
-(id)dictionaryForReferenceType:(id)arg1 ;
-(BOOL)transient;
-(id)_transientCollectionInLibrary:(id)arg1 ;
-(id)initWithLocalIdentifier:(id)arg1 libraryURL:(id)arg2 type:(long long)arg3 subtype:(long long)arg4 assetReferences:(id)arg5 transientIdentifier:(id)arg6 transientTitle:(id)arg7 ;
-(id)initWithLocalIdentifier:(id)arg1 libraryURL:(id)arg2 type:(long long)arg3 subtype:(long long)arg4 ;
-(NSArray *)transientAssetReferences;
@end

