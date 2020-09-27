/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVLoggingIdentifier.h>

@class AVAssetLoggingIdentifierInternal, NSString;

@interface AVAssetLoggingIdentifier : NSObject <AVLoggingIdentifier> {

	AVAssetLoggingIdentifierInternal* _priv;

}

@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(id)makeDerivedIdentifier;
@end

