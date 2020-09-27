/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CHEncodedStrokeIdentifier;

@interface CHSubstroke : NSObject <NSSecureCoding> {

	vector<CGPoint, std::__1::allocator<CGPoint> >* _convexHull;
	CHEncodedStrokeIdentifier* _strokeIdentifier;
	double _startTimestamp;
	double _endTimestamp;
	double _curvature;
	CGRect _bounds;

}

@property (nonatomic,retain,readonly) CHEncodedStrokeIdentifier * strokeIdentifier;              //@synthesize strokeIdentifier=_strokeIdentifier - In the implementation block
@property (nonatomic,readonly) CGRect bounds;                                                    //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) double startTimestamp;                                            //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (nonatomic,readonly) double endTimestamp;                                              //@synthesize endTimestamp=_endTimestamp - In the implementation block
@property (nonatomic,readonly) double curvature;                                                 //@synthesize curvature=_curvature - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)substrokesForStroke:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)bounds;
-(double)startTimestamp;
-(double)endTimestamp;
-(vector<CGPoint, std::__1::allocator<CGPoint> >*)convexHull;
-(CHEncodedStrokeIdentifier *)strokeIdentifier;
-(id)initWithStrokeIdentifier:(id)arg1 bounds:(CGRect)arg2 startTimestamp:(double)arg3 endTimestamp:(double)arg4 convexHull:(const vector<CGPoint, std::__1::allocator<CGPoint> >*)arg5 curvature:(double)arg6 ;
-(double)curvature;
-(BOOL)isEqualToSubstroke:(id)arg1 ;
@end

