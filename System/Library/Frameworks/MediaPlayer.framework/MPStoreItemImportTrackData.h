/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/ML3StoreItemTrackData.h>

@class NSArray;

@interface MPStoreItemImportTrackData : ML3StoreItemTrackData {

	NSArray* _importElements;

}

@property (nonatomic,readonly) NSArray * importElements;              //@synthesize importElements=_importElements - In the implementation block
+(id)_importPropertiesDictFromImportMetadataDict:(id)arg1 ;
-(id)parsedStoreItemsImportProperties;
-(id)initWithImportElements:(id)arg1 ;
-(id)_associatedElementForPropertyDict:(id)arg1 ;
-(NSArray *)importElements;
@end
