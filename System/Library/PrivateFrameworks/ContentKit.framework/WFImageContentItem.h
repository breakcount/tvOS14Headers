/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ContentKit/WFGenericFileContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class WFFileType, WFImage;

@interface WFImageContentItem : WFGenericFileContentItem <WFContentItemClass> {

	BOOL _imageIsAnimated;
	WFFileType* _preferredFileType;

}

@property (nonatomic,retain) WFFileType * preferredFileType;              //@synthesize preferredFileType=_preferredFileType - In the implementation block
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) WFImage * image; 
@property (assign,nonatomic) BOOL imageIsAnimated;                        //@synthesize imageIsAnimated=_imageIsAnimated - In the implementation block
+(id)typeDescription;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)countDescription;
+(id)contentCategories;
+(id)outputTypes;
+(id)ownedPasteboardTypes;
+(id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3 attributionSet:(id)arg4 ;
+(id)imageTypes;
+(id)itemWithImage:(id)arg1 named:(id)arg2 preferredFileType:(id)arg3 ;
-(CGSize)size;
-(id)metadata;
-(id)width;
-(id)height;
-(id)orientation;
-(id)model;
-(id)location;
-(WFImage *)image;
-(id)make;
-(BOOL)isScreenshot;
-(WFFileType *)preferredFileType;
-(id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)generateImageFileForType:(id)arg1 includingMetadata:(BOOL)arg2 compressionQuality:(id)arg3 error:(id*)arg4 ;
-(id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)generateObjectRepresentation:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(void)generateFileRepresentation:(/*^block*/id)arg1 options:(id)arg2 forType:(id)arg3 ;
-(id)preferredObjectType;
-(BOOL)canGenerateRepresentationForType:(id)arg1 ;
-(BOOL)getListThumbnail:(/*^block*/id)arg1 forSize:(CGSize)arg2 ;
-(id)copyWithName:(id)arg1 zone:(NSZone*)arg2 ;
-(void)setPreferredFileType:(WFFileType *)arg1 ;
-(id)dateTaken;
-(BOOL)isObjectBacked;
-(id)imageFile;
-(BOOL)isContent;
-(BOOL)imageIsAnimated;
-(void)setImageIsAnimated:(BOOL)arg1 ;
@end

