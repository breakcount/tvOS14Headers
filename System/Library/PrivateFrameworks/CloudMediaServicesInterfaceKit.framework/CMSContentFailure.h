/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CMSCoding.h>

@class NSMutableArray, NSURL, NSArray, NSString;

@interface CMSContentFailure : NSObject <CMSCoding> {

	NSMutableArray* _attempts;
	NSURL* _URL;
	NSURL* _redirectedURL;

}

@property (nonatomic,copy) NSURL * URL;                              //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSURL * redirectedURL;                    //@synthesize redirectedURL=_redirectedURL - In the implementation block
@property (nonatomic,copy,readonly) NSArray * attempts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSArray *)attempts;
-(id)cmsCoded;
-(void)retriedWithFailure:(unsigned long long)arg1 result:(id)arg2 body:(id)arg3 ;
-(id)initWithFailure:(unsigned long long)arg1 URL:(id)arg2 redirectedURL:(id)arg3 result:(id)arg4 body:(id)arg5 ;
-(NSURL *)redirectedURL;
-(void)setRedirectedURL:(NSURL *)arg1 ;
@end

