/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMRuntimeTestRun.h>

@class NSMutableArray, NSArray;

@interface IMRuntimeTestSuiteTestRun : IMRuntimeTestRun {

	NSMutableArray* _testRuns;
	NSArray* _testRun;

}

@property (copy,readonly) NSArray * testRuns;              //@synthesize testRun=_testRun - In the implementation block
-(id)init;
-(void)addTestRun:(id)arg1 ;
-(NSArray *)testRuns;
@end

