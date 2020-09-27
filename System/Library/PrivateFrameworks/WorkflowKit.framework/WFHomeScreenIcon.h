/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WFWorkflowIcon, NSData;

@interface WFHomeScreenIcon : NSObject {

	WFWorkflowIcon* _workflowIcon;
	NSData* _customImageData;

}

@property (nonatomic,readonly) WFWorkflowIcon * workflowIcon;              //@synthesize workflowIcon=_workflowIcon - In the implementation block
@property (nonatomic,readonly) NSData * customImageData;                   //@synthesize customImageData=_customImageData - In the implementation block
-(WFWorkflowIcon *)workflowIcon;
-(id)initWithWorkflowIcon:(id)arg1 customImageData:(id)arg2 ;
-(NSData *)customImageData;
@end

