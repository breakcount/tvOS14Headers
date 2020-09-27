/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _TIPreferenceDomain : NSObject {

	BOOL _needsGetSync;
	BOOL _needsSetSync;
	NSString* _domain;
	NSString* _notification;
	double _lastSynchronizedTime;

}

@property (nonatomic,retain) NSString * domain;                        //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSString * notification;                  //@synthesize notification=_notification - In the implementation block
@property (assign,nonatomic) BOOL needsGetSync;                        //@synthesize needsGetSync=_needsGetSync - In the implementation block
@property (assign,nonatomic) BOOL needsSetSync;                        //@synthesize needsSetSync=_needsSetSync - In the implementation block
@property (assign,nonatomic) double lastSynchronizedTime;              //@synthesize lastSynchronizedTime=_lastSynchronizedTime - In the implementation block
+(id)domainWithName:(id)arg1 notification:(id)arg2 ;
-(NSString *)domain;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)notification;
-(void)setNotification:(NSString *)arg1 ;
-(BOOL)needsGetSync;
-(void)setNeedsGetSync:(BOOL)arg1 ;
-(BOOL)needsSetSync;
-(void)setNeedsSetSync:(BOOL)arg1 ;
-(double)lastSynchronizedTime;
-(void)setLastSynchronizedTime:(double)arg1 ;
@end

