/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface WKWebpagePreferences : NSObject <WKObject> {

	ObjectStorage<API::WebsitePolicies> _websitePolicies;

}

@property (assign,nonatomic) long long preferredContentMode; 
@property (assign,nonatomic) BOOL allowsContentJavaScript; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultPreferences;
-(id)init;
-(void)dealloc;
-(Object*)_apiObject;
-(id)_websiteDataStore;
-(id)_userContentController;
-(id)_customUserAgent;
-(void)_setCustomUserAgent:(id)arg1 ;
-(void)_setWebsiteDataStore:(id)arg1 ;
-(void)_setContentBlockersEnabled:(BOOL)arg1 ;
-(BOOL)_contentBlockersEnabled;
-(void)_setAllowedAutoplayQuirks:(unsigned long long)arg1 ;
-(unsigned long long)_allowedAutoplayQuirks;
-(void)_setAutoplayPolicy:(long long)arg1 ;
-(long long)_autoplayPolicy;
-(void)_setDeviceOrientationAndMotionAccessPolicy:(unsigned long long)arg1 ;
-(unsigned long long)_deviceOrientationAndMotionAccessPolicy;
-(void)_setPopUpPolicy:(unsigned long long)arg1 ;
-(unsigned long long)_popUpPolicy;
-(id)_customHeaderFields;
-(void)_setCustomHeaderFields:(id)arg1 ;
-(void)_setUserContentController:(id)arg1 ;
-(void)_setCustomUserAgentAsSiteSpecificQuirks:(id)arg1 ;
-(id)_customUserAgentAsSiteSpecificQuirks;
-(void)_setCustomNavigatorPlatform:(id)arg1 ;
-(id)_customNavigatorPlatform;
-(BOOL)_allowSiteSpecificQuirksToOverrideCompatibilityMode;
-(void)_setAllowSiteSpecificQuirksToOverrideCompatibilityMode:(BOOL)arg1 ;
-(id)_applicationNameForUserAgentWithModernCompatibility;
-(void)_setApplicationNameForUserAgentWithModernCompatibility:(id)arg1 ;
-(void)setAllowsContentJavaScript:(BOOL)arg1 ;
-(BOOL)allowsContentJavaScript;
-(void)setPreferredContentMode:(long long)arg1 ;
-(long long)preferredContentMode;
-(void)_setMouseEventPolicy:(unsigned long long)arg1 ;
-(unsigned long long)_mouseEventPolicy;
@end

