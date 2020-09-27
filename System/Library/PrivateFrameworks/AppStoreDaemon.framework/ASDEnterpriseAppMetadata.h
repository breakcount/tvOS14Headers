/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/ASDAppMetadata.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString;

@interface ASDEnterpriseAppMetadata : NSObject <ASDAppMetadata, NSCopying, NSSecureCoding> {

	BOOL _hideUserPrompts;
	NSURL* _manifestURL;

}

@property (assign) BOOL hideUserPrompts;                            //@synthesize hideUserPrompts=_hideUserPrompts - In the implementation block
@property (readonly) NSURL * manifestURL;                           //@synthesize manifestURL=_manifestURL - In the implementation block
@property (readonly) long long metadataType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)manifestURL;
-(long long)metadataType;
-(id)initWithManifestURL:(id)arg1 ;
-(BOOL)hideUserPrompts;
-(void)setHideUserPrompts:(BOOL)arg1 ;
@end

