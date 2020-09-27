/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDAMAuthenticationResult, NSDate;

@interface ENAuthCacheEntry : NSObject {

	EDAMAuthenticationResult* _authResult;
	NSDate* _cachedDate;

}

@property (nonatomic,retain) EDAMAuthenticationResult * authResult;              //@synthesize authResult=_authResult - In the implementation block
@property (nonatomic,retain) NSDate * cachedDate;                                //@synthesize cachedDate=_cachedDate - In the implementation block
+(id)entryWithResult:(id)arg1 ;
-(BOOL)isValid;
-(EDAMAuthenticationResult *)authResult;
-(void)setAuthResult:(EDAMAuthenticationResult *)arg1 ;
-(NSDate *)cachedDate;
-(void)setCachedDate:(NSDate *)arg1 ;
@end
