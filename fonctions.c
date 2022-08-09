


// Oracle Bleu
// ChrisDev427
// 8 aout 2022

// fonctions.c

#include "fonctions.h"

void affichage(a)
{
    
    switch(a)
    {
    case 0:
        printf("\nLa Lumière\n\n");
        printf("Cette carte annonce que vous arrivez dans une période où tout va s'éclairer.\nC'est un moment révélateur, où tout se prononce sous un meilleur jour.\nLe soleil est aussi sous-entendu par cette lame.\n\n");
        break;
    case 1:
        printf("\nL'Homme\n\n");
        printf("Il est question de l'appui d'un homme à vos côtés.\nQuoi qu'il en soit un homme entrera dans votre vie pour vous soutenir en ce temps présent.\nAvis aux célibataires, la rencontre sentimentale n'est pas loin.\n\n");
        break;
    case 2:
        printf("\nLa Femme\n\n");
        printf("Tout comme la carte de l'Homme, c'est l'annonce d'une intervention d'une femme à vos côtés qui vous soutiendra.\nAvis aussi célibataires, c'est aussi la rencontre sentimentale qui va faire jour.\n\n");
        break;
    case 3:
        printf("\nL'Enfant\n\n");
        printf("La carte de l'enfant montre que vous êtes en train d'amorcer quelque chose de nouveau, c'est la fraîcheur, l'annonce qui y sont également reliées.\nC'est une première ébauche, les premières bases qui sont en train de se consolider.\nIl peut aussi être question d'une possible grossesse, ou d'un travail en relation avec les enfants.\n\n");
        break;   
    case 4:
        printf("\nLe Travail\n\n");
        printf("C'est par le travail que vous obtiendrez gain de cause.\nForcément, cette lame parle du travail, des efforts à accomplir, d'une certaine activité professionnelle.\nPar le travail également vous pourrez espérer une amélioration positive de votre train de vie.\n\n");
        break;
    case 5:
        printf("\nLes Nouvelles\n\n");
        printf("Cette lame annonce l'arrivée généralement imminente de nouvelles que vous attendiez ou non.\nElle peut prendre la forme d'un courrier, d'un appel, d'un mail...\nLa période de communication est propice, demandez et vous saurez.\n\n");
        break;
    case 6:
        printf("\nL'Amour\n\n");
        printf("Cette carte dessinée reflète la sensualité, l'amour, le rapprochement physique.\nIci, il est question d'une rencontre sentimentale forte, mais où le physique peut primer.\nC'est quelque chose de très fort qui s'annonce.\nIl peut être aussi question d'une rencontre sentimentale, ou d'un rapprochement du couple, le but est de ne faire qu’un.\n\n");
        break;  
    case 7:
        printf("\nLe Temple\n\n");
        printf("Cette lame aux reflets de repli sur soi annonce une période de réflexion, de méditation, d'un certain besoin de réfléchir à certains événements passés.\nCe temps net de recul sera nécessaire pour faire avancer certaines choses et ainsi aborder l'avenir avec plus de sérénité.\nC'est aussi le lieu d'un endroit clos, où peut régner le silence : Hôpital, lieu de culte.\n\n");
        break;
    case 8:
        printf("\nLe Patriarche\n\n");
        printf("Vue l'ampleur de cet éléphant incarnant le Patriarche vous pourrez compter sur l'aide et l'appui d'une personne importante, pour ne pas dire imposante aux vues de sa situation tant pour vous que pour les autres.\nAttention, cet éléphant peut vous aider comme vous poser un obstacle important à ce que vous souhaitiez entreprendre.\nL'Obstacle peut être aussi en vous : manque de confiance, mauvaises pensées.\n\n");
        break; 
    case 9:
        printf("\nLes Autres\n\n");
        printf("La période sera marquée par de nombreux échanges avec les autres.\nC'est une période qui sera marquée donc par la communication, l'ouverture.\n\n");
        break;
    case 10:
        printf("\nL'Arbre de vie\n\n");
        printf("Ce que vous aviez entrepris est en train de mûrir.\nVos efforts sont à quelques pas de se voir concrétiser et réaliser.\nVous avez laissé le temps faire, et vous pourrez donc récolter le fruit de vos efforts.\nC'est le temps de la maturité, de la construction.\nL'Arbre aussi est à relier avec la famille : le bonheur est présent puisque l'Arbre regorge de vie.\n\n");
        break;     
    case 11:
        printf("\nLe Conquérant\n\n");
        printf("Tel Robin des Bois, ça sera à vous de vous lancer, de conquérir un espace.\nFaites des efforts, allez-y, combattez et vous réussirez.\nLa Force doit être douce et non violente pour vous apporter ce que vous attendez.\n\n");
        break;
    case 12:
        printf("\nLa Stérilité\n\n");
        printf("Vous vous retrouvez enfermé(e), bloqué(e).\nVous avez la sensation de stagner.\nLa route de votre avenir se trouve obstruée et vous ne trouvez plus la lumière et peut-être aussi l'envie vous manque.\nUn sentiment de lassitude est bien présent.\nVous vous retrouvez dans un temps passif.\n\n");
        break;
    case 13:
        printf("\nLa Transformation\n\n");
        printf("Vous arrivez dans une impasse, c'est la fin de quelque chose.\nEn réalisant que vous êtes arrivée à la fin,\nvous pourrez entreprendre les démarches suffisantes pour aborder un nouveau chapitre de votre histoire.\n\n");
        break;
    case 14:
        printf("\nLa Révolution\n\n");
        printf("Il va falloir oser, franchir certaines limites que vous vous étiez fixé(e).\nVous pourrez en être surpris(e),\nmais ce moment précis de votre vie pourra vous ouvrir des opportunités insoupçonnées.\n\n");
        break;   
    case 15:
        printf("\nLe Pouvoir\n\n");
        printf("Le jeu de miroir implique une relation à l'autre qui peut s'avérer illusoire.\nUne attraction forte s'exerce,\nce n'est que sur un temps précis, uniquement par le physique, par cette relation première et non révélée sur quelque chose de profond et de durable dans l'avenir.\nVous vous sentez bousculé(e), troublé(e) par quelque chose qui vous tombe presque dessus.\n\n");
        break;
    case 16:
        printf("\nL'Illusion\n\n");
        printf("Comme son nom l'indique il est question de retour de médaille : vous vous êtes trompé(e) ou on vous a trompé.\nLa période est marquée par une désillusion nécessaire.\nVous vous êtes concentré(e) trop sur vous-même et il est temps de le comprendre.\nCette mise en compréhension vous apportera des doutes, vous serez déstabilisé(e) mais c'est nécessaire pour votre remise en question profonde.\nVous avez regardé la première face du cube. La superficialité peut être aussi sous entendue.\n\n");
        break;
    case 17:
        printf("\nL'Espoir\n\n");
        printf("Cette lame peut vous apporter une certaine protection et une remise en espoir si vous étiez déçu(e).\nLâchez prise, laissez vous aller, vous serez guidé(e) par une petite voix intérieure.\nL'Avenir s'annonce meilleur.\nNe cherchez pas à tout contrôler.\n\n");
        break;  
    case 18:
        printf("\nLa Gestation\n\n");
        printf("Cette carte annonce fatalement une mise en route de quelque chose.\nLa consultante peut espérer aussi une grossesse.\nC'est une période où tout est en train de s'installer progressivement, à son propre rythme.\n\n");
        break;
    case 19:
        printf("\nLe Mariage Céleste\n\n");
        printf("La dualité est ici en question : c'est principalement l'annonce d'un mariage, d'une collaboration, d'une association...\nC'est la réunion de deux partenaires (minimum pour la collaboration).\nVous reliez votre destin à quelqu'un d’autre.\n\n");
        break; 
    case 20:
        printf("\nLe Choix\n\n");
        printf("Fatalement comme le fait comprendre cette lame il vous faudra faire un choix.\nA vous de faire le meilleur choix à faire en évaluant suffisamment les pistes qui vous sont offertes.\nUne période de changements pour l'avenir peut arriver.\n\n");
        break;
    case 21:
        printf("\nLes Festivités\n\n");
        printf("Un moment délicieux se présente : la fête, les réunions autour d'une table, le moment à partager ensemble.\nLa vie sociale se trouve ainsi favorisée.\n\n");
        break;
    case 22:
        printf("\nLe Message\n\n");
        printf("Cette carte est assez difficile à cerner puisque plusieurs sens sont possibles et à envisager dans la réponse à votre question.\nC'est une période où vous trouverez des réponses à vos questions.\nMais aussi la possibilité qu'une personne parle en votre nom (médiateur) ou qu'une personne vous apporte des conseils à écouter : comme votre voix intérieure !\nSoyez plus à son écoute.\n\n");
        break;
    case 23:
        printf("\nL'Abondance\n\n");
        printf("La période s'annonce fructueuse et prospère.\nLe Ciel vous aide, rendez-le lui bien.\nC'est une période propice à tout gain matériel ou immatériel.\n\n");
        break;   
    case 24:
        printf("\nL'Attachement\n\n");
        printf("Vous serez en compagnie d'une personne qui vous aidera.\nLa ressemblance est en question : ressemblance physique ou mentale.\nLe principe est de calquer une même situation sur une autre.\nIl est donc peut-être prudent de s'interroger sur ce besoin de reproduire le même schéma.\nCet attachement peut s'avérer néfaste.\n\n");
        break;
    case 25:
        printf("\nLe Sacrifice\n\n");
        printf("Cette lame est difficile à voir.\nLe consultant est généralement assez stressé par cette lame qui représente le sacrifice.\nCe dont il est question est donc teinté de façon négative.\nIl est donc question d'un sacrifice à faire, de renoncer à quelque chose.\nÇa peut être aussi le retour de bâton.\nL'événement présent risque d'être difficile pour le consultant.\nLe couteau représenté peut aussi être interprété dans le sens d'une coupure, d'une blessure ou aussi d'un acte chirurgicale.\n\n");
        break;
    case 26:
        printf("\nLa Convoitise\n\n");
        printf("La jalousie est un mauvais défaut !\nQuelque chose vous perturbe, la séduction peut être de mise.\nLe corps est aussi révélateur d'un but à atteindre.\nQuelque chose que vous aimeriez atteindre est donc symbolisé par cette carte.\n\n");
        break;  
    case 27:
        printf("\nLes Etudes\n\n");
        printf("Il s'agit de quelque chose d'écrit et/ou d'intellectuel.\nLa période sera marquée par un intense travail et aussi par des papiers à remplir.\n\n");
        break;
    case 28:
        printf("\nLa Loi\n\n");
        printf("La branche du juridique est présente.\nIl peut être question d'une personne qui incarne la Justice : l'avocat, l'huissier, le juge ou d'une procédure judiciaire qui est en train de s'amorcer.\nVérifiez vos comptes et toutes les actions commises puisqu'il peut aussi être question d'un retour de bâton.\nCe que vous avez fait de mal dans le passé peut se retourner contre vous.\n\n");
        break; 
    case 29:
        printf("\nLes Intrigues\n\n");
        printf("Il va falloir vous méfier, porter plus d'attention à quelque chose de louche.\nMontrez-vous davantage prudent(e).\nNe faites pas trop vite confiance au risque d'en subir les conséquences.\nLe caché, le dissimulé, l'ombre peuvent vous apporter quelques ennuis.\nFaites le ménage.\nAttention aux faux amis.\n\n");
        break;
    case 30:
        printf("\nLa Maison\n\n");
        printf("Le domicile tel quel ou un lieu fermé sont ici représentés.\nD'un autre point de vue cette carte peut aussi parler de votre moi intérieur.\nUn événement en relation avec un lieu physique ou concernant votre moi sera à l'ordre du jour.\n\n");
        break;     
    case 31:
        printf("\nL'Inspiration\n\n");
        printf("Cette lame est très positive puisqu'elle inspire l'harmonie, la beauté.\nTout va bien dans le meilleur des mondes.\nVous ne pourriez pas espérer mieux.\nLa période est très positive pour vous et vous apportera des événements positifs.\nVous vous sentez bien et cela se voit !\n\n");
        break;
    case 32:
        printf("\nL'Indécision\n\n");
        printf("Comme il est suggéré vous arrivez dans une période marquée par le doute, l'indécision.\nVous ne savez plus trop où vous êtes et aussi vers quoi vous vous dirigez.\nIl faut faire le point et savoir si ce qui vous arrive en ce moment même vous apporte la satisfaction que vous espériez avant.\n\n");
        break;
    case 33:
        printf("\nLe Guide\n\n");
        printf("Une personne qui sera payée pour vous apportera les conseils adéquats suivant votre situation.\nCes conseils pourront être d'ordre judiciaires, administratifs, ou relatifs à votre santé.\nCette personne pourra avoir un impact positif dans votre vie par ces conseils judicieux.\n\n");
        break;
    case 34:
        printf("\nLes Changements\n\n");
        printf("Il est question de transformations dans votre vie par des changements avec des répercussions sur votre avenir (principalement déménagement, mutation...)\nLes changements peuvent être rapides (les mois à venir : dans ce cas utilisez les cartes des saisons).\nFaites le point.\n\n");
        break;   
    case 35:
        printf("\nLes Voyages\n\n");
        printf("La période sera marquée par des mouvements, des déplacements, des voyages.\nIl peut aussi être question de voyages astraux et de votre imagination féconde.\nIl vous est aussi conseillé de préciser cette carte à l'aide des saisons qui vous apportera une précision temporelle et pour la destination.\n\n");
        break;
    case 36:
        printf("\nL'Ame soeur\n\n");
        printf("L'amour est principalement représenté,\nla relation sentimentale est très forte, ou la relation amicale est fondée sur des sentiments de fidélité et d'amitié très présents.\nIl peut aussi désigner un couple qui a des bases très bonnes pour son avenir en commun.\nEgalement, nous pouvons interpréter cette carte dans un thème autre qu'amour à savoir le professionnel à travers une collaboration bien pensée.\nMais où aussi l'Amour peut se mêler au travail.\n\n");
        break;
    case 37:
        printf("\nLa Sérénité\n\n");
        printf("Le calme, la douceur, la sérénité sont ici présents.\nAprès avoir bien pensé, bien réfléchi le temps peut être venu de vous lancer.\n\n");
        break;  
    case 38:
        printf("\nLa Santé\n\n");
        printf("Si vous rencontriez des problèmes de santé vous pouvez espérer la guérison si vous suiviez bien les conseils de votre médecin traitant.\nDans tous les cas une amélioration de votre santé est bien présente par une équipe médicale compétente.\nVous retrouverez une certaine vitalité après des problèmes de santé plus ou moins gênants.\nSoyez bien entouré(e)s pour vous soigner même si ça peut vous paraître lourd.\n\n");
        break;
    case 39:
        printf("\nLa Perturbation\n\n");
        printf("Cette lame n'est généralement pas très positive puisque le jeune homme ici dessiné n'a pas l'air très sympathique.\nIl y a des obstacles à prévoir.\nIl peut aussi être question d'une perte de vitalité.\nIl y a des contraintes, des événements que vous ne pouviez peut-être pas prévoir.\nLe sang sur le t-shirt troué du monsieur peut vous parler aussi de méfiance, de prudence au niveau d'une possible agression, d'un accident.\nRien ne va se passer comme prévu.\nCe n'est pas pour autant une catastrophe à prévoir, mais prenez les devants pour vous protéger quoi qu'il arrive.\nDes complications sont donc prévisibles.\n\n");
        break;    
    case 40:
        printf("\nLe Désert\n\n");
        printf("Vous vous trouvez dans une impasse, vous êtes bloqué(e).\nCette impasse peut être provoquée par des erreurs du passé.\nVous êtes confrontée à un manque de communication, à un silence qui vous pèse.\nUne remise en question est possible\n\n");
        break;
    case 41:
        printf("\nL'Initié\n\n");
        printf("Un bouleversement très positif est ici possible.\nVous pouvez trouver une certaine notoriété.\nUn événement encore un peu mystérieux va se produire.\nVous serez récompensé d'un travail passé.\n\n");
        break;
    case 42:
        printf("\nLa Bienveillante\n\n");
        printf("Ici un personnage féminin se trouve symbolisé.\nCe personnage féminin est généralement votre maman, ou d'une personne qui incarne la maternité, la bienveillance, l'amour.\nUne personne qui vous aide au quotidien et vous apporte son soutien en toutes circonstances.\nVous pourrez donc espérer une protection de cette personne féminine.\n\n");
        break;
    case 43:
        printf("\nLe Commerce\n\n");
        printf("L'argent se trouve ici sollicité.\nIl s'agit généralement d'une transaction financière, ou du commerce au sens large.\n\n");
        break;   
    case 44:
        printf("\nLa Progression\n\n");
        printf("Vous avez toutes les chances de voir votre situation présente s'améliorer.\nVous vous dirigez vers les sommets des pyramides avant d'atteindre le Nirvana sans doute.\n\n");
        break;
    case 45:
        printf("\nLa Séparation\n\n");
        printf("La séparation peut être temporaire (éloignement non permanent) comme peut être définitive par une rupture sentimentale.\nCette rupture peut être causée par des disputes trop fréquentes.\nEn tout cas la distance est ici vue comme un obstacle.\n\n");
        break;
    case 46:
        printf("\nLa Fidélité\n\n");
        printf("Vous pourrez compter sur l'aide, le soutien, l'appui d'une personne qui fera preuve de beaucoup de fidélité pour vous.\nRemerciez cette personne quand le temps sera venu.\n\n");
        break;  
    case 47:
        printf("\nLe Chagrin\n\n");
        printf("Les larmes de ces personnages ne sont pas signe de bonne augure.\nLes larmes peuvent être de tristesse ou causées par un gros chagrin entraînant une déception grande.\nIl faudra vous relever d'un événement qui vous causera beaucoup de peine.\n\n");
        break;
    case 48:
        printf("\nLe Notaire\n\n");
        printf("Il est ici question de tout ce qui se relie à la loi : il peut donc s'agir d'une signature d'un contrat.\nIl est donc question d'une régularisation aux yeux de la loi.\n\n");
        break; 
    case 49:
        printf("\nLes Arts\n\n");
        printf("Comme ce titre de cette lame l'indique les Arts sont aussi symbolisés.\nVotre côté artistique ressortira.\nDes projets artistiques, culturels vont naître.\n\n");
        break;
    case 50:
        printf("\nLa Ville\n\n");
        printf("La Ville représente l'activité, l'intensité etc.\nIl peut s'agir également d'un endroit ciblé incarnant les pouvoirs de votre ville : la mairie ou tout autre bâtiment de votre ville.\n\n");
        break;     
    case 51:
        printf("\nLa Campagne\n\n");
        printf("Vous devez sans doute ressentir un besoin net de vous mettre au vert\nDe respirer et de prendre du recul.\nCette lame symbolise aussi tout autre secteur se reliant à la nature c'est à dire par les métiers, par les espaces reliés à la nature.\n\n");
        break;
    case 52:
        printf("\nLa Mer\n\n");
        printf("La Mer indique que vous serez au bord de la mer pendant vos vacances, ou d'une personne habitant près de la mer.\nTous les endroits pourvus d'eau sont aussi possiblement à interpréter.\n\n");
        break;
    case 53:
        printf("\nLa Montagne\n\n");
        printf("Vous avez besoin de prendre du recul, des vacances. Un endroit aux reliefs montagneux est ici représenté.\n\n");
        break;
    case 54:
        printf("\nLe Printemps\n\n");
        printf("Cette lame est utilisée pour cibler une saison.\nDans un autre cas de figure,\ncette carte dans votre jeu peut aussi indiquer que c'est une période florissante, enrichissante.\n\n");
        break;   
    case 55:
        printf("\nL'Eté\n\n");
        printf("La période de l'été est représentée ou sinon il s'agit de réchauffer votre coeur,\nvotre vie conjugale ou de partir en vacances.=\n\n");
        break;
    case 56:
        printf("\nL'Automne\n\n");
        printf("L'Automne est ici en question.\nAuquel cas, l'Automne indique qu'il est peut être temps de raviver la flamme dans votre couple qui s'est légèrement essoufflée.\nComme pour la Fable de la Fontaine, il peut vous être indiqué de faire des économies.\n\n");
        break;
    case 57:
        printf("\nL'Hiver\n\n");
        printf("L'Hiver est suggéré.\nSinon, l'Hiver est synonyme de relations gelées, d'arrêt, de période glacée qu'il serait bien de réchauffer.\n\n");
        break;  
    case 58:
        printf("\nLa Duplication\n\n");
        printf("Les Autres sont ici présents.\nLa foule, le monde sont ici présentés. Le succès peut être au rendez-vous.\nLa Duplication indique aussi que vous essayez d'être partout à la fois.\nSachez-vous reposer.\n\n");
        break;
    case 59:
        printf("\nLe Cadeau\n\n");
        printf("Il vous sera fait un cadeau, un présent.\n\n");
        break; 
    case 60:
        printf("\nLa Jeune Fille\n\n");
        printf("Une jeune fille peut intervenir dans votre vie.\nSinon, la jeune fille symbolise également la fraîcheur, la nouveauté.\n\n");
        break;
    case 61:
        printf("\nLe Jeune Homme\n\n");
        printf("Comme la lame 60, le jeune homme peut avoir un rôle à jouer dans votre vie.\nOu, il peut aussi symboliser le côté débrouillardise.\n\n");
        break;
    case 62:
        printf("\nL'Eau\n\n");
        printf("Vous êtes à fleur de peau.\nVotre intuition semble se réveiller, la période est propice aux contacts avec l'au-delà et pour la communication avec votre Ange Gardien.\nL'Eau est aussi le symbole des signes astrologiques relatifs à l’eau.\n\n");
        break;
    case 63:
        printf("\nL'Air\n\n");
        printf("L'Air montre une période relative à la communication.\nVous serez aidé(e) dans vos échanges avec les autres.\nL'Air aussi incarne certains signes astrologiques.\n\n");
        break;   
    case 64:
        printf("\nLa Terre\n\n");
        printf("La Terre annonce que vous êtes en toute possession de vos moyens pour bâtir votre nouveau projet.\nLa Terre représente également certains signes astrologiques.\n\n");
        break;
    case 65:
        printf("\n Le Feu\n\n");
        printf("La période sera marquée par le feu dont l'activité intense.\nLe Feu représente aussi certains signes astrologiques.\n\n");
        break;
    case 66:
        printf("\nLe Monde Effondré\n\n");
        printf("Cette lame là n'est pas spécialement positive.\nElle indique que le consultant ou la consultante est dans une période où il ou elle repart à zéro après un projet qui a été ruiné.\nLe moment est donc à l'élaboration d'un nouveau projet.\nLa déception peut être présente, mais le temps arrange toujours les choses.\n Le/la consultant(e) a donc besoin de reprendre confiance en l'avenir pour élaborer quelque chose de nouveau.\n\n");
        break;  
    case 67:
        printf("\nLe Monde Minéral\n\n");
        printf("La période est en train de se concrétiser petit à petit,\noù tout est en train de se rassembler et de constituer quelque chose.\n\n");
        break;
    case 68:
        printf("\nLe Monde Végétal\n\n");
        printf("Vous êtes en période où vous êtes à fleur de peau.\nLa sensibilité est bien présente.\nLa période sera propice pour vous à de nouvelles choses positives.\nDe bonnes nouvelles arrivent.\n\n");
        break; 
    case 69:
        printf("\nLe Monde Animal\n\n");
        printf("Tel un animal vous avez envie de liberté, de vivre sans fatalement avoir des limites.\nL'épicurisme peut en être un synonyme.\n\n");
        break;
    case 70:
        printf("\nLe Premier Pas\n\n");
        printf("Cette lame peut être prise au sens propre à savoir qu'il sera question de marche,\nde voyage, de randonnées ... tout sport de la sorte.\nOu au contraire il peut être question d'un nouveau départ,\nd'une impulsion à donner pour démarrer un nouveau chapitre de votre vie.\n\n");
        break;     
    case 71:
        printf("\nLa Nuit\n\n");
        printf("Le voile tombe et la lumière s'est éteinte.\nC'est souvent synonyme de la fin de quelque chose.\nLa Nuit peut être aussi à prendre en compte dans votre interprétation.\n\n");
        break;
    case 72:
        printf("\nL'Elévation\n\n");
        printf("Cette lame est très forte dans le domaine spirituel.\nVous pouvez compter sur la protection des Esprits hauts.\nVotre vie spirituelle est nourrie et très positive.\nVous arrivez dans un nouvel élan spirituel.\nVotre âme se nourrit de vos enseignements spirituels qu'il faut pousser.\nVous avez de belles prédispositions.\nUne épreuve karmique peut survenir, mais vous vous en sentirez grandi(e).\n\n");
        break;
    
    
    default:
        printf("Le numéro que vous avez entré n'est pas valide ! ");
        
        break;
    }

}