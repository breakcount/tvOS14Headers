/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>

@class SSSoftwareUpdatesContext;

@interface SSSoftwareUpdatesRequest : SSRequest {

	SSSoftwareUpdatesContext* _context;

}

@property (assign,nonatomic) id<SSSoftwareUpdatesRequestDelegate> delegate; 
@property (readonly) SSSoftwareUpdatesContext * updateQueueContext; 
-(void)dealloc;
-(BOOL)start;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)startWithUpdatesResponseBlock:(/*^block*/id)arg1 ;
-(id)initWithUpdateQueueContext:(id)arg1 ;
-(SSSoftwareUpdatesContext *)updateQueueContext;
@end
