/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:43 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@interface BWObjectLifetimeTracker : NSObject {

	/*^block*/id _deallocHandler;

}
+(id)trackerWithDeallocHandler:(/*^block*/id)arg1 ;
+(void)trackAttachmentBearer:(void*)arg1 deallocHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)initWithDeallocHandler:(/*^block*/id)arg1 ;
@end

