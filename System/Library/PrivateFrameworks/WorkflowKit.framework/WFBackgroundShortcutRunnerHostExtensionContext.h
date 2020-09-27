/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/WFOutOfProcessWorkflowControllerHost.h>

@protocol WFOutOfProcessWorkflowControllerHost;
@class NSString;

@interface WFBackgroundShortcutRunnerHostExtensionContext : NSExtensionContext <WFOutOfProcessWorkflowControllerHost> {

	id<WFOutOfProcessWorkflowControllerHost> _delegate;

}

@property (assign,nonatomic,__weak) id<WFOutOfProcessWorkflowControllerHost> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id<WFOutOfProcessWorkflowControllerHost>)delegate;
-(void)setDelegate:(id<WFOutOfProcessWorkflowControllerHost>)arg1 ;
-(void)workflowDidStartFromWorkflowReference:(id)arg1 attribution:(id)arg2 ;
-(void)workflowDidFinishRunningWithError:(id)arg1 cancelled:(BOOL)arg2 reference:(id)arg3 ;
@end

