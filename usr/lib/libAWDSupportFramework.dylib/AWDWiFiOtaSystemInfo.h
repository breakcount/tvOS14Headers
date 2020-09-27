/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface AWDWiFiOtaSystemInfo : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSData* _beaconInfo;
	NSString* _bssid;
	unsigned _channel;
	unsigned _channelWidth;
	NSString* _locale;
	NSString* _localeSource;
	NSString* _ssid;
	NSString* _wpsConfigMethods;
	NSString* _wpsDeviceNameData;
	NSString* _wpsDeviceNameElement;
	NSString* _wpsManufacturerElement;
	NSString* _wpsModelName;
	NSString* _wpsModelNumber;
	NSString* _wpsPrimaryDeviceTypeCategory;
	NSString* _wpsPrimaryDeviceTypeSubCategory;
	NSString* _wpsResponseType;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasBeaconInfo; 
@property (nonatomic,retain) NSData * beaconInfo;                                     //@synthesize beaconInfo=_beaconInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasSsid; 
@property (nonatomic,retain) NSString * ssid;                                         //@synthesize ssid=_ssid - In the implementation block
@property (nonatomic,readonly) BOOL hasBssid; 
@property (nonatomic,retain) NSString * bssid;                                        //@synthesize bssid=_bssid - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsResponseType; 
@property (nonatomic,retain) NSString * wpsResponseType;                              //@synthesize wpsResponseType=_wpsResponseType - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsManufacturerElement; 
@property (nonatomic,retain) NSString * wpsManufacturerElement;                       //@synthesize wpsManufacturerElement=_wpsManufacturerElement - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsModelName; 
@property (nonatomic,retain) NSString * wpsModelName;                                 //@synthesize wpsModelName=_wpsModelName - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsModelNumber; 
@property (nonatomic,retain) NSString * wpsModelNumber;                               //@synthesize wpsModelNumber=_wpsModelNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsPrimaryDeviceTypeCategory; 
@property (nonatomic,retain) NSString * wpsPrimaryDeviceTypeCategory;                 //@synthesize wpsPrimaryDeviceTypeCategory=_wpsPrimaryDeviceTypeCategory - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsPrimaryDeviceTypeSubCategory; 
@property (nonatomic,retain) NSString * wpsPrimaryDeviceTypeSubCategory;              //@synthesize wpsPrimaryDeviceTypeSubCategory=_wpsPrimaryDeviceTypeSubCategory - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsDeviceNameElement; 
@property (nonatomic,retain) NSString * wpsDeviceNameElement;                         //@synthesize wpsDeviceNameElement=_wpsDeviceNameElement - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsDeviceNameData; 
@property (nonatomic,retain) NSString * wpsDeviceNameData;                            //@synthesize wpsDeviceNameData=_wpsDeviceNameData - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsConfigMethods; 
@property (nonatomic,retain) NSString * wpsConfigMethods;                             //@synthesize wpsConfigMethods=_wpsConfigMethods - In the implementation block
@property (nonatomic,readonly) BOOL hasLocale; 
@property (nonatomic,retain) NSString * locale;                                       //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) BOOL hasLocaleSource; 
@property (nonatomic,retain) NSString * localeSource;                                 //@synthesize localeSource=_localeSource - In the implementation block
@property (assign,nonatomic) BOOL hasChannel; 
@property (assign,nonatomic) unsigned channel;                                        //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) BOOL hasChannelWidth; 
@property (assign,nonatomic) unsigned channelWidth;                                   //@synthesize channelWidth=_channelWidth - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned)channel;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)ssid;
-(void)setSsid:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setChannel:(unsigned)arg1 ;
-(void)setHasChannel:(BOOL)arg1 ;
-(BOOL)hasChannel;
-(void)setChannelWidth:(unsigned)arg1 ;
-(void)setHasChannelWidth:(BOOL)arg1 ;
-(BOOL)hasChannelWidth;
-(unsigned)channelWidth;
-(void)setWpsResponseType:(NSString *)arg1 ;
-(void)setWpsManufacturerElement:(NSString *)arg1 ;
-(void)setWpsModelName:(NSString *)arg1 ;
-(void)setWpsModelNumber:(NSString *)arg1 ;
-(void)setWpsPrimaryDeviceTypeCategory:(NSString *)arg1 ;
-(void)setWpsPrimaryDeviceTypeSubCategory:(NSString *)arg1 ;
-(void)setWpsDeviceNameElement:(NSString *)arg1 ;
-(void)setWpsDeviceNameData:(NSString *)arg1 ;
-(void)setWpsConfigMethods:(NSString *)arg1 ;
-(void)setLocaleSource:(NSString *)arg1 ;
-(BOOL)hasLocale;
-(BOOL)hasWpsResponseType;
-(BOOL)hasWpsManufacturerElement;
-(BOOL)hasWpsModelName;
-(BOOL)hasWpsModelNumber;
-(BOOL)hasWpsPrimaryDeviceTypeCategory;
-(BOOL)hasWpsPrimaryDeviceTypeSubCategory;
-(BOOL)hasWpsDeviceNameElement;
-(BOOL)hasWpsDeviceNameData;
-(BOOL)hasWpsConfigMethods;
-(BOOL)hasLocaleSource;
-(NSString *)wpsResponseType;
-(NSString *)wpsManufacturerElement;
-(NSString *)wpsModelName;
-(NSString *)wpsModelNumber;
-(NSString *)wpsPrimaryDeviceTypeCategory;
-(NSString *)wpsPrimaryDeviceTypeSubCategory;
-(NSString *)wpsDeviceNameElement;
-(NSString *)wpsDeviceNameData;
-(NSString *)wpsConfigMethods;
-(NSString *)localeSource;
-(BOOL)hasSsid;
-(void)setBeaconInfo:(NSData *)arg1 ;
-(void)setBssid:(NSString *)arg1 ;
-(BOOL)hasBeaconInfo;
-(BOOL)hasBssid;
-(NSData *)beaconInfo;
-(NSString *)bssid;
@end
