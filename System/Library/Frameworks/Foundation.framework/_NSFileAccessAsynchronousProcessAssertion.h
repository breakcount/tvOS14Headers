/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, BKSProcessAssertion;

@interface _NSFileAccessAsynchronousProcessAssertion : NSObject {

	int _pid;
	NSString* _name;
	BKSProcessAssertion* _assertion;

}

@property (readonly) int PID;              //@synthesize pid=_pid - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(id)initWithPID:(int)arg1 name:(id)arg2 ;
-(void)beginAssertion;
-(int)PID;
@end
