/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UITextInputSessionAction.h>

@interface _UITextInputSessionDeletionAction : _UITextInputSessionAction {

	unsigned long long _deletionCount;

}

@property (assign,nonatomic) unsigned long long deletionCount;              //@synthesize deletionCount=_deletionCount - In the implementation block
-(void)setDeletionCount:(unsigned long long)arg1 ;
-(unsigned long long)deletionCount;
-(BOOL)changedContent;
-(long long)mergeActionIfPossible:(id)arg1 ;
@end
