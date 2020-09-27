/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WFCloudKitTask : NSObject {

	BOOL _cancelled;
	/*^block*/id _cancellationHandler;

}

@property (getter=isCancelled) BOOL cancelled;                  //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,copy) id cancellationHandler;              //@synthesize cancellationHandler=_cancellationHandler - In the implementation block
-(void)cancel;
-(void)setCancellationHandler:(id)arg1 ;
-(BOOL)isCancelled;
-(id)cancellationHandler;
-(void)setCancelled:(BOOL)arg1 ;
@end

