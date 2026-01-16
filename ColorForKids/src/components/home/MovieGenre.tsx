import Image from "next/image";
import Link from "next/link";

const MovieGenre = () => {
  return (
    <div className="flex flex-col gap-20 items-center justify-center">
      <div className="grid grid-cols-2 gap-20">
        <div className="flex flex-col items-center gap-5">
          <Link href="/princess" target="_blank">
            <div className="bg-white/15 backdrop-blur-lg p-4 rounded-xl hover:shadow-2xl">
              <Image
                width={430}
                height={350}
                alt="Princess"
                className="rounded-lg drop-shadow-lg border-2 border-white"
                src="/imageheaders/princess.jpg"
              />
            </div>
            <div className="font-caveat text-5xl text-center text-white">
              Princess
            </div>
          </Link>
        </div>
        <div className="flex flex-col items-center gap-5">
          <Link href="/fairytale" target="_blank">
            <div className="bg-white/15 backdrop-blur-lg p-4 rounded-xl hover:shadow-2xl">
              <Image
                width={430}
                height={350}
                alt="Fairytale"
                className="rounded-lg drop-shadow-lg border-2 border-white"
                src="/imageheaders/fairytale.jpg"
              />
            </div>
            <div className="font-caveat text-center text-5xl text-white">
              Fairytale
            </div>
          </Link>
        </div>
        <div className="flex flex-col items-center gap-5">
          <Link href="/fantasy" target="_blank">
            <div className="bg-white/15 backdrop-blur-lg p-4 rounded-xl hover:shadow-2xl">
              <Image
                width={430}
                height={350}
                alt="Fantasy"
                className="rounded-lg drop-shadow-lg border-2 border-white"
                src="/imageheaders/fantasy.jpg"
              />
            </div>
            <div className="font-caveat text-5xl text-center text-white">
              Fantasy
            </div>
          </Link>
        </div>
        <div className="flex flex-col items-center gap-5">
          <Link href="/supernatural" target="_blank">
            <div className="bg-white/15 backdrop-blur-lg p-4 rounded-xl hover:shadow-2xl">
              <Image
                width={430}
                height={350}
                alt="Supernatural"
                className="rounded-lg drop-shadow-lg border-2 border-white"
                src="/imageheaders/supernatural.jpg"
              />
            </div>
            <div className="font-caveat text-5xl text-center text-white">
              Supernatural
            </div>
          </Link>
        </div>
        <div className="flex flex-col items-center gap-5">
          <Link href="/adventure" target="_blank">
            <div className="bg-white/15 backdrop-blur-lg p-4 rounded-xl hover:shadow-2xl">
              <Image
                width={430}
                height={350}
                alt="Adventure"
                className="rounded-lg drop-shadow-lg border-2 border-white"
                src="/imageheaders/adventure.jpg"
              />
            </div>
            <div className="font-caveat text-5xl text-center text-white">
              Adventure
            </div>
          </Link>
        </div>
        <div className="flex flex-col items-center gap-5">
          <Link href="/video-games" target="_blank">
            <div className="bg-white/15 backdrop-opacity-95 backdrop-blur-lg p-4 rounded-xl hover:shadow-2xl">
              <Image
                width={430}
                height={350}
                alt="Video Games"
                className="rounded-lg drop-shadow-lg border-2 border-white"
                src="/imageheaders/video-games.jpg"
              />
            </div>
            <div className="font-caveat text-5xl text-center text-white">
              Video Games
            </div>
          </Link>
        </div>
      </div>

      <div className="flex flex-col items-center gap-5">
        <Link href="/sports" target="_blank">
          <div className="bg-white/15 backdrop-opacity-95 backdrop-blur-lg p-4 rounded-xl hover:shadow-2xl">
            <Image
              width={430}
              height={350}
              alt="Sports"
              className="rounded-lg drop-shadow-lg border-2 border-white"
              src="/imageheaders/sports.jpg"
            />
          </div>
          <div className="font-caveat text-5xl text-center text-white">
            Sports
          </div>
        </Link>
      </div>
      <div className="pb-4" />
    </div>
  );
};

export default MovieGenre;
