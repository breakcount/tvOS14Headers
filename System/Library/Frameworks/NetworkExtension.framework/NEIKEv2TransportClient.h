/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NEIKEv2TransportDelegate;
@class NEIKEv2IKESPI;

@interface NEIKEv2TransportClient : NSObject {

	BOOL _wildcard;
	NEIKEv2IKESPI* _clientSPI;
	id<NEIKEv2TransportDelegate> _delegate;

}

@property (retain) NEIKEv2IKESPI * clientSPI;                          //@synthesize clientSPI=_clientSPI - In the implementation block
@property (assign) BOOL wildcard;                                      //@synthesize wildcard=_wildcard - In the implementation block
@property (__weak) id<NEIKEv2TransportDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)description;
-(id<NEIKEv2TransportDelegate>)delegate;
-(void)setDelegate:(id<NEIKEv2TransportDelegate>)arg1 ;
-(BOOL)wildcard;
-(NEIKEv2IKESPI *)clientSPI;
-(void)setClientSPI:(NEIKEv2IKESPI *)arg1 ;
-(void)setWildcard:(BOOL)arg1 ;
@end
