/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/_GEOTileDBWriteOperation.h>

@class NSString;

@interface _GEOTileDBDeleteTileOperation : NSObject <_GEOTileDBWriteOperation> {

	GEOTileKey _key;

}

@property (nonatomic,readonly) GEOTileKey* key; 
@property (nonatomic,readonly) unsigned long long sizeInBytes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(GEOTileKey*)key;
-(unsigned long long)sizeInBytes;
-(void)performWithDB:(id)arg1 ;
-(BOOL)canIncreaseDataSizeInDB;
-(BOOL)isSupercededByOperation:(id)arg1 ;
-(id)dataForKey:(const GEOTileKey*)arg1 ETag:(id*)arg2 originalLoadReason:(unsigned char*)arg3 isKnownNotToExist:(BOOL*)arg4 ;
-(id)initWithTileKey:(const GEOTileKey*)arg1 ;
@end
