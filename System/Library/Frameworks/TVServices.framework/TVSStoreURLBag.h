/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVSBackgroundTask, ISOperation, ISURLBag;

@interface TVSStoreURLBag : NSObject {

	TVSBackgroundTask* _bagReloadTask;
	ISOperation* _pendingOperation;
	BOOL _isValid;
	ISURLBag* _fallbackBag;
	unsigned long long _loadBagRetryAttempt;

}

@property (retain) ISURLBag * fallbackBag;                              //@synthesize fallbackBag=_fallbackBag - In the implementation block
@property (nonatomic,readonly) ISURLBag * bag; 
@property (assign) unsigned long long loadBagRetryAttempt;              //@synthesize loadBagRetryAttempt=_loadBagRetryAttempt - In the implementation block
@property (nonatomic,readonly) BOOL isValid;                            //@synthesize isValid=_isValid - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(BOOL)isValid;
-(id)valueForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(id)_userIdentifier;
-(void)reload;
-(ISURLBag *)bag;
-(id)_bagContext;
-(id)initInstance;
-(void)_internetStateChanged:(id)arg1 ;
-(void)_storeFrontChanged:(id)arg1 ;
-(void)_loadBagCancelPreviousRequests:(BOOL)arg1 ;
-(ISURLBag *)fallbackBag;
-(void)_updateReloadTask;
-(void)setFallbackBag:(ISURLBag *)arg1 ;
-(void)setLoadBagRetryAttempt:(unsigned long long)arg1 ;
-(unsigned long long)loadBagRetryAttempt;
-(void)_loadBag;
-(void)_retry:(unsigned long long)arg1 withSelector:(SEL)arg2 ;
-(void)_handleAccountActivity:(id)arg1 ;
-(double)_bagReloadInterval;
-(void)_updateReloadTaskWithInterval:(double)arg1 ;
@end

