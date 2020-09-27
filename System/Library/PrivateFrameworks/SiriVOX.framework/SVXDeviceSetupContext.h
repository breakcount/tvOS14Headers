/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SVXDeviceSetupOptions, SVXDeviceSetupFlowScene;

@interface SVXDeviceSetupContext : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _timestamp;
	SVXDeviceSetupOptions* _options;
	SVXDeviceSetupFlowScene* _flowScene;

}

@property (nonatomic,readonly) unsigned long long timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) SVXDeviceSetupOptions * options;                  //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) SVXDeviceSetupFlowScene * flowScene;              //@synthesize flowScene=_flowScene - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SVXDeviceSetupOptions *)options;
-(unsigned long long)timestamp;
-(id)initWithTimestamp:(unsigned long long)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)initWithTimestamp:(unsigned long long)arg1 presentsAlternativeFlowWhenStoreAccountIsUnavailable:(BOOL)arg2 ;
-(SVXDeviceSetupFlowScene *)flowScene;
-(id)initWithTimestamp:(unsigned long long)arg1 options:(id)arg2 flowScene:(id)arg3 ;
-(id)initWithTimestamp:(unsigned long long)arg1 options:(id)arg2 ;
@end

