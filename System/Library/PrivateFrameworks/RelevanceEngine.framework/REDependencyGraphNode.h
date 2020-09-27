/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:12 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable;

@interface REDependencyGraphNode : NSObject {

	id _item;
	NSHashTable* _connections;

}

@property (nonatomic,readonly) id item;                              //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSHashTable * connections;              //@synthesize connections=_connections - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)item;
-(NSHashTable *)connections;
-(void)setConnections:(NSHashTable *)arg1 ;
-(id)initWithItem:(id)arg1 ;
@end
