/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AirPlayRoutePrediction.framework/AirPlayRoutePrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPlayRoutePrediction/AirPlayRoutePrediction-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface ARPRoutingSessionArchive : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _sessions;
	double _routingSessionTimeout;

}

@property (nonatomic,readonly) NSArray * sessions;                        //@synthesize sessions=_sessions - In the implementation block
@property (nonatomic,readonly) double routingSessionTimeout;              //@synthesize routingSessionTimeout=_routingSessionTimeout - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)sessions;
-(id)initWithSessions:(id)arg1 routingSessionTimeout:(double)arg2 ;
-(double)routingSessionTimeout;
@end
