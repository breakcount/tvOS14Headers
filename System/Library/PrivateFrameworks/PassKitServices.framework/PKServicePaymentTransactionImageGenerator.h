/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:26 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitServices.framework/PassKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PassKitServices/PassKitServices-Structs.h>
@class NSXPCConnection, NSMutableDictionary, NSString;

@interface PKServicePaymentTransactionImageGenerator : NSObject {

	NSXPCConnection* _connectionToService;
	NSMutableDictionary* _mappedFilesIndices;
	NSMutableDictionary* _keysHitCounts;
	SCD_Struct_PK0* _mappedFiles[50];
	NSString* _nextKeyToEvict;
	unsigned long long _evictionHitCount;
	os_unfair_lock_s _lock;
	BOOL _hasSetupTempDir;

}
-(id)init;
-(void)dealloc;
-(id)connectionToService;
-(void)_cleanMappedFile:(SCD_Struct_PK0*)arg1 ;
-(void)_updateNextKeyToEvict;
-(unsigned long long)_nextIndexToUseAndEvictIfNeeded;
-(id)cachedImageDataForKey:(id)arg1 ;
-(void)setCachedImageData:(id)arg1 forKey:(id)arg2 ;
-(void)imageDataForTransaction:(id)arg1 size:(CGSize)arg2 completion:(/*^block*/id)arg3 ;
@end

