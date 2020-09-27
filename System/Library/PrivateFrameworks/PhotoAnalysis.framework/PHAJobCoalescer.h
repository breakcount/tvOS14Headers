/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PHAJobCoalescerDelegate;
@interface PHAJobCoalescer : NSObject {

	id<PHAJobCoalescerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PHAJobCoalescerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<PHAJobCoalescerDelegate>)delegate;
-(void)setDelegate:(id<PHAJobCoalescerDelegate>)arg1 ;
-(void)addJob:(id)arg1 ;
@end

