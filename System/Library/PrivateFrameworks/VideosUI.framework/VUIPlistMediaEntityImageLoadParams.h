/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VUIImageLoadParams.h>

@class NSString, NSURL;

@interface VUIPlistMediaEntityImageLoadParams : NSObject <VUIImageLoadParams> {

	NSString* _imageIdentifier;
	NSURL* _imageURL;
	NSString* _baseImageIdentifier;
	unsigned long long _imageType;

}

@property (nonatomic,copy) NSURL * imageURL;                                 //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy) NSString * baseImageIdentifier;                   //@synthesize baseImageIdentifier=_baseImageIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long imageType;                   //@synthesize imageType=_imageType - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageIdentifier;              //@synthesize imageIdentifier=_imageIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(unsigned long long)imageType;
-(void)setImageType:(unsigned long long)arg1 ;
-(NSURL *)imageURL;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSString *)imageIdentifier;
-(id)initWithImageURL:(id)arg1 baseImageIdentifier:(id)arg2 imageType:(unsigned long long)arg3 ;
-(NSString *)baseImageIdentifier;
-(void)setBaseImageIdentifier:(NSString *)arg1 ;
@end

