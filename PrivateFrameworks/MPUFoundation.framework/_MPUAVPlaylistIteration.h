/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface _MPUAVPlaylistIteration : NSObject <NSCoding> {
    unsigned int _count;
    unsigned int _indexToFaultIn;
    unsigned int _iterationIndex;
    MPSparseArray *_sourceContexts;
}

@property (nonatomic) unsigned int count;
@property (nonatomic) unsigned int indexToFaultIn;
@property (nonatomic) unsigned int iterationIndex;
@property (nonatomic, retain) MPSparseArray *sourceContexts;

- (void).cxx_destruct;
- (unsigned int)count;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)indexToFaultIn;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned int)iterationIndex;
- (void)setCount:(unsigned int)arg1;
- (void)setIndexToFaultIn:(unsigned int)arg1;
- (void)setIterationIndex:(unsigned int)arg1;
- (void)setSourceContexts:(id)arg1;
- (id)sourceContexts;

@end