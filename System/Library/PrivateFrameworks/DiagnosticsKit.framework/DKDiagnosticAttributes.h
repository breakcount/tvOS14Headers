/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DKExtensionAttributes.h>

@class NSExtension, NSString, NSNumber;

@interface DKDiagnosticAttributes : NSObject <DKExtensionAttributes> {

	BOOL _headless;
	BOOL _restricted;
	BOOL _requiresUnlock;
	NSExtension* _extension;
	NSString* _bundleIdentifier;
	NSNumber* _identifier;
	NSString* _name;
	NSString* _version;
	NSNumber* _freeSpaceRequired;
	NSString* _serviceName;

}

@property (nonatomic,readonly) NSString * serviceName;                           //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) NSNumber * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * version;                               //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSNumber * freeSpaceRequired;                     //@synthesize freeSpaceRequired=_freeSpaceRequired - In the implementation block
@property (getter=isHeadless,nonatomic,readonly) BOOL headless;                  //@synthesize headless=_headless - In the implementation block
@property (getter=isRestricted,nonatomic,readonly) BOOL restricted;              //@synthesize restricted=_restricted - In the implementation block
@property (nonatomic,readonly) BOOL requiresUnlock;                              //@synthesize requiresUnlock=_requiresUnlock - In the implementation block
@property (nonatomic,readonly) NSExtension * extension;                          //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(NSNumber *)identifier;
-(NSString *)bundleIdentifier;
-(NSString *)version;
-(NSString *)serviceName;
-(BOOL)isHeadless;
-(BOOL)isRestricted;
-(id)initWithExtension:(id)arg1 ;
-(BOOL)isEqualTo:(id)arg1 ;
-(NSExtension *)extension;
-(id)initWithIdentifier:(id)arg1 version:(id)arg2 freeSpaceRequired:(id)arg3 name:(id)arg4 serviceName:(id)arg5 headless:(BOOL)arg6 ;
-(BOOL)isEqualToAttributes:(id)arg1 ;
-(NSNumber *)freeSpaceRequired;
-(BOOL)requiresUnlock;
-(id)initWithIdentifier:(id)arg1 version:(id)arg2 name:(id)arg3 serviceName:(id)arg4 ;
@end

