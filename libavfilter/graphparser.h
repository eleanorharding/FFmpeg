/*
 * Filter graph parser
 * copyright (c) 2007 Bobby Bingham
 *
 * This file is part of FFmpeg.
 *
 * FFmpeg is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * FFmpeg is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with FFmpeg; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef FFMPEG_GRAPHPARSER_H
#define FFMPEG_GRAPHPARSER_H

#include "avfilter.h"
#include "avfiltergraph.h"

/**
 * Add to a graph a graph described by a string.
 * @param graph   the filter graph where to link the parsed graph context
 * @param filters string to be parsed
 * @param in      input to the graph to be parsed (TODO: allow several)
 * @param inpad   pad index of the input
 * @param in      output to the graph to be parsed (TODO: allow several)
 * @param inpad   pad index of the output
 * @return        zero on success, -1 on error
 */
int avfilter_graph_parse_chain(AVFilterGraph *graph, const char *filters, AVFilterContext *in, int inpad, AVFilterContext *out, int outpad);

#endif  /* FFMPEG_GRAPHPARSER_H */
