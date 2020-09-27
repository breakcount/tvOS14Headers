/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ICSQLitePreparedStatement : NSObject {

	const void* _connectionPointer;
	NSString* _SQL;

}

@property (nonatomic,readonly) const void* connectionPointer;              //@synthesize connectionPointer=_connectionPointer - In the implementation block
@property (setter=QL,nonatomic,copy,readonly) NSString * SQL;              //@synthesize SQL=_SQL - In the implementation block
-(NSString *)SQL;
-(id)initWithConnection:(const void*)arg1 SQL:(id)arg2 ;
-(const void*)connectionPointer;
@end

