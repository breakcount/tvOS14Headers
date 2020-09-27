/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKLiveRenderedShaderSet : NSObject <NSSecureCoding> {

	NSString* _geometryEntryPointShader;
	NSString* _surfaceEntryPointShader;
	NSString* _lightingModelEntryPointShader;
	NSString* _fragmentEntryPointShader;

}

@property (nonatomic,copy,readonly) NSString * geometryEntryPointShader;                   //@synthesize geometryEntryPointShader=_geometryEntryPointShader - In the implementation block
@property (nonatomic,copy,readonly) NSString * surfaceEntryPointShader;                    //@synthesize surfaceEntryPointShader=_surfaceEntryPointShader - In the implementation block
@property (nonatomic,copy,readonly) NSString * lightingModelEntryPointShader;              //@synthesize lightingModelEntryPointShader=_lightingModelEntryPointShader - In the implementation block
@property (nonatomic,copy,readonly) NSString * fragmentEntryPointShader;                   //@synthesize fragmentEntryPointShader=_fragmentEntryPointShader - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDataAccessor:(id)arg1 suffix:(id)arg2 ;
-(NSString *)geometryEntryPointShader;
-(NSString *)surfaceEntryPointShader;
-(NSString *)lightingModelEntryPointShader;
-(NSString *)fragmentEntryPointShader;
@end

