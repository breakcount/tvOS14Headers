/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSFastEnumeration;
@class NSMutableDictionary;

@interface PHCollectionListAncestryContext : NSObject {

	id<NSFastEnumeration> _allCollectionLists;
	NSMutableDictionary* _collectionListsByOID;

}

@property (retain) id<NSFastEnumeration> allCollectionLists;                //@synthesize allCollectionLists=_allCollectionLists - In the implementation block
@property (retain) NSMutableDictionary * collectionListsByOID;              //@synthesize collectionListsByOID=_collectionListsByOID - In the implementation block
-(id)folderForID:(id)arg1 ;
-(id)initWithCollectionLists:(id)arg1 ;
-(id<NSFastEnumeration>)allCollectionLists;
-(void)setAllCollectionLists:(id<NSFastEnumeration>)arg1 ;
-(NSMutableDictionary *)collectionListsByOID;
-(void)setCollectionListsByOID:(NSMutableDictionary *)arg1 ;
@end

