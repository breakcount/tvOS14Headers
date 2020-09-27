/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOMapRequestManager;

@interface GEOMapRequest : NSObject {

	GEOMapRequestManager* _requestManager;
	/*^block*/id _completionHandler;
	/*^block*/id _cancellationHandler;
	BOOL _isFinished;

}

@property (nonatomic,copy) id completionHandler;                //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id cancellationHandler;              //@synthesize cancellationHandler=_cancellationHandler - In the implementation block
@property (nonatomic,readonly) BOOL isFinished;                 //@synthesize isFinished=_isFinished - In the implementation block
-(void)dealloc;
-(void)cancel;
-(void)setCancellationHandler:(id)arg1 ;
-(BOOL)isFinished;
-(id)initWithManager:(id)arg1 ;
-(id)cancellationHandler;
-(void)complete;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)_finishAndCallHandler:(/*^block*/id)arg1 ;
@end

