import { GoArrowDown } from "react-icons/go";

const Subheader = () => {
  return (
    <div className="flex flex-col w-screen text-6xl text-white font-caveat text-center">
      <div className="flex flex-col w-screen text-3xl text-center justify-center items-center gap-5">
        <div>
          <span className="italic font-extrabold">
            Looking for printable coloring pages from{" "}
            <span className="font-extrabold animate-[pulse_6s_ease-in-out_infinite]">
              {" "}
              your favorite movies?
            </span>{" "}
          </span>{" "}
          Look no further!
        </div>
        <div>
          With ColorForKids, simply <span className="italic">click</span> on the
          genre of your choice and find your perfect coloring sheet.
        </div>
        <div>Scroll down to discover more!</div>
        <GoArrowDown className="flex text-9xl animate-bounce pt-4" />
      </div>
    </div>
  );
};

export default Subheader;
