/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:13 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface TVCKUIFactory : NSObject {

	NSArray* _factories;

}

@property (nonatomic,copy) NSArray * factories;              //@synthesize factories=_factories - In the implementation block
+(id)sharedInstance;
-(void)setup;
-(void)_registerViewElements;
-(void)setFactories:(NSArray *)arg1 ;
-(NSArray *)factories;
@end

