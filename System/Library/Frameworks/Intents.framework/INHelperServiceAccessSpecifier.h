/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface INHelperServiceAccessSpecifier : NSObject {

	unsigned long long _accessLevel;
	NSString* _associatedAppBundleIdentifier;

}

@property (nonatomic,readonly) unsigned long long accessLevel;                             //@synthesize accessLevel=_accessLevel - In the implementation block
@property (nonatomic,copy,readonly) NSString * associatedAppBundleIdentifier;              //@synthesize associatedAppBundleIdentifier=_associatedAppBundleIdentifier - In the implementation block
+(void)initialize;
+(id)accessSpecifierUnrestricted;
+(id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:(id)arg1 ;
+(id)accessSpecifierWithNoAccess;
+(id)accessSpecifierAppropriateForCurrentProcess;
+(id)accessSpecifierAppropriateForXPCConnection:(id)arg1 ;
-(id)debugDescription;
-(id)initWithAccessLevel:(unsigned long long)arg1 associatedAppBundleIdentifier:(id)arg2 ;
-(unsigned long long)accessLevel;
-(NSString *)associatedAppBundleIdentifier;
@end

