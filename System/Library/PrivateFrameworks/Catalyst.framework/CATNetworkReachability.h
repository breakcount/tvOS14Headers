/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CATNetworkReachabilityDelegate;
#import <Catalyst/Catalyst-Structs.h>
@class CATAddress;

@interface CATNetworkReachability : NSObject {

	SCNetworkReachabilityRef mReachabilityRef;
	unsigned _flags;
	CATAddress* _address;
	id<CATNetworkReachabilityDelegate> _delegate;

}

@property (assign,nonatomic) unsigned flags;                                                  //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) CATAddress * address;                                          //@synthesize address=_address - In the implementation block
@property (assign,nonatomic,__weak) id<CATNetworkReachabilityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isReachable,nonatomic,readonly) BOOL reachable; 
+(id)reachabilityWithAddress:(id)arg1 ;
+(id)reachabilityForInternetConnection;
+(id)reachabilityForLocalWiFi;
+(BOOL)isReachableForLocalWiFiWithFlags:(unsigned)arg1 ;
+(BOOL)isReachableForNetworkWithFlags:(unsigned)arg1 ;
+(id)keyPathsForValuesAffectingReachable;
-(id)debugDescription;
-(void)dealloc;
-(unsigned)flags;
-(id<CATNetworkReachabilityDelegate>)delegate;
-(void)setDelegate:(id<CATNetworkReachabilityDelegate>)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(CATAddress *)address;
-(void)setFlags:(unsigned)arg1 ;
-(id)initWithAddress:(id)arg1 ;
-(BOOL)isReachable;
-(void)configureCallback;
-(void)reachabilityDidChangeWithFlags:(unsigned)arg1 ;
-(void)delegateDidChange;
@end

