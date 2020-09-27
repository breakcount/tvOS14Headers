/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface CTSignalStrengthInfo : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _bars;
	NSNumber* _displayBars;
	NSNumber* _maxDisplayBars;

}

@property (nonatomic,retain) NSNumber * bars;                        //@synthesize bars=_bars - In the implementation block
@property (nonatomic,retain) NSNumber * displayBars;                 //@synthesize displayBars=_displayBars - In the implementation block
@property (nonatomic,retain) NSNumber * maxDisplayBars;              //@synthesize maxDisplayBars=_maxDisplayBars - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)bars;
-(NSNumber *)displayBars;
-(NSNumber *)maxDisplayBars;
-(void)setBars:(NSNumber *)arg1 ;
-(void)setDisplayBars:(NSNumber *)arg1 ;
-(void)setMaxDisplayBars:(NSNumber *)arg1 ;
@end

