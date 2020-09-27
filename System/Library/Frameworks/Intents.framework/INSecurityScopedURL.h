/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Intents/Intents-Structs.h>
@class NSURL;

@interface INSecurityScopedURL : NSObject {

	long long _accessCount;
	os_unfair_lock_s _lock;
	NSURL* _url;

}

@property (nonatomic,readonly) NSURL * url;              //@synthesize url=_url - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(BOOL)startAccessingSecurityScopedResource;
-(void)stopAccessingSecurityScopedResource;
-(NSURL *)url;
@end
