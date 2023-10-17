#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagFirst_18()
{
//=========Macro generated from canvas: Aplanarity_tagFirst_18/Aplanarity_tagFirst_18
//=========  (Tue Oct 17 10:20:04 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_tagFirst_18 = new TCanvas("Aplanarity_tagFirst_18", "Aplanarity_tagFirst_18",0,0,600,600);
   Aplanarity_tagFirst_18->SetHighLightColor(2);
   Aplanarity_tagFirst_18->Range(0,0,1,1);
   Aplanarity_tagFirst_18->SetFillColor(0);
   Aplanarity_tagFirst_18->SetFillStyle(4000);
   Aplanarity_tagFirst_18->SetBorderMode(0);
   Aplanarity_tagFirst_18->SetBorderSize(2);
   Aplanarity_tagFirst_18->SetFrameFillStyle(1000);
   Aplanarity_tagFirst_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-5253.97,1.052419,5248726);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(4723328);
   
   TH1F *st_stack_192 = new TH1F("st_stack_192","",50,0,1);
   st_stack_192->SetMinimum(0.01);
   st_stack_192->SetMaximum(4723328);
   st_stack_192->SetDirectory(nullptr);
   st_stack_192->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_192->SetLineColor(ci);
   st_stack_192->SetLineWidth(0);
   st_stack_192->GetXaxis()->SetRange(1,50);
   st_stack_192->GetXaxis()->SetLabelFont(42);
   st_stack_192->GetXaxis()->SetTitleOffset(1);
   st_stack_192->GetXaxis()->SetTitleFont(42);
   st_stack_192->GetYaxis()->SetTitle("Events/0.02");
   st_stack_192->GetYaxis()->SetLabelFont(42);
   st_stack_192->GetYaxis()->SetLabelSize(0.05);
   st_stack_192->GetYaxis()->SetTitleSize(0.057);
   st_stack_192->GetYaxis()->SetTitleOffset(1.2);
   st_stack_192->GetYaxis()->SetTitleFont(42);
   st_stack_192->GetZaxis()->SetLabelFont(42);
   st_stack_192->GetZaxis()->SetTitleOffset(1);
   st_stack_192->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_192);
   
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_1 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(1,1729980);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(2,380775.6);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(3,154432.7);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(4,84685.86);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(5,40147.89);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(6,23065.09);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(7,20911.04);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(8,14325.91);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(9,8961.891);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(10,5673.054);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(11,3226.166);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(12,2514.736);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(13,2154.697);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(14,384.124);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(15,320.3265);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(16,346.9386);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(17,507.8515);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(18,76.93074);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(19,25.11228);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(21,10.10794);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(1,34911.09);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(2,18962.81);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(3,8433.01);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(4,6721.051);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(5,3467.191);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(6,2140.682);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(7,2993.068);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(8,3306.33);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(9,2787.432);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(10,1464.718);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(11,820.9818);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(12,729.7609);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(13,701.6374);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(14,74.05291);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(15,101.7777);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(16,186.652);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(17,421.912);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(18,27.8436);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(19,14.59989);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(21,8.93319);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetEntries(168645);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tagFirst_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_2 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(1,19937.73);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(2,4938.15);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(3,2151.095);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(4,1133.585);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(5,670.8736);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(6,417.3273);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(7,249.9498);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(8,171.8473);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(9,106.2107);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(10,79.5275);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(11,49.79312);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(12,40.88478);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(13,28.21562);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(14,15.79372);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(15,7.371652);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(16,4.774689);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(17,4.008796);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(18,1.814458);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(19,0.5126862);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(20,0.4582476);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(21,0.1170892);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(22,0.4891603);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(1,93.61191);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(2,48.67613);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(3,29.79398);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(4,21.915);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(5,17.0181);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(6,14.95767);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(7,10.13025);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(8,8.869056);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(9,6.615768);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(10,6.883219);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(11,4.71898);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(12,4.433162);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(13,4.388627);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(14,2.119778);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(15,1.387242);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(16,1.097583);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(17,1.370681);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(18,0.4891179);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(19,0.1986046);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(20,0.3696611);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(21,0.08677037);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(22,0.2970502);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetEntries(236948);

   ci = TColor::GetColor("#660066");
   VbbHcc_tagFirst_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_3 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_3","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(1,351343.1);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(2,98684.14);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(3,44031.26);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(4,23472.2);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(5,13731.47);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(6,8548.793);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(7,5516.536);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(8,3606.37);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(9,2435.823);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(10,1633.363);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(11,1111.525);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(12,744.3663);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(13,476.7925);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(14,321.4311);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(15,204.6549);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(16,130.2258);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(17,81.99435);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(18,45.68809);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(19,28.15809);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(20,11.95659);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(21,5.156578);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(22,1.791892);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(23,0.3665445);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(1,234.3074);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(2,122.6914);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(3,80.87134);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(4,59.57574);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(5,45.88407);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(6,34.99032);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(7,28.42423);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(8,23.92203);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(9,20.57598);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(10,17.17596);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(11,13.87773);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(12,11.03442);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(13,8.000432);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(14,6.57802);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(15,5.287101);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(16,4.136901);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(17,4.296182);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(18,2.725135);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(19,2.021389);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(20,1.206683);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(21,0.7946131);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(22,0.5184653);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(23,0.179734);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetEntries(6056042);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tagFirst_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_4 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_4","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(1,15351.45);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(2,3463.017);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(3,1514.931);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(4,781.7028);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(5,478.7433);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(6,276.966);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(7,173.6642);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(8,117.5856);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(9,76.9946);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(10,56.38504);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(11,37.93463);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(12,32.49438);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(13,12.05827);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(14,8.615489);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(15,8.825495);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(16,3.486);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(17,2.203724);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(18,1.809273);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(19,0.432718);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(20,0.7225049);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(21,0.1135695);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(22,0.2074625);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(1,113.2873);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(2,55.64351);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(3,37.2831);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(4,29.70411);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(5,27.54767);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(6,18.27374);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(7,11.10901);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(8,9.730208);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(9,7.541695);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(10,8.415614);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(11,4.512298);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(12,6.111078);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(13,2.353138);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(14,1.808426);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(15,4.110168);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(16,1.366362);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(17,1.075584);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(18,1.092924);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(19,0.258977);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(20,0.622745);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(21,0.1135695);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(22,0.153672);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetEntries(94472);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tagFirst_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_5 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_5","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(1,8356.351);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(2,1802.717);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(3,735.3388);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(4,300.7169);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(5,195.5823);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(6,137.6876);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(7,64.65631);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(8,45.86706);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(9,27.99442);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(10,21.06398);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(11,7.770558);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(12,24.56111);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(13,3.046022);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(14,3.778894);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(15,1.954797);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(16,0.7092527);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(17,0.2122485);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(18,0.7976615);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(19,0.08832034);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(1,162.9381);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(2,66.68714);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(3,41.99189);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(4,26.4986);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(5,18.42566);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(6,18.16268);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(7,8.1446);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(8,12.38065);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(9,7.050457);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(10,7.346961);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(11,1.451467);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(12,11.45468);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(13,0.8801483);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(14,1.386447);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(15,0.7803949);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(16,0.3272682);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(17,0.2122485);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(18,0.4773543);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(19,0.08832034);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetEntries(41442);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tagFirst_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_6 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_6","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(1,65.50823);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(2,14.40611);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(3,4.70441);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(4,0.9649107);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(5,2.330816);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(6,2.496007);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(7,0.5434778);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(8,1.55537);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(9,1.524021);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(11,0.4451917);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(1,7.143124);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(2,3.381148);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(3,1.868516);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(4,0.6846189);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(5,1.12948);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(6,1.475621);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(7,0.5434778);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(8,1.55537);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(9,1.524021);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(11,0.4451917);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetEntries(150);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tagFirst_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_7 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_7","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(1,201.7537);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(2,36.98128);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(3,21.46696);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(4,6.19902);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(5,2.970318);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(6,1.274273);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(7,1.986521);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(8,3.366501);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(9,0.9667488);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(10,0.6667879);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(11,0.7310665);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(1,11.73443);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(2,5.98089);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(3,4.315136);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(4,1.768874);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(5,1.278006);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(6,0.7568767);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(7,1.689024);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(8,1.439107);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(9,0.6844849);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(10,0.6667879);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(11,0.7310665);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetEntries(523);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tagFirst_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_8 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_8","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(1,135.486);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(2,34.42601);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(3,18.1556);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(4,7.359953);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(5,2.843393);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(6,3.216428);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(7,1.772526);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(9,0.7194555);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(10,0.5352978);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(11,0.4724672);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(13,1.558826);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(1,8.263076);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(2,3.900019);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(3,2.887346);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(4,1.612365);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(5,1.039229);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(6,1.403385);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(7,0.8237226);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(9,0.5149107);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(10,0.3789452);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(11,0.3364647);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(13,1.087305);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetEntries(548);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tagFirst_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_9 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_9","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(1,77.71468);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(2,20.46005);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(3,8.906793);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(4,5.052807);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(5,2.975387);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(6,1.736287);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(7,1.154624);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(8,0.7780491);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(9,0.5180149);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(10,0.3422483);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(11,0.2837042);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(12,0.1559043);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(13,0.09815782);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(14,0.07774138);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(15,0.04028326);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(16,0.04154535);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(17,0.01344851);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(18,0.01039569);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(19,0.004883325);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(20,0.00228546);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(21,0.004311825);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(1,0.6821467);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(2,0.3381851);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(3,0.1946335);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(4,0.1764833);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(5,0.1162472);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(6,0.08415214);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(7,0.06861357);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(8,0.0672594);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(9,0.04710036);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(10,0.04338458);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(11,0.04883533);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(12,0.02411804);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(13,0.0205618);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(14,0.0195669);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(15,0.01201261);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(16,0.01327054);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(17,0.00673768);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(18,0.008491507);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(19,0.003470316);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(20,0.00228546);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(21,0.004311825);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetEntries(37266);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tagFirst_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_10 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_10","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(1,45.74207);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(2,12.27415);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(3,5.618819);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(4,3.173412);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(5,1.87192);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(6,1.155508);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(7,0.7856776);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(8,0.5149574);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(9,0.3442126);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(10,0.2123199);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(11,0.1636174);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(12,0.1065254);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(13,0.0744671);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(14,0.03641032);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(15,0.02910385);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(16,0.01515433);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(17,0.01249657);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(18,0.005371157);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(19,0.001624151);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(20,0.0004923994);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(1,0.1597495);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(2,0.08204293);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(3,0.05532392);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(4,0.04149225);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(5,0.03179912);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(6,0.02488019);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(7,0.02060279);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(8,0.01648954);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(9,0.01353474);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(10,0.01056732);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(11,0.009456515);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(12,0.007516151);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(13,0.006339766);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(14,0.004334911);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(15,0.003973634);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(16,0.002838071);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(17,0.002534874);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(18,0.001656493);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(19,0.0009966113);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(20,0.0004923994);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetEntries(137175);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tagFirst_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_11 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_11","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(1,1.539353);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(2,0.4544359);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(3,0.2678859);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(4,0.09648619);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(5,0.05217625);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(6,0.04117147);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(7,0.01172519);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(8,0.0277665);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(9,0.00341639);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(10,0.004655722);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(11,0.02065099);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(12,0.003062297);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(15,0.002086411);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(17,0.002176044);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(1,0.07826538);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(2,0.0391041);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(3,0.02833429);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(4,0.01852321);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(5,0.01321985);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(6,0.01178207);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(7,0.004818215);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(8,0.008868991);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(9,0.002547746);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(10,0.003295677);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(11,0.01856292);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(12,0.003062297);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(15,0.002086411);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(17,0.002176044);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetEntries(939);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tagFirst_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_12 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_12","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(1,0.765928);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(2,0.2272647);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(3,0.09691733);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(4,0.05623629);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(5,0.04320512);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(6,0.02429482);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(7,0.01315686);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(8,0.01398065);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(9,0.008246996);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(10,0.005876174);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(11,0.003213199);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(12,0.001612094);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(13,0.002913781);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(14,0.0005883041);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(15,0.0009596165);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(1,0.01852915);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(2,0.01048131);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(3,0.006195463);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(4,0.004653669);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(5,0.004620907);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(6,0.003408011);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(7,0.002277176);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(8,0.00248307);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(9,0.001837955);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(10,0.001500432);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(11,0.001242392);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(12,0.0008140418);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(13,0.001138162);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(14,0.000417538);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(15,0.0006792423);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetEntries(3484);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tagFirst_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tagFirst_Aplanarity__383 = new TH1D("VbbHcc_tagFirst_Aplanarity__383","",50,0,1);
   VbbHcc_tagFirst_Aplanarity__383->SetBinContent(1,2121097);
   VbbHcc_tagFirst_Aplanarity__383->SetBinContent(2,495450);
   VbbHcc_tagFirst_Aplanarity__383->SetBinContent(3,207845);
   VbbHcc_tagFirst_Aplanarity__383->SetBinContent(4,107928);
   VbbHcc_tagFirst_Aplanarity__383->SetBinContent(5,61407);
   VbbHcc_tagFirst_Aplanarity__383->SetBinContent(6,37649);
   VbbHcc_tagFirst_Aplanarity__383->SetBinContent(7,24047);
   VbbHcc_tagFirst_Aplanarity__383->SetBinContent(8,15645);
   VbbHcc_tagFirst_Aplanarity__383->SetBinContent(9,10444);
   VbbHcc_tagFirst_Aplanarity__383->SetBinContent(10,7102);
   VbbHcc_tagFirst_Aplanarity__383->SetBinContent(11,4648);
   VbbHcc_tagFirst_Aplanarity__383->SetBinContent(12,3155);
   VbbHcc_tagFirst_Aplanarity__383->SetBinContent(13,2147);
   VbbHcc_tagFirst_Aplanarity__383->SetBinContent(14,1298);
   VbbHcc_tagFirst_Aplanarity__383->SetBinContent(15,881);
   VbbHcc_tagFirst_Aplanarity__383->SetBinContent(16,573);
   VbbHcc_tagFirst_Aplanarity__383->SetBinContent(17,344);
   VbbHcc_tagFirst_Aplanarity__383->SetBinContent(18,193);
   VbbHcc_tagFirst_Aplanarity__383->SetBinContent(19,120);
   VbbHcc_tagFirst_Aplanarity__383->SetBinContent(20,55);
   VbbHcc_tagFirst_Aplanarity__383->SetBinContent(21,20);
   VbbHcc_tagFirst_Aplanarity__383->SetBinContent(22,2);
   VbbHcc_tagFirst_Aplanarity__383->SetBinContent(23,2);
   VbbHcc_tagFirst_Aplanarity__383->SetBinContent(24,1);
   VbbHcc_tagFirst_Aplanarity__383->SetEntries(3102102);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity__383->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity__383->SetLineWidth(2);
   VbbHcc_tagFirst_Aplanarity__383->SetMarkerStyle(20);
   VbbHcc_tagFirst_Aplanarity__383->SetMarkerSize(1.2);
   VbbHcc_tagFirst_Aplanarity__383->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity__383->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity__383->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity__383->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity__383->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity__383->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity__383->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity__383->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity__383->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity__383->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tagFirst_Aplanarity_fx1383[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VbbHcc_tagFirst_Aplanarity_fy1383[50] = { 2125498, 489782.9, 202924.6, 110397, 55237.65, 32455.8, 26922.12, 18273.83, 11613, 7465.161, 4435.309, 3357.31, 2676.544, 733.8579, 543.2059, 486.191, 596.2987,
   127.056, 54.3106, 13.14012, 15.49949, 2.488515, 0.3665445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VbbHcc_tagFirst_Aplanarity_fex1383[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VbbHcc_tagFirst_Aplanarity_fey1383[50] = { 34912.57, 18963.47, 8433.64, 6721.469, 3467.695, 2141.177, 2993.253, 3306.467, 2787.536, 1464.878, 821.1268, 729.9733, 701.7021, 74.40961, 102.0102, 186.7063, 421.9375,
   28.00632, 14.74303, 1.40732, 8.969601, 0.6169766, 0.179734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_tagFirst_Aplanarity_fx1383,Graph_from_VbbHcc_tagFirst_Aplanarity_fy1383,Graph_from_VbbHcc_tagFirst_Aplanarity_fex1383,Graph_from_VbbHcc_tagFirst_Aplanarity_fey1383);
   gre->SetName("Graph_from_VbbHcc_tagFirst_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1383 = new TH1F("Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1383","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1383->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1383->SetMaximum(2376451);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1383->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1383->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1383->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1383->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1383->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1383->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1383->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1383->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1383->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1383->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1383->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1383);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","ggZHbb","F");

   ci = TColor::GetColor("#0000cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","ZHbb","F");

   ci = TColor::GetColor("#cccc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","ZZ","F");

   ci = TColor::GetColor("#33ff99");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","WZ","F");

   ci = TColor::GetColor("#3399ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","WW","F");

   ci = TColor::GetColor("#9933ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","W + jets","F");

   ci = TColor::GetColor("#ff99cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","Z + jets","F");

   ci = TColor::GetColor("#00cccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","t#bar{t}","F");

   ci = TColor::GetColor("#cc00cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","Single top","F");

   ci = TColor::GetColor("#660066");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph_from_VbbHcc_tagFirst_Aplanarity","MC unc. (stat.)","fl");

   ci = TColor::GetColor("#333333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_tagFirst_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.1532254,-0.2774193,1.052419,1.658065);
   bottomPad->SetFillColor(0);
   bottomPad->SetBorderMode(0);
   bottomPad->SetBorderSize(2);
   bottomPad->SetTickx(1);
   bottomPad->SetTicky(1);
   bottomPad->SetLeftMargin(0.12709);
   bottomPad->SetRightMargin(0.0434783);
   bottomPad->SetTopMargin(0.03);
   bottomPad->SetBottomMargin(0.35);
   bottomPad->SetFrameBorderMode(0);
   bottomPad->SetFrameBorderMode(0);
   
   TH1D *data_mc_ratio__384 = new TH1D("data_mc_ratio__384","",50,0,1);
   data_mc_ratio__384->SetBinContent(1,0.9979296);
   data_mc_ratio__384->SetBinContent(2,1.011571);
   data_mc_ratio__384->SetBinContent(3,1.024248);
   data_mc_ratio__384->SetBinContent(4,0.9776355);
   data_mc_ratio__384->SetBinContent(5,1.111687);
   data_mc_ratio__384->SetBinContent(6,1.160008);
   data_mc_ratio__384->SetBinContent(7,0.8932062);
   data_mc_ratio__384->SetBinContent(8,0.8561422);
   data_mc_ratio__384->SetBinContent(9,0.8993371);
   data_mc_ratio__384->SetBinContent(10,0.9513526);
   data_mc_ratio__384->SetBinContent(11,1.047954);
   data_mc_ratio__384->SetBinContent(12,0.9397405);
   data_mc_ratio__384->SetBinContent(13,0.8021538);
   data_mc_ratio__384->SetBinContent(14,1.768735);
   data_mc_ratio__384->SetBinContent(15,1.621853);
   data_mc_ratio__384->SetBinContent(16,1.178549);
   data_mc_ratio__384->SetBinContent(17,0.5768921);
   data_mc_ratio__384->SetBinContent(18,1.519015);
   data_mc_ratio__384->SetBinContent(19,2.209513);
   data_mc_ratio__384->SetBinContent(20,4.185656);
   data_mc_ratio__384->SetBinContent(21,1.290365);
   data_mc_ratio__384->SetBinContent(22,0.8036922);
   data_mc_ratio__384->SetBinContent(23,5.456364);
   data_mc_ratio__384->SetBinError(1,0.0006852036);
   data_mc_ratio__384->SetBinError(2,0.001437131);
   data_mc_ratio__384->SetBinError(3,0.002246649);
   data_mc_ratio__384->SetBinError(4,0.002975842);
   data_mc_ratio__384->SetBinError(5,0.00448615);
   data_mc_ratio__384->SetBinError(6,0.005978392);
   data_mc_ratio__384->SetBinError(7,0.005759984);
   data_mc_ratio__384->SetBinError(8,0.006844758);
   data_mc_ratio__384->SetBinError(9,0.00880013);
   data_mc_ratio__384->SetBinError(10,0.01128889);
   data_mc_ratio__384->SetBinError(11,0.01537125);
   data_mc_ratio__384->SetBinError(12,0.01673047);
   data_mc_ratio__384->SetBinError(13,0.01731178);
   data_mc_ratio__384->SetBinError(14,0.04909365);
   data_mc_ratio__384->SetBinError(15,0.05464161);
   data_mc_ratio__384->SetBinError(16,0.0492346);
   data_mc_ratio__384->SetBinError(17,0.03110394);
   data_mc_ratio__384->SetBinError(18,0.1093411);
   data_mc_ratio__384->SetBinError(19,0.2017001);
   data_mc_ratio__384->SetBinError(20,0.5643937);
   data_mc_ratio__384->SetBinError(21,0.2885344);
   data_mc_ratio__384->SetBinError(22,0.5682962);
   data_mc_ratio__384->SetBinError(23,3.858232);
   data_mc_ratio__384->SetMinimum(0.4);
   data_mc_ratio__384->SetMaximum(1.6);
   data_mc_ratio__384->SetEntries(44.5704);
   data_mc_ratio__384->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__384->SetLineColor(ci);
   data_mc_ratio__384->SetLineWidth(2);
   data_mc_ratio__384->SetMarkerStyle(20);
   data_mc_ratio__384->SetMarkerSize(1.2);
   data_mc_ratio__384->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__384->GetXaxis()->SetRange(1,50);
   data_mc_ratio__384->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__384->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__384->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__384->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__384->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__384->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__384->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__384->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__384->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__384->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__384->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__384->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__384->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__384->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__384->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__384->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1384[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1384[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1384[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1384[50] = { 0.0164256, 0.03871811, 0.04156046, 0.06088454, 0.06277775, 0.06597208, 0.1111819, 0.18094, 0.2400358, 0.1962286, 0.1851341, 0.217428, 0.2621672, 0.1013951, 0.187793, 0.3840185, 0.7075942,
   0.220425, 0.2714578, 0.107101, 0.578703, 0.2479296, 0.490347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1384,Graph_from_mc_statistical_error_fy1384,Graph_from_mc_statistical_error_fex1384,Graph_from_mc_statistical_error_fey1384);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1384 = new TH1F("Graph_Graph_from_mc_statistical_error1384","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1384->SetMinimum(0.1508869);
   Graph_Graph_from_mc_statistical_error1384->SetMaximum(1.849113);
   Graph_Graph_from_mc_statistical_error1384->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1384->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1384->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1384->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1384->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1384->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1384->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1384->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1384->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1384->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1384->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1384);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tagFirst_18->cd();
   Aplanarity_tagFirst_18->Modified();
   Aplanarity_tagFirst_18->cd();
   Aplanarity_tagFirst_18->SetSelected(Aplanarity_tagFirst_18);
}
