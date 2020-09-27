/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSURLBag.h>

@class ISURLBag, NSMutableArray, ISLoadURLBagOperation;

@interface ISSSURLBag : SSURLBag {

	ISURLBag* _bag;
	NSMutableArray* _completionBlocks;
	BOOL _forceInvalidationForNextLoad;
	ISLoadURLBagOperation* _operation;

}
+(id)URLBagForContext:(id)arg1 ;
-(void)invalidate;
-(void)loadWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)storeFrontIdentifier;
-(void)loadValueForKey:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)valueForKey:(id)arg1 error:(id*)arg2 ;
-(void)getTrustForURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)existingBagDictionary;
-(void)_enqueueOperationWithContext:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_finishOperationWithURLBag:(id)arg1 error:(id)arg2 ;
@end
