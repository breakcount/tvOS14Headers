/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMDAutoReplying <NSObject>
@property (assign,nonatomic,__weak) id<IMDAutoReplyDelegate> replyDelegate; 
@required
-(void)setReplyDelegate:(id)arg1;
-(void)processMessages:(id)arg1 inChat:(id)arg2;
-(id<IMDAutoReplyDelegate>)replyDelegate;

@end

