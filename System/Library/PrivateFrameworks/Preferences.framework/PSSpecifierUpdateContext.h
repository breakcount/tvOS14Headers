/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface PSSpecifierUpdateContext : NSObject <NSCopying> {

	BOOL _animated;
	BOOL _updateModelOnly;
	NSDictionary* _userInfo;

}

@property (assign,nonatomic) BOOL animated;                      //@synthesize animated=_animated - In the implementation block
@property (assign,nonatomic) BOOL updateModelOnly;               //@synthesize updateModelOnly=_updateModelOnly - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
+(id)context;
+(id)contextWithUserInfo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(BOOL)updateModelOnly;
-(BOOL)animated;
-(void)setAnimated:(BOOL)arg1 ;
-(void)setUpdateModelOnly:(BOOL)arg1 ;
@end

