/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, GCLightbarColor;

@interface GCGamepadUserDefaults : NSObject <NSSecureCoding> {

	NSString* _uniqueIdentifier;
	GCLightbarColor* _lightbarColor;

}

@property (readonly) NSString * uniqueIdentifier;                //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (retain) GCLightbarColor * lightbarColor;              //@synthesize lightbarColor=_lightbarColor - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)nsUserDefaults;
+(id)defaultsForControllerIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(void)save;
-(id)initWithUniqueIdentifier:(id)arg1 ;
-(GCLightbarColor *)lightbarColor;
-(void)setLightbarColor:(GCLightbarColor *)arg1 ;
@end

