/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface GEOResourceManifestConfiguration : NSObject <NSSecureCoding> {

	unsigned _tileGroupIdentifier;
	NSString* _os;
	NSString* _osVersion;
	NSString* _osBuild;
	NSString* _countryCode;
	NSString* _hardwareIdentifier;
	NSString* _applicationIdentifier;
	NSString* _applicationVersion;
	NSString* _environment;
	NSString* _dataDirectory;
	int _defaultScale;
	BOOL _requiresLegacyFormat;
	NSArray* _tileSetOverrides;
	NSString* _urlTemplate;

}

@property (nonatomic,copy) NSArray * tileSetOverrides; 
@property (assign,nonatomic) unsigned tileGroupIdentifier;                //@synthesize tileGroupIdentifier=_tileGroupIdentifier - In the implementation block
@property (nonatomic,copy) NSString * os;                                 //@synthesize os=_os - In the implementation block
@property (nonatomic,copy) NSString * osVersion;                          //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,copy) NSString * osBuild;                            //@synthesize osBuild=_osBuild - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                        //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy) NSString * hardwareIdentifier;                 //@synthesize hardwareIdentifier=_hardwareIdentifier - In the implementation block
@property (nonatomic,copy) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * applicationVersion;                 //@synthesize applicationVersion=_applicationVersion - In the implementation block
@property (nonatomic,copy) NSString * environment;                        //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy) NSString * dataDirectory;                      //@synthesize dataDirectory=_dataDirectory - In the implementation block
@property (nonatomic,copy) NSString * urlTemplate;                        //@synthesize urlTemplate=_urlTemplate - In the implementation block
@property (nonatomic,readonly) int defaultScale;                          //@synthesize defaultScale=_defaultScale - In the implementation block
@property (nonatomic,readonly) BOOL requiresLegacyFormat;                 //@synthesize requiresLegacyFormat=_requiresLegacyFormat - In the implementation block
@property (nonatomic,readonly) NSString * directorySuffix; 
+(BOOL)supportsSecureCoding;
+(id)defaultConfiguration;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)countryCode;
-(NSString *)environment;
-(void)setEnvironment:(NSString *)arg1 ;
-(NSString *)hardwareIdentifier;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)applicationIdentifier;
-(void)setTileGroupIdentifier:(unsigned)arg1 ;
-(BOOL)isDefaultConfiguration;
-(NSString *)dataDirectory;
-(NSString *)os;
-(NSString *)osVersion;
-(NSString *)osBuild;
-(NSString *)applicationVersion;
-(id)_directorySuffixParameters;
-(NSString *)directorySuffix;
-(id)manifestDictionaryRepresentation;
-(void)setTileSetOverrides:(NSArray *)arg1 ;
-(NSArray *)tileSetOverrides;
-(NSString *)urlTemplate;
-(unsigned)tileGroupIdentifier;
-(void)setOs:(NSString *)arg1 ;
-(void)setOsVersion:(NSString *)arg1 ;
-(void)setOsBuild:(NSString *)arg1 ;
-(void)setHardwareIdentifier:(NSString *)arg1 ;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(void)setApplicationVersion:(NSString *)arg1 ;
-(void)setDataDirectory:(NSString *)arg1 ;
-(void)setUrlTemplate:(NSString *)arg1 ;
-(int)defaultScale;
-(BOOL)requiresLegacyFormat;
@end

