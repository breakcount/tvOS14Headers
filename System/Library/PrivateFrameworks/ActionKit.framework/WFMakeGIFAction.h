/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAction.h>

@interface WFMakeGIFAction : WFAction {

	/*^block*/id _cancelBlock;

}

@property (nonatomic,copy) id cancelBlock;              //@synthesize cancelBlock=_cancelBlock - In the implementation block
+(BOOL)outputIsExemptFromTaintTrackingInheritance;
-(void)cancel;
-(void)setCancelBlock:(id)arg1 ;
-(id)cancelBlock;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
@end

