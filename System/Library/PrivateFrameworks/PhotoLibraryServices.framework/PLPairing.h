/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSPredicate;

@interface PLPairing : NSObject {

	NSPredicate* _locatedInUsersPhotoLibrary;
	os_unfair_lock_s _lock;

}
+(id)getMetadataForAsset:(id)arg1 ;
-(id)init;
-(BOOL)processPairingForEntireLibraryInContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)processPairingForGroupIDs:(id)arg1 inContext:(id)arg2 deferredProcessingNeeded:(BOOL*)arg3 error:(id*)arg4 ;
@end

