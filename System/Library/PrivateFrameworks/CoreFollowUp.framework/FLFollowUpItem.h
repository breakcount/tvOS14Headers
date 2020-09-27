/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, FLFollowUpNotification, NSArray, NSDictionary, NSData;

@interface FLFollowUpItem : NSObject <NSSecureCoding> {

	BOOL _showInSettings;
	BOOL _shouldPersistWhenActivated;
	BOOL _shouldPersistWhenDismissed;
	NSString* _uniqueIdentifier;
	NSString* _groupIdentifier;
	FLFollowUpNotification* _notification;
	NSString* _targetBundleIdentifier;
	NSString* _title;
	NSString* _informativeText;
	NSString* _informativeFooterText;
	NSString* _representingBundlePath;
	NSString* _bundleIconName;
	unsigned long long _displayStyle;
	NSString* _categoryIdentifier;
	NSString* _extensionIdentifier;
	NSArray* _actions;
	NSDictionary* _userInfo;
	unsigned long long _sqlID;
	NSString* _clientIdentifier;
	NSString* _delegateMachServiceName;

}

@property (assign,nonatomic) unsigned long long sqlID;                           //@synthesize sqlID=_sqlID - In the implementation block
@property (nonatomic,copy) NSString * clientIdentifier;                          //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy) NSString * delegateMachServiceName;                   //@synthesize delegateMachServiceName=_delegateMachServiceName - In the implementation block
@property (nonatomic,retain) NSData * _userInfoData; 
@property (nonatomic,copy) NSString * uniqueIdentifier;                          //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,copy) NSString * groupIdentifier;                           //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,retain) FLFollowUpNotification * notification;              //@synthesize notification=_notification - In the implementation block
@property (assign,nonatomic) BOOL showInSettings;                                //@synthesize showInSettings=_showInSettings - In the implementation block
@property (nonatomic,copy) NSString * targetBundleIdentifier;                    //@synthesize targetBundleIdentifier=_targetBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * informativeText;                           //@synthesize informativeText=_informativeText - In the implementation block
@property (nonatomic,copy) NSString * informativeFooterText;                     //@synthesize informativeFooterText=_informativeFooterText - In the implementation block
@property (nonatomic,copy) NSString * representingBundlePath;                    //@synthesize representingBundlePath=_representingBundlePath - In the implementation block
@property (nonatomic,copy) NSString * bundleIconName;                            //@synthesize bundleIconName=_bundleIconName - In the implementation block
@property (assign) unsigned long long displayStyle;                              //@synthesize displayStyle=_displayStyle - In the implementation block
@property (copy) NSString * categoryIdentifier;                                  //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (copy) NSString * extensionIdentifier;                                 //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (copy) NSArray * actions;                                              //@synthesize actions=_actions - In the implementation block
@property (copy) NSDictionary * userInfo;                                        //@synthesize userInfo=_userInfo - In the implementation block
@property (assign) BOOL shouldPersistWhenActivated;                              //@synthesize shouldPersistWhenActivated=_shouldPersistWhenActivated - In the implementation block
@property (assign) BOOL shouldPersistWhenDismissed;                              //@synthesize shouldPersistWhenDismissed=_shouldPersistWhenDismissed - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(NSString *)groupIdentifier;
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)targetBundleIdentifier;
-(NSData *)_userInfoData;
-(NSString *)clientIdentifier;
-(NSArray *)actions;
-(void)setActions:(NSArray *)arg1 ;
-(NSString *)extensionIdentifier;
-(void)setCategoryIdentifier:(NSString *)arg1 ;
-(NSString *)categoryIdentifier;
-(FLFollowUpNotification *)notification;
-(void)setNotification:(FLFollowUpNotification *)arg1 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(void)setDisplayStyle:(unsigned long long)arg1 ;
-(unsigned long long)displayStyle;
-(void)setExtensionIdentifier:(NSString *)arg1 ;
-(void)setInformativeText:(NSString *)arg1 ;
-(void)setRepresentingBundlePath:(NSString *)arg1 ;
-(void)setBundleIconName:(NSString *)arg1 ;
-(NSString *)representingBundlePath;
-(NSString *)bundleIconName;
-(NSString *)informativeText;
-(id)initWithoutDefaults;
-(void)setTargetBundleIdentifier:(NSString *)arg1 ;
-(void)setShowInSettings:(BOOL)arg1 ;
-(void)set_userInfoData:(NSData *)arg1 ;
-(BOOL)showInSettings;
-(NSString *)informativeFooterText;
-(void)setInformativeFooterText:(NSString *)arg1 ;
-(BOOL)shouldPersistWhenActivated;
-(void)setShouldPersistWhenActivated:(BOOL)arg1 ;
-(BOOL)shouldPersistWhenDismissed;
-(void)setShouldPersistWhenDismissed:(BOOL)arg1 ;
-(unsigned long long)sqlID;
-(void)setSqlID:(unsigned long long)arg1 ;
-(NSString *)delegateMachServiceName;
-(void)setDelegateMachServiceName:(NSString *)arg1 ;
-(BOOL)isHSA2LoginItem;
-(BOOL)isHSA2PasswordResetItem;
@end
