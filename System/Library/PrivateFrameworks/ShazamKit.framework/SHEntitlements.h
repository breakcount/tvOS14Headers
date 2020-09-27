/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:39 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ShazamKit/ShazamKit-Structs.h>
@interface SHEntitlements : NSObject {

	BOOL _isEntitledForSignatureGeneration;
	BOOL _isEntitledForStorefront;
	BOOL _isEntitledForMicrophone;
	BOOL _isEntitledForRemoteRecognition;
	BOOL _isEntitledForExternalAudioRecording;
	BOOL _isEntitledForInternalAudioRecording;

}

@property (assign,nonatomic) BOOL isEntitledForSignatureGeneration;                   //@synthesize isEntitledForSignatureGeneration=_isEntitledForSignatureGeneration - In the implementation block
@property (assign,nonatomic) BOOL isEntitledForStorefront;                            //@synthesize isEntitledForStorefront=_isEntitledForStorefront - In the implementation block
@property (nonatomic,readonly) BOOL isEntitledForMicrophone;                          //@synthesize isEntitledForMicrophone=_isEntitledForMicrophone - In the implementation block
@property (nonatomic,readonly) BOOL isEntitledForRemoteRecognition;                   //@synthesize isEntitledForRemoteRecognition=_isEntitledForRemoteRecognition - In the implementation block
@property (nonatomic,readonly) BOOL isEntitledForExternalAudioRecording;              //@synthesize isEntitledForExternalAudioRecording=_isEntitledForExternalAudioRecording - In the implementation block
@property (nonatomic,readonly) BOOL isEntitledForInternalAudioRecording;              //@synthesize isEntitledForInternalAudioRecording=_isEntitledForInternalAudioRecording - In the implementation block
-(id)init;
-(id)initWithConnection:(id)arg1 ;
-(void)configureEntitlementsForTask:(SecTaskRef)arg1 ;
-(void)configureEntitlementsForConnection:(id)arg1 ;
-(BOOL)entitlementArray:(id)arg1 containsEntitlementValue:(id)arg2 fromSecTask:(SecTaskRef)arg3 ;
-(BOOL)boolValueOfEntitlement:(id)arg1 fromSecTask:(SecTaskRef)arg2 ;
-(BOOL)entitlementArray:(id)arg1 containsEntitlementValue:(id)arg2 fromConnection:(id)arg3 ;
-(BOOL)boolValueOfEntitlement:(id)arg1 fromConnection:(id)arg2 ;
-(void*)copyValueOfEntitlement:(id)arg1 fromSecTask:(SecTaskRef)arg2 ;
-(BOOL)isEntitledForSignatureGeneration;
-(void)setIsEntitledForSignatureGeneration:(BOOL)arg1 ;
-(BOOL)isEntitledForStorefront;
-(void)setIsEntitledForStorefront:(BOOL)arg1 ;
-(BOOL)isEntitledForMicrophone;
-(BOOL)isEntitledForRemoteRecognition;
-(BOOL)isEntitledForExternalAudioRecording;
-(BOOL)isEntitledForInternalAudioRecording;
@end

