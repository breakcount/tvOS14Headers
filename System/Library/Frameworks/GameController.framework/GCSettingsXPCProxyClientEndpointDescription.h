/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_GCControllerComponentDescription.h>

@protocol NSObjectNSCopyingNSSecureCoding;
@class GCControllerSettings, GCSettingsXPCProxyClientEndpoint, NSString;

@interface GCSettingsXPCProxyClientEndpointDescription : NSObject <_GCControllerComponentDescription> {

	GCControllerSettings* _initialSettingsForBundleID;
	GCControllerSettings* _initialSettingsDefault;
	GCSettingsXPCProxyClientEndpoint* _materializedObject;
	id<NSObject><NSCopying><NSSecureCoding> _identifier;

}

@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(id)materializeWithContext:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 initialValueForBundleID:(id)arg2 defaultSettings:(id)arg3 ;
@end

