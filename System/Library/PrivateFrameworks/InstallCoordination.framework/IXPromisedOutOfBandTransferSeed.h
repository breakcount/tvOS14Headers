/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InstallCoordination/InstallCoordination-Structs.h>
#import <InstallCoordination/IXOpaqueDataPromiseSeed.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface IXPromisedOutOfBandTransferSeed : IXOpaqueDataPromiseSeed <NSSecureCoding, NSCopying>
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)clientPromiseClass;
@end

