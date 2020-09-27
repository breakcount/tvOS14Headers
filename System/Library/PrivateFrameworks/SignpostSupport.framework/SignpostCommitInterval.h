/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SignpostSupport/SignpostAnimationSubInterval.h>

@class NSString;

@interface SignpostCommitInterval : SignpostAnimationSubInterval {

	unsigned _transactionSeed;
	int _pid;
	unsigned long long _threadID;
	NSString* _processName;
	NSString* _executablePath;

}

@property (nonatomic,readonly) unsigned transactionSeed;                 //@synthesize transactionSeed=_transactionSeed - In the implementation block
@property (nonatomic,readonly) unsigned long long threadID;              //@synthesize threadID=_threadID - In the implementation block
@property (nonatomic,readonly) int pid;                                  //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) NSString * processName;                   //@synthesize processName=_processName - In the implementation block
@property (nonatomic,readonly) NSString * executablePath;                //@synthesize executablePath=_executablePath - In the implementation block
-(NSString *)executablePath;
-(NSString *)processName;
-(int)pid;
-(unsigned long long)threadID;
-(id)initWithCommitInterval:(id)arg1 ;
-(unsigned)transactionSeed;
@end

