/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLSession, NSURL;

@interface WFiTunesSessionManager : NSObject {

	NSURLSession* _session;
	NSURL* _baseURL;

}

@property (nonatomic,copy,readonly) NSURL * baseURL;                //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,readonly) NSURLSession * session;              //@synthesize session=_session - In the implementation block
-(id)init;
-(NSURL *)baseURL;
-(NSURLSession *)session;
-(id)initWithSessionConfiguration:(id)arg1 ;
-(void)lookupMediaWithIdentifiers:(id)arg1 countryCode:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)searchForMediaOfType:(id)arg1 limitedToEntityType:(id)arg2 withTerm:(id)arg3 forAttribute:(id)arg4 countryCode:(id)arg5 limit:(unsigned long long)arg6 completion:(/*^block*/id)arg7 ;
-(void)lookupMediaWithBundleIdentifier:(id)arg1 countryCode:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)lookupMediaWithUPC:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)lookupMediaWithISBN:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)getMediaWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

