/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookLibrary/BookLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface BLRestoreRequestItem : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _downloadDictionary;
	NSDictionary* _assetDictionary;

}

@property (nonatomic,retain) NSDictionary * downloadDictionary;              //@synthesize downloadDictionary=_downloadDictionary - In the implementation block
@property (nonatomic,retain) NSDictionary * assetDictionary;                 //@synthesize assetDictionary=_assetDictionary - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_downloadDictionaryWithDownloadMetadata:(id)arg1 additionalDownloadPropertiesDictionary:(id)arg2 ;
+(id)_assetDictionaryWithDownloadMetadata:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)assetDictionary;
-(NSDictionary *)downloadDictionary;
-(id)initWithDownloadDictionary:(id)arg1 assetDictionary:(id)arg2 ;
-(void)setDownloadDictionary:(NSDictionary *)arg1 ;
-(void)setAssetDictionary:(NSDictionary *)arg1 ;
-(id)initWithDownloadMetadataDictionary:(id)arg1 additionalDownloadPropertiesDictionary:(id)arg2 ;
@end

