/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AMSUIWebContainerViewController, AMSUIWebClientContext, NSString, NSLock, NSMutableSet;

@interface AMSUIWebFlowController : NSObject {

	AMSUIWebContainerViewController* _rootContainer;
	AMSUIWebClientContext* _context;
	NSString* _currentRefreshToken;
	NSLock* _timeoutLock;
	NSMutableSet* _timeouts;

}

@property (nonatomic,__weak,readonly) AMSUIWebContainerViewController * rootContainer;                 //@synthesize rootContainer=_rootContainer - In the implementation block
@property (nonatomic,__weak,readonly) AMSUIWebClientContext * context;                                 //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * currentRefreshToken;                                           //@synthesize currentRefreshToken=_currentRefreshToken - In the implementation block
@property (nonatomic,retain) NSLock * timeoutLock;                                                     //@synthesize timeoutLock=_timeoutLock - In the implementation block
@property (nonatomic,retain) NSMutableSet * timeouts;                                                  //@synthesize timeouts=_timeouts - In the implementation block
@property (nonatomic,__weak,readonly) AMSUIWebContainerViewController * currentContainer; 
-(AMSUIWebClientContext *)context;
-(AMSUIWebContainerViewController *)currentContainer;
-(id)refreshPageForContainer:(id)arg1 options:(id)arg2 ;
-(void)replaceWithPageModel:(id)arg1 forContainer:(id)arg2 options:(id)arg3 ;
-(void)pushWithOptions:(id)arg1 ;
-(void)presentWithOptions:(id)arg1 ;
-(void)dismissViewController;
-(void)popViewController;
-(AMSUIWebContainerViewController *)rootContainer;
-(void)_takeSnapshotFromContainer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_refreshPageWithForContainer:(id)arg1 options:(id)arg2 isRetry:(BOOL)arg3 ;
-(NSLock *)timeoutLock;
-(NSMutableSet *)timeouts;
-(void)setCurrentRefreshToken:(NSString *)arg1 ;
-(void)startTimeout:(double)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(NSString *)currentRefreshToken;
-(id)initWithRootContainer:(id)arg1 context:(id)arg2 ;
-(void)startTimeoutInterruption;
-(void)stopTimeoutInterruption;
-(void)setTimeoutLock:(NSLock *)arg1 ;
-(void)setTimeouts:(NSMutableSet *)arg1 ;
@end

