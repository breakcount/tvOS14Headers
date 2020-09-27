/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SACFPEXItem.h>

@class NSArray, NSString, NSDate;

@interface SACFPEXQuickTypeItem : SACFPEXItem

@property (nonatomic,copy) NSArray * fields; 
@property (nonatomic,copy) NSArray * itemFlags; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * originatingBundleId; 
@property (nonatomic,copy) NSString * originatingWebsiteURL; 
@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSString * value; 
+(id)quickTypeItem;
+(id)quickTypeItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSArray *)fields;
-(id)groupIdentifier;
-(NSDate *)startDate;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSString *)originatingBundleId;
-(id)encodedClassName;
-(void)setFields:(NSArray *)arg1 ;
-(NSArray *)itemFlags;
-(void)setItemFlags:(NSArray *)arg1 ;
-(void)setOriginatingBundleId:(NSString *)arg1 ;
-(NSString *)originatingWebsiteURL;
-(void)setOriginatingWebsiteURL:(NSString *)arg1 ;
@end

