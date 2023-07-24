void Sphericity_tags_16()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Mon Jul 24 10:11:25 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
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
   topPad->Range(-0.1532254,-2923.01,1.052419,2920097);
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
   st->SetMaximum(2502661);
   
   TH1F *st_stack_57 = new TH1F("st_stack_57","",25,0,1);
   st_stack_57->SetMinimum(0.01);
   st_stack_57->SetMaximum(2627795);
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
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(1,949714.2);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(2,814337.7);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(3,454343.9);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(4,278082.2);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(5,128614.9);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(6,67884.38);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(7,27685.11);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(8,15734.56);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(9,11356.85);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(10,8498.2);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(11,3174.161);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(12,4232.464);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(13,3518.234);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(14,2223.741);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(15,1481.13);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(16,1807.997);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(17,592.2402);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(18,760.7846);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(19,188.3274);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(20,86.38918);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(21,11.67123);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(22,0.1889639);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(1,28345.15);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(2,27304.9);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(3,12070);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(4,22894.07);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(5,5916.148);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(6,4219.959);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(7,2310.722);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(8,1941.11);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(9,1216.892);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(10,1149.564);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(11,375.9818);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(12,636.1147);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(13,640.0017);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(14,431.624);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(15,366.6823);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(16,531.6145);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(17,89.04422);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(18,323.0107);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(19,50.31518);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(20,33.46626);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(21,8.109614);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(22,0.1889639);
   VbbHcc_tags_Sphericity_stack_1->SetEntries(174298);

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
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(1,9135.689);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(2,8017.034);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(3,4646.426);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(4,2652.403);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(5,1484.921);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(6,815.2312);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(7,408.6464);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(8,235.1765);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(9,156.28);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(10,103.9121);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(11,68.4188);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(12,49.05028);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(13,40.28521);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(14,27.87273);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(15,23.44751);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(16,15.21956);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(17,11.55145);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(18,6.958562);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(19,5.81898);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(20,1.315037);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(21,1.199694);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(22,0.09159914);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(23,0.165532);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(1,40.24418);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(2,37.37398);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(3,28.72545);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(4,21.96352);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(5,16.62682);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(6,12.44193);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(7,8.811);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(8,6.602123);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(9,5.451957);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(10,4.476381);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(11,3.57734);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(12,3.009645);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(13,2.794455);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(14,2.31092);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(15,2.134773);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(16,1.658522);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(17,1.424506);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(18,1.083469);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(19,1.102683);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(20,0.4357531);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(21,0.5243275);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(22,0.06481526);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(23,0.2274236);
   VbbHcc_tags_Sphericity_stack_2->SetEntries(391454);

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
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(1,155775);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(2,142731.8);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(3,78468.75);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(4,44168.16);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(5,25164.55);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(6,14183.94);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(7,8071.61);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(8,4862.82);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(9,3108.6);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(10,2106.582);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(11,1489.017);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(12,1082.484);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(13,799.4719);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(14,604.6437);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(15,464.5601);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(16,340.2884);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(17,248.5271);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(18,160.6468);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(19,92.234);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(20,39.20566);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(21,16.10155);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(22,4.078471);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(23,0.7607811);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(24,0.07493848);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(1,102.2807);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(2,98.09455);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(3,72.72705);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(4,54.53358);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(5,41.15453);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(6,30.83143);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(7,23.21255);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(8,17.98314);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(9,14.34316);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(10,11.79913);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(11,9.915986);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(12,8.450556);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(13,7.259212);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(14,6.321241);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(15,5.534181);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(16,4.739251);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(17,4.03854);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(18,3.247006);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(19,2.454232);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(20,1.601736);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(21,1.033324);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(22,0.519277);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(23,0.2223512);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(24,0.07493848);
   VbbHcc_tags_Sphericity_stack_3->SetEntries(7663533);

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
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(1,7137.297);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(2,5739.172);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(3,3413.371);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(4,2044.108);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(5,1163.316);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(6,580.5855);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(7,286.0419);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(8,154.1069);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(9,103.3052);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(10,72.3);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(11,52.85694);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(12,38.63659);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(13,32.77743);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(14,26.07376);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(15,16.22614);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(16,11.60605);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(17,9.742602);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(18,9.617611);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(19,2.856883);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(20,1.33715);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(21,0.7675395);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(22,0.3700446);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(1,62.56438);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(2,63.51181);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(3,49.36685);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(4,35.5151);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(5,25.37461);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(6,14.89469);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(7,11.02017);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(8,5.292414);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(9,4.895685);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(10,4.159533);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(11,2.576963);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(12,2.230516);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(13,3.353399);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(14,3.298692);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(15,1.334341);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(16,1.135968);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(17,1.016641);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(18,3.207464);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(19,0.6175313);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(20,0.4131125);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(21,0.351307);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(22,0.3126441);
   VbbHcc_tags_Sphericity_stack_4->SetEntries(163132);

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
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(1,4254.872);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(2,3305.954);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(3,1885.74);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(4,1195.202);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(5,698.4664);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(6,369.2337);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(7,188.9372);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(8,99.42507);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(9,65.09853);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(10,56.03954);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(11,51.4916);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(12,31.03381);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(13,18.35942);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(14,12.05012);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(15,9.443892);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(16,11.63826);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(17,4.002817);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(18,2.698021);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(19,2.422998);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(20,0.5501756);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(21,0.07528337);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(23,0.04571952);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(1,74.17229);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(2,72.03124);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(3,52.2139);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(4,42.67396);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(5,32.39238);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(6,20.09374);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(7,15.34667);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(8,9.214547);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(9,5.051113);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(10,5.153673);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(11,12.05923);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(12,7.124152);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(13,2.275032);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(14,1.676336);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(15,1.47067);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(16,4.562542);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(17,0.574922);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(18,0.5474918);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(19,0.565531);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(20,0.2585094);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(21,0.07528337);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(23,0.04571952);
   VbbHcc_tags_Sphericity_stack_5->SetEntries(113083);

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
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(1,23.25469);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(2,19.75458);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(3,9.234109);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(4,6.589383);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(5,4.53361);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(6,1.954303);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(7,1.186999);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(8,0.7334599);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(9,0.3789139);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(10,0.1920874);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(11,0.1032462);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(12,0.256404);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(13,0.09030175);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(14,0.1726209);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(16,0.08857249);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(19,0.08368601);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(1,1.454213);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(2,1.339147);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(3,0.9188477);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(4,0.7666975);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(5,0.644566);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(6,0.4270058);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(7,0.3295908);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(8,0.2566017);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(9,0.1898435);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(10,0.1362077);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(11,0.1032462);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(12,0.1496082);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(13,0.09030175);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(14,0.1220637);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(16,0.08857249);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(19,0.08368601);
   VbbHcc_tags_Sphericity_stack_6->SetEntries(766);

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
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(1,56.94898);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(2,46.35949);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(3,27.65828);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(4,15.45542);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(5,8.996721);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(6,5.26046);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(7,2.190241);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(8,1.318996);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(9,0.3986131);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(10,0.9668351);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(11,0.3526689);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(12,0.1357011);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(13,0.3944909);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(14,0.1084883);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(16,0.07527418);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(17,0.2714695);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(20,0.06025132);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(1,1.966643);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(2,1.780283);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(3,1.37304);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(4,1.027587);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(5,0.7852516);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(6,0.599652);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(7,0.3850745);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(8,0.3007142);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(9,0.1630581);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(10,0.2587311);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(11,0.1579173);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(12,0.09621303);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(13,0.161471);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(14,0.07682197);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(16,0.07527418);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(17,0.1357449);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(20,0.06025132);
   VbbHcc_tags_Sphericity_stack_7->SetEntries(2496);

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
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(1,54.18795);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(2,45.05721);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(3,23.30004);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(4,14.17486);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(5,9.845971);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(6,3.655015);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(7,2.301636);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(8,1.692302);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(9,0.8245306);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(10,0.3756201);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(11,0.1881865);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(12,0.3958344);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(14,0.3663188);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(15,0.2110638);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(18,0.1804655);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(1,3.214631);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(2,2.941976);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(3,2.118875);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(4,1.638514);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(5,1.38304);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(6,0.8406432);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(7,0.6553413);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(8,0.5488948);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(9,0.4127568);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(10,0.2656374);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(11,0.1881865);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(12,0.2803136);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(14,0.2591382);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(15,0.2110638);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(18,0.1804655);
   VbbHcc_tags_Sphericity_stack_8->SetEntries(834);

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
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(1,29.72789);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(2,27.26318);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(3,15.67263);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(4,10.23371);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(5,6.433171);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(6,3.270786);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(7,1.466821);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(8,0.6864681);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(9,0.3798525);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(10,0.3328885);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(11,0.1903039);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(12,0.1508565);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(13,0.1300404);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(14,0.1001832);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(15,0.06292457);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(16,0.04755674);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(17,0.03102409);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(18,0.02068612);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(19,0.007673858);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(20,0.002886495);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(22,0.001654253);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(1,0.2114837);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(2,0.2028845);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(3,0.1538616);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(4,0.1245422);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(5,0.0986561);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(6,0.07059504);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(7,0.04665731);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(8,0.03180484);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(9,0.02364587);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(10,0.02216915);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(11,0.01657473);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(12,0.01490482);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(13,0.01380691);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(14,0.01210845);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(15,0.009611401);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(16,0.008328899);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(17,0.006624704);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(18,0.005389796);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(19,0.003250537);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(20,0.002041073);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(22,0.001654253);
   VbbHcc_tags_Sphericity_stack_9->SetEntries(67621);

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
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(1,15.37583);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(2,12.86244);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(3,7.347886);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(4,4.600493);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(5,2.746341);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(6,1.519522);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(7,0.8098713);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(8,0.4859161);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(9,0.2738563);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(10,0.2195926);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(11,0.1616);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(12,0.1390459);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(13,0.1003105);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(14,0.07461927);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(15,0.05827355);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(16,0.04154613);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(17,0.02944346);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(18,0.02024531);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(19,0.01122999);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(20,0.003683081);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(21,0.001134051);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(22,0.0003727492);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(1,0.07661968);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(2,0.07015503);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(3,0.05304362);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(4,0.04198973);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(5,0.03243776);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(6,0.02411734);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(7,0.01757885);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(8,0.01357828);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(9,0.01020601);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(10,0.009136193);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(11,0.007854676);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(12,0.007261731);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(13,0.006149198);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(14,0.005310176);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(15,0.004709621);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(16,0.003949916);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(17,0.003360935);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(18,0.002780341);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(19,0.002068683);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(20,0.001173612);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(21,0.000654871);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(22,0.0003727492);
   VbbHcc_tags_Sphericity_stack_10->SetEntries(124885);

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
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(1,0.814056);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(2,0.7053129);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(3,0.3819737);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(4,0.2450445);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(5,0.1618463);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(6,0.107502);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(7,0.04058106);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(8,0.02077892);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(9,0.01172788);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(10,0.003079495);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(11,0.005435766);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(12,0.005215833);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(13,0.005632244);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(14,0.005871947);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(1,0.04913758);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(2,0.04608673);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(3,0.03346326);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(4,0.02688019);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(5,0.02216267);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(6,0.01762576);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(7,0.01089526);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(8,0.007591013);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(9,0.0058807);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(10,0.003079495);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(11,0.00385005);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(12,0.003722973);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(13,0.003983456);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(14,0.004153001);
   VbbHcc_tags_Sphericity_stack_11->SetEntries(888);

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
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(1,0.3751138);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(2,0.3393695);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(3,0.1761563);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(4,0.1147439);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(5,0.05177137);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(6,0.04171407);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(7,0.01403282);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(8,0.0104565);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(9,0.005601811);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(10,0.003411593);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(11,0.003977351);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(12,0.004071053);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(13,0.002281136);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(14,0.002382015);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(15,0.002233678);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(16,0.001163886);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(17,0.001078717);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(18,0.0006122942);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(20,0.0001783629);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(1,0.01193066);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(2,0.01140257);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(3,0.008163681);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(4,0.006615631);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(5,0.004436117);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(6,0.004002639);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(7,0.002300688);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(8,0.001965863);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(9,0.00145612);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(10,0.001142445);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(11,0.001204719);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(12,0.001254382);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(13,0.0009315272);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(14,0.0009747284);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(15,0.0009221315);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(16,0.0006739036);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(17,0.0006306067);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(18,0.0004438888);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(20,0.0001783629);
   VbbHcc_tags_Sphericity_stack_12->SetEntries(3081);

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
   
   TH1D *VbbHcc_tags_Sphericity__113 = new TH1D("VbbHcc_tags_Sphericity__113","",25,0,1);
   VbbHcc_tags_Sphericity__113->SetBinContent(1,538746);
   VbbHcc_tags_Sphericity__113->SetBinContent(2,392805);
   VbbHcc_tags_Sphericity__113->SetBinContent(3,228065);
   VbbHcc_tags_Sphericity__113->SetBinContent(4,135840);
   VbbHcc_tags_Sphericity__113->SetBinContent(5,80780);
   VbbHcc_tags_Sphericity__113->SetBinContent(6,47053);
   VbbHcc_tags_Sphericity__113->SetBinContent(7,27195);
   VbbHcc_tags_Sphericity__113->SetBinContent(8,16995);
   VbbHcc_tags_Sphericity__113->SetBinContent(9,11338);
   VbbHcc_tags_Sphericity__113->SetBinContent(10,8032);
   VbbHcc_tags_Sphericity__113->SetBinContent(11,5798);
   VbbHcc_tags_Sphericity__113->SetBinContent(12,4264);
   VbbHcc_tags_Sphericity__113->SetBinContent(13,3396);
   VbbHcc_tags_Sphericity__113->SetBinContent(14,2591);
   VbbHcc_tags_Sphericity__113->SetBinContent(15,1948);
   VbbHcc_tags_Sphericity__113->SetBinContent(16,1494);
   VbbHcc_tags_Sphericity__113->SetBinContent(17,1034);
   VbbHcc_tags_Sphericity__113->SetBinContent(18,712);
   VbbHcc_tags_Sphericity__113->SetBinContent(19,378);
   VbbHcc_tags_Sphericity__113->SetBinContent(20,148);
   VbbHcc_tags_Sphericity__113->SetBinContent(21,41);
   VbbHcc_tags_Sphericity__113->SetBinContent(22,18);
   VbbHcc_tags_Sphericity__113->SetBinContent(23,3);
   VbbHcc_tags_Sphericity__113->SetBinContent(24,1);
   VbbHcc_tags_Sphericity__113->SetEntries(1508699);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity__113->SetLineColor(ci);
   VbbHcc_tags_Sphericity__113->SetLineWidth(2);
   VbbHcc_tags_Sphericity__113->SetMarkerStyle(20);
   VbbHcc_tags_Sphericity__113->SetMarkerSize(1.2);
   VbbHcc_tags_Sphericity__113->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity__113->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__113->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__113->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__113->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__113->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__113->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__113->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__113->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity__113->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__113->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__113->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__113->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__113->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__113->Draw("same E");
   
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
   1126198,
   974283.9,
   542842,
   328193.4,
   157158.9,
   83849.19,
   36648.36,
   21091.04,
   14792.4,
   10839.13,
   4836.951,
   5434.756,
   4409.851,
   2895.212,
   1995.142,
   2187.003,
   866.3971,
   940.9276,
   291.7629,
   128.8642,
   29.81644,
   4.731106,
   0.9720327,
   0.07493848,
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
   28345.53,
   27305.27,
   12070.47,
   22894.21,
   5916.458,
   4220.164,
   2310.933,
   1941.233,
   1217.009,
   1149.652,
   376.3318,
   636.2218,
   640.0618,
   431.6925,
   366.7357,
   531.659,
   89.15489,
   323.0453,
   50.39409,
   33.511,
   8.199854,
   0.6382055,
   0.3213282,
   0.07493848,
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
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->SetMaximum(1269998);
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
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
   
   TH1D *data_mc_ratio__114 = new TH1D("data_mc_ratio__114","",25,0,1);
   data_mc_ratio__114->SetBinContent(1,0.4783761);
   data_mc_ratio__114->SetBinContent(2,0.403173);
   data_mc_ratio__114->SetBinContent(3,0.4201315);
   data_mc_ratio__114->SetBinContent(4,0.4139022);
   data_mc_ratio__114->SetBinContent(5,0.5140021);
   data_mc_ratio__114->SetBinContent(6,0.5611623);
   data_mc_ratio__114->SetBinContent(7,0.7420523);
   data_mc_ratio__114->SetBinContent(8,0.8057925);
   data_mc_ratio__114->SetBinContent(9,0.7664745);
   data_mc_ratio__114->SetBinContent(10,0.741019);
   data_mc_ratio__114->SetBinContent(11,1.198689);
   data_mc_ratio__114->SetBinContent(12,0.7845798);
   data_mc_ratio__114->SetBinContent(13,0.770094);
   data_mc_ratio__114->SetBinContent(14,0.8949258);
   data_mc_ratio__114->SetBinContent(15,0.9763714);
   data_mc_ratio__114->SetBinContent(16,0.6831266);
   data_mc_ratio__114->SetBinContent(17,1.193448);
   data_mc_ratio__114->SetBinContent(18,0.7567001);
   data_mc_ratio__114->SetBinContent(19,1.295573);
   data_mc_ratio__114->SetBinContent(20,1.148496);
   data_mc_ratio__114->SetBinContent(21,1.375081);
   data_mc_ratio__114->SetBinContent(22,3.804607);
   data_mc_ratio__114->SetBinContent(23,3.086316);
   data_mc_ratio__114->SetBinContent(24,13.34428);
   data_mc_ratio__114->SetBinError(1,0.0006517445);
   data_mc_ratio__114->SetBinError(2,0.0006432843);
   data_mc_ratio__114->SetBinError(3,0.0008797432);
   data_mc_ratio__114->SetBinError(4,0.001123011);
   data_mc_ratio__114->SetBinError(5,0.001808477);
   data_mc_ratio__114->SetBinError(6,0.00258699);
   data_mc_ratio__114->SetBinError(7,0.004499767);
   data_mc_ratio__114->SetBinError(8,0.006181055);
   data_mc_ratio__114->SetBinError(9,0.007198292);
   data_mc_ratio__114->SetBinError(10,0.008268324);
   data_mc_ratio__114->SetBinError(11,0.01574227);
   data_mc_ratio__114->SetBinError(12,0.01201513);
   data_mc_ratio__114->SetBinError(13,0.01321478);
   data_mc_ratio__114->SetBinError(14,0.0175814);
   data_mc_ratio__114->SetBinError(15,0.02212181);
   data_mc_ratio__114->SetBinError(16,0.01767364);
   data_mc_ratio__114->SetBinError(17,0.03711447);
   data_mc_ratio__114->SetBinError(18,0.02835853);
   data_mc_ratio__114->SetBinError(19,0.06663706);
   data_mc_ratio__114->SetBinError(20,0.09440578);
   data_mc_ratio__114->SetBinError(21,0.2147515);
   data_mc_ratio__114->SetBinError(22,0.8967546);
   data_mc_ratio__114->SetBinError(23,1.781885);
   data_mc_ratio__114->SetBinError(24,13.34428);
   data_mc_ratio__114->SetMinimum(0.4);
   data_mc_ratio__114->SetMaximum(1.6);
   data_mc_ratio__114->SetEntries(3.814433);
   data_mc_ratio__114->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__114->SetLineColor(ci);
   data_mc_ratio__114->SetLineWidth(2);
   data_mc_ratio__114->SetMarkerStyle(20);
   data_mc_ratio__114->SetMarkerSize(1.2);
   data_mc_ratio__114->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__114->GetXaxis()->SetRange(1,25);
   data_mc_ratio__114->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__114->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__114->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__114->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__114->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__114->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__114->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__114->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__114->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__114->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__114->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__114->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__114->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__114->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__114->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__114->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__114->Draw("E1");
   
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
   0.02516923,
   0.02802599,
   0.02223569,
   0.06975828,
   0.03764634,
   0.05033042,
   0.06305692,
   0.09204067,
   0.08227257,
   0.106065,
   0.07780351,
   0.1170654,
   0.1451436,
   0.1491057,
   0.1838143,
   0.2430994,
   0.102903,
   0.3433264,
   0.1727228,
   0.2600489,
   0.2750112,
   0.1348956,
   0.3305735,
   1,
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
   Graph_Graph_from_mc_statistical_error1114->SetMinimum(0);
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
