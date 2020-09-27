/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/_UIFontCacheKey.h>

@class NSString;

@interface _UIFontNameCacheKey : _UIFontCacheKey {

	int _traits;
	NSString* _fontName;
	double _pointSize;

}

@property (nonatomic,copy) NSString * fontName;              //@synthesize fontName=_fontName - In the implementation block
@property (assign,nonatomic) int traits;                     //@synthesize traits=_traits - In the implementation block
@property (assign,nonatomic) double pointSize;               //@synthesize pointSize=_pointSize - In the implementation block
-(id)description;
-(void)dealloc;
-(unsigned long long)_hash;
-(void)setFontName:(NSString *)arg1 ;
-(NSString *)fontName;
-(void)setTraits:(int)arg1 ;
-(int)traits;
-(double)pointSize;
-(void)setPointSize:(double)arg1 ;
-(BOOL)_isEqualToKey:(id)arg1 ;
@end

