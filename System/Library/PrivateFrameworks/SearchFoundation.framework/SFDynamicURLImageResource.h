/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFDynamicURLImageResource.h>
@class NSString, NSArray, NSDictionary, NSData;


@protocol SFDynamicURLImageResource <NSObject>
@property (assign,nonatomic) double pixelWidth; 
@property (assign,nonatomic) double pixelHeight; 
@property (nonatomic,copy) NSString * formatURL; 
@property (assign,nonatomic) BOOL supportsResizing; 
@property (nonatomic,copy) NSArray * imageOptions; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(void)setPixelHeight:(double)arg1;
-(double)pixelHeight;
-(void)setPixelWidth:(double)arg1;
-(double)pixelWidth;
-(NSData *)jsonData;
-(NSString *)formatURL;
-(void)setFormatURL:(id)arg1;
-(BOOL)supportsResizing;
-(void)setSupportsResizing:(BOOL)arg1;
-(NSArray *)imageOptions;
-(void)setImageOptions:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDictionary, NSData;

@interface SFDynamicURLImageResource : NSObject <SFDynamicURLImageResource, NSSecureCoding, NSCopying> {

	SCD_Struct_SF3 _has;
	BOOL _supportsResizing;
	double _pixelWidth;
	double _pixelHeight;
	NSString* _formatURL;
	NSArray* _imageOptions;

}

@property (assign,nonatomic) double pixelWidth;                                      //@synthesize pixelWidth=_pixelWidth - In the implementation block
@property (assign,nonatomic) double pixelHeight;                                     //@synthesize pixelHeight=_pixelHeight - In the implementation block
@property (nonatomic,copy) NSString * formatURL;                                     //@synthesize formatURL=_formatURL - In the implementation block
@property (assign,nonatomic) BOOL supportsResizing;                                  //@synthesize supportsResizing=_supportsResizing - In the implementation block
@property (nonatomic,copy) NSArray * imageOptions;                                   //@synthesize imageOptions=_imageOptions - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(void)setPixelHeight:(double)arg1 ;
-(double)pixelHeight;
-(void)setPixelWidth:(double)arg1 ;
-(double)pixelWidth;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(NSString *)formatURL;
-(void)setFormatURL:(NSString *)arg1 ;
-(BOOL)supportsResizing;
-(void)setSupportsResizing:(BOOL)arg1 ;
-(NSArray *)imageOptions;
-(void)setImageOptions:(NSArray *)arg1 ;
-(BOOL)hasPixelWidth;
-(BOOL)hasPixelHeight;
-(BOOL)hasSupportsResizing;
-(id)_sf_urlForSettings:(id)arg1 shouldResize:(BOOL)arg2 width:(double)arg3 height:(double)arg4 ;
-(id)_sf_replacementStringForPropertyEntryKey:(id)arg1 value:(id)arg2 ;
-(id)sf_urlForSettings:(id)arg1 ;
-(id)sf_urlForSettings:(id)arg1 size:(CGSize)arg2 ;
@end

