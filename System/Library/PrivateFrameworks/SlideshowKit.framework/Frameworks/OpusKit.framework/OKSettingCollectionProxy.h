/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OKSettingsSupport.h>

@class NSString;

@interface OKSettingCollectionProxy : NSObject <OKSettingsSupport> {

	id _listOfObjects;
	/*^block*/id _keyResolverBlock;
	NSString* _keyPath;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(void)dealloc;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithObjects:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initWithObjects:(id)arg1 withKeyPath:(id)arg2 ;
@end

