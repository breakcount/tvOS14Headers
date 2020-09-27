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

@class NSData;

@interface CLLocationMatchInfo : NSObject <NSCopying, NSSecureCoding> {

	id _internal;

}

@property (nonatomic,readonly) long long matchQuality; 
@property (nonatomic,readonly) CLLocationCoordinate2D matchCoordinate; 
@property (nonatomic,readonly) double matchCourse; 
@property (nonatomic,readonly) int matchFormOfWay; 
@property (nonatomic,readonly) int matchRoadClass; 
@property (getter=isMatchShifted,nonatomic,readonly) BOOL matchShifted; 
@property (nonatomic,copy,readonly) NSData * matchDataArray; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)shortDescription;
-(long long)matchQuality;
-(id)initWithMatchQuality:(long long)arg1 matchCoordinate:(CLLocationCoordinate2D)arg2 matchCourse:(double)arg3 matchFormOfWay:(int)arg4 matchRoadClass:(int)arg5 matchShifted:(BOOL)arg6 matchDataArray:(id)arg7 ;
-(id)initWithMatchQuality:(long long)arg1 matchCoordinate:(CLLocationCoordinate2D)arg2 matchCourse:(double)arg3 matchFormOfWay:(int)arg4 matchRoadClass:(int)arg5 matchShifted:(BOOL)arg6 ;
-(CLLocationCoordinate2D)matchCoordinate;
-(double)matchCourse;
-(int)matchFormOfWay;
-(int)matchRoadClass;
-(BOOL)isMatchShifted;
-(NSData *)matchDataArray;
@end

