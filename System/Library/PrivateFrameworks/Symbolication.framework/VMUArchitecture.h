/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VMUArchitecture : NSObject <NSCoding, NSCopying> {

	int _cpuType;
	int _cpuSubtype;

}
+(void)initialize;
+(id)currentArchitecture;
+(id)anyArchitecture;
+(id)ppcArchitecture;
+(id)ppc32Architecture;
+(id)ppc64Architecture;
+(id)i386Architecture;
+(id)x86_32Architecture;
+(id)x86_64Architecture;
+(id)armArchitecture;
+(id)architectureWithCpuType:(int)arg1 cpuSubtype:(int)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)cpuType;
-(int)cpuSubtype;
-(id)initWithCpuType:(int)arg1 cpuSubtype:(int)arg2 ;
-(BOOL)isLittleEndian;
-(BOOL)is64Bit;
-(BOOL)isEqualToArchitecture:(id)arg1 ;
-(BOOL)is32Bit;
-(BOOL)isBigEndian;
-(BOOL)matchesArchitecture:(id)arg1 ;
@end

