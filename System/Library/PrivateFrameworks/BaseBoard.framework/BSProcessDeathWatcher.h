/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BSDispatchSource;

@interface BSProcessDeathWatcher : NSObject {

	BSDispatchSource* _source;
	/*^block*/id _deathHandler;

}
-(void)dealloc;
-(void)invalidate;
-(id)initWithPID:(int)arg1 queue:(id)arg2 deathHandler:(/*^block*/id)arg3 ;
@end

