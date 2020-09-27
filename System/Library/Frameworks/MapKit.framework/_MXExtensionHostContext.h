/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/_MXExtensionContext.h>
#import <libobjc.A.dylib/_MXExtensionHostContextType.h>

@protocol _MXExtensionURLHandling;
@class NSString;

@interface _MXExtensionHostContext : _MXExtensionContext <_MXExtensionHostContextType> {

	id<_MXExtensionURLHandling> _URLHandlingDelegate;

}

@property (assign,nonatomic,__weak) id<_MXExtensionURLHandling> URLHandlingDelegate;              //@synthesize URLHandlingDelegate=_URLHandlingDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<_MXExtensionURLHandling>)URLHandlingDelegate;
-(void)setURLHandlingDelegate:(id<_MXExtensionURLHandling>)arg1 ;
@end

