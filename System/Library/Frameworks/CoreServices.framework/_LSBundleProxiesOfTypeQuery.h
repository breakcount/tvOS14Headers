/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSBundleQuery.h>

@interface _LSBundleProxiesOfTypeQuery : _LSBundleQuery {

	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)queryWithType:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)type;
-(BOOL)bundleUnitMeetsRequirements:(unsigned)arg1 bundleData:(const LSBundleData*)arg2 context:(LSContext*)arg3 ;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)_requiresDatabaseMappingEntitlement;
@end

