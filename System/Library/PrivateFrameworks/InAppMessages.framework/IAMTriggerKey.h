/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:05 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InAppMessages/InAppMessages-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IAMTriggerKey : NSObject <NSCopying> {

	NSString* _name;
	NSString* _bundleIdentifier;

}

@property (nonatomic,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * nameSpacedKeyName; 
+(id)nameSpacedKeyNameForName:(id)arg1 bundleIdentifier:(id)arg2 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)bundleIdentifier;
-(id)initWithName:(id)arg1 bundleIdentifier:(id)arg2 ;
-(NSString *)nameSpacedKeyName;
@end

