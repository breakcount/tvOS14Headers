/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:40 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SHMatcherDelegate <NSObject>
@required
-(void)matcher:(id)arg1 didFindMatchingResponse:(id)arg2;
-(void)matcher:(id)arg1 didNotFindMatchForSignature:(id)arg2 matcherResponse:(id)arg3;
-(void)matcher:(id)arg1 didFailForSignature:(id)arg2 matcherResponse:(id)arg3 withError:(id)arg4;
-(void)didFinishForMatcher:(id)arg1;

@end

