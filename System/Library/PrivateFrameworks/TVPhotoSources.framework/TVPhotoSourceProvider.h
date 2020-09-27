/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:28 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVPhotoSources.framework/TVPhotoSources
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSExtensionRequestHandling.h>
#import <TVPhotoSources/TVPhotoSourceExtensionProtocol.h>

@class TVPhotoSourceExtensionContext, NSString;

@interface TVPhotoSourceProvider : NSObject <NSExtensionRequestHandling, TVPhotoSourceExtensionProtocol> {

	TVPhotoSourceExtensionContext* _extensionContext;

}

@property (nonatomic,readonly) TVPhotoSourceExtensionContext * extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TVPhotoSourceExtensionContext *)extensionContext;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)fetchCollectionsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchAssetsForCollectionWithIdentifier:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)completedExtensionRequestWithItems:(id)arg1 ;
@end
