/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSSecureCoding;
@class NSMutableArray, NSString;

@interface SCROBrailleKey : NSObject <NSSecureCoding> {

	NSMutableArray* _maskArray;
	NSString* _identifier;
	long long _routerIndex;
	long long _routerToken;
	long long _routerLocation;
	BOOL _hasRouterInfo;
	id<NSSecureCoding> _appToken;
	int _displayToken;
	int _displayMode;

}
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)identifier;
-(void)setDisplayMode:(int)arg1 ;
-(int)displayMode;
-(id)keyMasks;
-(BOOL)getRouterIndex:(long long*)arg1 token:(long long*)arg2 location:(long long*)arg3 appToken:(id*)arg4 ;
-(void)setRouterIndex:(long long)arg1 token:(long long)arg2 location:(long long)arg3 appToken:(id)arg4 ;
-(void)setDisplayToken:(int)arg1 ;
-(void)addKeyMask:(unsigned)arg1 ;
-(void)addSpacebarKeyMask;
-(void)addModifierMask:(unsigned)arg1 ;
-(int)displayToken;
@end

