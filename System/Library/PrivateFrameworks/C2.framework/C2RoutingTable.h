/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:40:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface C2RoutingTable : NSObject {

	NSMutableDictionary* _routingTable;

}

@property (nonatomic,retain) NSMutableDictionary * routingTable;              //@synthesize routingTable=_routingTable - In the implementation block
-(id)init;
-(void)updateOriginalHostname:(id)arg1 destinationHostname:(id)arg2 ;
-(id)copyAndDecorateRequest:(id)arg1 ;
-(NSMutableDictionary *)routingTable;
-(void)setRoutingTable:(NSMutableDictionary *)arg1 ;
@end

