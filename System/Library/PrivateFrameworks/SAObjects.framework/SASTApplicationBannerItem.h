/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTActionableTemplateItem.h>

@class NSString;

@interface SASTApplicationBannerItem : AceObject <SASTActionableTemplateItem>

@property (nonatomic,retain) id<SASTTemplateAction> action; 
@property (nonatomic,copy) NSString * bundleId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)applicationBannerItem;
+(id)applicationBannerItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setBundleId:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)bundleId;
-(id<SASTTemplateAction>)action;
-(void)setAction:(id<SASTTemplateAction>)arg1 ;
-(id)encodedClassName;
@end

