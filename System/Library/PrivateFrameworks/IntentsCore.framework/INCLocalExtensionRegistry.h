/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface INCLocalExtensionRegistry : NSObject {

	NSMutableDictionary* _localExtensionsByIdentifier;

}
+(id)sharedInstance;
-(id)init;
-(void)registerLocalExtension:(id)arg1 ;
-(void)deregisterLocalExtension:(id)arg1 ;
-(id)localExtensions;
-(id)localExtensionForIdentifier:(id)arg1 ;
@end

