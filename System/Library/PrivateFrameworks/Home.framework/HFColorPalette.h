/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NAEquatable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSArray, NSString;

@interface HFColorPalette : NSObject <NAEquatable, NSCopying, NSMutableCopying> {

	unsigned long long _paletteType;
	NSArray* _rawColors;

}

@property (nonatomic,copy) NSArray * rawColors;                             //@synthesize rawColors=_rawColors - In the implementation block
@property (nonatomic,copy,readonly) NSArray * colors; 
@property (nonatomic,readonly) unsigned long long paletteType;              //@synthesize paletteType=_paletteType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultColorPaletteOfType:(unsigned long long)arg1 ;
+(id)warmWhiteColor;
+(id)_defaultRGBColors;
+(id)_defaultTemperatureColors;
+(id)_defaultColorsOfType:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)serializedRepresentation;
-(NSArray *)colors;
-(id)initWithSerializedRepresentation:(id)arg1 type:(unsigned long long)arg2 ;
-(id)initWithColors:(id)arg1 type:(unsigned long long)arg2 ;
-(NSArray *)rawColors;
-(unsigned long long)paletteType;
-(BOOL)_isNaturalLightPalette;
-(id)colorPaletteByAdjustingForColorProfile:(id)arg1 ;
-(void)setRawColors:(NSArray *)arg1 ;
@end

