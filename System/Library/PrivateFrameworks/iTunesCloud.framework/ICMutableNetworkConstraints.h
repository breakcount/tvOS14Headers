/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <iTunesCloud/ICNetworkConstraints.h>

@interface ICMutableNetworkConstraints : ICNetworkConstraints
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setSizeLimit:(id)arg1 forNetworkType:(long long)arg2 ;
-(void)setShouldAllowDataForAllNetworkTypes:(BOOL)arg1 ;
-(void)setShouldAllowData:(BOOL)arg1 forNetworkType:(long long)arg2 ;
-(void)setShouldAllowDataForCellularNetworkTypes:(BOOL)arg1 ;
-(void)setShouldAllowDataForWiFiNetworkTypes:(BOOL)arg1 ;
@end

