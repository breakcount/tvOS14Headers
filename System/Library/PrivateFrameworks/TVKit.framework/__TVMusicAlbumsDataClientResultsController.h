/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:23 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/__TVMusicDataClientResultsController.h>

@class TVCKDataCollection;

@interface __TVMusicAlbumsDataClientResultsController : __TVMusicDataClientResultsController {

	TVCKDataCollection* _artistOrComposer;
	TVCKDataCollection* _genre;
	BOOL _isComposer;

}
-(id)queryForController:(id)arg1 ;
-(id)initWithGenre:(id)arg1 ;
-(id)initWithArtist:(id)arg1 genre:(id)arg2 ;
-(id)initWithComposer:(id)arg1 ;
@end

