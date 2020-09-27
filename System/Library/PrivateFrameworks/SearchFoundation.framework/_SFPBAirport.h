/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBAirport.h>
@class NSString, _SFPBTimeZone, _SFPBLatLng, NSData;


@protocol _SFPBAirport <NSObject>
@property (nonatomic,copy) NSString * code; 
@property (nonatomic,retain) _SFPBTimeZone * timezone; 
@property (nonatomic,retain) _SFPBLatLng * location; 
@property (nonatomic,copy) NSString * city; 
@property (nonatomic,copy) NSString * street; 
@property (nonatomic,copy) NSString * district; 
@property (nonatomic,copy) NSString * state; 
@property (nonatomic,copy) NSString * postalCode; 
@property (nonatomic,copy) NSString * countryCode; 
@property (nonatomic,copy) NSString * country; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)name;
-(NSString *)code;
-(id)initWithDictionary:(id)arg1;
-(void)setName:(id)arg1;
-(NSString *)countryCode;
-(NSString *)state;
-(void)setState:(id)arg1;
-(void)setCountryCode:(id)arg1;
-(void)setCode:(id)arg1;
-(_SFPBLatLng *)location;
-(void)setLocation:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(NSString *)street;
-(void)setStreet:(id)arg1;
-(_SFPBTimeZone *)timezone;
-(void)setTimezone:(id)arg1;
-(NSString *)country;
-(void)setCountry:(id)arg1;
-(void)setCity:(id)arg1;
-(void)setPostalCode:(id)arg1;
-(NSString *)city;
-(NSString *)postalCode;
-(NSData *)jsonData;
-(void)setDistrict:(id)arg1;
-(NSString *)district;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _SFPBTimeZone, _SFPBLatLng, NSData;

@interface _SFPBAirport : PBCodable <_SFPBAirport, NSSecureCoding> {

	NSString* _code;
	_SFPBTimeZone* _timezone;
	_SFPBLatLng* _location;
	NSString* _city;
	NSString* _street;
	NSString* _district;
	NSString* _state;
	NSString* _postalCode;
	NSString* _countryCode;
	NSString* _country;
	NSString* _name;

}

@property (nonatomic,copy) NSString * code;                         //@synthesize code=_code - In the implementation block
@property (nonatomic,retain) _SFPBTimeZone * timezone;              //@synthesize timezone=_timezone - In the implementation block
@property (nonatomic,retain) _SFPBLatLng * location;                //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * city;                         //@synthesize city=_city - In the implementation block
@property (nonatomic,copy) NSString * street;                       //@synthesize street=_street - In the implementation block
@property (nonatomic,copy) NSString * district;                     //@synthesize district=_district - In the implementation block
@property (nonatomic,copy) NSString * state;                        //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * postalCode;                   //@synthesize postalCode=_postalCode - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                  //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy) NSString * country;                      //@synthesize country=_country - In the implementation block
@property (nonatomic,copy) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)code;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)countryCode;
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setCode:(NSString *)arg1 ;
-(_SFPBLatLng *)location;
-(void)setLocation:(_SFPBLatLng *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)street;
-(void)setStreet:(NSString *)arg1 ;
-(_SFPBTimeZone *)timezone;
-(void)setTimezone:(_SFPBTimeZone *)arg1 ;
-(NSString *)country;
-(void)setCountry:(NSString *)arg1 ;
-(void)setCity:(NSString *)arg1 ;
-(void)setPostalCode:(NSString *)arg1 ;
-(NSString *)city;
-(NSString *)postalCode;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(void)setDistrict:(NSString *)arg1 ;
-(NSString *)district;
@end

