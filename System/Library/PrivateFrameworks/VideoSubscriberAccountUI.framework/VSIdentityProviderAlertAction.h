/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface VSIdentityProviderAlertAction : NSObject {

	NSString* _title;
	long long _style;
	/*^block*/id _callback;

}

@property (nonatomic,copy) NSString * title;               //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long style;              //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) id callback;                    //@synthesize callback=_callback - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
@end

