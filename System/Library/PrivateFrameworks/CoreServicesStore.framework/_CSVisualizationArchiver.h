/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreServicesStore.framework/CoreServicesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreServicesStore/CoreServicesStore-Structs.h>
@class _CSVisualizer, NSPredicate;

@interface _CSVisualizationArchiver : NSObject {

	_sFILE* _fileHandle;
	BOOL _closeWhenDone;
	BOOL _outputAsXML;
	atomic<bool> _hadEPIPE;
	os_unfair_lock_s _dictWriteLock;
	unsigned long long _stats[2];
	_CSVisualizer* _visualizer;
	NSPredicate* _unitDescriptionPredicate;

}

@property (readonly) _CSVisualizer * visualizer;                                  //@synthesize visualizer=_visualizer - In the implementation block
@property (nonatomic,retain) NSPredicate * unitDescriptionPredicate;              //@synthesize unitDescriptionPredicate=_unitDescriptionPredicate - In the implementation block
+(void)beginProvidingVisualizationArchivesWithMachServiceName:(id)arg1 queue:(id)arg2 creatingVisualizersWithBlock:(/*^block*/id)arg3 ;
+(void)provideVisualizerToConnection:(void*)arg1 fileHandle:(_sFILE*)arg2 providerBlock:(/*^block*/id)arg3 ;
+(void)processCommandFromConnection:(void*)arg1 fileHandle:(_sFILE*)arg2 providerBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)initWithVisualizer:(id)arg1 fileHandle:(_sFILE*)arg2 closeWhenDone:(BOOL)arg3 error:(id*)arg4 ;
-(void)setUnitDescriptionPredicate:(NSPredicate *)arg1 ;
-(void)writeAllUnitsInTable:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(void)finishWriting;
-(id)initWithVisualizer:(id)arg1 fileHandle:(_sFILE*)arg2 closeWhenDone:(BOOL)arg3 allowCompression:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)writeMetadata:(id)arg1 forStore:(CSStoreRef)arg2 error:(id*)arg3 ;
-(BOOL)writeDictionary:(id)arg1 error:(id*)arg2 ;
-(BOOL)fwrite:(const void*)arg1 size:(unsigned long long)arg2 numberOfItems:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)getWriteUnitState:(CSWriteUnitState*)arg1 forTable:(unsigned)arg2 ;
-(void)writeUnit:(unsigned)arg1 inTable:(unsigned)arg2 state:(const CSWriteUnitState*)arg3 ;
-(void)writeUnit:(unsigned)arg1 inTable:(unsigned)arg2 ;
-(void)writeAllUnitsWithBlock:(/*^block*/id)arg1 ;
-(_CSVisualizer *)visualizer;
-(NSPredicate *)unitDescriptionPredicate;
@end

