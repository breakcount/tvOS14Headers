/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:35 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <libobjc.A.dylib/_TtP11AppStoreKitP33_DDDE28517FCD97BF716F071D2D29E8A432JSMediaTokenServiceObjectExports_.h>

@class NSString;

@interface AppStoreKit.JSMediaTokenServiceObject : NSObject <_TtP11AppStoreKitP33_DDDE28517FCD97BF716F071D2D29E8A432JSMediaTokenServiceObjectExports_> {

	 tokenService;

}

@property (readonly,nonatomic) NSString * tokenString; 
-(id)init;
-(NSString *)tokenString;
-(id)refreshToken;
-(id)overrideToken:(id)arg1 ;
-(void)resetToken;
@end

