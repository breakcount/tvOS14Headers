/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMSourceNode.h>

@interface AXMCoreMotionNode : AXMSourceNode {

	unsigned long long _samplesPerSecond;
	double _lastSampleTime;

}

@property (assign,nonatomic) double lastSampleTime;                            //@synthesize lastSampleTime=_lastSampleTime - In the implementation block
@property (assign,nonatomic) unsigned long long samplesPerSecond;              //@synthesize samplesPerSecond=_samplesPerSecond - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)title;
+(BOOL)isSupported;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)nodeInitialize;
-(unsigned long long)samplesPerSecond;
-(void)setSamplesPerSecond:(unsigned long long)arg1 ;
-(double)lastSampleTime;
-(void)setLastSampleTime:(double)arg1 ;
@end

