/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CTDataSettings : NSObject <NSCopying, NSSecureCoding> {

	BOOL _cellularDataEnabled;
	BOOL _airplaneModeEnabled;
	BOOL _cellularDataCapable;

}

@property (assign,getter=isCellularDataEnabled,nonatomic) BOOL cellularDataEnabled;              //@synthesize cellularDataEnabled=_cellularDataEnabled - In the implementation block
@property (assign,getter=isAirplaneModeEnabled,nonatomic) BOOL airplaneModeEnabled;              //@synthesize airplaneModeEnabled=_airplaneModeEnabled - In the implementation block
@property (assign,getter=isCellularDataCapable,nonatomic) BOOL cellularDataCapable;              //@synthesize cellularDataCapable=_cellularDataCapable - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isCellularDataEnabled;
-(BOOL)isAirplaneModeEnabled;
-(BOOL)isCellularDataCapable;
-(void)setCellularDataEnabled:(BOOL)arg1 ;
-(void)setAirplaneModeEnabled:(BOOL)arg1 ;
-(void)setCellularDataCapable:(BOOL)arg1 ;
@end

