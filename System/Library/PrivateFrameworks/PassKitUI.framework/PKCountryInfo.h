/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PKCountryInfo : NSObject {

	NSString* _countryCode;
	NSString* _localizedCountryName;

}

@property (nonatomic,retain) NSString * countryCode;                       //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain) NSString * localizedCountryName;              //@synthesize localizedCountryName=_localizedCountryName - In the implementation block
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setLocalizedCountryName:(NSString *)arg1 ;
-(NSString *)localizedCountryName;
@end

