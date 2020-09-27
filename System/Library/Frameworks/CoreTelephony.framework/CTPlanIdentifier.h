/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTPlanIdentifier : NSObject <NSSecureCoding> {

	NSString* _iccid;
	NSString* _carrierName;
	NSString* _phoneNumber;
	NSString* _countryCode;
	NSString* _label;

}

@property (nonatomic,retain) NSString * iccid;                    //@synthesize iccid=_iccid - In the implementation block
@property (nonatomic,retain) NSString * carrierName;              //@synthesize carrierName=_carrierName - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * countryCode;              //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain) NSString * label;                    //@synthesize label=_label - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)countryCode;
-(NSString *)phoneNumber;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)iccid;
-(NSString *)carrierName;
-(void)setCarrierName:(NSString *)arg1 ;
-(id)initWithIccid:(id)arg1 carrierName:(id)arg2 phoneNumber:(id)arg3 countryCode:(id)arg4 label:(id)arg5 ;
-(void)setIccid:(NSString *)arg1 ;
@end

