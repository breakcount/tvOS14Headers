/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFRemoteExecutionSession.h>

@protocol WFUserInterfaceHost, WFActionParameterInputProvider;
@class WFRemoteExecutionCoordinator, WFRemoteExecutionFileCoordinator, WFRemoteExecutionRunRequest;

@interface WFRemoteExecutionOutgoingRunRequestSession : WFRemoteExecutionSession {

	id<WFUserInterfaceHost> _userInterface;
	id<WFActionParameterInputProvider> _parameterInputProvider;
	WFRemoteExecutionCoordinator* _coordinator;
	/*^block*/id _completion;
	WFRemoteExecutionFileCoordinator* _fileCoordinator;

}

@property (nonatomic,retain) WFRemoteExecutionRunRequest * request; 
@property (nonatomic,retain) WFRemoteExecutionFileCoordinator * fileCoordinator;                       //@synthesize fileCoordinator=_fileCoordinator - In the implementation block
@property (nonatomic,copy) id completion;                                                              //@synthesize completion=_completion - In the implementation block
@property (nonatomic,readonly) id<WFUserInterfaceHost> userInterface;                                  //@synthesize userInterface=_userInterface - In the implementation block
@property (nonatomic,readonly) id<WFActionParameterInputProvider> parameterInputProvider;              //@synthesize parameterInputProvider=_parameterInputProvider - In the implementation block
@property (nonatomic,__weak,readonly) WFRemoteExecutionCoordinator * coordinator;                      //@synthesize coordinator=_coordinator - In the implementation block
-(id)completion;
-(void)finish;
-(void)setCompletion:(id)arg1 ;
-(WFRemoteExecutionCoordinator *)coordinator;
-(void)finishWithError:(id)arg1 ;
-(WFRemoteExecutionFileCoordinator *)fileCoordinator;
-(void)setFileCoordinator:(WFRemoteExecutionFileCoordinator *)arg1 ;
-(id<WFUserInterfaceHost>)userInterface;
-(id<WFActionParameterInputProvider>)parameterInputProvider;
-(void)sendToDestinations:(id)arg1 options:(id)arg2 ;
-(void)handleIncomingProtobuf:(id)arg1 ;
-(void)handleTimeout;
-(double)timeoutLimitInSeconds;
-(id)initWithService:(id)arg1 request:(id)arg2 userInterface:(id)arg3 parameterInputProvider:(id)arg4 coordinator:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)handleIncomingFileForRemoteExecutionWithURL:(id)arg1 withIdentifier:(id)arg2 metadata:(id)arg3 ;
@end

