void Aplanarity_algo_18()
{
//=========Macro generated from canvas: Aplanarity_algo_18/Aplanarity_algo_18
//=========  (Thu Aug  3 12:24:55 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_18 = new TCanvas("Aplanarity_algo_18", "Aplanarity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_18->SetHighLightColor(2);
   Aplanarity_algo_18->Range(0,0,1,1);
   Aplanarity_algo_18->SetFillColor(0);
   Aplanarity_algo_18->SetFillStyle(4000);
   Aplanarity_algo_18->SetBorderMode(0);
   Aplanarity_algo_18->SetBorderSize(2);
   Aplanarity_algo_18->SetFrameFillStyle(1000);
   Aplanarity_algo_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-4726.519,1.052419,4721802);
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
   st->SetMaximum(4046809);
   
   TH1F *st_stack_159 = new TH1F("st_stack_159","",50,0,1);
   st_stack_159->SetMinimum(0.01);
   st_stack_159->SetMaximum(4249149);
   st_stack_159->SetDirectory(0);
   st_stack_159->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_159->SetLineColor(ci);
   st_stack_159->GetXaxis()->SetRange(1,50);
   st_stack_159->GetXaxis()->SetLabelFont(42);
   st_stack_159->GetXaxis()->SetLabelSize(0.035);
   st_stack_159->GetXaxis()->SetTitleSize(0.035);
   st_stack_159->GetXaxis()->SetTitleFont(42);
   st_stack_159->GetYaxis()->SetTitle("Events/0.02");
   st_stack_159->GetYaxis()->SetLabelFont(42);
   st_stack_159->GetYaxis()->SetLabelSize(0.05);
   st_stack_159->GetYaxis()->SetTitleSize(0.057);
   st_stack_159->GetYaxis()->SetTitleOffset(1.2);
   st_stack_159->GetYaxis()->SetTitleFont(42);
   st_stack_159->GetZaxis()->SetLabelFont(42);
   st_stack_159->GetZaxis()->SetLabelSize(0.035);
   st_stack_159->GetZaxis()->SetTitleSize(0.035);
   st_stack_159->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_159);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,1573191);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,197178.8);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,40705.03);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,12587.05);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,2899.021);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,601.1114);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,218.3761);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,93.22416);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,19.5791);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,9.789551);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,9.789551);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,9.789551);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,26671.95);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,6310.168);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,3213.951);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,2308.782);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,842.8004);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,375.4233);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,75.31215);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,48.23141);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,13.84452);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,9.789551);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,9.789551);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,9.789551);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(114901);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,11353.31);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,1464.643);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,333.5483);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,90.77108);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,29.03612);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,10.70769);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,4.256342);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,1.369109);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,1.931733);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,0.9116307);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,1.109217);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.3100993);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,0.04860075);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,0.1033664);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,42.45749);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,15.22634);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,7.357239);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,3.819138);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,2.189415);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,1.381691);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.7608036);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.3571396);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.6394568);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.4246785);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.4564776);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.1268225);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,0.04860075);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,0.07322099);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(162879);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_3 = new TH1D("VbbHcc_algo_Aplanarity_stack_3","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(1,199015.1);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(2,24541.13);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(3,4945.632);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(4,1316.175);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(5,430.2292);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(6,169.7369);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(7,71.46133);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(8,35.46293);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(9,20.34041);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(10,10.13195);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(11,7.120564);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(12,3.4937);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(13,1.943758);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(14,1.405321);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(15,0.6250458);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(16,0.2095732);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(17,0.1372627);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(18,0.2782046);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(19,0.2782046);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(20,0.04698062);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(21,0.06863135);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(1,110.6642);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(2,38.63731);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(3,17.20722);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(4,8.800046);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(5,5.004798);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(6,3.122337);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(7,2.018971);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(8,1.400975);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(9,1.078022);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(10,0.7528733);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(11,0.64674);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(12,0.4428859);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(13,0.330989);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(14,0.2877006);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(15,0.1767899);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(16,0.1064509);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(17,0.09705938);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(18,0.1266573);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(19,0.1266573);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(20,0.04698062);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(21,0.06863135);
   VbbHcc_algo_Aplanarity_stack_3->SetEntries(3891102);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_4 = new TH1D("VbbHcc_algo_Aplanarity_stack_4","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(1,9818.435);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(2,1132.602);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(3,245.6182);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(4,53.89883);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(5,12.67013);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(6,4.855767);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(7,0.377335);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(8,0.09257296);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(9,0.1257783);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(10,0.09257296);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(11,0.469908);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(1,74.14315);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(2,28.49351);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(3,14.72867);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(4,5.795234);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(5,4.332787);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(6,1.424393);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(7,0.2178545);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(8,0.09257296);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(9,0.1257783);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(10,0.09257296);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(11,0.2367073);
   VbbHcc_algo_Aplanarity_stack_4->SetEntries(56536);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_5 = new TH1D("VbbHcc_algo_Aplanarity_stack_5","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(1,3080.837);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(2,358.6533);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(3,52.7523);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(4,22.34138);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(5,1.426003);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(6,0.9508694);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(7,0.8965224);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(8,0.1715234);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(1,78.99581);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(2,26.8481);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(3,7.091676);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(4,5.677743);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(5,0.5544924);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(6,0.5265251);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(7,0.4793754);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(8,0.1343137);
   VbbHcc_algo_Aplanarity_stack_5->SetEntries(15329);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_6 = new TH1D("VbbHcc_algo_Aplanarity_stack_6","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(1,28.02665);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(2,4.972469);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(3,1.356128);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(4,0.4520427);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(1,3.559388);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(2,1.499256);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(3,0.7829609);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(4,0.4520427);
   VbbHcc_algo_Aplanarity_stack_6->SetEntries(77);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_7 = new TH1D("VbbHcc_algo_Aplanarity_stack_7","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(1,78.27801);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(2,6.729783);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(3,2.125195);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(8,0.3541991);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(1,5.265548);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(2,1.543918);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(3,0.8676071);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(8,0.3541991);
   VbbHcc_algo_Aplanarity_stack_7->SetEntries(247);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_8 = new TH1D("VbbHcc_algo_Aplanarity_stack_8","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(1,139.1483);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(2,9.500088);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(3,2.235315);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(4,0.5588287);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(5,0.2794144);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(1,6.235387);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(2,1.629252);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(3,0.7903031);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(4,0.3951516);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(5,0.2794144);
   VbbHcc_algo_Aplanarity_stack_8->SetEntries(543);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_9 = new TH1D("VbbHcc_algo_Aplanarity_stack_9","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(1,100.2657);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(2,7.161344);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(3,1.067459);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(4,0.2034343);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(5,0.08685959);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(6,0.01600045);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(7,0.006857336);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(12,0.002285779);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(13,0.002285779);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(1,0.4787329);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(2,0.1279424);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(3,0.04939609);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(4,0.02156399);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(5,0.01409049);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(6,0.006047602);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(7,0.003959085);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(12,0.002285779);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(13,0.002285779);
   VbbHcc_algo_Aplanarity_stack_9->SetEntries(47604);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_10 = new TH1D("VbbHcc_algo_Aplanarity_stack_10","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(1,58.59446);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(2,6.664301);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(3,1.288865);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(4,0.2831687);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(5,0.09657543);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(6,0.02921109);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(7,0.01013446);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(8,0.005365302);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(9,0.002980723);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(10,0.001788434);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(11,0.0005961446);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(12,0.0005961446);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(1,0.1868978);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(2,0.06303084);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(3,0.02771912);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(4,0.01299267);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(5,0.007587683);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(6,0.004173012);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(7,0.002457967);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(8,0.001788434);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(9,0.00133302);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(10,0.001032553);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(11,0.0005961446);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(12,0.0005961446);
   VbbHcc_algo_Aplanarity_stack_10->SetEntries(112352);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_11 = new TH1D("VbbHcc_algo_Aplanarity_stack_11","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(1,0.725968);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(2,0.06144557);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(3,0.01137881);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(4,0.002275762);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(1,0.04064641);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(2,0.01182521);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(3,0.005088758);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(4,0.002275762);
   VbbHcc_algo_Aplanarity_stack_11->SetEntries(352);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_12 = new TH1D("VbbHcc_algo_Aplanarity_stack_12","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(1,0.3410094);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(2,0.03056499);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(3,0.005393822);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(4,0.003296225);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(5,0.0002996568);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(1,0.0101087);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(2,0.003026385);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(3,0.001271336);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(4,0.0009938492);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(5,0.0002996568);
   VbbHcc_algo_Aplanarity_stack_12->SetEntries(1270);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Aplanarity__436 = new TH1D("VbbHcc_algo_Aplanarity__436","",50,0,1);
   VbbHcc_algo_Aplanarity__436->SetBinContent(0,1);
   VbbHcc_algo_Aplanarity__436->SetBinContent(1,1821064);
   VbbHcc_algo_Aplanarity__436->SetBinContent(2,250153);
   VbbHcc_algo_Aplanarity__436->SetBinContent(3,54060);
   VbbHcc_algo_Aplanarity__436->SetBinContent(4,13279);
   VbbHcc_algo_Aplanarity__436->SetBinContent(5,3470);
   VbbHcc_algo_Aplanarity__436->SetBinContent(6,1066);
   VbbHcc_algo_Aplanarity__436->SetBinContent(7,408);
   VbbHcc_algo_Aplanarity__436->SetBinContent(8,179);
   VbbHcc_algo_Aplanarity__436->SetBinContent(9,90);
   VbbHcc_algo_Aplanarity__436->SetBinContent(10,49);
   VbbHcc_algo_Aplanarity__436->SetBinContent(11,29);
   VbbHcc_algo_Aplanarity__436->SetBinContent(12,18);
   VbbHcc_algo_Aplanarity__436->SetBinContent(13,16);
   VbbHcc_algo_Aplanarity__436->SetBinContent(14,10);
   VbbHcc_algo_Aplanarity__436->SetBinContent(15,7);
   VbbHcc_algo_Aplanarity__436->SetBinContent(16,1);
   VbbHcc_algo_Aplanarity__436->SetEntries(2143949);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity__436->SetLineColor(ci);
   VbbHcc_algo_Aplanarity__436->SetLineWidth(2);
   VbbHcc_algo_Aplanarity__436->SetMarkerStyle(20);
   VbbHcc_algo_Aplanarity__436->SetMarkerSize(1.2);
   VbbHcc_algo_Aplanarity__436->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity__436->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__436->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__436->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__436->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__436->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__436->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__436->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__436->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity__436->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__436->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__436->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__436->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__436->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__436->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fx1317[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fy1317[50] = {
   1796864,
   224710.9,
   46290.67,
   14071.74,
   3372.846,
   787.4079,
   295.3846,
   130.6799,
   41.98,
   11.13794,
   8.700285,
   13.59623,
   11.7356,
   1.453921,
   10.51796,
   0.2095732,
   0.1372627,
   0.2782046,
   0.2782046,
   0.04698062,
   0.06863135,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fex1317[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fey1317[50] = {
   26672.44,
   6310.427,
   3214.048,
   2308.816,
   842.8295,
   375.4419,
   75.34489,
   48.25465,
   13.90171,
   0.8693335,
   0.8262415,
   9.800385,
   9.795145,
   0.2917768,
   9.791421,
   0.1064509,
   0.09705938,
   0.1266573,
   0.1266573,
   0.04698062,
   0.06863135,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_algo_Aplanarity_fx1317,Graph_from_VbbHcc_algo_Aplanarity_fy1317,Graph_from_VbbHcc_algo_Aplanarity_fex1317,Graph_from_VbbHcc_algo_Aplanarity_fey1317);
   gre->SetName("Graph_from_VbbHcc_algo_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Aplanarity1317 = new TH1F("Graph_Graph_from_VbbHcc_algo_Aplanarity1317","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->SetMaximum(2005890);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Aplanarity1317);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_algo_18->cd();
  
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
   
   TH1D *data_mc_ratio__437 = new TH1D("data_mc_ratio__437","",50,0,1);
   data_mc_ratio__437->SetBinContent(1,1.013468);
   data_mc_ratio__437->SetBinContent(2,1.113221);
   data_mc_ratio__437->SetBinContent(3,1.167838);
   data_mc_ratio__437->SetBinContent(4,0.9436646);
   data_mc_ratio__437->SetBinContent(5,1.028805);
   data_mc_ratio__437->SetBinContent(6,1.353809);
   data_mc_ratio__437->SetBinContent(7,1.38125);
   data_mc_ratio__437->SetBinContent(8,1.36976);
   data_mc_ratio__437->SetBinContent(9,2.143878);
   data_mc_ratio__437->SetBinContent(10,4.399377);
   data_mc_ratio__437->SetBinContent(11,3.333224);
   data_mc_ratio__437->SetBinContent(12,1.323896);
   data_mc_ratio__437->SetBinContent(13,1.363374);
   data_mc_ratio__437->SetBinContent(14,6.877951);
   data_mc_ratio__437->SetBinContent(15,0.6655281);
   data_mc_ratio__437->SetBinContent(16,4.771602);
   data_mc_ratio__437->SetBinError(1,0.0007510128);
   data_mc_ratio__437->SetBinError(2,0.002225762);
   data_mc_ratio__437->SetBinError(3,0.005022784);
   data_mc_ratio__437->SetBinError(4,0.008189078);
   data_mc_ratio__437->SetBinError(5,0.01746499);
   data_mc_ratio__437->SetBinError(6,0.04146473);
   data_mc_ratio__437->SetBinError(7,0.06838207);
   data_mc_ratio__437->SetBinError(8,0.1023806);
   data_mc_ratio__437->SetBinError(9,0.2259846);
   data_mc_ratio__437->SetBinError(10,0.6284825);
   data_mc_ratio__437->SetBinError(11,0.6189642);
   data_mc_ratio__437->SetBinError(12,0.3120453);
   data_mc_ratio__437->SetBinError(13,0.3408434);
   data_mc_ratio__437->SetBinError(14,2.174999);
   data_mc_ratio__437->SetBinError(15,0.251546);
   data_mc_ratio__437->SetBinError(16,4.771602);
   data_mc_ratio__437->SetMinimum(0.4);
   data_mc_ratio__437->SetMaximum(1.6);
   data_mc_ratio__437->SetEntries(28.88884);
   data_mc_ratio__437->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__437->SetLineColor(ci);
   data_mc_ratio__437->SetLineWidth(2);
   data_mc_ratio__437->SetMarkerStyle(20);
   data_mc_ratio__437->SetMarkerSize(1.2);
   data_mc_ratio__437->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__437->GetXaxis()->SetRange(1,50);
   data_mc_ratio__437->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__437->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__437->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__437->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__437->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__437->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__437->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__437->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__437->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__437->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__437->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__437->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__437->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__437->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__437->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__437->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__437->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1318[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_mc_statistical_error_fy1318[50] = {
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
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1318[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_mc_statistical_error_fey1318[50] = {
   0.01484388,
   0.02808242,
   0.06943186,
   0.1640747,
   0.2498867,
   0.4768075,
   0.2550738,
   0.3692585,
   0.3311507,
   0.07805155,
   0.09496718,
   0.7208163,
   0.8346526,
   0.2006826,
   0.9309237,
   0.5079414,
   0.7071068,
   0.4552666,
   0.4552666,
   1,
   1,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1318,Graph_from_mc_statistical_error_fy1318,Graph_from_mc_statistical_error_fex1318,Graph_from_mc_statistical_error_fey1318);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1318 = new TH1F("Graph_Graph_from_mc_statistical_error1318","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1318->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1318->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1318->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1318->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1318->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1318->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1318->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1318->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1318->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1318->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1318->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1318->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1318->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1318->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1318->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1318->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1318->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1318->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1318);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_algo_18->cd();
   Aplanarity_algo_18->Modified();
   Aplanarity_algo_18->cd();
   Aplanarity_algo_18->SetSelected(Aplanarity_algo_18);
}
