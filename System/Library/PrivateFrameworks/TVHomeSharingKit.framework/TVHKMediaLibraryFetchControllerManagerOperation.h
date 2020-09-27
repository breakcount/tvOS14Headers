/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:16 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHKAsynchronousOperation.h>

@class NSArray, TVHKMediaLibraryRevision, NSSet, NSDictionary, NSMutableDictionary;

@interface TVHKMediaLibraryFetchControllerManagerOperation : TVHKAsynchronousOperation {

	NSArray* _fetchControllers;
	TVHKMediaLibraryRevision* _mediaLibraryRevision;
	NSSet* _changedDMAPServerProtocols;
	NSDictionary* _dependentMediaEntitiesFetchControllersDictionary;
	NSMutableDictionary* _changedSourceMediaEntityDictionary;

}

@property (nonatomic,copy,readonly) NSArray * fetchControllers;                                                   //@synthesize fetchControllers=_fetchControllers - In the implementation block
@property (nonatomic,copy,readonly) TVHKMediaLibraryRevision * mediaLibraryRevision;                              //@synthesize mediaLibraryRevision=_mediaLibraryRevision - In the implementation block
@property (nonatomic,copy,readonly) NSSet * changedDMAPServerProtocols;                                           //@synthesize changedDMAPServerProtocols=_changedDMAPServerProtocols - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dependentMediaEntitiesFetchControllersDictionary;              //@synthesize dependentMediaEntitiesFetchControllersDictionary=_dependentMediaEntitiesFetchControllersDictionary - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * changedSourceMediaEntityDictionary;                          //@synthesize changedSourceMediaEntityDictionary=_changedSourceMediaEntityDictionary - In the implementation block
+(id)new;
+(id)_dependentMediaEntitiesFetchControllersDictionaryForFetchControllers:(id)arg1 ;
-(id)init;
-(void)executionDidBegin;
-(NSSet *)changedDMAPServerProtocols;
-(TVHKMediaLibraryRevision *)mediaLibraryRevision;
-(id)initWithFetchControllers:(id)arg1 mediaLibraryRevision:(id)arg2 changedDMAPServerProtocols:(id)arg3 ;
-(NSArray *)fetchControllers;
-(id)_startQueryUserInfoForFetchController:(id)arg1 ;
-(void)_didCompleteQueryForFetchController:(id)arg1 withResult:(id)arg2 ;
-(NSMutableDictionary *)changedSourceMediaEntityDictionary;
-(NSDictionary *)dependentMediaEntitiesFetchControllersDictionary;
@end

