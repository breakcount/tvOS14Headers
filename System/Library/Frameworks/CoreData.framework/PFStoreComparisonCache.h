/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PFStoreComparisonCache : NSObject {

	NSMutableDictionary* _identifierToStoreUUIDToObjectID;
	NSMutableDictionary* _storeUUIDToIdentifiers;

}
-(id)init;
-(void)dealloc;
-(id)objectIDForIdentifier:(id)arg1 inStore:(id)arg2 ;
-(void)setObjectID:(id)arg1 forIdentifier:(id)arg2 ;
-(id)identifiersForStore:(id)arg1 ;
@end

