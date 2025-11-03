# The content this workshop was based on:

The ASan paper: https://www.usenix.org/system/files/conference/atc12/atc12-final39.pdf (also in this repo as [ASanPaper.pdf])
The (Old) ASan Github Wiki that fills in some gaps: https://github.com/google/sanitizers/wiki/addresssanitizer
- I hinted that [the bit on use-after-return](https://github.com/google/sanitizers/wiki/AddressSanitizerExampleUseAfterReturn) is interesting, it is!
- A fun exercise to practice understanding - look at the generated assembly for a simple program with ASan, and see how it instrumented the loads and stores. Try to figure out the actual number ASan uses for the offset on your machine by comparing the code with the code from the slides!


# Other links:
The slides I used: [ASanInternalsSlides.pdf]
The recording of this talk: Not available yet, but will be linked here soon™️. It'll also be posted 1on the LUG Discord!
