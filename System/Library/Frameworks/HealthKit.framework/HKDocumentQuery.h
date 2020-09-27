/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKDocumentQueryClientInterface.h>

@class NSArray, NSString;

@interface HKDocumentQuery : HKQuery <HKDocumentQueryClientInterface> {

	BOOL _includeDocumentData;
	unsigned long long _limit;
	NSArray* _sortDescriptors;
	/*^block*/id _resultsHandler;

}

@property (nonatomic,copy) id resultsHandler;                       //@synthesize resultsHandler=_resultsHandler - In the implementation block
@property (readonly) unsigned long long limit;                      //@synthesize limit=_limit - In the implementation block
@property (copy,readonly) NSArray * sortDescriptors;                //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (readonly) BOOL includeDocumentData;                      //@synthesize includeDocumentData=_includeDocumentData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)configurationClass;
+(id)clientInterfaceProtocol;
-(NSArray *)sortDescriptors;
-(unsigned long long)limit;
-(id)resultsHandler;
-(void)setResultsHandler:(id)arg1 ;
-(void)queue_validate;
-(void)queue_deliverError:(id)arg1 ;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)queue_populateConfiguration:(id)arg1 ;
-(void)client_deliverDocument:(id)arg1 query:(id)arg2 ;
-(id)initWithDocumentType:(id)arg1 predicate:(id)arg2 limit:(unsigned long long)arg3 sortDescriptors:(id)arg4 includeDocumentData:(BOOL)arg5 resultsHandler:(/*^block*/id)arg6 ;
-(BOOL)includeDocumentData;
@end

