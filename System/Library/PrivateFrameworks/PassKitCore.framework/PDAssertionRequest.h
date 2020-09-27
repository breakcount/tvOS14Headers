/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class PDAssertion, NSObject;

@interface PDAssertionRequest : NSObject {

	PDAssertion* _assertion;
	/*^block*/id _resultHandler;
	NSObject*<OS_dispatch_source> _invalidationTimer;

}

@property (nonatomic,retain) PDAssertion * assertion;                                      //@synthesize assertion=_assertion - In the implementation block
@property (nonatomic,copy) id resultHandler;                                               //@synthesize resultHandler=_resultHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> invalidationTimer;              //@synthesize invalidationTimer=_invalidationTimer - In the implementation block
-(unsigned long long)hash;
-(PDAssertion *)assertion;
-(id)resultHandler;
-(void)setResultHandler:(id)arg1 ;
-(void)setAssertion:(PDAssertion *)arg1 ;
-(id)initWithAssertion:(id)arg1 delegate:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_source>)invalidationTimer;
-(void)setInvalidationTimer:(NSObject*<OS_dispatch_source>)arg1 ;
@end

