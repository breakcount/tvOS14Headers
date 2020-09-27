/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/OSLog.framework/OSLog
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@protocol OS_dispatch_semaphore;
@class OSLogEventStream, OSLogEntry, NSObject;

@interface OSLogEnumerator : NSEnumerator {

	OSLogEventStream* _stream;
	OSLogEntry* _next;
	BOOL _done;
	NSObject*<OS_dispatch_semaphore> _pushDone;
	NSObject*<OS_dispatch_semaphore> _handlerDone;

}
-(void)dealloc;
-(id)nextObject;
-(void)_handleInvalidation;
-(id)initWithEventStream:(id)arg1 options:(unsigned long long)arg2 position:(id)arg3 ;
-(void)_handleEventProxy:(id)arg1 ;
@end

