/*
 * asclite
 * Author: Jerome Ajot, Nicolas Radde, Chris Laprun
 *
 * This software was developed at the National Institute of Standards and Technology by
 * employees of the Federal Government in the course of their official duties.  Pursuant to
 * Title 17 Section 105 of the United States Code this software is not subject to copyright
 * protection within the United States and is in the public domain. asclite is
 * an experimental system.  NIST assumes no responsibility whatsoever for its use by any party.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS."  With regard to this software, NIST MAKES NO EXPRESS
 * OR IMPLIED WARRANTY AS TO ANY MATTER WHATSOEVER, INCLUDING MERCHANTABILITY,
 * OR FITNESS FOR A PARTICULAR PURPOSE.
 */

#ifndef ALIGNED_SEGMENT_ITERATOR_H
#define ALIGNED_SEGMENT_ITERATOR_H

#include "stdinc.h"
#include "segment.h"
#include "alignedspeech.h"
#include "speech.h"

class AlignedSegmentIterator
{
	private:
		map<Segment*, AlignedSegment*>::iterator m_current, m_end;
	
	public:
		AlignedSegmentIterator(AlignedSpeech* alignedSpeech);
		~AlignedSegmentIterator() {}
		bool Current(AlignedSegment** current); 
};

#endif