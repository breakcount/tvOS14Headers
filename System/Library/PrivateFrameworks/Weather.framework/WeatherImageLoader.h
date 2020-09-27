/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Weather/Weather-Structs.h>
@class CPBitmapStore, NSCache;

@interface WeatherImageLoader : NSObject {

	double _scale;
	CPBitmapStore* _store;
	NSCache* _conditionImagesCache;

}

@property (nonatomic,retain) CPBitmapStore * store;                       //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSCache * conditionImagesCache;              //@synthesize conditionImagesCache=_conditionImagesCache - In the implementation block
+(id)sharedImageLoader;
+(id)conditionImageNamed:(id)arg1 style:(long long)arg2 ;
+(id)conditionImageNameWithConditionIndex:(long long)arg1 ;
+(id)conditionImageWithConditionIndex:(long long)arg1 ;
+(id)conditionImageBundle;
+(id)conditionImageNamed:(id)arg1 size:(CGSize)arg2 cloudAligned:(BOOL)arg3 stroke:(BOOL)arg4 strokeAlpha:(double)arg5 lighterColors:(BOOL)arg6 ;
+(id)colorForImageColor:(id)arg1 lighter:(BOOL)arg2 ;
+(void)preloadImages;
+(void)cacheImageIfNecessary:(id)arg1 ;
+(id)conditionImageWithConditionIndex:(long long)arg1 style:(long long)arg2 ;
+(id)cachedImageNamed:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(void)setStore:(CPBitmapStore *)arg1 ;
-(CPBitmapStore *)store;
-(void)setImage:(id)arg1 forKey:(id)arg2 ;
-(NSCache *)conditionImagesCache;
-(id)cachedImageForKey:(id)arg1 ;
-(void)setConditionImagesCache:(NSCache *)arg1 ;
@end

