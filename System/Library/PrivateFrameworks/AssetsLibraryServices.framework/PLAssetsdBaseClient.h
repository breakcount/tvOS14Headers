/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLXPCProxyCreatingPLXPCAsyncProxyCreating;
@interface PLAssetsdBaseClient : NSObject {

	id<PLXPCProxyCreating><PLXPCAsyncProxyCreating> _proxyFactory;

}

@property (readonly) id<PLXPCProxyCreating><PLXPCAsyncProxyCreating> proxyFactory;              //@synthesize proxyFactory=_proxyFactory - In the implementation block
-(id)initWithQueue:(id)arg1 proxyCreating:(id)arg2 proxyGetter:(SEL)arg3 ;
-(id<PLXPCProxyCreating><PLXPCAsyncProxyCreating>)proxyFactory;
@end

