/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <CoreData/NSXPCStoreServerRequestHandlingPolicy.h>

@class PLLimitedLibraryFetchFilter, PLAssetsdConnectionAuthorization, NSString, NSDictionary, NSNumber;

@interface PLXPCPhotoLibraryStoreServerRequestHandlingPolicy : NSXPCStoreServerRequestHandlingPolicy {

	PLLimitedLibraryFetchFilter* _fetchFilter;
	PLAssetsdConnectionAuthorization* _connectionAuthorization;
	NSString* _fetchFilterClientIdentifier;
	NSDictionary* _fetchFilterEntityNameToPredicateMap;
	NSNumber* _fetchFilterEnabledStatus;
	os_unfair_lock_s _fetchFilterLock;

}
-(id)init;
-(void)dealloc;
-(BOOL)shouldAcceptConnectionsFromClientWithContext:(id)arg1 ;
-(BOOL)shouldAcceptMetadataChangesFromClientWithContext:(id)arg1 ;
-(id)restrictingWritePredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2 ;
-(id)restrictingReadPredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2 ;
-(id)restrictingPullChangeHistoryPredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2 ;
-(id)initWithConnectionAuthorization:(id)arg1 ;
-(id)_entityNamesAllowedByRestrictedDataEntitlements:(id)arg1 ;
-(id)_restrictedEntityNamesAllowedForContext:(id)arg1 ;
-(void)limitedLibraryFetchFiltersUpdated:(id)arg1 ;
@end

