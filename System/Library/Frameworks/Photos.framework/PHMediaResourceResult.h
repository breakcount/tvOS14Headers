/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHCompositeMediaResult.h>

@class PHAssetResource, NSData, NSURL;

@interface PHMediaResourceResult : PHCompositeMediaResult {

	PHAssetResource* _assetResource;
	NSData* _assetResourceData;
	NSURL* _assetResourceFileURL;

}

@property (nonatomic,retain) NSData * assetResourceData;              //@synthesize assetResourceData=_assetResourceData - In the implementation block
@property (nonatomic,copy) NSURL * assetResourceFileURL;              //@synthesize assetResourceFileURL=_assetResourceFileURL - In the implementation block
-(id)exifOrientation;
-(id)imageURL;
-(id)adjustmentData;
-(id)videoURL;
-(id)uniformTypeIdentifier;
-(id)mediaMetadata;
-(BOOL)containsValidData;
-(id)initWithRequestID:(int)arg1 assetResource:(id)arg2 ;
-(NSData *)assetResourceData;
-(void)setAssetResourceData:(NSData *)arg1 ;
-(NSURL *)assetResourceFileURL;
-(void)setAssetResourceFileURL:(NSURL *)arg1 ;
@end

