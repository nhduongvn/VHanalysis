void Sphericity_tags_16()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Tue Aug 22 09:20:42 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(0,0,1,1);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetFillStyle(4000);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetFrameFillStyle(1000);
   Sphericity_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-135.0854,1.052419,134960.3);
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
   st->SetMaximum(115667.4);
   
   TH1F *st_stack_57 = new TH1F("st_stack_57","",25,0,1);
   st_stack_57->SetMinimum(0.01);
   st_stack_57->SetMaximum(121450.8);
   st_stack_57->SetDirectory(0);
   st_stack_57->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_57->SetLineColor(ci);
   st_stack_57->GetXaxis()->SetRange(1,25);
   st_stack_57->GetXaxis()->SetLabelFont(42);
   st_stack_57->GetXaxis()->SetLabelSize(0.035);
   st_stack_57->GetXaxis()->SetTitleSize(0.035);
   st_stack_57->GetXaxis()->SetTitleFont(42);
   st_stack_57->GetYaxis()->SetTitle("Events/0.04");
   st_stack_57->GetYaxis()->SetLabelFont(42);
   st_stack_57->GetYaxis()->SetLabelSize(0.05);
   st_stack_57->GetYaxis()->SetTitleSize(0.057);
   st_stack_57->GetYaxis()->SetTitleOffset(1.2);
   st_stack_57->GetYaxis()->SetTitleFont(42);
   st_stack_57->GetZaxis()->SetLabelFont(42);
   st_stack_57->GetZaxis()->SetLabelSize(0.035);
   st_stack_57->GetZaxis()->SetTitleSize(0.035);
   st_stack_57->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_57);
   
   
   TH1D *VbbHcc_tags_Sphericity_stack_1 = new TH1D("VbbHcc_tags_Sphericity_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(1,47698.37);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(2,38183.8);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(3,20317.38);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(4,13455.97);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(5,4814.551);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(6,3667.837);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(7,810.9513);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(8,836.8213);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(9,532.3083);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(10,202.8443);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(11,155.7477);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(12,135.8513);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(13,127.4519);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(14,78.17496);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(15,69.40803);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(16,76.18019);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(17,55.40286);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(18,17.69068);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(19,13.79446);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(1,3508.281);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(2,3028.312);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(3,2390.219);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(4,1675.065);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(5,706.3191);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(6,1072.622);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(7,101.1219);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(8,211.5922);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(9,263.8939);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(10,49.12884);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(11,44.90604);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(12,37.62244);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(13,37.12126);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(14,32.47028);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(15,18.38313);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(16,26.47273);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(17,30.43558);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(18,8.229862);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(19,6.931259);
   VbbHcc_tags_Sphericity_stack_1->SetEntries(8758);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_2 = new TH1D("VbbHcc_tags_Sphericity_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(1,184.6619);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(2,138.2721);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(3,84.30112);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(4,52.32253);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(5,27.44821);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(6,16.16969);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(7,10.8412);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(8,5.66159);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(9,5.119274);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(10,2.532354);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(11,1.389316);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(12,0.934267);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(13,0.9297681);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(14,0.9885122);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(15,0.9732728);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(16,0.2707439);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(17,0.4289416);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(18,0.03917379);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(19,0.09255479);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(1,5.094205);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(2,4.376369);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(3,3.447031);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(4,2.830839);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(5,1.987745);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(6,1.560725);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(7,1.241751);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(8,0.897441);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(9,0.8686872);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(10,0.5745228);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(11,0.4792248);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(12,0.3048325);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(13,0.3473619);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(14,0.3509634);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(15,0.4034759);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(16,0.2181818);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(17,0.2501069);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(18,0.07792333);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(19,0.0538767);
   VbbHcc_tags_Sphericity_stack_2->SetEntries(8949);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_2,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_3 = new TH1D("VbbHcc_tags_Sphericity_stack_3","",25,0,1);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(1,3551.097);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(2,2967.961);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(3,1707.979);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(4,987.8117);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(5,583.14);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(6,339.4262);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(7,203.0285);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(8,125.491);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(9,81.54745);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(10,57.04797);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(11,41.05495);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(12,27.62852);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(13,20.76396);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(14,14.9202);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(15,11.54597);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(16,9.807109);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(17,6.79203);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(18,4.471186);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(19,1.736681);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(20,1.02929);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(21,0.3784084);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(22,0.06136011);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(1,13.77519);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(2,12.52843);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(3,9.530519);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(4,7.259537);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(5,5.605722);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(6,4.277149);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(7,3.294905);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(8,2.593873);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(9,2.082321);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(10,1.754974);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(11,1.501527);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(12,1.221894);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(13,1.059688);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(14,0.9009125);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(15,0.7934956);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(16,0.7250782);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(17,0.6069844);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(18,0.4943872);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(19,0.3045523);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(20,0.2352797);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(21,0.1471452);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(22,0.06136011);
   VbbHcc_tags_Sphericity_stack_3->SetEntries(216002);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_3->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_3,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_4 = new TH1D("VbbHcc_tags_Sphericity_stack_4","",25,0,1);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(1,524.9046);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(2,423.1145);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(3,249.2103);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(4,160.8882);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(5,74.00674);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(6,42.68002);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(7,20.00301);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(8,12.69132);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(9,9.53061);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(10,8.44399);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(11,3.767873);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(12,3.477582);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(13,1.639736);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(14,1.909046);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(15,2.09214);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(16,1.655459);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(17,1.660182);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(18,0.5165645);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(19,0.2733204);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(20,0.05507055);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(21,0.05950899);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(1,13.69451);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(2,13.03043);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(3,10.54982);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(4,9.025594);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(5,3.658653);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(6,3.497479);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(7,1.60176);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(8,1.163432);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(9,0.9842279);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(10,1.840689);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(11,0.5842519);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(12,0.7435719);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(13,0.3072253);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(14,0.4505854);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(15,0.4868677);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(16,0.399177);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(17,0.3953308);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(18,0.1742736);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(19,0.1230852);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(20,0.05507055);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(21,0.05950899);
   VbbHcc_tags_Sphericity_stack_4->SetEntries(14509);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_4->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_4,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_5 = new TH1D("VbbHcc_tags_Sphericity_stack_5","",25,0,1);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(1,63.55583);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(2,30.90044);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(3,25.88753);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(4,12.67589);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(5,9.638333);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(6,3.588753);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(7,2.96834);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(8,0.779465);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(9,1.212082);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(10,1.117998);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(11,0.6537456);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(12,0.4523432);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(13,1.498734);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(14,0.07811603);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(15,0.07312787);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(16,0.2120956);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(17,0.000519684);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(18,0.05584473);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(19,0.07194844);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(20,0.1401813);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(1,6.919103);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(2,2.82348);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(3,5.639778);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(4,1.794756);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(5,1.691006);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(6,0.4981152);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(7,0.8289694);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(8,0.2337133);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(9,0.3773963);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(10,0.8425591);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(11,0.2042234);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(12,0.1853045);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(13,0.7984037);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(14,0.06366256);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(15,0.05834525);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(16,0.1109284);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(17,0.0003684261);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(18,0.05558525);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(19,0.06581722);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(20,0.1401813);
   VbbHcc_tags_Sphericity_stack_5->SetEntries(3148);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_5->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_5,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_6 = new TH1D("VbbHcc_tags_Sphericity_stack_6","",25,0,1);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(1,0.2446839);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(2,0.1142782);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(3,0.3876837);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(4,0.2407334);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(5,0.1195687);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(7,0.07803031);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(1,0.1733081);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(2,0.1142782);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(3,0.2239242);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(4,0.1702789);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(5,0.1195687);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(7,0.07803031);
   VbbHcc_tags_Sphericity_stack_6->SetEntries(10);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_6->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_6,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_7 = new TH1D("VbbHcc_tags_Sphericity_stack_7","",25,0,1);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(1,1.127488);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(2,1.222706);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(3,0.268744);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(4,0.6530999);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(5,0.183314);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(6,0.09227263);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(7,0.265187);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(9,0.09988796);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(12,0.07873842);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(14,0.07699256);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(1,0.314259);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(2,0.3407659);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(3,0.1559111);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(4,0.2471744);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(5,0.1296239);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(6,0.09227263);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(7,0.1532356);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(9,0.09988796);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(12,0.07873842);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(14,0.07699256);
   VbbHcc_tags_Sphericity_stack_7->SetEntries(45);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_7->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_7,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_8 = new TH1D("VbbHcc_tags_Sphericity_stack_8","",25,0,1);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(1,12.72418);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(2,8.774872);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(3,3.981743);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(4,2.947511);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(5,1.281719);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(6,1.901407);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(8,0.2196035);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(1,1.642474);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(2,1.339745);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(3,0.8970801);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(4,0.7935853);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(5,0.5251043);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(6,0.6354997);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(8,0.2196035);
   VbbHcc_tags_Sphericity_stack_8->SetEntries(156);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_8->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_8,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_9 = new TH1D("VbbHcc_tags_Sphericity_stack_9","",25,0,1);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(1,9.174864);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(2,8.064128);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(3,4.477811);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(4,3.0695);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(5,2.034533);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(6,1.033109);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(7,0.3913227);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(8,0.174106);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(9,0.1220335);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(10,0.09530394);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(11,0.04962542);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(12,0.03505788);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(13,0.03116225);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(14,0.02278412);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(15,0.02052946);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(16,0.0117632);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(17,0.009219504);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(18,0.008960967);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(19,0.002370356);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(1,0.1009532);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(2,0.09363284);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(3,0.07005928);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(4,0.05822402);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(5,0.04752511);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(6,0.03405146);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(7,0.02075954);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(8,0.01391939);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(9,0.01186647);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(10,0.01039447);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(11,0.007494197);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(12,0.006248388);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(13,0.005953528);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(14,0.005235113);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(15,0.004774663);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(16,0.003552323);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(17,0.003267754);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(18,0.003181684);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(19,0.001680435);
   VbbHcc_tags_Sphericity_stack_9->SetEntries(28512);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_9->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_9,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_10 = new TH1D("VbbHcc_tags_Sphericity_stack_10","",25,0,1);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(1,4.4281);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(2,3.638471);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(3,2.020844);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(4,1.323672);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(5,0.7955382);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(6,0.4600172);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(7,0.2449415);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(8,0.1369063);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(9,0.1044617);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(10,0.08141678);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(11,0.05399315);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(12,0.04395398);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(13,0.03510859);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(14,0.02765577);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(15,0.02717026);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(16,0.01677419);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(17,0.01283663);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(18,0.01037137);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(19,0.004782562);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(20,0.001425479);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(21,0.001053014);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(22,0.0003765377);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(23,0.000351307);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(1,0.0387248);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(2,0.03469809);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(3,0.02591253);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(4,0.02099964);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(5,0.01635184);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(6,0.01250138);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(7,0.009160144);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(8,0.006881188);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(9,0.005992092);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(10,0.005334688);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(11,0.004362461);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(12,0.003909747);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(13,0.003504744);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(14,0.003089353);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(15,0.00308766);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(16,0.00243242);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(17,0.002130805);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(18,0.001905342);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(19,0.001296279);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(20,0.0007189875);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(21,0.0006090442);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(22,0.0003765377);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(23,0.000351307);
   VbbHcc_tags_Sphericity_stack_10->SetEntries(40948);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_10->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_10,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_11 = new TH1D("VbbHcc_tags_Sphericity_stack_11","",25,0,1);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(1,0.03105445);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(2,0.0339966);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(3,0.006355332);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(4,0.003951917);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(6,0.002238844);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(1,0.008375713);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(2,0.00853856);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(3,0.00367303);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(4,0.002844994);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(6,0.002238844);
   VbbHcc_tags_Sphericity_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_11->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_11,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_12 = new TH1D("VbbHcc_tags_Sphericity_stack_12","",25,0,1);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(1,0.01305576);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(2,0.01006524);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(3,0.003667707);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(4,0.004067778);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(5,0.002173455);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(6,0.0008437728);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(7,0.0005942487);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(8,0.0002291868);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(9,0.0005293219);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(12,0.0004022369);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(1,0.00193513);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(2,0.001683682);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(3,0.001019391);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(4,0.001089044);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(5,0.000778683);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(6,0.0004871657);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(7,0.0004204504);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(8,0.0002291868);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(9,0.0003785274);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(12,0.0003143369);
   VbbHcc_tags_Sphericity_stack_12->SetEntries(127);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_12->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Sphericity__155 = new TH1D("VbbHcc_tags_Sphericity__155","",25,0,1);
   VbbHcc_tags_Sphericity__155->SetBinContent(1,33450);
   VbbHcc_tags_Sphericity__155->SetBinContent(2,24215);
   VbbHcc_tags_Sphericity__155->SetBinContent(3,14065);
   VbbHcc_tags_Sphericity__155->SetBinContent(4,8420);
   VbbHcc_tags_Sphericity__155->SetBinContent(5,5091);
   VbbHcc_tags_Sphericity__155->SetBinContent(6,3083);
   VbbHcc_tags_Sphericity__155->SetBinContent(7,1794);
   VbbHcc_tags_Sphericity__155->SetBinContent(8,1128);
   VbbHcc_tags_Sphericity__155->SetBinContent(9,790);
   VbbHcc_tags_Sphericity__155->SetBinContent(10,571);
   VbbHcc_tags_Sphericity__155->SetBinContent(11,422);
   VbbHcc_tags_Sphericity__155->SetBinContent(12,292);
   VbbHcc_tags_Sphericity__155->SetBinContent(13,239);
   VbbHcc_tags_Sphericity__155->SetBinContent(14,170);
   VbbHcc_tags_Sphericity__155->SetBinContent(15,154);
   VbbHcc_tags_Sphericity__155->SetBinContent(16,109);
   VbbHcc_tags_Sphericity__155->SetBinContent(17,88);
   VbbHcc_tags_Sphericity__155->SetBinContent(18,59);
   VbbHcc_tags_Sphericity__155->SetBinContent(19,23);
   VbbHcc_tags_Sphericity__155->SetBinContent(20,8);
   VbbHcc_tags_Sphericity__155->SetBinContent(21,2);
   VbbHcc_tags_Sphericity__155->SetBinContent(22,1);
   VbbHcc_tags_Sphericity__155->SetEntries(94198);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity__155->SetLineColor(ci);
   VbbHcc_tags_Sphericity__155->SetLineWidth(2);
   VbbHcc_tags_Sphericity__155->SetMarkerStyle(20);
   VbbHcc_tags_Sphericity__155->SetMarkerSize(1.2);
   VbbHcc_tags_Sphericity__155->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity__155->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__155->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__155->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__155->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__155->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__155->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__155->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__155->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity__155->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__155->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__155->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__155->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__155->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__155->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Sphericity_fx1113[25] = {
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
   Double_t Graph_from_VbbHcc_tags_Sphericity_fy1113[25] = {
   52050.33,
   41765.91,
   22395.9,
   14677.91,
   5513.201,
   4073.192,
   1048.772,
   981.9755,
   630.0446,
   272.1633,
   202.7172,
   168.5021,
   152.3504,
   96.19827,
   84.14025,
   88.15413,
   64.30659,
   22.79278,
   15.97612,
   1.225967,
   0.4389704,
   0.06173665,
   0.000351307,
   0,
   0};
   Double_t Graph_from_VbbHcc_tags_Sphericity_fex1113[25] = {
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
   Double_t Graph_from_VbbHcc_tags_Sphericity_fey1113[25] = {
   3508.346,
   3028.371,
   2390.271,
   1675.108,
   706.3558,
   1072.638,
   101.1994,
   211.6134,
   263.9057,
   49.20519,
   44.93795,
   37.6514,
   37.14786,
   32.48795,
   18.4112,
   26.48679,
   30.44523,
   8.247096,
   6.93956,
   0.2793575,
   0.1587243,
   0.06136127,
   0.000351307,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_tags_Sphericity_fx1113,Graph_from_VbbHcc_tags_Sphericity_fy1113,Graph_from_VbbHcc_tags_Sphericity_fex1113,Graph_from_VbbHcc_tags_Sphericity_fey1113);
   gre->SetName("Graph_from_VbbHcc_tags_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Sphericity1113 = new TH1F("Graph_Graph_from_VbbHcc_tags_Sphericity1113","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->SetMaximum(61114.54);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Sphericity1113);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Sphericity","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Sphericity","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Sphericity_tags_16->cd();
  
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
   
   TH1D *data_mc_ratio__156 = new TH1D("data_mc_ratio__156","",25,0,1);
   data_mc_ratio__156->SetBinContent(1,0.6426472);
   data_mc_ratio__156->SetBinContent(2,0.5797791);
   data_mc_ratio__156->SetBinContent(3,0.6280166);
   data_mc_ratio__156->SetBinContent(4,0.5736512);
   data_mc_ratio__156->SetBinContent(5,0.9234199);
   data_mc_ratio__156->SetBinContent(6,0.7569002);
   data_mc_ratio__156->SetBinContent(7,1.710571);
   data_mc_ratio__156->SetBinContent(8,1.148705);
   data_mc_ratio__156->SetBinContent(9,1.253879);
   data_mc_ratio__156->SetBinContent(10,2.098005);
   data_mc_ratio__156->SetBinContent(11,2.081718);
   data_mc_ratio__156->SetBinContent(12,1.732916);
   data_mc_ratio__156->SetBinContent(13,1.568752);
   data_mc_ratio__156->SetBinContent(14,1.767184);
   data_mc_ratio__156->SetBinContent(15,1.830277);
   data_mc_ratio__156->SetBinContent(16,1.236471);
   data_mc_ratio__156->SetBinContent(17,1.368445);
   data_mc_ratio__156->SetBinContent(18,2.588539);
   data_mc_ratio__156->SetBinContent(19,1.439649);
   data_mc_ratio__156->SetBinContent(20,6.525462);
   data_mc_ratio__156->SetBinContent(21,4.556116);
   data_mc_ratio__156->SetBinContent(22,16.19783);
   data_mc_ratio__156->SetBinError(1,0.00351378);
   data_mc_ratio__156->SetBinError(2,0.003725807);
   data_mc_ratio__156->SetBinError(3,0.005295431);
   data_mc_ratio__156->SetBinError(4,0.00625161);
   data_mc_ratio__156->SetBinError(5,0.01294189);
   data_mc_ratio__156->SetBinError(6,0.01363176);
   data_mc_ratio__156->SetBinError(7,0.04038592);
   data_mc_ratio__156->SetBinError(8,0.03420219);
   data_mc_ratio__156->SetBinError(9,0.04461103);
   data_mc_ratio__156->SetBinError(10,0.08779879);
   data_mc_ratio__156->SetBinError(11,0.1013364);
   data_mc_ratio__156->SetBinError(12,0.1014112);
   data_mc_ratio__156->SetBinError(13,0.1014741);
   data_mc_ratio__156->SetBinError(14,0.1355368);
   data_mc_ratio__156->SetBinError(15,0.147488);
   data_mc_ratio__156->SetBinError(16,0.1184324);
   data_mc_ratio__156->SetBinError(17,0.1458767);
   data_mc_ratio__156->SetBinError(18,0.3369991);
   data_mc_ratio__156->SetBinError(19,0.3001875);
   data_mc_ratio__156->SetBinError(20,2.307099);
   data_mc_ratio__156->SetBinError(21,3.22166);
   data_mc_ratio__156->SetBinError(22,16.19783);
   data_mc_ratio__156->SetMinimum(0.4);
   data_mc_ratio__156->SetMaximum(1.6);
   data_mc_ratio__156->SetEntries(5.185952);
   data_mc_ratio__156->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__156->SetLineColor(ci);
   data_mc_ratio__156->SetLineWidth(2);
   data_mc_ratio__156->SetMarkerStyle(20);
   data_mc_ratio__156->SetMarkerSize(1.2);
   data_mc_ratio__156->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__156->GetXaxis()->SetRange(1,25);
   data_mc_ratio__156->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__156->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__156->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__156->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__156->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__156->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__156->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__156->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__156->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__156->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__156->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__156->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__156->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__156->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__156->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__156->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__156->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1114[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1114[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1114[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1114[25] = {
   0.06740295,
   0.0725082,
   0.106728,
   0.1141245,
   0.1281208,
   0.2633409,
   0.09649323,
   0.2154977,
   0.4188682,
   0.1807929,
   0.2216781,
   0.2234476,
   0.2438317,
   0.3377186,
   0.2188157,
   0.30046,
   0.4734387,
   0.3618293,
   0.4343708,
   0.2278671,
   0.3615832,
   0.9939196,
   1,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1114,Graph_from_mc_statistical_error_fy1114,Graph_from_mc_statistical_error_fex1114,Graph_from_mc_statistical_error_fey1114);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1114 = new TH1F("Graph_Graph_from_mc_statistical_error1114","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1114->SetMinimum(9.992007e-17);
   Graph_Graph_from_mc_statistical_error1114->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1114->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1114->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1114->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1114->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1114->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1114->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1114->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1114->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1114->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1114->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1114->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1114->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1114->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1114->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1114->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1114->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1114);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_tags_16->cd();
   Sphericity_tags_16->Modified();
   Sphericity_tags_16->cd();
   Sphericity_tags_16->SetSelected(Sphericity_tags_16);
}
