/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MLMediaLibraryResourcesServiceProtocol, ML3AccountInformationProviding, MLMediaLibraryAccountChangeObserver;
@class NSString;

@interface ML3MusicLibraryResourcesManagerContext : NSObject {

	BOOL _runningInDaemon;
	BOOL _multiUserSupported;
	id<MLMediaLibraryResourcesServiceProtocol> _resourcesService;
	id<ML3AccountInformationProviding> _accountInfo;
	id<MLMediaLibraryAccountChangeObserver> _accountChangeObserver;
	NSString* _libraryContainerIdentifier;

}

@property (getter=isRunningInDaemon,nonatomic,readonly) BOOL runningInDaemon;                              //@synthesize runningInDaemon=_runningInDaemon - In the implementation block
@property (getter=isMultiUserSupported,nonatomic,readonly) BOOL multiUserSupported;                        //@synthesize multiUserSupported=_multiUserSupported - In the implementation block
@property (nonatomic,readonly) id<MLMediaLibraryResourcesServiceProtocol> resourcesService;                //@synthesize resourcesService=_resourcesService - In the implementation block
@property (nonatomic,readonly) id<ML3AccountInformationProviding> accountInfo;                             //@synthesize accountInfo=_accountInfo - In the implementation block
@property (nonatomic,readonly) id<MLMediaLibraryAccountChangeObserver> accountChangeObserver;              //@synthesize accountChangeObserver=_accountChangeObserver - In the implementation block
@property (nonatomic,readonly) NSString * libraryContainerIdentifier;                                      //@synthesize libraryContainerIdentifier=_libraryContainerIdentifier - In the implementation block
+(id)contextForAutoupdatingSharedLibrary;
+(id)contextForSingleUserLibraryWithAccountInfo:(id)arg1 ;
+(id)contextForSingleUserLibraryWithLibraryContainerIdentifier:(id)arg1 ;
+(id)contextForMultiUserFrameworkLibraryWithService:(id)arg1 ;
+(id)contextForMultiUserDaemonLibraryWithAccountInfo:(id)arg1 accountChangeObserver:(id)arg2 ;
-(id<MLMediaLibraryAccountChangeObserver>)accountChangeObserver;
-(id<ML3AccountInformationProviding>)accountInfo;
-(id)_initWithResourcesService:(id)arg1 accountInfo:(id)arg2 libraryContainerIdentifier:(id)arg3 accountChangeObserver:(id)arg4 supportsMultiUsers:(BOOL)arg5 runningInDaemon:(BOOL)arg6 ;
-(BOOL)isRunningInDaemon;
-(BOOL)isMultiUserSupported;
-(id<MLMediaLibraryResourcesServiceProtocol>)resourcesService;
-(NSString *)libraryContainerIdentifier;
@end

