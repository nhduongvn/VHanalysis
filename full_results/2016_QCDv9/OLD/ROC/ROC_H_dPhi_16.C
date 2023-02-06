#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_dPhi_16()
{
//=========Macro generated from canvas: ROC_H_dPhi_16/ROC_H_dPhi_16
//=========  (Tue Jan 24 15:01:28 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_dPhi_16 = new TCanvas("ROC_H_dPhi_16", "ROC_H_dPhi_16",0,0,600,600);
   ROC_H_dPhi_16->SetHighLightColor(2);
   ROC_H_dPhi_16->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_H_dPhi_16->SetFillColor(0);
   ROC_H_dPhi_16->SetBorderMode(0);
   ROC_H_dPhi_16->SetBorderSize(2);
   ROC_H_dPhi_16->SetGridx();
   ROC_H_dPhi_16->SetGridy();
   ROC_H_dPhi_16->SetLeftMargin(0.15709);
   ROC_H_dPhi_16->SetRightMargin(0.1234783);
   ROC_H_dPhi_16->SetBottomMargin(0.12);
   ROC_H_dPhi_16->SetFrameBorderMode(0);
   ROC_H_dPhi_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx529[120] = {
   0,
   0.01077585,
   0.01945436,
   0.02821311,
   0.03602977,
   0.0461478,
   0.05628824,
   0.06366155,
   0.07116596,
   0.0808716,
   0.09080288,
   0.0996964,
   0.1079478,
   0.1201878,
   0.1320207,
   0.145278,
   0.155752,
   0.1664766,
   0.1764302,
   0.1876485,
   0.1993819,
   0.2092373,
   0.2179528,
   0.2268379,
   0.2347793,
   0.2464828,
   0.2539079,
   0.2626622,
   0.2708893,
   0.2782164,
   0.2859797,
   0.2946072,
   0.302852,
   0.3105822,
   0.3173802,
   0.323124,
   0.3319767,
   0.341574,
   0.3513254,
   0.360546,
   0.3671839,
   0.373966,
   0.3833317,
   0.3902629,
   0.399478,
   0.406268,
   0.4141992,
   0.4228114,
   0.4305432,
   0.4409047,
   0.4490615,
   0.457226,
   0.4670229,
   0.4741961,
   0.4825025,
   0.4922838,
   0.5001838,
   0.5112081,
   0.5182155,
   0.5277539,
   0.537522,
   0.5466626,
   0.555534,
   0.5651572,
   0.5771014,
   0.5913812,
   0.6032032,
   0.6129728,
   0.6230728,
   0.6339469,
   0.6447693,
   0.6547922,
   0.6702583,
   0.6804558,
   0.6904392,
   0.7019697,
   0.7139754,
   0.7272366,
   0.7377149,
   0.7536102,
   0.7683449,
   0.7821142,
   0.7979316,
   0.8125198,
   0.8283051,
   0.844019,
   0.8591071,
   0.8725896,
   0.887782,
   0.9045938,
   0.9175777,
   0.9339701,
   0.9504276,
   0.9725329,
   0.9933497,
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
   Double_t Graph_fy529[120] = {
   0,
   0.007337189,
   0.01483519,
   0.01904898,
   0.02514202,
   0.03164102,
   0.03766835,
   0.04392249,
   0.04884671,
   0.05529734,
   0.06474599,
   0.07129688,
   0.08041949,
   0.08771762,
   0.09591245,
   0.1052449,
   0.1145881,
   0.1229557,
   0.1317272,
   0.1394654,
   0.1470767,
   0.1560724,
   0.1646195,
   0.1739116,
   0.1795827,
   0.1897101,
   0.1980974,
   0.2084207,
   0.2179997,
   0.2274704,
   0.2376483,
   0.2473037,
   0.2570055,
   0.2698904,
   0.2817076,
   0.2922844,
   0.305563,
   0.3174819,
   0.3287587,
   0.3392699,
   0.3503639,
   0.3628936,
   0.3722888,
   0.3818495,
   0.3922921,
   0.4029911,
   0.4136838,
   0.4273608,
   0.4371382,
   0.4498006,
   0.4637801,
   0.4710234,
   0.480557,
   0.4918635,
   0.5010522,
   0.5166032,
   0.5290035,
   0.5379906,
   0.5475304,
   0.5573513,
   0.5675968,
   0.5794618,
   0.5933638,
   0.6039355,
   0.6152541,
   0.6250838,
   0.6369153,
   0.6489506,
   0.6616441,
   0.6716521,
   0.6824622,
   0.6901663,
   0.7022165,
   0.7129624,
   0.7254471,
   0.7373995,
   0.7508722,
   0.7611808,
   0.7721815,
   0.7851822,
   0.8004539,
   0.8128254,
   0.8255296,
   0.8400044,
   0.8542548,
   0.8654484,
   0.8780416,
   0.8950113,
   0.9058664,
   0.9207077,
   0.934956,
   0.9506374,
   0.9655988,
   0.9818501,
   0.9963331,
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
   TGraph *graph = new TGraph(120,Graph_fx529,Graph_fy529);
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
   
   TH1F *Graph_Graph529 = new TH1F("Graph_Graph529","Tagging Only",120,0,1.1);
   Graph_Graph529->SetMinimum(0);
   Graph_Graph529->SetMaximum(1.1);
   Graph_Graph529->SetDirectory(0);
   Graph_Graph529->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph529->SetLineColor(ci);
   Graph_Graph529->GetXaxis()->SetLabelFont(42);
   Graph_Graph529->GetXaxis()->SetTitleOffset(1);
   Graph_Graph529->GetXaxis()->SetTitleFont(42);
   Graph_Graph529->GetYaxis()->SetLabelFont(42);
   Graph_Graph529->GetYaxis()->SetTitleFont(42);
   Graph_Graph529->GetZaxis()->SetLabelFont(42);
   Graph_Graph529->GetZaxis()->SetTitleOffset(1);
   Graph_Graph529->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph529);
   
   TLatex *   tex = new TLatex(0.05628824,0.09766835,"0.216666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(530);
      tex = new TLatex(0.06366155,0.1039225,"0.25");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(531);
      tex = new TLatex(0.07116596,0.1088467,"0.283333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(532);
      tex = new TLatex(0.0808716,0.1152973,"0.316666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(533);
      tex = new TLatex(0.09080288,0.124746,"0.35");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(534);
      tex = new TLatex(0.0996964,0.1312969,"0.383333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(535);
      tex = new TLatex(0.1079478,0.1404195,"0.416666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(536);
      tex = new TLatex(0.1201878,0.1477176,"0.45");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(537);
      tex = new TLatex(0.1320207,0.1559125,"0.483333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(538);
      tex = new TLatex(0.145278,0.1652449,"0.516666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(539);
      tex = new TLatex(0.155752,0.1745881,"0.55");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(540);
      tex = new TLatex(0.1664766,0.1829557,"0.583333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(541);
      tex = new TLatex(0.1764302,0.1917272,"0.616666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(542);
      tex = new TLatex(0.1876485,0.1994654,"0.65");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(543);
      tex = new TLatex(0.1993819,0.2070767,"0.683333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(544);
      tex = new TLatex(0.2092373,0.2160724,"0.716666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(545);
      tex = new TLatex(0.2179528,0.2246195,"0.75");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(546);
      tex = new TLatex(0.2268379,0.2339116,"0.783333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(547);
      tex = new TLatex(0.2347793,0.2395827,"0.816666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(548);
      tex = new TLatex(0.2464828,0.2497101,"0.85");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(549);
      tex = new TLatex(0.2539079,0.2580974,"0.883333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(550);
      tex = new TLatex(0.2626622,0.2684207,"0.916666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(551);
      tex = new TLatex(0.2708893,0.2779997,"0.95");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(552);
      tex = new TLatex(0.2782164,0.2874704,"0.983333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(553);
      tex = new TLatex(0.2859797,0.2976483,"1.01666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(554);
      tex = new TLatex(0.2946072,0.3073037,"1.05");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(555);
      tex = new TLatex(0.302852,0.3170055,"1.08333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(556);
      tex = new TLatex(0.3105822,0.3298904,"1.11666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(557);
      tex = new TLatex(0.3173802,0.3417076,"1.15");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(558);
      tex = new TLatex(0.323124,0.3522844,"1.18333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(559);
      tex = new TLatex(0.3319767,0.365563,"1.21666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(560);
      tex = new TLatex(0.341574,0.3774819,"1.25");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(561);
      tex = new TLatex(0.3513254,0.3887587,"1.28333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(562);
      tex = new TLatex(0.360546,0.3992699,"1.31666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(563);
      tex = new TLatex(0.3671839,0.4103639,"1.35");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(564);
      tex = new TLatex(0.373966,0.4228936,"1.38333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(565);
      tex = new TLatex(0.3833317,0.4322888,"1.41666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(566);
      tex = new TLatex(0.3902629,0.4418495,"1.45");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(567);
      tex = new TLatex(0.399478,0.4522921,"1.48333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(568);
      tex = new TLatex(0.406268,0.4629911,"1.51666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(569);
      tex = new TLatex(0.4141992,0.4736838,"1.55");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(570);
      tex = new TLatex(0.4228114,0.4873608,"1.58333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(571);
      tex = new TLatex(0.4305432,0.4971382,"1.61666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(572);
      tex = new TLatex(0.4409047,0.5098006,"1.65");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(573);
      tex = new TLatex(0.4490615,0.5237801,"1.68333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(574);
      tex = new TLatex(0.457226,0.5310234,"1.71666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(575);
      tex = new TLatex(0.4670229,0.540557,"1.75");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(576);
      tex = new TLatex(0.4741961,0.5518635,"1.78333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(577);
      tex = new TLatex(0.4825025,0.5610522,"1.81666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(578);
      tex = new TLatex(0.4922838,0.5766032,"1.85");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(579);
      tex = new TLatex(0.5001838,0.5890035,"1.88333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(580);
      tex = new TLatex(0.5112081,0.5979906,"1.91666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(581);
      tex = new TLatex(0.5182155,0.6075304,"1.95");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(582);
      tex = new TLatex(0.5277539,0.6173513,"1.98333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(583);
      tex = new TLatex(0.537522,0.6275968,"2.01666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(584);
      tex = new TLatex(0.5466626,0.6394618,"2.05");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(585);
      tex = new TLatex(0.555534,0.6533638,"2.08333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(586);
      tex = new TLatex(0.5651572,0.6639355,"2.11666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(587);
      tex = new TLatex(0.5771014,0.6752541,"2.15");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(588);
      tex = new TLatex(0.5913812,0.6850838,"2.18333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(589);
      tex = new TLatex(0.6032032,0.6969153,"2.21666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(590);
      tex = new TLatex(0.6129728,0.7089506,"2.25");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(591);
      tex = new TLatex(0.6230728,0.7216441,"2.28333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(592);
      tex = new TLatex(0.6339469,0.7316521,"2.31666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(593);
      tex = new TLatex(0.6447693,0.7424622,"2.35");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(594);
      tex = new TLatex(0.6547922,0.7501663,"2.38333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(595);
      tex = new TLatex(0.6702583,0.7622165,"2.41666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(596);
      tex = new TLatex(0.6804558,0.7729624,"2.45");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(597);
      tex = new TLatex(0.6904392,0.7854471,"2.48333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(598);
      tex = new TLatex(0.7019697,0.7973995,"2.51666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(599);
      tex = new TLatex(0.7139754,0.8108722,"2.55");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(600);
      tex = new TLatex(0.7272366,0.8211808,"2.58333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(601);
      tex = new TLatex(0.7377149,0.8321815,"2.61666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(602);
      tex = new TLatex(0.7536102,0.8451822,"2.65");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(603);
      tex = new TLatex(0.7683449,0.8604539,"2.68333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(604);
      tex = new TLatex(0.7821142,0.8728254,"2.71666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(605);
      tex = new TLatex(0.7979316,0.8855296,"2.75");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(606);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx607[120] = {
   0,
   0.006196567,
   0.0264557,
   0.03874547,
   0.04374619,
   0.04909471,
   0.0628688,
   0.07609498,
   0.08813205,
   0.09549767,
   0.1009152,
   0.1072421,
   0.1124964,
   0.1363785,
   0.1509919,
   0.1666619,
   0.1823381,
   0.1962045,
   0.2134536,
   0.2286273,
   0.2336654,
   0.2394073,
   0.2490278,
   0.2565206,
   0.2656414,
   0.2891616,
   0.2960774,
   0.3026572,
   0.3129666,
   0.3332452,
   0.3439284,
   0.3585317,
   0.3686969,
   0.3862859,
   0.3917208,
   0.3999093,
   0.4077791,
   0.4178979,
   0.4254984,
   0.4385348,
   0.4461117,
   0.4586933,
   0.466283,
   0.4719726,
   0.4772522,
   0.4830502,
   0.4913947,
   0.4970343,
   0.5143485,
   0.5313277,
   0.550574,
   0.55815,
   0.5658551,
   0.5782979,
   0.5858541,
   0.6014989,
   0.6061884,
   0.6205848,
   0.6283746,
   0.6539663,
   0.6600111,
   0.6723996,
   0.6866447,
   0.6931243,
   0.7090383,
   0.7149519,
   0.7229006,
   0.7392655,
   0.7481345,
   0.7538253,
   0.7679114,
   0.7795283,
   0.7857543,
   0.7934547,
   0.799825,
   0.8077949,
   0.8234539,
   0.8324133,
   0.8417068,
   0.8498205,
   0.8575568,
   0.8652799,
   0.8807275,
   0.8885916,
   0.9003939,
   0.9066849,
   0.915295,
   0.9230973,
   0.926674,
   0.9335035,
   0.9416801,
   0.955049,
   0.9733235,
   0.980997,
   0.9912748,
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
   Double_t Graph_fy607[120] = {
   0,
   0.003990683,
   0.01272022,
   0.01524258,
   0.02070261,
   0.02335218,
   0.03562994,
   0.03829494,
   0.04345209,
   0.04664806,
   0.05531898,
   0.05812727,
   0.06219685,
   0.0651307,
   0.06835905,
   0.07566811,
   0.08465898,
   0.09483906,
   0.109748,
   0.1173122,
   0.1268728,
   0.1359564,
   0.1457532,
   0.1526625,
   0.1603979,
   0.1634039,
   0.1684479,
   0.1816581,
   0.1921102,
   0.204156,
   0.2161507,
   0.2329933,
   0.2445471,
   0.2568072,
   0.2735208,
   0.2871752,
   0.2995056,
   0.3150322,
   0.3366716,
   0.35474,
   0.3755084,
   0.4001577,
   0.4312519,
   0.4551682,
   0.4753523,
   0.4941092,
   0.5104862,
   0.529375,
   0.5513271,
   0.5690571,
   0.5924851,
   0.6055615,
   0.6232019,
   0.6371316,
   0.6520184,
   0.6639153,
   0.6746497,
   0.6952556,
   0.7116605,
   0.7255966,
   0.7372214,
   0.7486963,
   0.7652204,
   0.7839883,
   0.7954229,
   0.798299,
   0.8046838,
   0.8145907,
   0.8278492,
   0.8381552,
   0.854807,
   0.8646113,
   0.8708561,
   0.8798699,
   0.8908001,
   0.8964807,
   0.9045154,
   0.9128903,
   0.9148747,
   0.9216145,
   0.9303245,
   0.9345537,
   0.9423535,
   0.9463255,
   0.9485919,
   0.9522638,
   0.9573637,
   0.9679082,
   0.9705355,
   0.9726311,
   0.9789026,
   0.9855291,
   0.9893318,
   0.9916656,
   0.9980902,
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
   graph = new TGraph(120,Graph_fx607,Graph_fy607);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph607 = new TH1F("Graph_Graph607","Mass-Matching Prioritized",120,0,1.1);
   Graph_Graph607->SetMinimum(0);
   Graph_Graph607->SetMaximum(1.1);
   Graph_Graph607->SetDirectory(0);
   Graph_Graph607->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph607->SetLineColor(ci);
   Graph_Graph607->GetXaxis()->SetLabelFont(42);
   Graph_Graph607->GetXaxis()->SetTitleOffset(1);
   Graph_Graph607->GetXaxis()->SetTitleFont(42);
   Graph_Graph607->GetYaxis()->SetLabelFont(42);
   Graph_Graph607->GetYaxis()->SetTitleFont(42);
   Graph_Graph607->GetZaxis()->SetLabelFont(42);
   Graph_Graph607->GetZaxis()->SetTitleOffset(1);
   Graph_Graph607->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph607);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx608[120] = {
   0,
   0.01058169,
   0.01922909,
   0.02805906,
   0.03571405,
   0.04572731,
   0.0557442,
   0.06309296,
   0.07057291,
   0.08014401,
   0.09003412,
   0.09883658,
   0.1070107,
   0.1192145,
   0.1310075,
   0.1441634,
   0.1545062,
   0.1651619,
   0.1749923,
   0.1861394,
   0.1976983,
   0.2074257,
   0.2160264,
   0.2248256,
   0.2327104,
   0.2442631,
   0.2517035,
   0.2602921,
   0.2684505,
   0.2757449,
   0.2835116,
   0.2921128,
   0.3001509,
   0.3077878,
   0.3145368,
   0.3202624,
   0.3289734,
   0.3385792,
   0.3483559,
   0.3574057,
   0.3640429,
   0.3716429,
   0.3809449,
   0.3878152,
   0.3968442,
   0.4035377,
   0.411368,
   0.4199032,
   0.4275942,
   0.4378787,
   0.4459162,
   0.4539456,
   0.4636053,
   0.4707091,
   0.4789678,
   0.4886455,
   0.4965252,
   0.5073074,
   0.514322,
   0.5244837,
   0.5341377,
   0.543066,
   0.5519371,
   0.5623548,
   0.5741601,
   0.5882152,
   0.5998869,
   0.6096958,
   0.6197553,
   0.6305313,
   0.6413174,
   0.6512406,
   0.6673292,
   0.6775103,
   0.6882081,
   0.6996218,
   0.7115996,
   0.7246682,
   0.7350824,
   0.7511019,
   0.7657365,
   0.7793922,
   0.7960605,
   0.8115162,
   0.8271706,
   0.8426936,
   0.857656,
   0.8710954,
   0.8863363,
   0.9045369,
   0.9175371,
   0.934513,
   0.9507278,
   0.9728359,
   0.9934359,
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
   Double_t Graph_fy608[120] = {
   0,
   0.006633198,
   0.0135823,
   0.01850468,
   0.02407894,
   0.0304684,
   0.0356686,
   0.0422665,
   0.04704228,
   0.05346535,
   0.06229071,
   0.06977845,
   0.07841881,
   0.08488041,
   0.09231739,
   0.1016043,
   0.1106773,
   0.1191903,
   0.1276295,
   0.1359608,
   0.1438994,
   0.1530993,
   0.1613006,
   0.1709147,
   0.177062,
   0.1874881,
   0.1961715,
   0.2068805,
   0.2162276,
   0.2242738,
   0.234219,
   0.2430637,
   0.252595,
   0.2648057,
   0.2763662,
   0.2858241,
   0.2987208,
   0.3103221,
   0.3209543,
   0.3310435,
   0.3420259,
   0.3554485,
   0.3657646,
   0.3760752,
   0.3861395,
   0.3969351,
   0.4074244,
   0.4195423,
   0.4294256,
   0.4411442,
   0.4564371,
   0.4643333,
   0.4747524,
   0.486273,
   0.4957134,
   0.5108168,
   0.5223471,
   0.5317382,
   0.5421109,
   0.5518223,
   0.5621082,
   0.5730101,
   0.5858222,
   0.5955477,
   0.6080861,
   0.6173669,
   0.6295752,
   0.6409975,
   0.6529511,
   0.6657601,
   0.6786246,
   0.6868024,
   0.6994815,
   0.710751,
   0.7236336,
   0.7354259,
   0.7480912,
   0.7596509,
   0.7698241,
   0.782057,
   0.7977583,
   0.8096686,
   0.8222295,
   0.836438,
   0.8514025,
   0.864952,
   0.877962,
   0.8952189,
   0.9065056,
   0.922005,
   0.9363407,
   0.9511469,
   0.9659896,
   0.9827137,
   0.9961534,
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
   graph = new TGraph(120,Graph_fx608,Graph_fy608);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph608 = new TH1F("Graph_Graph608","Tagging Prioritized",120,0,1.1);
   Graph_Graph608->SetMinimum(0);
   Graph_Graph608->SetMaximum(1.1);
   Graph_Graph608->SetDirectory(0);
   Graph_Graph608->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph608->SetLineColor(ci);
   Graph_Graph608->GetXaxis()->SetLabelFont(42);
   Graph_Graph608->GetXaxis()->SetTitleOffset(1);
   Graph_Graph608->GetXaxis()->SetTitleFont(42);
   Graph_Graph608->GetYaxis()->SetLabelFont(42);
   Graph_Graph608->GetYaxis()->SetTitleFont(42);
   Graph_Graph608->GetZaxis()->SetLabelFont(42);
   Graph_Graph608->GetZaxis()->SetTitleOffset(1);
   Graph_Graph608->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph608);
   
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_H_dPhi_16->Modified();
   ROC_H_dPhi_16->cd();
   ROC_H_dPhi_16->SetSelected(ROC_H_dPhi_16);
}
