/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVTopShelfAction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TVTopShelfPresentViewServiceAction : TVTopShelfAction <NSSecureCoding> {

	NSString* _viewServiceBundleIdentifier;
	NSString* _viewControllerClassName;

}

@property (nonatomic,copy,readonly) NSString * viewServiceBundleIdentifier;              //@synthesize viewServiceBundleIdentifier=_viewServiceBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * viewControllerClassName;                  //@synthesize viewControllerClassName=_viewControllerClassName - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)viewControllerClassName;
-(NSString *)viewServiceBundleIdentifier;
-(id)initWithViewServiceBundleIdentifier:(id)arg1 viewControllerClassName:(id)arg2 ;
@end
