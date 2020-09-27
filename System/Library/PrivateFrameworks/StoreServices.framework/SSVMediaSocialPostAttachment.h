/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString, NSArray, NSData, NSURL, NSMutableDictionary;

@interface SSVMediaSocialPostAttachment : NSObject <NSCopying, SSXPCCoding> {

	NSString* _albumIdentifier;
	NSArray* _artists;
	NSData* _assetData;
	NSURL* _assetURL;
	NSString* _attachmentDescription;
	NSString* _categoryName;
	NSMutableDictionary* _childAttachments;
	BOOL _deletesAssetWhenFinished;
	BOOL _explicitContent;
	double _previewFrameTimestamp;
	NSString* _subtitle;
	NSString* _title;
	NSString* _uti;

}

@property (nonatomic,copy) NSArray * artists;                                            //@synthesize artists=_artists - In the implementation block
@property (nonatomic,copy) NSString * albumIdentifier;                                   //@synthesize albumIdentifier=_albumIdentifier - In the implementation block
@property (nonatomic,copy) NSString * attachmentDescription;                             //@synthesize attachmentDescription=_attachmentDescription - In the implementation block
@property (nonatomic,copy) NSString * categoryName;                                      //@synthesize categoryName=_categoryName - In the implementation block
@property (assign,getter=isExplicitContent,nonatomic) BOOL explicitContent;              //@synthesize explicitContent=_explicitContent - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                          //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSData * assetData;                                           //@synthesize assetData=_assetData - In the implementation block
@property (nonatomic,copy) NSURL * assetURL;                                             //@synthesize assetURL=_assetURL - In the implementation block
@property (nonatomic,readonly) long long attachmentType; 
@property (nonatomic,copy) NSString * UTI;                                               //@synthesize uti=_uti - In the implementation block
@property (assign,nonatomic) BOOL deletesAssetWhenFinished;                              //@synthesize deletesAssetWhenFinished=_deletesAssetWhenFinished - In the implementation block
@property (assign,nonatomic) double previewFrameTimestamp;                               //@synthesize previewFrameTimestamp=_previewFrameTimestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(NSString *)categoryName;
-(void)setCategoryName:(NSString *)arg1 ;
-(NSURL *)assetURL;
-(void)setAssetURL:(NSURL *)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(BOOL)isExplicitContent;
-(void)setExplicitContent:(BOOL)arg1 ;
-(void)setAlbumIdentifier:(NSString *)arg1 ;
-(void)setArtists:(NSArray *)arg1 ;
-(void)setAssetData:(NSData *)arg1 ;
-(void)setAttachmentDescription:(NSString *)arg1 ;
-(void)setDeletesAssetWhenFinished:(BOOL)arg1 ;
-(void)setPreviewFrameTimestamp:(double)arg1 ;
-(void)setUTI:(NSString *)arg1 ;
-(long long)attachmentType;
-(id)childAttachmentForRelationship:(id)arg1 ;
-(void)enumerateChildAttachmentsUsingBlock:(/*^block*/id)arg1 ;
-(void)setChildAttachment:(id)arg1 forRelationship:(id)arg2 ;
-(NSString *)albumIdentifier;
-(NSArray *)artists;
-(NSData *)assetData;
-(NSString *)attachmentDescription;
-(double)previewFrameTimestamp;
-(NSString *)UTI;
-(BOOL)deletesAssetWhenFinished;
@end

