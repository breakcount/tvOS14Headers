/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDictionary, NSError;

@interface W5DiagnosticsTestResult : NSObject <NSCopying, NSSecureCoding> {

	BOOL _result;
	BOOL _didPass;
	NSUUID* _uuid;
	long long _testID;
	NSDictionary* _configuration;
	NSDictionary* _info;
	NSError* _error;
	double _testStarted;
	double _testCompleted;

}

@property (nonatomic,copy) NSUUID * uuid;                             //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) long long testID;                        //@synthesize testID=_testID - In the implementation block
@property (assign,nonatomic) BOOL result;                             //@synthesize result=_result - In the implementation block
@property (assign,nonatomic) BOOL didPass;                            //@synthesize didPass=_didPass - In the implementation block
@property (nonatomic,copy) NSDictionary * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) NSDictionary * info;                       //@synthesize info=_info - In the implementation block
@property (nonatomic,copy) NSError * error;                           //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) double testStarted;                      //@synthesize testStarted=_testStarted - In the implementation block
@property (assign,nonatomic) double testCompleted;                    //@synthesize testCompleted=_testCompleted - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSDictionary *)configuration;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(BOOL)result;
-(NSUUID *)uuid;
-(NSDictionary *)info;
-(void)setResult:(BOOL)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setInfo:(NSDictionary *)arg1 ;
-(void)setTestID:(long long)arg1 ;
-(long long)testID;
-(double)testStarted;
-(double)testCompleted;
-(BOOL)didPass;
-(BOOL)isEqualToDiagnosticsTestResult:(id)arg1 ;
-(void)setDidPass:(BOOL)arg1 ;
-(void)setTestStarted:(double)arg1 ;
-(void)setTestCompleted:(double)arg1 ;
@end

