/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPAsyncOperation.h>

@class MPMediaLibraryView;

@interface _MPModelLibraryRequestItemsQueryOperation : MPAsyncOperation {

	MPMediaLibraryView* _libraryView;
	/*^block*/id _resultHandler;
	shared_ptr<mlcore::Query>* _query;

}

@property (nonatomic,retain) MPMediaLibraryView * libraryView;              //@synthesize libraryView=_libraryView - In the implementation block
@property (assign,nonatomic) shared_ptr<mlcore::Query>* query;              //@synthesize query=_query - In the implementation block
@property (nonatomic,copy) id resultHandler;                                //@synthesize resultHandler=_resultHandler - In the implementation block
-(shared_ptr<mlcore::Query>*)query;
-(void)setQuery:(shared_ptr<mlcore::Query>*)arg1 ;
-(void)execute;
-(id)resultHandler;
-(MPMediaLibraryView *)libraryView;
-(void)setLibraryView:(MPMediaLibraryView *)arg1 ;
-(void)setResultHandler:(id)arg1 ;
@end

