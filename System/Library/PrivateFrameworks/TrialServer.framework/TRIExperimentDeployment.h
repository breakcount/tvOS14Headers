/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:56 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TRIExperimentDeployment : NSObject <NSCopying, NSSecureCoding> {

	int _deploymentId;
	NSString* _experimentId;

}

@property (readonly) NSString * shortDesc; 
@property (nonatomic,readonly) NSString * experimentId;              //@synthesize experimentId=_experimentId - In the implementation block
@property (nonatomic,readonly) int deploymentId;                     //@synthesize deploymentId=_deploymentId - In the implementation block
+(void)load;
+(BOOL)supportsSecureCoding;
+(id)deploymentWithExperimentId:(id)arg1 deploymentId:(int)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)experimentId;
-(int)deploymentId;
-(BOOL)hasDeploymentId;
-(id)initWithExperimentId:(id)arg1 deploymentId:(int)arg2 ;
-(BOOL)isEqualToDeployment:(id)arg1 ;
-(id)copyWithReplacementExperimentId:(id)arg1 ;
-(id)copyWithReplacementDeploymentId:(int)arg1 ;
-(void)_swizzledEncodeWithCoder:(id)arg1 ;
-(id)taskTag;
-(NSString *)shortDesc;
@end

