/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:43 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriAudioSupport.framework/SiriAudioSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet;

@interface SiriAudioSupport.PlayMediaAppSelectionOutput : _UKNOWN_SUPERCLASS_ <MLFeatureProvider> {

	 provider;
	 $__lazy_storage_$_result_isRequestedApp;
	 $__lazy_storage_$_result_isRequestedAppProbability;

}

@property (readonly,nonatomic) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
@end

