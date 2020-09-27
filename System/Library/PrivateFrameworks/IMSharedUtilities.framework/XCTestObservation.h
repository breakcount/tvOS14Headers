/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol XCTestObservation <NSObject>
@optional
-(void)testBundleWillStart:(id)arg1;
-(void)testBundleDidFinish:(id)arg1;
-(void)testSuiteWillStart:(id)arg1;
-(void)testSuite:(id)arg1 didRecordIssue:(id)arg2;
-(void)testSuiteDidFinish:(id)arg1;
-(void)testCaseWillStart:(id)arg1;
-(void)testCase:(id)arg1 didRecordIssue:(id)arg2;
-(void)testCaseDidFinish:(id)arg1;
-(void)testSuite:(id)arg1 didFailWithDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;
-(void)testCase:(id)arg1 didFailWithDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;

@end

