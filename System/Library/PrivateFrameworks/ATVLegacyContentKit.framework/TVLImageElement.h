/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <ATVLegacyContentKit/TVLElement.h>

@class NSURL, NSString;

@interface TVLImageElement : TVLElement {

	BOOL _required;
	NSURL* _url;
	NSString* _style;
	NSString* _src1080;
	NSString* _src720;
	NSString* _src;
	NSString* _urlString;
	NSString* _insetsString1080;
	NSString* _insetsString720;
	NSString* _insetsString;
	UIEdgeInsets _insets;

}

@property (nonatomic,copy) NSString * src1080;                       //@synthesize src1080=_src1080 - In the implementation block
@property (nonatomic,copy) NSString * src720;                        //@synthesize src720=_src720 - In the implementation block
@property (nonatomic,copy) NSString * src;                           //@synthesize src=_src - In the implementation block
@property (nonatomic,copy) NSString * urlString;                     //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,copy) NSString * insetsString1080;              //@synthesize insetsString1080=_insetsString1080 - In the implementation block
@property (nonatomic,copy) NSString * insetsString720;               //@synthesize insetsString720=_insetsString720 - In the implementation block
@property (nonatomic,copy) NSString * insetsString;                  //@synthesize insetsString=_insetsString - In the implementation block
@property (nonatomic,copy) NSURL * url;                              //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) BOOL required;                          //@synthesize required=_required - In the implementation block
@property (nonatomic,copy) NSString * style;                         //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;                    //@synthesize insets=_insets - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(NSString *)style;
-(void)setStyle:(NSString *)arg1 ;
-(BOOL)required;
-(NSString *)urlString;
-(NSString *)src;
-(void)setSrc:(NSString *)arg1 ;
-(void)setRequired:(BOOL)arg1 ;
-(void)setUrlString:(NSString *)arg1 ;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)insets;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(void)setSrc1080:(NSString *)arg1 ;
-(void)setSrc720:(NSString *)arg1 ;
-(NSString *)src1080;
-(NSString *)src720;
-(NSString *)insetsString1080;
-(void)setInsetsString1080:(NSString *)arg1 ;
-(NSString *)insetsString720;
-(void)setInsetsString720:(NSString *)arg1 ;
-(NSString *)insetsString;
-(void)setInsetsString:(NSString *)arg1 ;
@end
