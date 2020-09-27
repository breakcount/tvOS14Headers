/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSDictionary;

@interface PKMapsTransitMessage : NSObject <NSCopying, NSSecureCoding> {

	NSString* _localizedMessage;
	NSString* _localizedActionTitle;
	NSURL* _actionURL;
	long long _iconType;
	NSDictionary* _userInfo;
	NSString* _identifier;
	long long _maxNotificationCount;

}

@property (assign,nonatomic) long long maxNotificationCount;                 //@synthesize maxNotificationCount=_maxNotificationCount - In the implementation block
@property (nonatomic,readonly) NSString * localizedMessage;                  //@synthesize localizedMessage=_localizedMessage - In the implementation block
@property (nonatomic,readonly) NSString * localizedActionTitle;              //@synthesize localizedActionTitle=_localizedActionTitle - In the implementation block
@property (nonatomic,readonly) NSURL * actionURL;                            //@synthesize actionURL=_actionURL - In the implementation block
@property (nonatomic,readonly) long long iconType;                           //@synthesize iconType=_iconType - In the implementation block
@property (nonatomic,readonly) NSDictionary * userInfo;                      //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(long long)iconType;
-(NSString *)localizedMessage;
-(NSURL *)actionURL;
-(NSString *)localizedActionTitle;
-(long long)maxNotificationCount;
-(void)setMaxNotificationCount:(long long)arg1 ;
-(id)initWithIdentifier:(id)arg1 message:(id)arg2 actionTitle:(id)arg3 actionURL:(id)arg4 iconType:(long long)arg5 userInfo:(id)arg6 ;
@end

