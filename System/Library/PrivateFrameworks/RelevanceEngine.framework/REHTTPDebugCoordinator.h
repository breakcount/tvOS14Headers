/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:16 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RETrainingSimulator;

@interface REHTTPDebugCoordinator : NSObject {

	RETrainingSimulator* _simulator;

}
-(id)initWithSimulator:(id)arg1 ;
-(id)_createContentItemWithTitle:(id)arg1 content:(id)arg2 ;
-(id)_stringElementForObject:(id)arg1 ;
-(id)_urlFromPaths:(id)arg1 ;
-(id)_stringForObject:(id)arg1 ;
-(id)_createHTMLTableFromDictionary:(id)arg1 ;
-(id)_linkToPaths:(id)arg1 ;
-(id)_linkElementForTableItem:(id)arg1 paths:(id)arg2 ;
-(id)_createTableWithItems:(id)arg1 itemFormatBlock:(/*^block*/id)arg2 valueBlock:(/*^block*/id)arg3 ;
-(id)_createHTMLTableRowFromArray:(id)arg1 itemElementTag:(id)arg2 ;
-(void)generateDiagnosticsForPaths:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

