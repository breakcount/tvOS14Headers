/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLQueueNode;

@interface NSURLQueue : NSObject {

	unsigned long long count;
	NSURLQueueNode* head;
	NSURLQueueNode* tail;
	id monitor;
	BOOL waitOnTake;
	BOOL _pad1;
	BOOL _pad2;
	BOOL _pad3;

}
+(id)newNode;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(BOOL)isEmpty;
-(void)clear;
-(void)put:(id)arg1 ;
-(id)take;
-(id)peek;
-(id)peekAt:(unsigned long long)arg1 ;
-(BOOL)remove:(id)arg1 ;
-(long long)indexOf:(id)arg1 ;
-(BOOL)waitOnTake;
-(void)setWaitOnTake:(BOOL)arg1 ;
@end

