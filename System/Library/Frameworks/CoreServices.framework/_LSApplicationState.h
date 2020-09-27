/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _LSApplicationState : NSObject <NSCopying, NSSecureCoding> {

	NSString* _bundleIdentifier;
	unsigned long long _stateFlags;
	int _ratingRank;
	unsigned long long _installType;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                             //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (getter=isInstalled,nonatomic,readonly) BOOL installed; 
@property (getter=isPlaceholder,nonatomic,readonly) BOOL placeholder; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (getter=isRestricted,nonatomic,readonly) BOOL restricted; 
@property (getter=isRemovedSystemApp,nonatomic,readonly) BOOL removedSystemApp; 
@property (getter=isBlocked,nonatomic,readonly) BOOL blocked; 
@property (getter=isAlwaysAvailable,nonatomic,readonly) BOOL alwaysAvailable; 
@property (getter=isDowngraded,nonatomic,readonly) BOOL downgraded; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(BOOL)isRestricted;
-(BOOL)isBlocked;
-(BOOL)isInstalled;
-(BOOL)isPlaceholder;
-(BOOL)isAlwaysAvailable;
-(BOOL)isRemovedSystemApp;
-(BOOL)isDowngraded;
-(id)initWithBundleIdentifier:(id)arg1 stateFlags:(unsigned long long)arg2 ratingRank:(int)arg3 installType:(unsigned long long)arg4 ;
-(void)addStateFlag:(unsigned long long)arg1 ;
@end

