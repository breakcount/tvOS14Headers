/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface ASDManagedRequestStatus : NSObject <NSSecureCoding> {

	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSUUID* _requestIdentifier;
	long long _state;
	NSString* _title;

}

@property (retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (retain) NSString * bundleVersion;                 //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (retain) NSUUID * requestIdentifier;               //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (assign) long long state;                          //@synthesize state=_state - In the implementation block
@property (retain) NSString * title;                         //@synthesize title=_title - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)bundleVersion;
-(NSUUID *)requestIdentifier;
-(void)setBundleVersion:(NSString *)arg1 ;
-(void)setRequestIdentifier:(NSUUID *)arg1 ;
@end

