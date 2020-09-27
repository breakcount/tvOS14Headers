/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:17 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHKMediaLibraryRequestOperation.h>

@interface TVHKMediaLibraryLoginOperation : TVHKMediaLibraryRequestOperation {

	unsigned _sessionIdentifier;

}

@property (assign,nonatomic) unsigned sessionIdentifier;              //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
-(unsigned)sessionIdentifier;
-(void)setSessionIdentifier:(unsigned)arg1 ;
-(void)_handleResponse:(id)arg1 ;
-(id)initWithRequest:(id)arg1 requestSession:(id)arg2 ;
-(id)initWithSessionState:(id)arg1 requestSession:(id)arg2 ;
@end

