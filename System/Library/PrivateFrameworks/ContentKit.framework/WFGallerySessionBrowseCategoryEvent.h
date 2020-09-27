/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFGallerySessionBrowseCategoryEvent : WFEvent {

	NSString* _key;
	NSString* _sessionIdentifier;
	NSString* _galleryCategoryIdentifier;

}

@property (nonatomic,copy) NSString * key;                                    //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * sessionIdentifier;                      //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * galleryCategoryIdentifier;              //@synthesize galleryCategoryIdentifier=_galleryCategoryIdentifier - In the implementation block
+(Class)codableEventClass;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)sessionIdentifier;
-(void)setSessionIdentifier:(NSString *)arg1 ;
-(NSString *)galleryCategoryIdentifier;
-(void)setGalleryCategoryIdentifier:(NSString *)arg1 ;
@end

