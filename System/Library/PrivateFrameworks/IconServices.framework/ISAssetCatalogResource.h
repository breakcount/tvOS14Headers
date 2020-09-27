/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:02 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IconServices/IconServices-Structs.h>
#import <libobjc.A.dylib/ISScalableCompositorResource.h>

@class ISImageBag, CUICatalog, NSString;

@interface ISAssetCatalogResource : NSObject <ISScalableCompositorResource> {

	ISImageBag* _imageBag;
	CUICatalog* _catalog;
	NSString* _imageName;
	NSString* _symbolName;

}

@property (readonly) CUICatalog * catalog;                               //@synthesize catalog=_catalog - In the implementation block
@property (readonly) ISImageBag * imageBag;                              //@synthesize imageBag=_imageBag - In the implementation block
@property (readonly) NSString * imageName;                               //@synthesize imageName=_imageName - In the implementation block
@property (readonly) NSString * symbolName;                              //@synthesize symbolName=_symbolName - In the implementation block
@property (getter=isPrecomposed,readonly) BOOL precomposed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)assetCatalogResourceWithURL:(id)arg1 imageName:(id)arg2 symbolName:(id)arg3 error:(id*)arg4 ;
+(id)coreGlyphsCatalog;
+(id)assetCatalogResourceWithURL:(id)arg1 imageName:(id)arg2 error:(id*)arg3 ;
+(id)assetCatalogResourceWithURL:(id)arg1 symbolName:(id)arg2 error:(id*)arg3 ;
-(NSString *)imageName;
-(NSString *)symbolName;
-(BOOL)isPrecomposed;
-(id)imageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(CUICatalog *)catalog;
-(id)initWithCatalog:(id)arg1 imageName:(id)arg2 symbolName:(id)arg3 ;
-(long long)deviceIdiomWithName:(id)arg1 ;
-(id)imageWithName:(id)arg1 scale:(double)arg2 ;
-(id)multisizedImageWithName:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(ISImageBag *)imageBag;
-(id)symbolImageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)symbolImageForFontSize:(double)arg1 scale:(double)arg2 symbolSize:(unsigned long long)arg3 symbolWeight:(long long)arg4 ;
@end

