/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MAProgressNotification : NSObject {

	BOOL _isStalled;
	long long _totalExpected;
	long long _totalWritten;
	double _expectedTimeRemaining;

}

@property (assign,nonatomic) long long totalExpected;                   //@synthesize totalExpected=_totalExpected - In the implementation block
@property (assign,nonatomic) long long totalWritten;                    //@synthesize totalWritten=_totalWritten - In the implementation block
@property (assign,nonatomic) BOOL isStalled;                            //@synthesize isStalled=_isStalled - In the implementation block
@property (assign,nonatomic) double expectedTimeRemaining;              //@synthesize expectedTimeRemaining=_expectedTimeRemaining - In the implementation block
-(long long)totalExpected;
-(long long)totalWritten;
-(double)expectedTimeRemaining;
-(BOOL)isStalled;
-(void)setTotalWritten:(long long)arg1 ;
-(void)setTotalExpected:(long long)arg1 ;
-(void)setExpectedTimeRemaining:(double)arg1 ;
-(void)setIsStalled:(BOOL)arg1 ;
@end

