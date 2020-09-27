/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, NSArray, NSString;

@interface IKColor : NSObject <NSCopying> {

	UIColor* _color;
	NSArray* _gradientColors;
	long long _colorType;
	long long _gradientType;
	long long _gradientDirectionType;
	NSString* _colorMapKey;
	NSArray* _gradientPoints;

}

@property (nonatomic,copy) NSString * colorMapKey;                         //@synthesize colorMapKey=_colorMapKey - In the implementation block
@property (nonatomic,retain) UIColor * color;                              //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) long long colorType;                          //@synthesize colorType=_colorType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * gradientPoints;              //@synthesize gradientPoints=_gradientPoints - In the implementation block
@property (nonatomic,copy) NSArray * gradientColors;                       //@synthesize gradientColors=_gradientColors - In the implementation block
@property (assign,nonatomic) long long gradientDirectionType;              //@synthesize gradientDirectionType=_gradientDirectionType - In the implementation block
@property (assign,nonatomic) long long gradientType;                       //@synthesize gradientType=_gradientType - In the implementation block
+(id)colorMap;
+(void)registerColorNameMap:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(id)initWithColor:(id)arg1 ;
-(NSArray *)gradientColors;
-(void)setGradientColors:(NSArray *)arg1 ;
-(long long)gradientType;
-(void)setGradientType:(long long)arg1 ;
-(long long)colorType;
-(void)setColorType:(long long)arg1 ;
-(void)setGradientDirectionType:(long long)arg1 ;
-(void)setGradientColors:(id)arg1 andPoints:(id)arg2 ;
-(id)initWithColorMapKey:(id)arg1 ;
-(NSString *)colorMapKey;
-(long long)gradientDirectionType;
-(void)setColorMapKey:(NSString *)arg1 ;
-(NSArray *)gradientPoints;
@end

