/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSIndexSet;


@protocol PLIndexMapperDataSource <NSObject>
@property (nonatomic,copy,readonly) NSIndexSet * filteredIndexes; 
@required
-(BOOL)shouldIncludeObjectAtIndex:(unsigned long long)arg1;
-(NSIndexSet *)filteredIndexes;

@end

