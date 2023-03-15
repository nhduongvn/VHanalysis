#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_dPhi_17()
{
//=========Macro generated from canvas: ROC_Z_dPhi_17/ROC_Z_dPhi_17
//=========  (Tue Jan 24 15:01:27 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_dPhi_17 = new TCanvas("ROC_Z_dPhi_17", "ROC_Z_dPhi_17",0,0,600,600);
   ROC_Z_dPhi_17->SetHighLightColor(2);
   ROC_Z_dPhi_17->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Z_dPhi_17->SetFillColor(0);
   ROC_Z_dPhi_17->SetBorderMode(0);
   ROC_Z_dPhi_17->SetBorderSize(2);
   ROC_Z_dPhi_17->SetGridx();
   ROC_Z_dPhi_17->SetGridy();
   ROC_Z_dPhi_17->SetLeftMargin(0.15709);
   ROC_Z_dPhi_17->SetRightMargin(0.1234783);
   ROC_Z_dPhi_17->SetBottomMargin(0.12);
   ROC_Z_dPhi_17->SetFrameBorderMode(0);
   ROC_Z_dPhi_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx366[120] = {
   0,
   0.007854147,
   0.01726721,
   0.02761827,
   0.03542626,
   0.04435551,
   0.05445686,
   0.06388167,
   0.07378961,
   0.08459532,
   0.09571311,
   0.1066478,
   0.1176842,
   0.1308907,
   0.1423995,
   0.1576372,
   0.1721552,
   0.1837472,
   0.2011881,
   0.2166079,
   0.2289068,
   0.2418358,
   0.2546243,
   0.2660854,
   0.2774586,
   0.2861284,
   0.297313,
   0.3068862,
   0.3154488,
   0.3254716,
   0.335557,
   0.3436033,
   0.3517976,
   0.3606073,
   0.3696183,
   0.3773467,
   0.3866185,
   0.3957656,
   0.4053469,
   0.4125367,
   0.4205624,
   0.4284155,
   0.4367933,
   0.4457255,
   0.4543267,
   0.4622169,
   0.4671534,
   0.4751177,
   0.4831542,
   0.4921474,
   0.5015955,
   0.5088063,
   0.5170534,
   0.5269795,
   0.535846,
   0.5427465,
   0.5502625,
   0.5576337,
   0.5661457,
   0.576774,
   0.5855801,
   0.5952869,
   0.6044182,
   0.6156499,
   0.6247196,
   0.6327808,
   0.6401832,
   0.6508005,
   0.6608201,
   0.669367,
   0.6807399,
   0.6919782,
   0.7005011,
   0.711863,
   0.7225671,
   0.7334189,
   0.743434,
   0.7537727,
   0.7658082,
   0.7806763,
   0.792544,
   0.8032188,
   0.8157456,
   0.8306473,
   0.8432528,
   0.8526698,
   0.8670766,
   0.8787657,
   0.8936089,
   0.9089678,
   0.9203264,
   0.9422781,
   0.9575864,
   0.9779035,
   0.9959425,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_fy366[120] = {
   0,
   0.009756311,
   0.0155245,
   0.02499736,
   0.03392902,
   0.04128266,
   0.04949931,
   0.05794518,
   0.06436007,
   0.07371826,
   0.08374865,
   0.09531305,
   0.1086391,
   0.1186615,
   0.1333305,
   0.1450653,
   0.1594676,
   0.1731477,
   0.1855676,
   0.1995637,
   0.2124879,
   0.2255952,
   0.2388797,
   0.2519154,
   0.266398,
   0.2754517,
   0.2867665,
   0.3037151,
   0.3192753,
   0.3366695,
   0.349522,
   0.3639267,
   0.375627,
   0.3909456,
   0.4047904,
   0.4174772,
   0.42989,
   0.4420831,
   0.4522298,
   0.4622723,
   0.4748458,
   0.4864421,
   0.4986852,
   0.5066489,
   0.5174833,
   0.5269349,
   0.5382965,
   0.551015,
   0.5639115,
   0.5713822,
   0.5822556,
   0.5900112,
   0.6012312,
   0.6090864,
   0.6179499,
   0.6269632,
   0.635845,
   0.6448271,
   0.6547681,
   0.6636454,
   0.6733282,
   0.680808,
   0.6924804,
   0.7011448,
   0.7117385,
   0.7200199,
   0.7318985,
   0.7398106,
   0.7483539,
   0.7556024,
   0.7657248,
   0.7751805,
   0.7860227,
   0.7939642,
   0.8019136,
   0.8132318,
   0.8211764,
   0.8358718,
   0.8442211,
   0.8523921,
   0.8626788,
   0.874289,
   0.8828579,
   0.8927018,
   0.9002545,
   0.9070529,
   0.916921,
   0.9262805,
   0.9361834,
   0.9451982,
   0.9558378,
   0.9656322,
   0.9743962,
   0.9873609,
   0.9956386,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   TGraph *graph = new TGraph(120,Graph_fx366,Graph_fy366);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Only");
   graph->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph366 = new TH1F("Graph_Graph366","Tagging Only",120,0,1.1);
   Graph_Graph366->SetMinimum(0);
   Graph_Graph366->SetMaximum(1.1);
   Graph_Graph366->SetDirectory(0);
   Graph_Graph366->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph366->SetLineColor(ci);
   Graph_Graph366->GetXaxis()->SetLabelFont(42);
   Graph_Graph366->GetXaxis()->SetTitleOffset(1);
   Graph_Graph366->GetXaxis()->SetTitleFont(42);
   Graph_Graph366->GetYaxis()->SetLabelFont(42);
   Graph_Graph366->GetYaxis()->SetTitleFont(42);
   Graph_Graph366->GetZaxis()->SetLabelFont(42);
   Graph_Graph366->GetZaxis()->SetTitleOffset(1);
   Graph_Graph366->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph366);
   
   TLatex *   tex = new TLatex(0.05445686,0.1094993,"0.216666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(367);
      tex = new TLatex(0.06388167,0.1179452,"0.25");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(368);
      tex = new TLatex(0.07378961,0.1243601,"0.283333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(369);
      tex = new TLatex(0.08459532,0.1337183,"0.316666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(370);
      tex = new TLatex(0.09571311,0.1437487,"0.35");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(371);
      tex = new TLatex(0.1066478,0.155313,"0.383333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(372);
      tex = new TLatex(0.1176842,0.1686391,"0.416666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(373);
      tex = new TLatex(0.1308907,0.1786615,"0.45");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(374);
      tex = new TLatex(0.1423995,0.1933305,"0.483333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(375);
      tex = new TLatex(0.1576372,0.2050653,"0.516666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(376);
      tex = new TLatex(0.1721552,0.2194676,"0.55");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(377);
      tex = new TLatex(0.1837472,0.2331477,"0.583333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(378);
      tex = new TLatex(0.2011881,0.2455676,"0.616666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(379);
      tex = new TLatex(0.2166079,0.2595637,"0.65");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(380);
      tex = new TLatex(0.2289068,0.2724879,"0.683333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(381);
      tex = new TLatex(0.2418358,0.2855952,"0.716666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(382);
      tex = new TLatex(0.2546243,0.2988797,"0.75");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(383);
      tex = new TLatex(0.2660854,0.3119154,"0.783333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(384);
      tex = new TLatex(0.2774586,0.326398,"0.816666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(385);
      tex = new TLatex(0.2861284,0.3354517,"0.85");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(386);
      tex = new TLatex(0.297313,0.3467665,"0.883333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(387);
      tex = new TLatex(0.3068862,0.3637151,"0.916666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(388);
      tex = new TLatex(0.3154488,0.3792753,"0.95");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(389);
      tex = new TLatex(0.3254716,0.3966695,"0.983333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(390);
      tex = new TLatex(0.335557,0.409522,"1.01666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(391);
      tex = new TLatex(0.3436033,0.4239267,"1.05");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(392);
      tex = new TLatex(0.3517976,0.435627,"1.08333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(393);
      tex = new TLatex(0.3606073,0.4509456,"1.11666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(394);
      tex = new TLatex(0.3696183,0.4647904,"1.15");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(395);
      tex = new TLatex(0.3773467,0.4774772,"1.18333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(396);
      tex = new TLatex(0.3866185,0.48989,"1.21666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(397);
      tex = new TLatex(0.3957656,0.5020831,"1.25");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(398);
      tex = new TLatex(0.4053469,0.5122298,"1.28333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(399);
      tex = new TLatex(0.4125367,0.5222723,"1.31666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(400);
      tex = new TLatex(0.4205624,0.5348458,"1.35");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(401);
      tex = new TLatex(0.4284155,0.5464421,"1.38333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(402);
      tex = new TLatex(0.4367933,0.5586852,"1.41666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(403);
      tex = new TLatex(0.4457255,0.5666489,"1.45");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(404);
      tex = new TLatex(0.4543267,0.5774833,"1.48333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(405);
      tex = new TLatex(0.4622169,0.5869349,"1.51666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(406);
      tex = new TLatex(0.4671534,0.5982965,"1.55");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(407);
      tex = new TLatex(0.4751177,0.611015,"1.58333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(408);
      tex = new TLatex(0.4831542,0.6239115,"1.61666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(409);
      tex = new TLatex(0.4921474,0.6313822,"1.65");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(410);
      tex = new TLatex(0.5015955,0.6422556,"1.68333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(411);
      tex = new TLatex(0.5088063,0.6500112,"1.71666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(412);
      tex = new TLatex(0.5170534,0.6612312,"1.75");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(413);
      tex = new TLatex(0.5269795,0.6690864,"1.78333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(414);
      tex = new TLatex(0.535846,0.6779499,"1.81666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(415);
      tex = new TLatex(0.5427465,0.6869632,"1.85");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(416);
      tex = new TLatex(0.5502625,0.695845,"1.88333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(417);
      tex = new TLatex(0.5576337,0.7048271,"1.91666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(418);
      tex = new TLatex(0.5661457,0.7147681,"1.95");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(419);
      tex = new TLatex(0.576774,0.7236454,"1.98333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(420);
      tex = new TLatex(0.5855801,0.7333282,"2.01666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(421);
      tex = new TLatex(0.5952869,0.740808,"2.05");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(422);
      tex = new TLatex(0.6044182,0.7524804,"2.08333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(423);
      tex = new TLatex(0.6156499,0.7611448,"2.11666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(424);
      tex = new TLatex(0.6247196,0.7717385,"2.15");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(425);
      tex = new TLatex(0.6327808,0.7800199,"2.18333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(426);
      tex = new TLatex(0.6401832,0.7918985,"2.21666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(427);
      tex = new TLatex(0.6508005,0.7998106,"2.25");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(428);
      tex = new TLatex(0.6608201,0.8083539,"2.28333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(429);
      tex = new TLatex(0.669367,0.8156024,"2.31666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(430);
      tex = new TLatex(0.6807399,0.8257248,"2.35");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(431);
      tex = new TLatex(0.6919782,0.8351805,"2.38333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(432);
      tex = new TLatex(0.7005011,0.8460227,"2.41666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(433);
      tex = new TLatex(0.711863,0.8539642,"2.45");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(434);
      tex = new TLatex(0.7225671,0.8619136,"2.48333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(435);
      tex = new TLatex(0.7334189,0.8732318,"2.51666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(436);
      tex = new TLatex(0.743434,0.8811764,"2.55");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(437);
      tex = new TLatex(0.7537727,0.8958718,"2.58333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(438);
      tex = new TLatex(0.7658082,0.9042211,"2.61666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(439);
      tex = new TLatex(0.7806763,0.9123921,"2.65");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(440);
      tex = new TLatex(0.792544,0.9226788,"2.68333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(441);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx442[120] = {
   0,
   0.01276956,
   0.02070323,
   0.04785656,
   0.06336653,
   0.07218651,
   0.08295554,
   0.1006441,
   0.11612,
   0.1312873,
   0.1471471,
   0.1621467,
   0.1770809,
   0.201205,
   0.2170214,
   0.2366068,
   0.2574401,
   0.2817692,
   0.3014741,
   0.3417773,
   0.359368,
   0.3836653,
   0.4006952,
   0.4174783,
   0.4337394,
   0.4420178,
   0.4610147,
   0.4816208,
   0.5001882,
   0.5121084,
   0.5196256,
   0.5316216,
   0.5407694,
   0.5460311,
   0.5548067,
   0.5629504,
   0.5725129,
   0.5805656,
   0.5934202,
   0.6024891,
   0.6116403,
   0.6261015,
   0.6394738,
   0.6478439,
   0.6603303,
   0.6683499,
   0.6764475,
   0.6789588,
   0.6832848,
   0.697428,
   0.7047561,
   0.7081658,
   0.7124119,
   0.7196666,
   0.7267151,
   0.7299859,
   0.7332993,
   0.7408745,
   0.7452252,
   0.7632371,
   0.772296,
   0.7778651,
   0.7809884,
   0.787776,
   0.8016129,
   0.8100449,
   0.8149611,
   0.8251643,
   0.8327995,
   0.8421289,
   0.8484388,
   0.8555831,
   0.8625393,
   0.8651684,
   0.8717869,
   0.8734365,
   0.8758554,
   0.8831614,
   0.8896884,
   0.9000157,
   0.9155303,
   0.9216692,
   0.9277666,
   0.9333981,
   0.9409504,
   0.9458974,
   0.9633053,
   0.9662926,
   0.9725349,
   0.9783289,
   0.9831527,
   0.9902029,
   0.9933478,
   0.9962708,
   0.9988984,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_fy442[120] = {
   0,
   0.008223042,
   0.02179927,
   0.03427089,
   0.04682337,
   0.06089729,
   0.07447977,
   0.08294246,
   0.09566865,
   0.1113905,
   0.1249199,
   0.1458123,
   0.1655052,
   0.1800879,
   0.2063721,
   0.2255511,
   0.2485673,
   0.2660308,
   0.2865394,
   0.3061151,
   0.3299843,
   0.345103,
   0.3640487,
   0.3798259,
   0.4055185,
   0.4227293,
   0.444918,
   0.4609265,
   0.487246,
   0.5187087,
   0.5388587,
   0.5687101,
   0.5871086,
   0.6047192,
   0.62567,
   0.6363586,
   0.6446944,
   0.6612088,
   0.6722375,
   0.6871108,
   0.7085296,
   0.721736,
   0.7324628,
   0.738912,
   0.7545354,
   0.7672686,
   0.7798696,
   0.7995,
   0.8093365,
   0.8213527,
   0.8331822,
   0.8398252,
   0.8498856,
   0.8558278,
   0.859026,
   0.8658033,
   0.8706524,
   0.8762336,
   0.8843331,
   0.8904752,
   0.8967422,
   0.9043054,
   0.9111491,
   0.9138869,
   0.9190528,
   0.9294346,
   0.9301856,
   0.9341531,
   0.9368125,
   0.9388597,
   0.9430231,
   0.9440085,
   0.9466688,
   0.9487164,
   0.9529819,
   0.9546458,
   0.9566313,
   0.9597194,
   0.9617461,
   0.9632515,
   0.9662859,
   0.9707297,
   0.9719308,
   0.9782643,
   0.9785267,
   0.9793192,
   0.980545,
   0.9818513,
   0.984919,
   0.9914594,
   0.9928707,
   0.9954085,
   0.996483,
   0.9971,
   0.9986776,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(120,Graph_fx442,Graph_fy442);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph442 = new TH1F("Graph_Graph442","Mass-Matching Prioritized",120,0,1.1);
   Graph_Graph442->SetMinimum(0);
   Graph_Graph442->SetMaximum(1.1);
   Graph_Graph442->SetDirectory(0);
   Graph_Graph442->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph442->SetLineColor(ci);
   Graph_Graph442->GetXaxis()->SetLabelFont(42);
   Graph_Graph442->GetXaxis()->SetTitleOffset(1);
   Graph_Graph442->GetXaxis()->SetTitleFont(42);
   Graph_Graph442->GetYaxis()->SetLabelFont(42);
   Graph_Graph442->GetYaxis()->SetTitleFont(42);
   Graph_Graph442->GetZaxis()->SetLabelFont(42);
   Graph_Graph442->GetZaxis()->SetTitleOffset(1);
   Graph_Graph442->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph442);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx443[120] = {
   0,
   0.007892979,
   0.01727212,
   0.02796043,
   0.0356709,
   0.04456153,
   0.05464568,
   0.06431129,
   0.07409544,
   0.08476516,
   0.09537177,
   0.1061664,
   0.1171502,
   0.1302206,
   0.1417328,
   0.1568763,
   0.1714298,
   0.1830018,
   0.2006759,
   0.2158838,
   0.2280737,
   0.24141,
   0.2539992,
   0.2654746,
   0.2762249,
   0.2848459,
   0.2959081,
   0.3053799,
   0.3138931,
   0.3237896,
   0.3338576,
   0.3419257,
   0.3501502,
   0.3589126,
   0.3677515,
   0.3753991,
   0.3847359,
   0.3941886,
   0.4041206,
   0.4113752,
   0.4193084,
   0.4270473,
   0.4353729,
   0.4441854,
   0.453194,
   0.4610409,
   0.4665477,
   0.4748717,
   0.4834117,
   0.4930546,
   0.5023679,
   0.5095014,
   0.5176964,
   0.5275186,
   0.5363363,
   0.5432304,
   0.5507498,
   0.5581687,
   0.5666534,
   0.5781498,
   0.5868553,
   0.5964812,
   0.6054997,
   0.6165186,
   0.6255859,
   0.6336321,
   0.6409673,
   0.6514681,
   0.6614226,
   0.6699068,
   0.681189,
   0.6925638,
   0.7011541,
   0.7124227,
   0.7230071,
   0.7337159,
   0.7436947,
   0.75405,
   0.7663675,
   0.7811146,
   0.7928939,
   0.8034124,
   0.8161053,
   0.8313147,
   0.8437589,
   0.8531048,
   0.8673999,
   0.8789519,
   0.8941443,
   0.9096473,
   0.9215127,
   0.9431591,
   0.9581358,
   0.9781349,
   0.9959858,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_fy443[120] = {
   0,
   0.009857072,
   0.01522349,
   0.02390826,
   0.03295451,
   0.04034959,
   0.04845364,
   0.05727718,
   0.06391608,
   0.07329187,
   0.08335583,
   0.0957274,
   0.1088342,
   0.1202742,
   0.134724,
   0.147503,
   0.1626773,
   0.1759705,
   0.1885001,
   0.2041087,
   0.216951,
   0.2306693,
   0.2435535,
   0.2567173,
   0.2699806,
   0.279161,
   0.289604,
   0.3065262,
   0.321055,
   0.3389598,
   0.3520429,
   0.3662305,
   0.3779924,
   0.3919552,
   0.4045287,
   0.4175071,
   0.4298559,
   0.441882,
   0.4515331,
   0.4616098,
   0.4733206,
   0.4852753,
   0.4972715,
   0.5049838,
   0.51553,
   0.5252949,
   0.5363788,
   0.5481962,
   0.5607307,
   0.5673772,
   0.5788723,
   0.586757,
   0.5985574,
   0.6061423,
   0.615971,
   0.6259067,
   0.6344638,
   0.6434031,
   0.65339,
   0.6622904,
   0.6718852,
   0.6799679,
   0.6909917,
   0.7000929,
   0.7113428,
   0.7206239,
   0.7317299,
   0.738957,
   0.746855,
   0.753562,
   0.7633928,
   0.7732297,
   0.7841945,
   0.792227,
   0.8004137,
   0.8107998,
   0.8180033,
   0.8328933,
   0.8419079,
   0.8492146,
   0.8601205,
   0.8712027,
   0.8800981,
   0.8897839,
   0.8984589,
   0.9064068,
   0.9178498,
   0.9281211,
   0.9378115,
   0.9463348,
   0.9567372,
   0.9665297,
   0.9756087,
   0.9876695,
   0.9960167,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(120,Graph_fx443,Graph_fy443);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph443 = new TH1F("Graph_Graph443","Tagging Prioritized",120,0,1.1);
   Graph_Graph443->SetMinimum(0);
   Graph_Graph443->SetMaximum(1.1);
   Graph_Graph443->SetDirectory(0);
   Graph_Graph443->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph443->SetLineColor(ci);
   Graph_Graph443->GetXaxis()->SetLabelFont(42);
   Graph_Graph443->GetXaxis()->SetTitleOffset(1);
   Graph_Graph443->GetXaxis()->SetTitleFont(42);
   Graph_Graph443->GetYaxis()->SetLabelFont(42);
   Graph_Graph443->GetYaxis()->SetTitleFont(42);
   Graph_Graph443->GetZaxis()->SetLabelFont(42);
   Graph_Graph443->GetZaxis()->SetTitleOffset(1);
   Graph_Graph443->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph443);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.05, 1.05);
   multigraph->GetXaxis()->SetTitle("False Signal Rate (Bckg)");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("True Signal Rate");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.55,0.15,0.85,0.3,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph","Tagging Only","lpf");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Mass-Matching Prioritized","lpf");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Tagging Prioritized","lpf");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_Z_dPhi_17->Modified();
   ROC_Z_dPhi_17->cd();
   ROC_Z_dPhi_17->SetSelected(ROC_Z_dPhi_17);
}
