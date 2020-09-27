/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSURL, NSString, NSArray, ICStoreFinanceItemMetadata, NSData;

@interface ICStoreFileAssetInfo : NSObject {

	NSDictionary* _responseDictionary;
	NSURL* _assetURL;
	NSString* _downloadKey;
	NSArray* _fairPlayInfoList;
	long long _flavorType;
	NSString* _fileExtension;
	unsigned long long _fileSize;
	ICStoreFinanceItemMetadata* _metadata;
	NSData* _md5;
	long long _expectedProtectionType;

}

@property (nonatomic,copy) NSURL * assetURL;                                        //@synthesize assetURL=_assetURL - In the implementation block
@property (nonatomic,copy) NSString * downloadKey;                                  //@synthesize downloadKey=_downloadKey - In the implementation block
@property (assign,nonatomic) long long expectedProtectionType;                      //@synthesize expectedProtectionType=_expectedProtectionType - In the implementation block
@property (nonatomic,copy) NSArray * fairPlayInfoList;                              //@synthesize fairPlayInfoList=_fairPlayInfoList - In the implementation block
@property (assign,nonatomic) long long flavorType;                                  //@synthesize flavorType=_flavorType - In the implementation block
@property (nonatomic,copy) NSString * fileExtension;                                //@synthesize fileExtension=_fileExtension - In the implementation block
@property (assign,nonatomic) unsigned long long fileSize;                           //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,copy) ICStoreFinanceItemMetadata * metadata;                   //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) NSData * md5;                                            //@synthesize md5=_md5 - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * responseDictionary; 
@property (nonatomic,readonly) long long protectionType; 
-(unsigned long long)fileSize;
-(ICStoreFinanceItemMetadata *)metadata;
-(void)setMetadata:(ICStoreFinanceItemMetadata *)arg1 ;
-(void)setFileSize:(unsigned long long)arg1 ;
-(void)setMd5:(NSData *)arg1 ;
-(NSData *)md5;
-(NSURL *)assetURL;
-(void)setAssetURL:(NSURL *)arg1 ;
-(NSString *)fileExtension;
-(void)setFileExtension:(NSString *)arg1 ;
-(NSString *)downloadKey;
-(void)setDownloadKey:(NSString *)arg1 ;
-(NSDictionary *)responseDictionary;
-(id)initWithFileAssetResponseDictionary:(id)arg1 ;
-(id)_metadataDictionary;
-(NSArray *)fairPlayInfoList;
-(id)initWithAssetURL:(id)arg1 ;
-(long long)flavorType;
-(long long)protectionType;
-(void)setFairPlayInfoList:(NSArray *)arg1 ;
-(void)setFlavorType:(long long)arg1 ;
-(long long)expectedProtectionType;
-(void)setExpectedProtectionType:(long long)arg1 ;
@end
