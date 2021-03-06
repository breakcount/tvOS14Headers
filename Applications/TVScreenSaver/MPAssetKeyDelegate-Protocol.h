//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSDictionary, NSString;
@protocol MPMapFlightProtocol, MPMapTileProtocol;

@protocol MPAssetKeyDelegate <NSObject>
- (NSString *)absolutePathForStillAssetAtPath:(NSString *)arg1 andSize:(struct CGSize)arg2;
- (NSString *)absolutePathForAssetKey:(NSString *)arg1 andSize:(struct CGSize)arg2;
- (NSString *)absolutePathForAssetKey:(NSString *)arg1;

@optional
- (struct CGImage *)cgImageForAssetKey:(NSString *)arg1 andSize:(struct CGSize)arg2;
- (struct __IOSurface *)retainedIOSurfaceForAssetKey:(NSString *)arg1 andSize:(struct CGSize)arg2 orientation:(char *)arg3;
- (struct __IOSurface *)retainedIOSurfaceForAssetKey:(NSString *)arg1 andSize:(struct CGSize)arg2;
- (NSArray *)detectRegionsOfInterestForAssetKey:(NSString *)arg1;
- (NSData *)imageDataForAssetKey:(NSString *)arg1 andSize:(struct CGSize)arg2;
- (struct CGImage *)retainedCGImageForAssetKey:(NSString *)arg1 andSize:(struct CGSize)arg2 orientation:(char *)arg3 thumbnailIfPossible:(_Bool)arg4 now:(_Bool)arg5;
- (struct CGImage *)retainedThumbnailCGImageForAssetKey:(NSString *)arg1 andSize:(struct CGSize)arg2;
- (struct CGImage *)retainedCGImageForAssetKey:(NSString *)arg1 andSize:(struct CGSize)arg2 orientation:(char *)arg3;
- (struct CGImage *)retainedCGImageForAssetKey:(NSString *)arg1 andSize:(struct CGSize)arg2;
- (NSDictionary *)attributesforAssetPath:(NSString *)arg1;
- (id)attributeForKey:(NSString *)arg1 forAssetKey:(NSString *)arg2 withOptions:(NSDictionary *)arg3;
- (NSArray *)relativeTiledPathsForAssetWithAttributes:(NSDictionary *)arg1;
- (NSString *)relativePathForAssetWithAttributes:(NSDictionary *)arg1;
- (struct CGSize)resolutionForAssetKey:(NSString *)arg1;
- (id <MPMapFlightProtocol>)flightPlanFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2;
- (id <MPMapTileProtocol>)mapTileForPath:(NSString *)arg1;
- (id <MPMapTileProtocol>)mapTileCenteredAt:(NSArray *)arg1 size:(struct CGSize)arg2 inset:(struct CGSize)arg3;
@end

