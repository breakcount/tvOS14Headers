/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/BSProtobufSchemaBuilder.h>

@class NSMutableData, NSString;

@interface BSProtobufSchema : NSObject <BSProtobufSchemaBuilder> {

	Class _rootClass;
	BSProtobufSchema* _superSchema;
	long long _fieldCount;
	long long _autotagIndex;
	BSProtobufFieldEntry* _entries;
	NSMutableData* _memoryData;
	BOOL _respondsToDidFinishProtobufDecodingWithError;
	BOOL _respondsToInitForProtobufDecoding;
	BOOL _respondsToInitProtobufTranslatorForObject;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)addField:(const char*)arg1 forTag:(long long)arg2 ;
-(void)addField:(const char*)arg1 ;
-(void)addField:(const char*)arg1 allowedClasses:(id)arg2 ;
-(void)addRepeatingField:(const char*)arg1 containsClass:(Class)arg2 ;
-(void)addRepeatingField:(const char*)arg1 containsClasses:(id)arg2 ;
-(void)addRepeatingField:(const char*)arg1 containsClass:(Class)arg2 forTag:(long long)arg3 ;
@end

