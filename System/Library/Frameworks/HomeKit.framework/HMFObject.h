/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol HMFObject <NSObject>
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@optional
-(NSString *)propertyDescription;
-(NSArray *)attributeDescriptions;

@required
+(NSString *)shortDescription;
-(NSString *)shortDescription;
-(NSString *)privateDescription;

@end

