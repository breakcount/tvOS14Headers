/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <Foundation/NSString.h>

@class NSString, NSDictionary;

@interface CSLocalizedString : NSString {

	BOOL _didTrySettingDefaultString;
	NSString* _defaultString;
	NSDictionary* _localizedStrings;

}

@property (nonatomic,readonly) NSString * defaultString;                     //@synthesize defaultString=_defaultString - In the implementation block
@property (assign,nonatomic) BOOL didTrySettingDefaultString;                //@synthesize didTrySettingDefaultString=_didTrySettingDefaultString - In the implementation block
@property (nonatomic,readonly) NSDictionary * localizedStrings;              //@synthesize localizedStrings=_localizedStrings - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)length;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)localizedStrings;
-(NSString *)defaultString;
-(id)initWithLocalizedStrings:(id)arg1 ;
-(id)localizedString;
-(BOOL)didTrySettingDefaultString;
-(void)setDidTrySettingDefaultString:(BOOL)arg1 ;
@end

