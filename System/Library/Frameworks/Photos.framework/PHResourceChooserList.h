/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PHResourceChooserAsset;
@class NSSortDescriptor, NSManagedObjectContext, NSArray, NSMutableArray;

@interface PHResourceChooserList : NSObject {

	id<PHResourceChooserAsset> _asset;
	/*^block*/id _itemHandler;
	/*^block*/id _endOfListHandler;
	long long _hintDataCurrentOffset;
	long long _hintDataNextItemOffset;
	BOOL _finishedPresentingFromHints;
	BOOL _didObserveThumbnailStoreKey;
	NSSortDescriptor* _sortDescriptor;
	NSManagedObjectContext* _context;
	NSArray* _nonHintResources;
	NSArray* _unvisitedNonHintResources;
	unsigned long long _lastPresentedFullResourceIndex;
	BOOL _finishedPresentingFromFetchedResources;
	NSMutableArray* _visitedKeys;
	unsigned long long _enumerationDirection;

}
-(id)init;
@end

