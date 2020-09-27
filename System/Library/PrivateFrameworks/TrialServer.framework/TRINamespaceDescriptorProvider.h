/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:58 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TRINamespaceDescriptorProviding.h>

@class TRINamespaceDatabase, NSString;

@interface TRINamespaceDescriptorProvider : NSObject <TRINamespaceDescriptorProviding> {

	TRINamespaceDatabase* _namespaceDatabase;
	NSString* _descriptorDirectory;

}
+(id)providerWithNamespaceDatabase:(id)arg1 defaultDescriptorDirectoryPath:(id)arg2 ;
+(id)_descriptorFromDynamicNamespaceRecord:(id)arg1 ;
-(id)descriptorWithNamespaceName:(id)arg1 ;
-(id)initWithNamespaceDatabase:(id)arg1 defaultDescriptorDirectoryPath:(id)arg2 ;
-(id)_dynamicDescriptorsForContainer:(int)arg1 teamId:(id)arg2 ;
@end

