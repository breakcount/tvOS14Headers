/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLResourceDataStoreKey.h>
#import <libobjc.A.dylib/PLTableThumbResourceKey.h>

@class NSString;

@interface PLThumbnailResourceDataStoreKey : NSObject <PLResourceDataStoreKey, PLTableThumbResourceKey> {

	PLThumbnailDataStoreKeyStruct_V1 _keyStruct;

}

@property (assign,nonatomic) PLThumbnailDataStoreKeyStruct_V1 keyStruct;              //@synthesize keyStruct=_keyStruct - In the implementation block
@property (nonatomic,readonly) unsigned tableType; 
@property (nonatomic,readonly) int index; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned)recipeIDForTableType:(unsigned)arg1 inStore:(id)arg2 ;
+(BOOL)representsSquareResourceForPayloadKeyData:(unsigned long long)arg1 ;
+(id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)index;
-(BOOL)isEqualToKey:(id)arg1 ;
-(unsigned)resourceType;
-(id)keyData;
-(unsigned)resourceVersion;
-(BOOL)isDerivative;
-(id)fileURLForAssetID:(id)arg1 ;
-(id)uniformTypeIdentifier;
-(id)initWithKeyStruct:(const void*)arg1 ;
-(id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2 ;
-(id)descriptionForAssetID:(id)arg1 ;
-(void)tableType:(unsigned*)arg1 index:(int*)arg2 ;
-(BOOL)representsSquareResource;
-(PLThumbnailDataStoreKeyStruct_V1)keyStruct;
-(void)setKeyStruct:(PLThumbnailDataStoreKeyStruct_V1)arg1 ;
-(unsigned)tableType;
@end

