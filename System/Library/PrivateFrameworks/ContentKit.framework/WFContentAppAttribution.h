/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFContentAttribution.h>

@class NSString;

@interface WFContentAppAttribution : WFContentAttribution {

	NSString* _bundleIdentifier;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
-(id)app;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)wfSerializedRepresentation;
-(id)attributionIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 disclosureLevel:(unsigned long long)arg2 managedLevel:(unsigned long long)arg3 ;
@end

