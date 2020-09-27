/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class NSArray;

@interface SAMPPlaybackButton : SAAceView

@property (nonatomic,copy) NSArray * pauseCommands; 
@property (nonatomic,copy) NSArray * playCommands; 
+(id)playbackButton;
+(id)playbackButtonWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)pauseCommands;
-(void)setPauseCommands:(NSArray *)arg1 ;
-(NSArray *)playCommands;
-(void)setPlayCommands:(NSArray *)arg1 ;
@end

