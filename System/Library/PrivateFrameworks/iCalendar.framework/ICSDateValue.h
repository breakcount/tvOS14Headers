/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ICSDateValue : NSObject <NSSecureCoding> {

	long long _year;
	long long _month;
	long long _day;

}

@property (readonly) long long year;               //@synthesize year=_year - In the implementation block
@property (readonly) long long month;              //@synthesize month=_month - In the implementation block
@property (readonly) long long day;                //@synthesize day=_day - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)dateFromICSString:(id)arg1 ;
+(id)dateFromICSUTF8String:(const char*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)year;
-(long long)month;
-(long long)day;
-(id)components;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(int)dateType;
-(id)icsString;
-(id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 ;
@end

