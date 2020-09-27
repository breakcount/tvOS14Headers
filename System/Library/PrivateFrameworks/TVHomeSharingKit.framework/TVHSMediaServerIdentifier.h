/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:22 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TVHSMediaServerIdentifier : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _libraryIdentifier;
	unsigned long long _machineIdentifier;

}

@property (assign,nonatomic) unsigned long long libraryIdentifier;              //@synthesize libraryIdentifier=_libraryIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long machineIdentifier;              //@synthesize machineIdentifier=_machineIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)mediaServerIdentifierWithStringRepresentation:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)stringRepresentation;
-(unsigned long long)libraryIdentifier;
-(unsigned long long)machineIdentifier;
-(id)initWithMachineIdentifier:(unsigned long long)arg1 libraryIdentifier:(unsigned long long)arg2 ;
-(void)setLibraryIdentifier:(unsigned long long)arg1 ;
-(void)setMachineIdentifier:(unsigned long long)arg1 ;
@end

