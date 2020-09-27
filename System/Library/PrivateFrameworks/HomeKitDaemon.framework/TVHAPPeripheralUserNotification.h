/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface TVHAPPeripheralUserNotification : NSObject <HMFLogging> {

	long long _type;
	NSString* _bulletinImageType;
	NSString* _title;
	NSString* _subtitle;
	long long _timeout;

}

@property (assign,nonatomic) long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * bulletinImageType;              //@synthesize bulletinImageType=_bulletinImageType - In the implementation block
@property (nonatomic,copy) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                       //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) long long timeout;                       //@synthesize timeout=_timeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)setTimeout:(long long)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)timeout;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)_updateHUD;
-(void)setBulletinImageType:(NSString *)arg1 ;
-(id)initWithHUDType:(long long)arg1 ;
-(NSString *)bulletinImageType;
@end

