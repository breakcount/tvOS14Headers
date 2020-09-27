/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:00 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoardServices/PineBoardServices-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PBSBadgeValue, NSSet;

@interface PBSAppState : NSObject <NSMutableCopying, NSCopying> {

	NSString* _applicationIdentifier;
	PBSBadgeValue* _badgeValue;
	NSString* _iconName;
	BOOL _badgeEnabled;
	BOOL _recentlyUpdated;
	BOOL _enabled;
	long long _cacheDeleting;
	NSSet* _disabledReasons;

}

@property (nonatomic,copy,readonly) NSString * applicationIdentifier;                      //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) PBSBadgeValue * badgeValue;                            //@synthesize badgeValue=_badgeValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * iconName;                                   //@synthesize iconName=_iconName - In the implementation block
@property (getter=isBadgeEnabled,nonatomic,readonly) BOOL badgeEnabled;                    //@synthesize badgeEnabled=_badgeEnabled - In the implementation block
@property (getter=isRecentlyUpdated,nonatomic,readonly) BOOL recentlyUpdated;              //@synthesize recentlyUpdated=_recentlyUpdated - In the implementation block
@property (getter=isCacheDeleting,nonatomic,readonly) BOOL cacheDeleting; 
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled;                              //@synthesize enabled=_enabled - In the implementation block
+(void)initialize;
+(BOOL)isEnabledForApplicationWithIdentifier:(id)arg1 ;
+(id)iconNameForApplicationWithIdentifier:(id)arg1 ;
+(id)badgeValueForApplicationWithIdentifier:(id)arg1 ;
+(BOOL)isBadgeEnabledForApplicationWithIdentifier:(id)arg1 ;
+(BOOL)isRecentlyUpdatedForApplicationWithIdentifier:(id)arg1 ;
+(BOOL)isCacheDeletingForApplicationWithIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)_init;
-(BOOL)isEnabled;
-(PBSBadgeValue *)badgeValue;
-(NSString *)applicationIdentifier;
-(NSString *)iconName;
-(BOOL)isBadgeEnabled;
-(BOOL)isRecentlyUpdated;
-(BOOL)isCacheDeleting;
-(id)initWithApplicationIdentifer:(id)arg1 ;
-(void)deleteState;
@end

