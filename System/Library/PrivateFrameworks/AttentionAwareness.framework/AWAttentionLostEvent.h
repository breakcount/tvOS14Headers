/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AttentionAwareness/AWAttentionEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AWAttentionLostEvent : AWAttentionEvent <NSSecureCoding> {

	double _attentionLostTimeout;
	id _associatedObject;

}

@property (nonatomic,readonly) double attentionLostTimeout;              //@synthesize attentionLostTimeout=_attentionLostTimeout - In the implementation block
@property (nonatomic,readonly) id associatedObject;                      //@synthesize associatedObject=_associatedObject - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)validateMask;
-(void)updateWithConfig:(id)arg1 ;
-(id)initWithTimestamp:(double)arg1 tagIndex:(unsigned long long)arg2 attentionLostTimeout:(double)arg3 ;
-(double)attentionLostTimeout;
-(id)associatedObject;
@end

