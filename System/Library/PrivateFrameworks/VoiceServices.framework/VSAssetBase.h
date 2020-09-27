/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface VSAssetBase : NSObject <NSSecureCoding> {

	BOOL _isPurgeable;
	NSString* _bundleIdentifier;
	NSNumber* _compatibilityVersion;
	NSNumber* _contentVersion;
	NSString* _masteredVersion;
	NSNumber* _downloadSize;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * compatibilityVersion;              //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
@property (nonatomic,copy) NSNumber * contentVersion;                    //@synthesize contentVersion=_contentVersion - In the implementation block
@property (nonatomic,copy) NSString * masteredVersion;                   //@synthesize masteredVersion=_masteredVersion - In the implementation block
@property (nonatomic,copy) NSNumber * downloadSize;                      //@synthesize downloadSize=_downloadSize - In the implementation block
@property (assign,nonatomic) BOOL isPurgeable;                           //@synthesize isPurgeable=_isPurgeable - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(BOOL)isPurgeable;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setContentVersion:(NSNumber *)arg1 ;
-(NSNumber *)contentVersion;
-(NSNumber *)compatibilityVersion;
-(void)setCompatibilityVersion:(NSNumber *)arg1 ;
-(NSString *)masteredVersion;
-(void)setMasteredVersion:(NSString *)arg1 ;
-(NSNumber *)downloadSize;
-(void)setDownloadSize:(NSNumber *)arg1 ;
-(void)setIsPurgeable:(BOOL)arg1 ;
@end
