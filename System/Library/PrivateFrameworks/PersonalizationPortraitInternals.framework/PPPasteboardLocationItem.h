/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:29 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSDictionary;

@interface PPPasteboardLocationItem : NSObject {

	NSString* _text;
	NSString* _bundleIdentifier;
	NSDate* _createdAt;
	NSDictionary* _addressComponents;

}

@property (nonatomic,copy) NSString * text;                               //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                   //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSDate * createdAt;                            //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,copy) NSDictionary * addressComponents;              //@synthesize addressComponents=_addressComponents - In the implementation block
-(NSString *)bundleIdentifier;
-(NSDictionary *)addressComponents;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSDate *)createdAt;
-(void)setCreatedAt:(NSDate *)arg1 ;
-(void)setAddressComponents:(NSDictionary *)arg1 ;
@end

