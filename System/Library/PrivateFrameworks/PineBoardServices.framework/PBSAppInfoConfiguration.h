/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:59 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoardServices/PineBoardServices-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class BSSettings, NSArray, NSString;

@interface PBSAppInfoConfiguration : NSObject <NSMutableCopying, NSCopying, NSSecureCoding> {

	BSSettings* _settings;

}

@property (nonatomic,copy,readonly) BSSettings * settings;                                  //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) unsigned long long configurationMode; 
@property (nonatomic,copy,readonly) NSArray * provisionedAppBundleIdentifiers; 
@property (nonatomic,copy,readonly) NSArray * managedHomeScreenLayout; 
@property (nonatomic,copy,readonly) NSString * kioskAppBundleIdentifier; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(BSSettings *)settings;
-(id)_initWithSettings:(id)arg1 ;
-(unsigned long long)configurationMode;
-(NSArray *)managedHomeScreenLayout;
-(NSString *)kioskAppBundleIdentifier;
-(NSArray *)provisionedAppBundleIdentifiers;
@end

