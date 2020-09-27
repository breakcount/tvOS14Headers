/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreBookkeeper/SBKStoreURLBagContext.h>

@class NSString, NSURL;

@interface SBKMutableStoreURLBagContext : SBKStoreURLBagContext

@property (copy) NSString * domain; 
@property (retain) NSURL * syncRequestURL; 
@property (retain) NSURL * pushKeyValueRequestURL; 
@property (retain) NSURL * pullKeyValueRequestURL; 
@property (retain) NSURL * pushAllKeyValueRequestURL; 
@property (retain) NSURL * pullAllKeyValueRequestURL; 
@property (assign) BOOL domainDisabled; 
@property (assign) double pollingIntervalInSeconds; 
@end

