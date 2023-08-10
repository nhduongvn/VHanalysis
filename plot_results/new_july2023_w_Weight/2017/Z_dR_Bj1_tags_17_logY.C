void Z_dR_Bj1_tags_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_17/Z_dR_Bj1_tags_17
//=========  (Thu Aug 10 12:20:15 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_tags_17 = new TCanvas("Z_dR_Bj1_tags_17", "Z_dR_Bj1_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_tags_17->SetHighLightColor(2);
   Z_dR_Bj1_tags_17->Range(0,0,1,1);
   Z_dR_Bj1_tags_17->SetFillColor(0);
   Z_dR_Bj1_tags_17->SetFillStyle(4000);
   Z_dR_Bj1_tags_17->SetBorderMode(0);
   Z_dR_Bj1_tags_17->SetBorderSize(2);
   Z_dR_Bj1_tags_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.854206,6.314516,11.81574);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLogy();
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(6.634996e+09);
   
   TH1F *st_stack_54 = new TH1F("st_stack_54","",30,0,6);
   st_stack_54->SetMinimum(0.001446985);
   st_stack_54->SetMaximum(2.232257e+10);
   st_stack_54->SetDirectory(0);
   st_stack_54->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_54->SetLineColor(ci);
   st_stack_54->GetXaxis()->SetRange(1,30);
   st_stack_54->GetXaxis()->SetLabelFont(42);
   st_stack_54->GetXaxis()->SetLabelSize(0.035);
   st_stack_54->GetXaxis()->SetTitleSize(0.035);
   st_stack_54->GetXaxis()->SetTitleFont(42);
   st_stack_54->GetYaxis()->SetTitle("Events/0.2");
   st_stack_54->GetYaxis()->SetLabelFont(42);
   st_stack_54->GetYaxis()->SetLabelSize(0.05);
   st_stack_54->GetYaxis()->SetTitleSize(0.057);
   st_stack_54->GetYaxis()->SetTitleOffset(1.2);
   st_stack_54->GetYaxis()->SetTitleFont(42);
   st_stack_54->GetZaxis()->SetLabelFont(42);
   st_stack_54->GetZaxis()->SetLabelSize(0.035);
   st_stack_54->GetZaxis()->SetTitleSize(0.035);
   st_stack_54->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_54);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(1,4822.359);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(2,22863.96);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(3,23455.25);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(4,19371.17);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(5,14485.4);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(6,12437.91);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(7,8817.331);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(8,9469.499);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(9,7319.34);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(10,23857.33);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(11,7459.533);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(12,5520.55);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(13,20248.84);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(14,4082.763);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(15,4396.463);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(16,3346.621);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(17,2591.286);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(18,1905.999);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(19,1698.218);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(20,1831.621);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(21,1184.363);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(22,1495.686);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(23,923.0825);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(24,306.6823);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(25,672.1753);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(26,640.2077);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(27,95.76467);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(28,880.7008);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(29,82.92495);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(30,11.99302);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(31,55.09204);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(1,638.2901);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(2,1736.285);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(3,1871.019);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(4,1814.911);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(5,1526.771);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(6,1402.364);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(7,1080.602);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(8,1229.766);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(9,1064.624);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(10,14924);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(11,1156.508);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(12,983.5971);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(13,14845.51);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(14,736.8142);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(15,863.245);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(16,771.0912);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(17,618.1246);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(18,485.9712);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(19,479.2749);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(20,547.7233);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(21,395.6846);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(22,542.6467);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(23,388.1642);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(24,75.04706);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(25,380.7082);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(26,379.8217);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(27,38.68055);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(28,464.8804);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(29,37.76287);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(30,8.34461);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(31,35.60738);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetEntries(9821);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(1,22.20316);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(2,100.0389);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(3,115.9937);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(4,106.6789);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(5,95.8695);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(6,81.25649);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(7,60.89864);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(8,52.05518);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(9,47.5263);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(10,41.72477);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(11,36.2491);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(12,32.56167);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(13,32.94403);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(14,24.9671);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(15,20.76329);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(16,18.35641);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(17,16.67271);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(18,13.05152);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(19,9.938822);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(20,7.197433);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(21,5.362545);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(22,5.626842);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(23,6.056669);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(24,3.944546);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(25,2.3173);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(26,0.8422956);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(27,1.523887);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(28,0.736955);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(29,0.8437303);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(30,0.6308706);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(31,0.8407046);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(1,1.92652);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(2,3.9014);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(3,4.20963);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(4,3.953711);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(5,3.957569);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(6,3.638097);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(7,2.964783);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(8,2.857241);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(9,2.724138);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(10,2.508269);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(11,2.38141);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(12,2.231398);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(13,2.309211);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(14,1.949625);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(15,1.707536);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(16,1.703482);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(17,1.610102);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(18,1.458572);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(19,1.231528);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(20,0.9641045);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(21,0.8827145);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(22,0.9512048);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(23,1.046228);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(24,0.8397581);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(25,0.630844);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(26,0.3160994);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(27,0.4953163);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(28,0.3872244);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(29,0.4595812);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(30,0.3786004);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(31,0.393492);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetEntries(11223);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_3 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(1,307.2415);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(2,1662.853);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(3,2296.918);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(4,2239.052);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(5,1938.094);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(6,1569.392);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(7,1261.423);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(8,1078.311);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(9,917.8507);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(10,807.3136);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(11,730.9965);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(12,679.3433);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(13,604.9205);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(14,531.1688);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(15,449.1014);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(16,383.3445);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(17,302.755);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(18,247.5929);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(19,205.455);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(20,165.1144);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(21,126.2471);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(22,97.79805);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(23,74.71774);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(24,58.95178);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(25,41.99788);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(26,31.86949);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(27,18.91857);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(28,12.86907);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(29,9.202344);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(30,5.267575);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(31,9.372101);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(1,4.415631);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(2,10.26005);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(3,12.10074);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(4,11.95641);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(5,11.11472);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(6,10.00827);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(7,8.953366);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(8,8.28847);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(9,7.652813);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(10,7.183368);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(11,6.824306);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(12,6.584587);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(13,6.22285);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(14,5.823347);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(15,5.354743);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(16,4.945301);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(17,4.390792);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(18,3.971653);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(19,3.611577);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(20,3.240946);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(21,2.827161);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(22,2.492649);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(23,2.173375);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(24,1.924818);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(25,1.619157);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(26,1.414747);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(27,1.084887);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(28,0.8959723);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(29,0.7625668);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(30,0.5711958);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(31,0.7664364);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetEntries(306587);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_4 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(1,77.17027);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(2,312.7913);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(3,371.1281);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(4,286.1073);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(5,203.8992);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(6,173.6631);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(7,133.4);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(8,103.7883);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(9,110.2431);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(10,81.69115);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(11,91.40699);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(12,77.86782);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(13,54.3982);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(14,56.46803);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(15,53.52638);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(16,37.85345);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(17,32.05281);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(18,34.53618);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(19,18.25292);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(20,17.76138);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(21,15.33703);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(22,13.10157);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(23,12.04847);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(24,5.174139);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(25,3.385726);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(26,4.687517);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(27,1.363376);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(28,1.746493);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(29,1.002509);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(30,0.5037142);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(31,0.5369664);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(1,2.93487);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(2,10.56929);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(3,11.92404);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(4,11.22217);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(5,10.04071);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(6,9.999508);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(7,7.999196);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(8,5.5199);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(9,8.545579);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(10,5.582259);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(11,7.839267);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(12,6.121942);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(13,4.22734);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(14,3.455315);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(15,4.396586);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(16,4.653139);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(17,3.611473);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(18,5.320193);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(19,1.815745);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(20,1.938416);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(21,3.221725);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(22,3.113028);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(23,3.01609);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(24,0.9618118);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(25,0.5197142);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(26,0.9373793);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(27,0.4565988);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(28,0.6681399);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(29,0.2797453);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(30,0.3747368);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(31,0.2041553);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetEntries(17505);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_5 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(1,17.28575);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(2,49.02031);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(3,37.90783);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(4,38.22417);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(5,21.73285);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(6,13.29276);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(7,11.10826);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(8,8.156428);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(9,7.250211);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(10,7.819629);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(11,7.185106);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(12,3.814347);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(13,3.607802);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(14,4.676949);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(15,1.742319);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(16,3.060203);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(17,1.465462);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(18,2.10767);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(19,2.154835);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(20,1.853205);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(21,1.10601);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(22,1.108936);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(23,1.399576);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(24,1.624536);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(25,0.5892127);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(26,0.2703627);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(27,0.0809456);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(28,0.1689571);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(29,0.3784546);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(1,2.142859);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(2,5.069255);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(3,4.301246);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(4,9.922584);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(5,3.192509);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(6,2.3605);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(7,2.033895);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(8,1.537439);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(9,1.863711);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(10,2.146231);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(11,2.112476);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(12,0.6471593);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(13,0.6881666);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(14,1.348594);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(15,0.535201);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(16,1.245002);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(17,0.4237076);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(18,0.5213845);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(19,0.5841088);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(20,0.5477581);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(21,0.3841901);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(22,0.3880931);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(23,0.5881873);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(24,1.17897);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(25,0.280528);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(26,0.1357917);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(27,0.04921129);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(28,0.1194707);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(29,0.3760439);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetEntries(2189);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_6 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(2,0.3153059);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(4,0.3153059);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(7,0.6306118);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(10,0.3153059);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(2,0.3153059);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(4,0.3153059);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(7,0.4459099);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(10,0.3153059);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_7 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(1,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(2,1.239711);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(3,0.7438266);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(4,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(5,0.7438266);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(7,0.7438266);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(8,0.4958844);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(9,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(12,0.4958844);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(14,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(16,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(26,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(1,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(2,0.5544156);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(3,0.4294485);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(4,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(5,0.4294485);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(7,0.4294485);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(8,0.3506432);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(9,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(12,0.3506432);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(14,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(16,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(26,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetEntries(24);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_8 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(1,1.772579);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(2,7.849994);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(3,4.05161);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(4,6.077415);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(5,4.304835);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(6,2.025805);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(7,2.785482);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(8,2.025805);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(9,2.27903);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(10,2.025805);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(11,1.012902);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(12,2.27903);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(13,1.012902);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(14,0.7596768);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(15,0.7596768);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(16,1.772579);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(18,0.7596768);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(19,0.5064512);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(20,0.5064512);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(21,0.2532256);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(22,0.2532256);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(1,0.669972);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(2,1.409901);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(3,1.012902);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(4,1.240547);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(5,1.044076);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(6,0.7162302);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(7,0.8398543);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(8,0.7162302);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(9,0.7596768);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(10,0.7162302);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(11,0.5064512);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(12,0.7596768);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(13,0.5064512);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(14,0.4385996);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(15,0.4385996);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(16,0.669972);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(18,0.4385996);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(19,0.3581151);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(20,0.3581151);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(21,0.2532256);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(22,0.2532256);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetEntries(178);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_9 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(1,1.241855);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(2,5.727536);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(3,7.001062);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(4,5.947569);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(5,4.505684);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(6,3.202152);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(7,2.54872);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(8,2.13199);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(9,2.041976);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(10,1.891954);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(11,1.878618);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(12,1.818609);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(13,1.543568);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(14,1.281861);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(15,0.9918171);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(16,0.7851191);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(17,0.5700865);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(18,0.4033945);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(19,0.2533718);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(20,0.1800273);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(21,0.1783604);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(22,0.1333536);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(23,0.1300197);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(24,0.07334446);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(25,0.05667527);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(26,0.03000455);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(27,0.02667071);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(28,0.01166844);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(29,0.005000759);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(30,0.00166692);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(31,0.00166692);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(1,0.04549805);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(2,0.0977105);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(3,0.1080287);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(4,0.09956967);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(5,0.08666379);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(6,0.07305977);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(7,0.06518061);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(8,0.05961423);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(9,0.05834218);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(10,0.05615812);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(11,0.05595986);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(12,0.05505884);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(13,0.05072478);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(14,0.0462251);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(15,0.04066054);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(16,0.03617638);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(17,0.03082675);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(18,0.02593118);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(19,0.02055116);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(20,0.01732314);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(21,0.01724275);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(22,0.01490938);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(23,0.01472184);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(24,0.01105709);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(25,0.009719728);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(26,0.007072141);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(27,0.006667678);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(28,0.004410255);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(29,0.002887189);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(30,0.00166692);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(31,0.00166692);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetEntries(27953);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_10 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(1,0.5058132);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(2,2.435135);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(3,3.241444);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(4,2.741034);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(5,2.067725);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(6,1.494165);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(7,1.08727);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(8,0.920605);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(9,0.8366492);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(10,0.758512);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(11,0.7281716);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(12,0.6396438);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(13,0.5644161);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(14,0.5103851);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(15,0.4152074);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(16,0.298833);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(17,0.2659987);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(18,0.1916022);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(19,0.1612617);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(20,0.1138807);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(21,0.1030745);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(22,0.08146211);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(23,0.06400595);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(24,0.04779665);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(25,0.02992486);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(26,0.02618425);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(27,0.01122182);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(28,0.005403099);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(29,0.002909361);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(30,0.001662492);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(31,0.0008312461);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(1,0.01449923);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(2,0.03181349);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(3,0.03670448);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(4,0.03375258);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(5,0.02931542);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(6,0.02492006);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(7,0.02125781);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(8,0.01956079);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(9,0.01864754);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(10,0.01775542);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(11,0.01739669);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(12,0.01630493);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(13,0.01531615);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(14,0.01456461);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(15,0.01313658);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(16,0.01114459);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(17,0.01051452);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(18,0.008923805);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(19,0.008186824);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(20,0.006879785);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(21,0.006545238);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(22,0.005818722);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(23,0.005157746);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(24,0.00445706);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(25,0.003526678);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(26,0.003298906);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(27,0.002159641);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(28,0.00149855);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(29,0.001099635);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(30,0.0008312461);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(31,0.0005877797);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetEntries(48968);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_11 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(1,0.01106176);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(2,0.03634578);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(3,0.03002477);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(4,0.01896301);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(5,0.01106176);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(6,0.007901256);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(7,0.003160502);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(8,0.003160502);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(9,0.004740753);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(10,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(12,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(13,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(14,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(15,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(19,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(26,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(1,0.004180952);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(2,0.007578618);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(3,0.006888155);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(4,0.005474151);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(5,0.004180952);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(6,0.003533549);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(7,0.002234813);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(8,0.002234813);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(9,0.002737075);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(10,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(12,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(13,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(14,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(15,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(19,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(26,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetEntries(87);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_12 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(1,0.003114085);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(2,0.01266394);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(3,0.01474);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(4,0.00622817);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(5,0.00332169);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(6,0.002698874);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(7,0.001868451);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(8,0.002283662);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(9,0.001245634);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(10,0.001868451);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(11,0.001245634);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(12,0.001868451);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(13,0.000622817);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(14,0.0008304226);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(15,0.0008304226);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(16,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(18,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(19,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(20,0.0004152113);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(21,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(23,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(24,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(25,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(28,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(1,0.0008040532);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(2,0.001621452);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(3,0.001749316);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(4,0.001137103);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(5,0.0008304226);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(6,0.0007485328);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(7,0.000622817);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(8,0.0006885501);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(9,0.0005085279);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(10,0.000622817);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(11,0.0005085279);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(12,0.000622817);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(13,0.0003595835);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(14,0.0004152113);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(15,0.0004152113);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(16,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(18,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(19,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(20,0.0002935987);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(21,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(23,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(24,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(25,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(28,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetEntries(277);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1__147 = new TH1D("VbbHcc_tags_Z_dR_Bj1__147","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(1,2460);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(2,9199);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(3,8840);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(4,6924);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(5,5575);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(6,4492);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(7,3644);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(8,3118);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(9,2607);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(10,2332);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(11,2132);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(12,1905);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(13,1704);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(14,1494);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(15,1335);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(16,1148);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(17,922);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(18,804);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(19,659);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(20,578);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(21,443);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(22,379);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(23,307);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(24,218);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(25,172);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(26,127);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(27,87);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(28,51);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(29,35);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(30,20);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(31,32);
   VbbHcc_tags_Z_dR_Bj1__147->SetEntries(63772);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1__147->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1__147->SetLineWidth(2);
   VbbHcc_tags_Z_dR_Bj1__147->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_Bj1__147->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_Bj1__147->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1__147->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__147->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__147->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__147->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__147->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__147->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__147->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__147->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1__147->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__147->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__147->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__147->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__147->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__147->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fx1107[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fy1107[30] = {
   5250.042,
   25006.28,
   26292.28,
   22056.59,
   16756.63,
   14282.25,
   10291.96,
   10717.39,
   8407.622,
   24800.87,
   8328.991,
   6319.374,
   20947.83,
   4702.846,
   4923.766,
   3792.341,
   2945.068,
   2204.642,
   1934.943,
   2024.348,
   1332.951,
   1613.79,
   1017.499,
   376.4987,
   720.5522,
   678.183,
   117.6893,
   896.2396,
   94.35989,
   18.39851};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fex1107[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fey1107[30] = {
   638.319,
   1736.36,
   1871.106,
   1815.017,
   1526.853,
   1402.442,
   1080.675,
   1229.811,
   1064.691,
   14924,
   1156.559,
   983.6413,
   14845.51,
   736.8493,
   863.2748,
   771.1243,
   618.153,
   486.0193,
   479.294,
   547.7376,
   395.709,
   542.6624,
   388.1839,
   75.09185,
   380.7126,
   379.8258,
   38.70165,
   464.8819,
   37.77628,
   8.381083};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_Bj1_fx1107,Graph_from_VbbHcc_tags_Z_dR_Bj1_fy1107,Graph_from_VbbHcc_tags_Z_dR_Bj1_fex1107,Graph_from_VbbHcc_tags_Z_dR_Bj1_fey1107);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->SetMinimum(9.01568);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->SetMaximum(43696.36);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR_Bj1","MC unc. (stat.)","fl");

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
   Z_dR_Bj1_tags_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9193524,-0.2774193,6.314516,1.658065);
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
   
   TH1D *data_mc_ratio__148 = new TH1D("data_mc_ratio__148","",30,0,6);
   data_mc_ratio__148->SetBinContent(1,0.4685677);
   data_mc_ratio__148->SetBinContent(2,0.3678676);
   data_mc_ratio__148->SetBinContent(3,0.3362203);
   data_mc_ratio__148->SetBinContent(4,0.3139198);
   data_mc_ratio__148->SetBinContent(5,0.332704);
   data_mc_ratio__148->SetBinContent(6,0.3145163);
   data_mc_ratio__148->SetBinContent(7,0.3540627);
   data_mc_ratio__148->SetBinContent(8,0.2909291);
   data_mc_ratio__148->SetBinContent(9,0.3100758);
   data_mc_ratio__148->SetBinContent(10,0.09402894);
   data_mc_ratio__148->SetBinContent(11,0.2559734);
   data_mc_ratio__148->SetBinContent(12,0.3014539);
   data_mc_ratio__148->SetBinContent(13,0.08134493);
   data_mc_ratio__148->SetBinContent(14,0.31768);
   data_mc_ratio__148->SetBinContent(15,0.2711339);
   data_mc_ratio__148->SetBinContent(16,0.3027154);
   data_mc_ratio__148->SetBinContent(17,0.3130658);
   data_mc_ratio__148->SetBinContent(18,0.3646851);
   data_mc_ratio__148->SetBinContent(19,0.3405786);
   data_mc_ratio__148->SetBinContent(20,0.285524);
   data_mc_ratio__148->SetBinContent(21,0.3323453);
   data_mc_ratio__148->SetBinContent(22,0.2348509);
   data_mc_ratio__148->SetBinContent(23,0.3017201);
   data_mc_ratio__148->SetBinContent(24,0.5790193);
   data_mc_ratio__148->SetBinContent(25,0.2387058);
   data_mc_ratio__148->SetBinContent(26,0.1872651);
   data_mc_ratio__148->SetBinContent(27,0.7392343);
   data_mc_ratio__148->SetBinContent(28,0.05690443);
   data_mc_ratio__148->SetBinContent(29,0.3709203);
   data_mc_ratio__148->SetBinContent(30,1.087045);
   data_mc_ratio__148->SetBinContent(31,0.4859949);
   data_mc_ratio__148->SetBinError(1,0.009447236);
   data_mc_ratio__148->SetBinError(2,0.003835494);
   data_mc_ratio__148->SetBinError(3,0.003576003);
   data_mc_ratio__148->SetBinError(4,0.003772595);
   data_mc_ratio__148->SetBinError(5,0.004455902);
   data_mc_ratio__148->SetBinError(6,0.004692705);
   data_mc_ratio__148->SetBinError(7,0.005865311);
   data_mc_ratio__148->SetBinError(8,0.005210136);
   data_mc_ratio__148->SetBinError(9,0.006072917);
   data_mc_ratio__148->SetBinError(10,0.00194714);
   data_mc_ratio__148->SetBinError(11,0.005543719);
   data_mc_ratio__148->SetBinError(12,0.006906745);
   data_mc_ratio__148->SetBinError(13,0.001970587);
   data_mc_ratio__148->SetBinError(14,0.008218916);
   data_mc_ratio__148->SetBinError(15,0.007420672);
   data_mc_ratio__148->SetBinError(16,0.008934363);
   data_mc_ratio__148->SetBinError(17,0.01031027);
   data_mc_ratio__148->SetBinError(18,0.01286145);
   data_mc_ratio__148->SetBinError(19,0.01326706);
   data_mc_ratio__148->SetBinError(20,0.01187623);
   data_mc_ratio__148->SetBinError(21,0.0157902);
   data_mc_ratio__148->SetBinError(22,0.01206348);
   data_mc_ratio__148->SetBinError(23,0.01722008);
   data_mc_ratio__148->SetBinError(24,0.03921613);
   data_mc_ratio__148->SetBinError(25,0.01820115);
   data_mc_ratio__148->SetBinError(26,0.01661709);
   data_mc_ratio__148->SetBinError(27,0.07925424);
   data_mc_ratio__148->SetBinError(28,0.007968214);
   data_mc_ratio__148->SetBinError(29,0.06269697);
   data_mc_ratio__148->SetBinError(30,0.2430706);
   data_mc_ratio__148->SetBinError(31,0.2765799);
   data_mc_ratio__148->SetMinimum(0.4);
   data_mc_ratio__148->SetMaximum(1.6);
   data_mc_ratio__148->SetEntries(196.6178);
   data_mc_ratio__148->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__148->SetLineColor(ci);
   data_mc_ratio__148->SetLineWidth(2);
   data_mc_ratio__148->SetMarkerStyle(20);
   data_mc_ratio__148->SetMarkerSize(1.2);
   data_mc_ratio__148->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__148->GetXaxis()->SetRange(1,30);
   data_mc_ratio__148->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__148->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__148->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__148->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__148->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__148->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__148->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__148->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__148->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__148->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__148->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__148->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__148->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__148->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__148->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__148->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__148->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1108[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_mc_statistical_error_fy1108[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1108[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_mc_statistical_error_fey1108[30] = {
   0.1215836,
   0.06943698,
   0.07116559,
   0.08228909,
   0.09111932,
   0.09819477,
   0.1050018,
   0.1147491,
   0.1266341,
   0.6017531,
   0.1388595,
   0.1556549,
   0.7086898,
   0.1566816,
   0.1753282,
   0.2033373,
   0.2098943,
   0.2204527,
   0.2477045,
   0.2705748,
   0.2968669,
   0.3362659,
   0.3815078,
   0.1994478,
   0.5283623,
   0.5600638,
   0.3288459,
   0.5187027,
   0.4003425,
   0.4555306};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1108,Graph_from_mc_statistical_error_fy1108,Graph_from_mc_statistical_error_fex1108,Graph_from_mc_statistical_error_fey1108);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1108 = new TH1F("Graph_Graph_from_mc_statistical_error1108","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1108->SetMinimum(0.1495723);
   Graph_Graph_from_mc_statistical_error1108->SetMaximum(1.850428);
   Graph_Graph_from_mc_statistical_error1108->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1108->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1108->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1108->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1108->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1108->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1108->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1108->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1108->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1108->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1108->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1108->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1108->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1108->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1108->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1108->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1108);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_tags_17->cd();
   Z_dR_Bj1_tags_17->Modified();
   Z_dR_Bj1_tags_17->cd();
   Z_dR_Bj1_tags_17->SetSelected(Z_dR_Bj1_tags_17);
}
