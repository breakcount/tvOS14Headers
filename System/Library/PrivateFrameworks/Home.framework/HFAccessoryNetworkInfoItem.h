/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFAccessoryInfoItem.h>

@interface HFAccessoryNetworkInfoItem : HFAccessoryInfoItem {

	unsigned long long _networkInfoType;

}

@property (assign,nonatomic) unsigned long long networkInfoType;              //@synthesize networkInfoType=_networkInfoType - In the implementation block
-(unsigned long long)infoType;
-(id)initWithAccessory:(id)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(void)toggleNetworkInfoType;
-(unsigned long long)_nextNetworkInfoType;
-(void)setNetworkInfoType:(unsigned long long)arg1 ;
-(unsigned long long)networkInfoType;
-(id)_localizedTitleForType:(unsigned long long)arg1 ;
-(id)_localizedDescriptionForType:(unsigned long long)arg1 ;
-(BOOL)_hiddenForType:(unsigned long long)arg1 ;
@end

