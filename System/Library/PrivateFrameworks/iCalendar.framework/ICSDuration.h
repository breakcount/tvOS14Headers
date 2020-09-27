/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ICSDuration : NSObject <NSSecureCoding> {

	double _duration;

}
+(BOOL)supportsSecureCoding;
+(id)durationFromICSString:(id)arg1 ;
+(id)generateDurationFromICSString:(id)arg1 ;
+(id)durationFromRFC2445UTF8String:(const char*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timeInterval;
-(long long)seconds;
-(long long)hours;
-(long long)minutes;
-(long long)days;
-(BOOL)isNegative;
-(id)ICSStringWithOptions:(unsigned long long)arg1 ;
-(id)initWithWeeks:(long long)arg1 days:(long long)arg2 hours:(long long)arg3 minutes:(long long)arg4 seconds:(long long)arg5 ;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(long long)weeks;
@end
