/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEFileHandle.h>

@class NSString;

@interface NEPolicySessionFileHandle : NEFileHandle {

	NSString* _name;

}

@property (readonly) NSString * name;              //@synthesize name=_name - In the implementation block
-(NSString *)name;
-(id)description;
-(unsigned long long)type;
-(id)dictionary;
-(id)initFromDictionary:(id)arg1 ;
-(id)initWithPolicySession:(id)arg1 name:(id)arg2 ;
-(id)initWithPolicySession:(id)arg1 ;
@end

