/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _CLLSLLocationCoordinate;

@interface _CLLSLLocation : NSObject <NSCopying, NSSecureCoding> {

	_CLLSLLocationCoordinate* _coordinate;
	double _altitude;
	double _timestamp;

}

@property (nonatomic,copy) _CLLSLLocationCoordinate * coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) double altitude;                                  //@synthesize altitude=_altitude - In the implementation block
@property (assign,nonatomic) double timestamp;                                 //@synthesize timestamp=_timestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(_CLLSLLocationCoordinate *)coordinate;
-(void)setTimestamp:(double)arg1 ;
-(void)setAltitude:(double)arg1 ;
-(double)altitude;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 ;
-(void)setCoordinate:(_CLLSLLocationCoordinate *)arg1 ;
-(id)initWithCoordinate:(id)arg1 ;
-(id)descriptionWithMemberIndent:(id)arg1 endIndent:(id)arg2 ;
-(id)initWithCoordinate:(id)arg1 altitude:(double)arg2 timetamp:(double)arg3 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 altitude:(double)arg3 timetamp:(double)arg4 ;
@end

