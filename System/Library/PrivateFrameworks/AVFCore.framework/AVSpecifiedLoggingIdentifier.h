/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVLoggingIdentifier.h>

@class NSString, AVSpecifiedLoggingIdentifierInternal;

@interface AVSpecifiedLoggingIdentifier : NSObject <AVLoggingIdentifier> {

	AVSpecifiedLoggingIdentifierInternal* _specifiedLoggingIdentifier;

}

@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSString *)description;
-(void)dealloc;
-(id)makeDerivedIdentifier;
-(id)initWithSpecifiedName:(id)arg1 ;
@end

