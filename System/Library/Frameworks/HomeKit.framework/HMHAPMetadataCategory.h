/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString;

@interface HMHAPMetadataCategory : NSObject {

	NSNumber* _categoryNumber;
	NSString* _categoryType;
	NSString* _categoryDescription;

}

@property (nonatomic,retain) NSNumber * categoryNumber;                   //@synthesize categoryNumber=_categoryNumber - In the implementation block
@property (nonatomic,retain) NSString * categoryType;                     //@synthesize categoryType=_categoryType - In the implementation block
@property (nonatomic,retain) NSString * categoryDescription;              //@synthesize categoryDescription=_categoryDescription - In the implementation block
-(NSString *)categoryType;
-(void)setCategoryType:(NSString *)arg1 ;
-(NSNumber *)categoryNumber;
-(void)setCategoryNumber:(NSNumber *)arg1 ;
-(NSString *)categoryDescription;
-(void)setCategoryDescription:(NSString *)arg1 ;
@end

