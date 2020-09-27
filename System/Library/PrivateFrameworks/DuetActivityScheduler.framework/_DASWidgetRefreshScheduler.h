/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_os_log, _DKKnowledgeSaving, _CDLocalContext;
@class NSObject, _DASScheduler;

@interface _DASWidgetRefreshScheduler : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	_DASScheduler* _dasScheduler;
	NSObject*<OS_os_log> _log;
	id<_DKKnowledgeSaving> _store;
	id<_CDLocalContext> _context;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) _DASScheduler * dasScheduler;                    //@synthesize dasScheduler=_dasScheduler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                        //@synthesize log=_log - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeSaving> store;                    //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) id<_CDLocalContext> context;                     //@synthesize context=_context - In the implementation block
+(id)sharedScheduler;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<_CDLocalContext>)context;
-(void)setContext:(id<_CDLocalContext>)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)setStore:(id<_DKKnowledgeSaving>)arg1 ;
-(id<_DKKnowledgeSaving>)store;
-(void)cancelActivity:(id)arg1 ;
-(void)setBudget:(id)arg1 ;
-(_DASScheduler *)dasScheduler;
-(void)recordWidgetViews:(id)arg1 ;
-(void)recordWidgetRefreshes:(id)arg1 ;
-(void)setOverridesForWidgetIDs:(id)arg1 ;
-(id)submitRefreshForWidgetID:(id)arg1 containingAppID:(id)arg2 refreshAfter:(id)arg3 refreshBefore:(id)arg4 widgetInfo:(id)arg5 refreshHandler:(/*^block*/id)arg6 ;
-(id)createRefreshActivityForWidgetID:(id)arg1 containingAppID:(id)arg2 refreshAfter:(id)arg3 refreshBefore:(id)arg4 widgetInfo:(id)arg5 refreshHandler:(/*^block*/id)arg6 ;
-(void)submitRefreshActivity:(id)arg1 ;
-(void)setDasScheduler:(_DASScheduler *)arg1 ;
@end

