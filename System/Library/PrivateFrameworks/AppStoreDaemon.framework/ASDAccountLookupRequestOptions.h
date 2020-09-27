/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestOptions.h>

@interface ASDAccountLookupRequestOptions : ASDRequestOptions {

	BOOL _authIfNeeded;

}

@property (assign,nonatomic) BOOL authIfNeeded;              //@synthesize authIfNeeded=_authIfNeeded - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)authIfNeeded;
-(void)setAuthIfNeeded:(BOOL)arg1 ;
@end

