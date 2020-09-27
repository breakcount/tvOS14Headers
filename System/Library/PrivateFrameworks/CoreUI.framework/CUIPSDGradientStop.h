/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CUIPSDGradientStop : NSObject <NSCoding, NSCopying> {

	double location;

}
+(void)initialize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)location;
-(void)setLocation:(double)arg1 ;
-(id)initWithLocation:(double)arg1 ;
-(BOOL)isColorStop;
-(BOOL)isOpacityStop;
-(BOOL)isDoubleStop;
@end

