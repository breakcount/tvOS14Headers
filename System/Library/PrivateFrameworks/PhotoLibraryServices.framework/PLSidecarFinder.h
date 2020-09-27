/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSCache;

@interface PLSidecarFinder : NSObject {

	os_unfair_lock_s _lock;
	NSCache* _cachedSidecarURLsByDirectory;

}

@property (nonatomic,retain) NSCache * cachedSidecarURLsByDirectory;              //@synthesize cachedSidecarURLsByDirectory=_cachedSidecarURLsByDirectory - In the implementation block
+(id)_findPotentialSidecarURLsInDirectory:(id)arg1 context:(id)arg2 ;
+(BOOL)_isValidExtensionForSidecar:(id)arg1 context:(id)arg2 ;
-(id)init;
-(void)reset;
-(id)collectSidecarURLsForAssetFilename:(id)arg1 inDirectory:(id)arg2 context:(id)arg3 removeWhenDone:(BOOL)arg4 ;
-(NSCache *)cachedSidecarURLsByDirectory;
-(void)setCachedSidecarURLsByDirectory:(NSCache *)arg1 ;
@end

