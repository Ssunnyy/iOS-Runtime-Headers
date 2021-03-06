/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLMeshBufferData : NSObject <MDLMeshBuffer> {
    <MDLMeshBufferAllocator> *_allocator;
    NSMutableData *_data;
    unsigned int _length;
    unsigned int _type;
    MDLMeshBufferZoneDefault *_zone;
    MDLMeshBufferZoneDefault *_zoneDefault;
}

@property (nonatomic, readonly, retain) <MDLMeshBufferAllocator> *allocator;
@property (nonatomic, readonly, retain) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) unsigned int length;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int type;
@property (nonatomic, readonly, retain) <MDLMeshBufferZone> *zone;

- (void).cxx_destruct;
- (id)allocator;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)dealloc;
- (void)fillData:(id)arg1 offset:(unsigned int)arg2;
- (id)initWithLength:(unsigned int)arg1 data:(id)arg2 allocator:(id)arg3 zone:(id)arg4;
- (id)initWithType:(unsigned int)arg1 data:(id)arg2;
- (id)initWithType:(unsigned int)arg1 length:(unsigned int)arg2;
- (unsigned int)length;
- (id)map;
- (unsigned int)type;
- (id)zone;

@end
