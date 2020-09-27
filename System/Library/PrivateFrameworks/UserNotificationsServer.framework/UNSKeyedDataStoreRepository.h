/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UNSContentProtectionStrategy;
@class NSString, UNSBundleLibrarian;

@interface UNSKeyedDataStoreRepository : NSObject {

	NSString* _directory;
	NSString* _fileName;
	NSString* _pathExtension;
	UNSBundleLibrarian* _librarian;
	id<UNSContentProtectionStrategy> _protectionStrategy;
	NSString* _objectIdentifierKey;
	long long _maxObjectsPerKey;
	BOOL _shouldExcludeFromBackup;

}
-(id)replaceObject:(id)arg1 forKey:(id)arg2 ;
-(id)addObject:(id)arg1 forKey:(id)arg2 ;
-(id)allKeys;
-(id)objectsForKey:(id)arg1 ;
-(void)setObjects:(id)arg1 forKey:(id)arg2 ;
-(id)_pathForKey:(id)arg1 ;
-(id)directoryPath;
-(id)_directoryForKey:(id)arg1 ;
-(id)_dataAtPath:(id)arg1 ;
-(id)initWithDirectory:(id)arg1 fileName:(id)arg2 pathExtension:(id)arg3 librarian:(id)arg4 repositoryProtectionStrategy:(id)arg5 objectIdentifierKey:(id)arg6 maxObjectsPerKey:(long long)arg7 shouldExcludeFromBackup:(BOOL)arg8 ;
-(void)protectionStateChanged;
-(void)removeStoreForKey:(id)arg1 ;
-(id)_objectsAtPath:(id)arg1 ;
-(id)_objectsForData:(id)arg1 identifier:(id)arg2 ;
-(id)_objectsPassingTest:(/*^block*/id)arg1 atPath:(id)arg2 ;
-(BOOL)_saveObjects:(id)arg1 atPath:(id)arg2 ;
-(id)_removeObjectsPassingTest:(/*^block*/id)arg1 atPath:(id)arg2 ;
-(void)_setObjects:(id)arg1 atPath:(id)arg2 ;
-(id)addObject:(id)arg1 mustReplace:(BOOL)arg2 forKey:(id)arg3 ;
-(id)_addObject:(id)arg1 mustReplace:(BOOL)arg2 atPath:(id)arg3 ;
-(id)_addObject:(id)arg1 toObjects:(id)arg2 mustReplace:(BOOL)arg3 receipt:(id*)arg4 ;
-(BOOL)_isReplacementSupported;
-(void)_removeItemAtPath:(id)arg1 ;
-(BOOL)_useReplacementToImport:(id)arg1 into:(id)arg2 ;
-(id)objectsPassingTest:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(void)removeAllObjectsForKey:(id)arg1 ;
-(id)removeObjectsPassingTest:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(void)removeDataStoreRepository;
-(void)migrateStoreAtPath:(id)arg1 forKey:(id)arg2 ;
@end

