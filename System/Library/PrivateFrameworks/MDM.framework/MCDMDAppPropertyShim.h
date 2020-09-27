/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:12 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MDM.framework/MDM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MCMDMAppItemsDataSource.h>

@class NSSet, NSDictionary, DMFConnection, DMFFetchAppsRequest, NSArray, DMFFetchAppsResultObject, NSString;

@interface MCDMDAppPropertyShim : NSObject <MCMDMAppItemsDataSource> {

	BOOL _shouldReturnManagedAppsOnly;
	NSSet* _appsRequested;
	NSSet* _itemsRequested;
	NSDictionary* _appItems;
	DMFConnection* _deviceManagementUserConnection;
	DMFFetchAppsRequest* _request;
	NSArray* _keysForRequest;
	DMFFetchAppsResultObject* _response;

}

@property (nonatomic,copy) NSSet * appsRequested;                                         //@synthesize appsRequested=_appsRequested - In the implementation block
@property (assign,nonatomic) BOOL shouldReturnManagedAppsOnly;                            //@synthesize shouldReturnManagedAppsOnly=_shouldReturnManagedAppsOnly - In the implementation block
@property (nonatomic,copy) NSSet * itemsRequested;                                        //@synthesize itemsRequested=_itemsRequested - In the implementation block
@property (nonatomic,copy) NSDictionary * appItems;                                       //@synthesize appItems=_appItems - In the implementation block
@property (nonatomic,retain) DMFConnection * deviceManagementUserConnection;              //@synthesize deviceManagementUserConnection=_deviceManagementUserConnection - In the implementation block
@property (nonatomic,retain) DMFFetchAppsRequest * request;                               //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) NSArray * keysForRequest;                                      //@synthesize keysForRequest=_keysForRequest - In the implementation block
@property (nonatomic,retain) DMFFetchAppsResultObject * response;                         //@synthesize response=_response - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_dmdKeysToRequestToGetItems:(id)arg1 ;
+(id)_itemKeyToDMDKeyMappingTable;
-(DMFFetchAppsRequest *)request;
-(void)setResponse:(DMFFetchAppsResultObject *)arg1 ;
-(DMFFetchAppsResultObject *)response;
-(void)setRequest:(DMFFetchAppsRequest *)arg1 ;
-(void)_executeRequest;
-(NSDictionary *)appItems;
-(void)setAppsRequested:(NSSet *)arg1 ;
-(void)setShouldReturnManagedAppsOnly:(BOOL)arg1 ;
-(void)setItemsRequested:(NSSet *)arg1 ;
-(NSSet *)appsRequested;
-(BOOL)shouldReturnManagedAppsOnly;
-(NSSet *)itemsRequested;
-(void)fetchAppItems;
-(void)setAppItems:(NSDictionary *)arg1 ;
-(void)_createRequest;
-(void)_createAppItems;
-(void)_createKeysForRequest;
-(NSArray *)keysForRequest;
-(void)setKeysForRequest:(NSArray *)arg1 ;
-(DMFConnection *)deviceManagementUserConnection;
-(id)_appDictionaryFromApp:(id)arg1 ;
-(void)setDeviceManagementUserConnection:(DMFConnection *)arg1 ;
@end

