void Sphericity_algo_17()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Thu Aug 10 12:24:18 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(0,0,1,1);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetFillStyle(4000);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetFrameFillStyle(1000);
   Sphericity_algo_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-1657.533,1.052419,1655886);
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
   st->SetMaximum(1419173);
   
   TH1F *st_stack_154 = new TH1F("st_stack_154","",25,0,1);
   st_stack_154->SetMinimum(0.01);
   st_stack_154->SetMaximum(1490131);
   st_stack_154->SetDirectory(0);
   st_stack_154->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_154->SetLineColor(ci);
   st_stack_154->GetXaxis()->SetRange(1,25);
   st_stack_154->GetXaxis()->SetLabelFont(42);
   st_stack_154->GetXaxis()->SetLabelSize(0.035);
   st_stack_154->GetXaxis()->SetTitleSize(0.035);
   st_stack_154->GetXaxis()->SetTitleFont(42);
   st_stack_154->GetYaxis()->SetTitle("Events/0.04");
   st_stack_154->GetYaxis()->SetLabelFont(42);
   st_stack_154->GetYaxis()->SetLabelSize(0.05);
   st_stack_154->GetYaxis()->SetTitleSize(0.057);
   st_stack_154->GetYaxis()->SetTitleOffset(1.2);
   st_stack_154->GetYaxis()->SetTitleFont(42);
   st_stack_154->GetZaxis()->SetLabelFont(42);
   st_stack_154->GetZaxis()->SetLabelSize(0.035);
   st_stack_154->GetZaxis()->SetTitleSize(0.035);
   st_stack_154->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_154);
   
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,566907);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,533821.3);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,282515.3);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,171085.7);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,81649.93);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,35200.53);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,8060.874);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,3565.601);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,1296.472);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,539.1404);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,647.3046);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(12,146.7338);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(13,98.06819);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,94.74647);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(15,38.60203);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(16,341.2314);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(17,36.53424);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(18,14.01307);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(19,22.4309);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(20,10.95014);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,23047.16);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,23966.6);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,7091.18);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,17540.52);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,3702.625);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,2967.318);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,1036.986);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,816.3793);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,422.1963);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,200.608);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,354.1298);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(12,52.53831);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(13,34.10319);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,41.01761);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(15,21.4347);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(16,295.788);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(17,14.3098);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(18,6.440881);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(19,18.44565);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(20,7.915757);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(112106);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_2 = new TH1D("VbbHcc_algo_Sphericity_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,3465.413);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,3462.92);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,1947.535);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,1108.102);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,554.0299);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,263.7189);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,111.7063);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,45.92666);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,23.09825);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,12.21488);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,6.741513);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,6.471495);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,2.406104);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,1.126261);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,1.581992);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,1.076382);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(17,0.9355839);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(18,1.271035);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(19,0.1589904);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(20,0.1020392);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(21,0.027729);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,25.82178);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,25.71967);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,19.22763);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,14.63702);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,10.51143);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,7.109105);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,4.7047);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,2.884115);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,2.171353);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,1.45035);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,1.11776);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,1.120705);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,0.639453);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,0.2575722);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.5709323);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,0.4420207);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(17,0.3801509);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(18,0.6209166);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(19,0.08806805);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(20,0.05422588);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(21,0.027729);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(138653);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_2,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_3 = new TH1D("VbbHcc_algo_Sphericity_stack_3","",25,0,1);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(1,63944.12);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(2,68852.23);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(3,36829.83);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(4,19969.22);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(5,10481.36);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(6,5005.651);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(7,2178.315);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(8,949.6481);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(9,448.3475);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(10,240.1065);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(11,139.6054);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(12,82.6624);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(13,51.72158);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(14,34.00992);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(15,23.90383);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(16,14.96198);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(17,11.49397);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(18,6.281085);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(19,4.029966);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(20,1.3425);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(21,0.4448483);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(22,0.155056);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(23,0.06077489);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(24,0.05678712);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(1,68.89031);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(2,71.7817);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(3,52.44049);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(4,38.59);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(5,27.91392);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(6,19.17156);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(7,12.50617);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(8,8.128432);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(9,5.50216);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(10,3.971593);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(11,3.002426);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(12,2.27605);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(13,1.785533);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(14,1.407445);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(15,1.185625);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(16,0.9381104);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(17,0.8233403);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(18,0.6276728);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(19,0.4954882);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(20,0.2684795);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(21,0.1673659);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(22,0.09524612);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(23,0.04382983);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(24,0.05678712);
   VbbHcc_algo_Sphericity_stack_3->SetEntries(3113082);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_3->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_3,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_4 = new TH1D("VbbHcc_algo_Sphericity_stack_4","",25,0,1);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(1,3086.154);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(2,2934.204);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(3,1722.279);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(4,1011.725);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(5,506.478);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(6,217.2776);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(7,67.12396);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(8,20.37021);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(9,8.449962);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(10,4.327412);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(11,0.9172146);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(12,1.041448);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(13,0.7032459);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(14,0.3442469);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(15,0.6633152);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(16,3.419472);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(17,0.7173523);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(18,0.04054797);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(19,0.03119144);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(1,43.23733);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(2,44.66828);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(3,34.5625);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(4,27.216);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(5,16.64984);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(6,10.18415);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(7,5.322224);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(8,3.271771);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(9,1.606985);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(10,1.160623);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(11,0.2571358);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(12,0.3971429);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(13,0.2281183);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(14,0.163883);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(15,0.214612);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(16,3.267154);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(17,0.4104698);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(18,0.04054797);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(19,0.03119144);
   VbbHcc_algo_Sphericity_stack_4->SetEntries(54522);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_4->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_4,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_5 = new TH1D("VbbHcc_algo_Sphericity_stack_5","",25,0,1);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(1,1112.066);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(2,901.9544);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(3,616.9236);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(4,285.3872);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(5,173.0586);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(6,58.30446);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(7,18.64774);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(8,5.589517);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(9,3.124215);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(10,1.792398);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(11,1.51616);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(12,0.4148486);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(13,0.4405489);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(14,0.5861966);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(15,0.05392928);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(16,0.009769569);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(17,0.1564287);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(19,0.1846363);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(1,40.01733);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(2,35.47249);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(3,33.907);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(4,18.27774);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(5,17.8692);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(6,5.606747);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(7,3.239681);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(8,1.775996);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(9,0.9294791);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(10,1.474303);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(11,1.072165);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(12,0.2024972);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(13,0.2152676);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(14,0.4693624);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(15,0.0404757);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(16,0.009769569);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(17,0.1564287);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(19,0.1846363);
   VbbHcc_algo_Sphericity_stack_5->SetEntries(16864);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_5->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_5,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_6 = new TH1D("VbbHcc_algo_Sphericity_stack_6","",25,0,1);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(1,8.350496);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(2,11.30347);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(3,4.547361);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(4,0.906791);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(5,2.478832);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(6,0.4610079);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(7,0.735761);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(1,1.744806);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(2,1.9936);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(3,1.273719);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(4,0.5437793);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(5,0.944421);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(6,0.4610079);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(7,0.5219217);
   VbbHcc_algo_Sphericity_stack_6->SetEntries(83);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_6->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_6,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_7 = new TH1D("VbbHcc_algo_Sphericity_stack_7","",25,0,1);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(1,25.01678);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(2,25.39407);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(3,12.17008);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(4,6.142152);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(5,6.412124);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(6,2.345778);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(7,0.6467304);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(8,0.3517797);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(16,0.1175761);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(1,2.686641);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(2,2.670268);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(3,1.834299);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(4,1.305668);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(5,1.354548);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(6,0.7985484);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(7,0.464059);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(8,0.3517797);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(16,0.1175761);
   VbbHcc_algo_Sphericity_stack_7->SetEntries(290);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_7->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_7,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_8 = new TH1D("VbbHcc_algo_Sphericity_stack_8","",25,0,1);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(1,37.89988);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(2,37.5963);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(3,19.78385);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(4,13.98239);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(5,10.57496);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(6,4.287613);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(8,0.8226581);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(9,0.3190703);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(1,3.348829);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(2,3.325122);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(3,2.397713);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(4,2.046045);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(5,1.75857);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(6,1.098907);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(8,0.4796848);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(9,0.3190703);
   VbbHcc_algo_Sphericity_stack_8->SetEntries(443);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_8->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_8,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_9 = new TH1D("VbbHcc_algo_Sphericity_stack_9","",25,0,1);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(1,26.26279);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(2,26.0652);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(3,14.29853);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(4,9.721976);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(5,6.385801);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(6,2.84902);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(7,0.7689366);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(8,0.2109688);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(9,0.06984766);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(10,0.02468553);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(11,0.008843068);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(12,0.006130651);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(13,0.003610912);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(14,0.002583076);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(15,0.004512033);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(1,0.2292101);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(2,0.2278363);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(3,0.1682475);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(4,0.1394444);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(5,0.1135978);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(6,0.07533055);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(7,0.03906608);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(8,0.02015306);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(9,0.0111001);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(10,0.00659304);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(11,0.004040203);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(12,0.003542593);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(13,0.002133986);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(14,0.002011135);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(15,0.002618911);
   VbbHcc_algo_Sphericity_stack_9->SetEntries(47732);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_9->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_9,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_10 = new TH1D("VbbHcc_algo_Sphericity_stack_10","",25,0,1);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(1,15.0857);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(2,15.2977);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(3,8.605639);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(4,5.251063);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(5,2.97269);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(6,1.398997);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(7,0.4640349);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(8,0.1625382);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(9,0.05629411);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(10,0.03917347);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(11,0.0176149);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(12,0.01043592);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(13,0.009206394);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(14,0.003911495);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(15,0.00370781);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(16,0.001830459);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(17,0.002800958);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(18,0.001290679);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(19,0.001225378);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(1,0.08212324);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(2,0.08278893);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(3,0.06208517);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(4,0.04853226);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(5,0.03647922);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(6,0.02502267);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(7,0.01433877);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(8,0.008417082);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(9,0.004899357);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(10,0.004064921);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(11,0.002721918);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(12,0.002030136);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(13,0.001947607);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(14,0.001171742);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(15,0.001124404);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(16,0.0007953128);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(17,0.0010675);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(18,0.0007515898);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(19,0.0006157539);
   VbbHcc_algo_Sphericity_stack_10->SetEntries(112076);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_10->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_10,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_11 = new TH1D("VbbHcc_algo_Sphericity_stack_11","",25,0,1);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(1,0.2504958);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(2,0.2030246);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(3,0.1184365);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(4,0.07526334);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(5,0.04273318);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(6,0.01703302);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(7,0.006390065);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(9,0.001319221);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(1,0.02151508);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(2,0.01960722);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(3,0.01474521);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(4,0.01169095);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(5,0.009154038);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(6,0.005462428);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(7,0.003178725);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(9,0.001319221);
   VbbHcc_algo_Sphericity_stack_11->SetEntries(413);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_11->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_11,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_12 = new TH1D("VbbHcc_algo_Sphericity_stack_12","",25,0,1);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(1,0.09644001);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(2,0.1097628);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(3,0.05603913);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(4,0.03551916);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(5,0.0222604);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(6,0.009361828);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(7,0.002862038);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(8,0.00319929);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(9,0.0002292386);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(10,0.0001784253);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(11,0.0001965434);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(13,0.0001061432);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(16,6.327442e-05);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(1,0.004819373);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(2,0.005125617);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(3,0.003658543);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(4,0.00294683);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(5,0.002363809);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(6,0.001499587);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(7,0.0008255637);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(8,0.0008975704);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(9,0.0002292386);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(10,0.0001784253);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(11,0.0001965434);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(13,0.0001061432);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(16,6.327442e-05);
   VbbHcc_algo_Sphericity_stack_12->SetEntries(1460);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_12->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Sphericity__422 = new TH1D("VbbHcc_algo_Sphericity__422","",25,0,1);
   VbbHcc_algo_Sphericity__422->SetBinContent(1,79186);
   VbbHcc_algo_Sphericity__422->SetBinContent(2,71143);
   VbbHcc_algo_Sphericity__422->SetBinContent(3,40133);
   VbbHcc_algo_Sphericity__422->SetBinContent(4,22522);
   VbbHcc_algo_Sphericity__422->SetBinContent(5,12140);
   VbbHcc_algo_Sphericity__422->SetBinContent(6,5586);
   VbbHcc_algo_Sphericity__422->SetBinContent(7,2270);
   VbbHcc_algo_Sphericity__422->SetBinContent(8,897);
   VbbHcc_algo_Sphericity__422->SetBinContent(9,450);
   VbbHcc_algo_Sphericity__422->SetBinContent(10,217);
   VbbHcc_algo_Sphericity__422->SetBinContent(11,136);
   VbbHcc_algo_Sphericity__422->SetBinContent(12,73);
   VbbHcc_algo_Sphericity__422->SetBinContent(13,50);
   VbbHcc_algo_Sphericity__422->SetBinContent(14,39);
   VbbHcc_algo_Sphericity__422->SetBinContent(15,23);
   VbbHcc_algo_Sphericity__422->SetBinContent(16,12);
   VbbHcc_algo_Sphericity__422->SetBinContent(17,17);
   VbbHcc_algo_Sphericity__422->SetBinContent(18,3);
   VbbHcc_algo_Sphericity__422->SetBinContent(19,5);
   VbbHcc_algo_Sphericity__422->SetBinContent(20,5);
   VbbHcc_algo_Sphericity__422->SetBinContent(21,1);
   VbbHcc_algo_Sphericity__422->SetEntries(234932);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity__422->SetLineColor(ci);
   VbbHcc_algo_Sphericity__422->SetLineWidth(2);
   VbbHcc_algo_Sphericity__422->SetMarkerStyle(20);
   VbbHcc_algo_Sphericity__422->SetMarkerSize(1.2);
   VbbHcc_algo_Sphericity__422->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity__422->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__422->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__422->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__422->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__422->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__422->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__422->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__422->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity__422->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__422->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__422->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__422->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__422->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__422->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Sphericity_fx1307[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_VbbHcc_algo_Sphericity_fy1307[25] = {
   638627.7,
   610088.6,
   323691.5,
   193496.2,
   93393.75,
   40756.85,
   10439.29,
   4588.686,
   1779.938,
   797.6456,
   796.1115,
   237.3406,
   153.3526,
   130.8196,
   64.81332,
   360.8184,
   49.84038,
   21.60703,
   26.83691,
   12.39468,
   0.4725773,
   0.155056,
   0.06077489,
   0.05678712,
   0};
   Double_t Graph_from_VbbHcc_algo_Sphericity_fex1307[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_VbbHcc_algo_Sphericity_fey1307[25] = {
   23047.35,
   23966.79,
   7091.566,
   17540.6,
   3702.827,
   2967.411,
   1037.091,
   816.4336,
   422.2419,
   200.6614,
   354.146,
   52.60142,
   34.15733,
   41.04556,
   21.47616,
   295.8079,
   14.34523,
   6.501238,
   18.45346,
   7.920494,
   0.1696474,
   0.09524612,
   0.04382983,
   0.05678712,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_algo_Sphericity_fx1307,Graph_from_VbbHcc_algo_Sphericity_fy1307,Graph_from_VbbHcc_algo_Sphericity_fex1307,Graph_from_VbbHcc_algo_Sphericity_fey1307);
   gre->SetName("Graph_from_VbbHcc_algo_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Sphericity1307 = new TH1F("Graph_Graph_from_VbbHcc_algo_Sphericity1307","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->SetMaximum(727842.5);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Sphericity1307);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Sphericity","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Sphericity","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Sphericity_algo_17->cd();
  
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
   
   TH1D *data_mc_ratio__423 = new TH1D("data_mc_ratio__423","",25,0,1);
   data_mc_ratio__423->SetBinContent(1,0.123994);
   data_mc_ratio__423->SetBinContent(2,0.1166109);
   data_mc_ratio__423->SetBinContent(3,0.1239853);
   data_mc_ratio__423->SetBinContent(4,0.116395);
   data_mc_ratio__423->SetBinContent(5,0.1299873);
   data_mc_ratio__423->SetBinContent(6,0.1370567);
   data_mc_ratio__423->SetBinContent(7,0.2174477);
   data_mc_ratio__423->SetBinContent(8,0.1954808);
   data_mc_ratio__423->SetBinContent(9,0.2528178);
   data_mc_ratio__423->SetBinContent(10,0.2720507);
   data_mc_ratio__423->SetBinContent(11,0.1708303);
   data_mc_ratio__423->SetBinContent(12,0.3075749);
   data_mc_ratio__423->SetBinContent(13,0.326046);
   data_mc_ratio__423->SetBinContent(14,0.2981205);
   data_mc_ratio__423->SetBinContent(15,0.3548653);
   data_mc_ratio__423->SetBinContent(16,0.03325772);
   data_mc_ratio__423->SetBinContent(17,0.3410889);
   data_mc_ratio__423->SetBinContent(18,0.1388437);
   data_mc_ratio__423->SetBinContent(19,0.1863106);
   data_mc_ratio__423->SetBinContent(20,0.4033989);
   data_mc_ratio__423->SetBinContent(21,2.116056);
   data_mc_ratio__423->SetBinError(1,0.0004406324);
   data_mc_ratio__423->SetBinError(2,0.000437193);
   data_mc_ratio__423->SetBinError(3,0.0006188986);
   data_mc_ratio__423->SetBinError(4,0.0007755878);
   data_mc_ratio__423->SetBinError(5,0.001179754);
   data_mc_ratio__423->SetBinError(6,0.001833791);
   data_mc_ratio__423->SetBinError(7,0.00456396);
   data_mc_ratio__423->SetBinError(8,0.006526914);
   data_mc_ratio__423->SetBinError(9,0.01191794);
   data_mc_ratio__423->SetBinError(10,0.018468);
   data_mc_ratio__423->SetBinError(11,0.01464858);
   data_mc_ratio__423->SetBinError(12,0.03599892);
   data_mc_ratio__423->SetBinError(13,0.04610987);
   data_mc_ratio__423->SetBinError(14,0.04773748);
   data_mc_ratio__423->SetBinError(15,0.07399454);
   data_mc_ratio__423->SetBinError(16,0.009600678);
   data_mc_ratio__423->SetBinError(17,0.08272621);
   data_mc_ratio__423->SetBinError(18,0.08016145);
   data_mc_ratio__423->SetBinError(19,0.08332061);
   data_mc_ratio__423->SetBinError(20,0.1804055);
   data_mc_ratio__423->SetBinError(21,2.116056);
   data_mc_ratio__423->SetMinimum(0.4);
   data_mc_ratio__423->SetMaximum(1.6);
   data_mc_ratio__423->SetEntries(7.690979);
   data_mc_ratio__423->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__423->SetLineColor(ci);
   data_mc_ratio__423->SetLineWidth(2);
   data_mc_ratio__423->SetMarkerStyle(20);
   data_mc_ratio__423->SetMarkerSize(1.2);
   data_mc_ratio__423->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__423->GetXaxis()->SetRange(1,25);
   data_mc_ratio__423->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__423->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__423->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__423->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__423->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__423->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__423->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__423->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__423->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__423->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__423->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__423->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__423->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__423->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__423->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__423->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__423->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1308[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_mc_statistical_error_fy1308[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1308[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_mc_statistical_error_fey1308[25] = {
   0.03608887,
   0.03928412,
   0.02190841,
   0.09065085,
   0.03964748,
   0.07280767,
   0.09934492,
   0.1779232,
   0.2372228,
   0.2515671,
   0.4448447,
   0.2216284,
   0.2227372,
   0.313757,
   0.3313542,
   0.8198247,
   0.2878235,
   0.3008853,
   0.6876149,
   0.6390238,
   0.3589834,
   0.614269,
   0.7211831,
   1,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1308,Graph_from_mc_statistical_error_fy1308,Graph_from_mc_statistical_error_fex1308,Graph_from_mc_statistical_error_fey1308);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1308 = new TH1F("Graph_Graph_from_mc_statistical_error1308","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1308->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1308->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1308->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1308->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1308->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1308->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1308->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1308->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1308->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1308->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1308->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1308->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1308->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1308->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1308->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1308->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1308->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1308->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1308);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_algo_17->cd();
   Sphericity_algo_17->Modified();
   Sphericity_algo_17->cd();
   Sphericity_algo_17->SetSelected(Sphericity_algo_17);
}
