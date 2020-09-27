/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PCSMTT, NSDate;

@interface PCSMTTPoint : NSObject <NSSecureCoding> {

	BOOL _success;
	NSString* _name;
	double _time;
	PCSMTT* _mtt;
	NSDate* _start;

}

@property (__weak) PCSMTT * mtt;                 //@synthesize mtt=_mtt - In the implementation block
@property (retain) NSDate * start;               //@synthesize start=_start - In the implementation block
@property (retain) NSString * name;              //@synthesize name=_name - In the implementation block
@property (readonly) double time;                //@synthesize time=_time - In the implementation block
@property (readonly) BOOL success;               //@synthesize success=_success - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSDate *)start;
-(double)time;
-(BOOL)success;
-(void)setStart:(NSDate *)arg1 ;
-(void)complete:(BOOL)arg1 ;
-(PCSMTT *)mtt;
-(void)complete:(BOOL)arg1 time:(double)arg2 ;
-(id)initWithMTT:(id)arg1 name:(id)arg2 ;
-(id)jsonDict;
-(void)setMtt:(PCSMTT *)arg1 ;
@end
