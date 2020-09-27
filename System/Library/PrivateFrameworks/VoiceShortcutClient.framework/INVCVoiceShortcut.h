/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, INShortcut;


@protocol INVCVoiceShortcut <NSObject>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * phrase; 
@property (nonatomic,readonly) INShortcut * shortcut; 
@required
-(NSString *)identifier;
-(NSString *)phrase;
-(INShortcut *)shortcut;

@end

