/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFCreateFolderEvent : WFEvent {

	unsigned _icon;
	unsigned _shortcutCount;
	NSString* _folderSource;
	NSString* _key;

}

@property (nonatomic,copy) NSString * folderSource;               //@synthesize folderSource=_folderSource - In the implementation block
@property (assign,nonatomic) unsigned icon;                       //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSString * key;                        //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) unsigned shortcutCount;              //@synthesize shortcutCount=_shortcutCount - In the implementation block
+(Class)codableEventClass;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(unsigned)icon;
-(void)setIcon:(unsigned)arg1 ;
-(void)setShortcutCount:(unsigned)arg1 ;
-(unsigned)shortcutCount;
-(NSString *)folderSource;
-(void)setFolderSource:(NSString *)arg1 ;
@end

