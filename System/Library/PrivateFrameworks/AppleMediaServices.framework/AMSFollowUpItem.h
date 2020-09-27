/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class ACAccount, NSString, NSMutableDictionary, NSArray, AMSMetricsEvent, NSObject;

@interface AMSFollowUpItem : NSObject {

	ACAccount* _account;
	NSString* _identifier;
	NSMutableDictionary* _userInfo;
	BOOL _shouldPostNotification;
	NSArray* _actions;
	long long _displayStyle;
	NSString* _footer;
	NSString* _informativeText;
	AMSMetricsEvent* _metricsEvent;
	NSString* _title;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _metricsQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> metricsQueue;               //@synthesize metricsQueue=_metricsQueue - In the implementation block
@property (nonatomic,retain) ACAccount * account;                                     //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSArray * actions;                                       //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) BOOL active; 
@property (nonatomic,readonly) NSString * backingIdentifier; 
@property (assign,nonatomic) long long displayStyle;                                  //@synthesize displayStyle=_displayStyle - In the implementation block
@property (nonatomic,retain) NSString * footer;                                       //@synthesize footer=_footer - In the implementation block
@property (nonatomic,readonly) NSString * groupIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * informativeText;                              //@synthesize informativeText=_informativeText - In the implementation block
@property (nonatomic,retain) NSString * logKey; 
@property (nonatomic,retain) AMSMetricsEvent * metricsEvent;                          //@synthesize metricsEvent=_metricsEvent - In the implementation block
@property (assign,nonatomic) long long priority; 
@property (assign,nonatomic) BOOL shouldPostNotification;                             //@synthesize shouldPostNotification=_shouldPostNotification - In the implementation block
@property (nonatomic,retain) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * userInfo;                          //@synthesize userInfo=_userInfo - In the implementation block
+(id)backingIdentifierForIdentifier:(id)arg1 account:(id)arg2 ;
+(id)componentsFromBackingIdentifier:(id)arg1 ;
-(NSMutableDictionary *)userInfo;
-(NSString *)identifier;
-(long long)priority;
-(void)setUserInfo:(NSMutableDictionary *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setPriority:(long long)arg1 ;
-(NSString *)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSArray *)actions;
-(void)setActions:(NSArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)active;
-(void)setDisplayStyle:(long long)arg1 ;
-(long long)displayStyle;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)setInformativeText:(NSString *)arg1 ;
-(NSString *)informativeText;
-(NSObject*<OS_dispatch_queue>)metricsQueue;
-(void)setMetricsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
-(NSString *)footer;
-(void)setFooter:(NSString *)arg1 ;
-(AMSMetricsEvent *)metricsEvent;
-(void)setMetricsEvent:(AMSMetricsEvent *)arg1 ;
-(id)initWithIdentifier:(id)arg1 account:(id)arg2 priority:(long long)arg3 ;
-(void)setShouldPostNotification:(BOOL)arg1 ;
-(NSString *)backingIdentifier;
-(id)initWithFollowUpItem:(id)arg1 ;
-(BOOL)shouldOverwriteItem:(id)arg1 ;
-(id)generateItem;
-(id)postMetricsWithBag:(id)arg1 ;
-(id)postMetricsWithBagContract:(id)arg1 ;
-(BOOL)shouldPostNotification;
@end

