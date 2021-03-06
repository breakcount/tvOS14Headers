/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSLocking.h>

@class NSString;

@interface PCDistributedLock : NSObject <NSLocking> {

	NSString* _path;
	int _fd;

}
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(id)initWithName:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(BOOL)tryLock;
-(BOOL)_lockBlocking:(BOOL)arg1 ;
@end

