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

@interface CTIMSRegistrationTransportInfo : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isRegistered;
	int _contextType;
	int _transportType;

}

@property (assign,nonatomic) BOOL isRegistered;              //@synthesize isRegistered=_isRegistered - In the implementation block
@property (assign,nonatomic) int contextType;                //@synthesize contextType=_contextType - In the implementation block
@property (assign,nonatomic) int transportType;              //@synthesize transportType=_transportType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)contextType;
-(void)setContextType:(int)arg1 ;
-(BOOL)isRegistered;
-(int)transportType;
-(void)setIsRegistered:(BOOL)arg1 ;
-(void)setTransportType:(int)arg1 ;
@end

