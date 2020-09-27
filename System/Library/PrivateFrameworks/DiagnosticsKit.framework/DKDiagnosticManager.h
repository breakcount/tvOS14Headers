/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DKAssetResponder.h>
#import <libobjc.A.dylib/DKBrightnessResponder.h>
#import <libobjc.A.dylib/DKVolumeHUDResponder.h>
#import <libobjc.A.dylib/DKRequestViewControllerDelegate.h>

@protocol DKAssetResponder, OS_dispatch_queue, DKBrightnessResponder, DKVolumeHUDResponder, DKViewControllerDelegate;
@class NSObject, DKDiagnosticRegistry, DKExtensionDiscovery, NSString;

@interface DKDiagnosticManager : NSObject <DKAssetResponder, DKBrightnessResponder, DKVolumeHUDResponder, DKRequestViewControllerDelegate> {

	id<DKAssetResponder> _assetResponder;
	NSObject*<OS_dispatch_queue> _diagnosticsManagerQueue;
	NSObject*<OS_dispatch_queue> _diagnosticListQueue;
	DKDiagnosticRegistry* _registry;
	DKExtensionDiscovery* _discovery;
	NSString* _bundleIdentifier;
	unsigned long long _connectionRoute;
	id<DKBrightnessResponder> _brightnessResponder;
	id<DKVolumeHUDResponder> _volumeHUDResponder;
	id<DKViewControllerDelegate> _viewControllerDelegate;

}

@property (assign,nonatomic,__weak) id<DKBrightnessResponder> brightnessResponder; 
@property (assign,nonatomic,__weak) id<DKVolumeHUDResponder> volumeHUDResponder; 
@property (assign,nonatomic,__weak) id<DKViewControllerDelegate> viewControllerDelegate; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> diagnosticsManagerQueue;                    //@synthesize diagnosticsManagerQueue=_diagnosticsManagerQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> diagnosticListQueue;                        //@synthesize diagnosticListQueue=_diagnosticListQueue - In the implementation block
@property (nonatomic,retain) DKDiagnosticRegistry * registry;                                         //@synthesize registry=_registry - In the implementation block
@property (nonatomic,retain) DKExtensionDiscovery * discovery;                                        //@synthesize discovery=_discovery - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                                             //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long connectionRoute;                                      //@synthesize connectionRoute=_connectionRoute - In the implementation block
@property (assign,nonatomic,__weak) id<DKBrightnessResponder> brightnessResponder;                    //@synthesize brightnessResponder=_brightnessResponder - In the implementation block
@property (assign,nonatomic,__weak) id<DKVolumeHUDResponder> volumeHUDResponder;                      //@synthesize volumeHUDResponder=_volumeHUDResponder - In the implementation block
@property (assign,nonatomic,__weak) id<DKViewControllerDelegate> viewControllerDelegate;              //@synthesize viewControllerDelegate=_viewControllerDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<DKAssetResponder> assetResponder;                              //@synthesize assetResponder=_assetResponder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(DKExtensionDiscovery *)discovery;
-(void)setDiscovery:(DKExtensionDiscovery *)arg1 ;
-(id)adapterForIdentifier:(id)arg1 ;
-(id)attributesForIdentifier:(id)arg1 ;
-(DKDiagnosticRegistry *)registry;
-(void)setRegistry:(DKDiagnosticRegistry *)arg1 ;
-(void)getAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setScreenToBrightness:(float)arg1 animate:(BOOL)arg2 ;
-(void)enableVolumeHUD:(BOOL)arg1 ;
-(void)request:(id)arg1 presentViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)request:(id)arg1 dismissViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithBundleIdentifier:(id)arg1 connectionRoute:(unsigned long long)arg2 ;
-(NSObject*<OS_dispatch_queue>)diagnosticsManagerQueue;
-(BOOL)_checkPrerequisitesForDiagnostic:(id)arg1 parameters:(id)arg2 error:(id*)arg3 ;
-(NSObject*<OS_dispatch_queue>)diagnosticListQueue;
-(id<DKAssetResponder>)assetResponder;
-(id<DKViewControllerDelegate>)viewControllerDelegate;
-(id<DKBrightnessResponder>)brightnessResponder;
-(id<DKVolumeHUDResponder>)volumeHUDResponder;
-(BOOL)_freeSpaceAvailable:(id)arg1 ;
-(BOOL)_isDeviceLocked;
-(void)beginDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)diagnosticsWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelAllDiagnostics;
-(void)setAssetResponder:(id<DKAssetResponder>)arg1 ;
-(void)setDiagnosticsManagerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDiagnosticListQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)connectionRoute;
-(void)setConnectionRoute:(unsigned long long)arg1 ;
-(void)setBrightnessResponder:(id<DKBrightnessResponder>)arg1 ;
-(void)setVolumeHUDResponder:(id<DKVolumeHUDResponder>)arg1 ;
-(void)setViewControllerDelegate:(id<DKViewControllerDelegate>)arg1 ;
@end

