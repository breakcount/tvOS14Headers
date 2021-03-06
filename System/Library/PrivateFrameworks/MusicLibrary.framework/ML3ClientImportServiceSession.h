/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@class ML3DatabaseConnection, ML3MusicLibrary, ML3ClientImportSessionConfiguration;

@interface ML3ClientImportServiceSession : NSObject {

	ML3ImportSession* _importSession;
	ML3DatabaseConnection* _databaseConnection;
	ML3MusicLibrary* _library;
	ML3ClientImportSessionConfiguration* _configuration;

}
-(void)dealloc;
-(BOOL)finish;
-(BOOL)begin;
-(id)initWithLibrary:(id)arg1 connection:(id)arg2 configuration:(id)arg3 ;
-(BOOL)addTrack:(id)arg1 persistentID:(id*)arg2 ;
-(BOOL)updateTrack:(id)arg1 persistentID:(id*)arg2 ;
-(BOOL)removeTrack:(id)arg1 persistentID:(id*)arg2 ;
@end

