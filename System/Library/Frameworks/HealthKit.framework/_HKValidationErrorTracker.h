/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableString;

@interface _HKValidationErrorTracker : NSObject {

	long long _errorCount;
	NSMutableString* _errorMessage;

}

@property (assign,nonatomic) long long errorCount;                        //@synthesize errorCount=_errorCount - In the implementation block
@property (nonatomic,retain) NSMutableString * errorMessage;              //@synthesize errorMessage=_errorMessage - In the implementation block
-(id)init;
-(NSMutableString *)errorMessage;
-(void)setErrorCount:(long long)arg1 ;
-(long long)errorCount;
-(void)setErrorMessage:(NSMutableString *)arg1 ;
@end

