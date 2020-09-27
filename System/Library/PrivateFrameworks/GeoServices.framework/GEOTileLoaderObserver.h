/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOTileLoaderObserver <NSObject>
@required
-(void)tileLoader:(id)arg1 loadedTileKey:(const GEOTileKey*)arg2 fromSource:(long long)arg3 withOptions:(unsigned long long)arg4;
-(void)tileLoader:(id)arg1 failedTileKey:(const GEOTileKey*)arg2 error:(id)arg3 withOptions:(unsigned long long)arg4;

@end

