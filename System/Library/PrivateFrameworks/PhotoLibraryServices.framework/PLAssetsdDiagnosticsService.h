/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>
#import <libobjc.A.dylib/PLAssetsdDiagnosticsServiceProtocol.h>

@class NSString;

@interface PLAssetsdDiagnosticsService : PLAbstractLibraryServicesManagerService <PLAssetsdDiagnosticsServiceProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dumpStatusIncludingDaemon:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)dumpPhotoAnalysisStatusWithReply:(/*^block*/id)arg1 ;
-(void)incompleteRestoreProcessesWithReply:(/*^block*/id)arg1 ;
-(void)getPhotosXPCEndpointWithReply:(/*^block*/id)arg1 ;
-(void)setPhotosXPCEndpoint:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)initializeSharedMemoryForDeferredLogs:(id)arg1 ;
@end

