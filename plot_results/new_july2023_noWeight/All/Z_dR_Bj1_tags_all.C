void Z_dR_Bj1_tags_all()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_all/Z_dR_Bj1_tags_all
//=========  (Thu Aug 10 12:27:52 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_tags_all = new TCanvas("Z_dR_Bj1_tags_all", "Z_dR_Bj1_tags_all",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_tags_all->SetHighLightColor(2);
   Z_dR_Bj1_tags_all->Range(0,0,1,1);
   Z_dR_Bj1_tags_all->SetFillColor(0);
   Z_dR_Bj1_tags_all->SetFillStyle(4000);
   Z_dR_Bj1_tags_all->SetBorderMode(0);
   Z_dR_Bj1_tags_all->SetBorderSize(2);
   Z_dR_Bj1_tags_all->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-230.4345,6.314516,230504.1);
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
   st->SetMinimum(0.3);
   st->SetMaximum(197553);
   
   TH1F *st_stack_56 = new TH1F("st_stack_56","",30,0,6);
   st_stack_56->SetMinimum(0.3);
   st_stack_56->SetMaximum(207430.6);
   st_stack_56->SetDirectory(0);
   st_stack_56->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_56->SetLineColor(ci);
   st_stack_56->GetXaxis()->SetRange(1,30);
   st_stack_56->GetXaxis()->SetLabelFont(42);
   st_stack_56->GetXaxis()->SetLabelSize(0.035);
   st_stack_56->GetXaxis()->SetTitleSize(0.035);
   st_stack_56->GetXaxis()->SetTitleFont(42);
   st_stack_56->GetYaxis()->SetTitle("Events/0.2");
   st_stack_56->GetYaxis()->SetLabelFont(42);
   st_stack_56->GetYaxis()->SetLabelSize(0.05);
   st_stack_56->GetYaxis()->SetTitleSize(0.057);
   st_stack_56->GetYaxis()->SetTitleOffset(1.2);
   st_stack_56->GetYaxis()->SetTitleFont(42);
   st_stack_56->GetZaxis()->SetLabelFont(42);
   st_stack_56->GetZaxis()->SetLabelSize(0.035);
   st_stack_56->GetZaxis()->SetTitleSize(0.035);
   st_stack_56->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_56);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(1,15261.87);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(2,72352.54);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(3,80187.99);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(4,61287.18);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(5,43578.36);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(6,42360.15);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(7,33136.87);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(8,28448.61);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(9,23051.73);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(10,38507.72);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(11,24726.85);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(12,17499.76);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(13,31001.23);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(14,18373.76);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(15,12901.58);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(16,9277.636);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(17,7261.332);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(18,6154.439);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(19,5983.01);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(20,5888.296);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(21,3767.672);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(22,5302.389);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(23,3011.172);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(24,1259.456);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(25,2253.422);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(26,1403.511);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(27,437.3414);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(28,1014.788);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(29,147.3335);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(30,101.5905);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(31,168.3753);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(1,1142.429);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(2,3567.833);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(3,4367.966);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(4,3611.638);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(5,3007.724);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(6,3913.187);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(7,3169.356);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(8,2628.666);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(9,1987.145);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(10,15053.59);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(11,2512.987);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(12,2158.76);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(13,14966.96);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(14,2262.61);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(15,1535.168);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(16,1255.354);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(17,970.1405);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(18,990.2458);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(19,951.1028);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(20,1621.62);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(21,818.2959);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(22,1886.209);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(23,766.3751);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(24,302.4);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(25,709.3945);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(26,477.3126);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(27,94.84261);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(28,468.5649);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(29,39.81742);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(30,47.75354);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(31,63.75099);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetEntries(30262);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(1,74.25794);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(2,314.2964);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(3,367.8284);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(4,324.1961);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(5,271.9873);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(6,243.0714);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(7,194.9438);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(8,152.7703);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(9,148.1632);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(10,127.6925);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(11,112.0426);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(12,100.6303);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(13,92.48555);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(14,82.44355);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(15,70.75026);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(16,61.41295);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(17,53.7132);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(18,38.8696);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(19,32.82821);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(20,28.48042);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(21,19.55025);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(22,19.5499);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(23,15.74869);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(24,12.86867);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(25,8.09314);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(26,4.813526);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(27,4.279377);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(28,2.283443);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(29,1.934019);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(30,1.119922);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(31,1.579895);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(1,3.678119);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(2,7.108736);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(3,7.736862);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(4,7.060583);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(5,6.517128);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(6,6.294027);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(7,5.533);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(8,4.842773);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(9,4.849926);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(10,4.488249);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(11,4.218535);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(12,3.977716);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(13,3.82936);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(14,3.656942);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(15,3.358218);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(16,3.202461);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(17,2.931539);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(18,2.507141);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(19,2.265198);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(20,2.197282);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(21,1.781296);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(22,1.825234);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(23,1.591961);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(24,1.549887);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(25,1.185097);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(26,0.8854403);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(27,0.8279698);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(28,0.6615327);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(29,0.5845289);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(30,0.4746823);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(31,0.4976116);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetEntries(36361);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_3 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(1,940.8259);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(2,5083.754);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(3,7001.362);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(4,6760.764);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(5,5824.794);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(6,4736.965);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(7,3858.84);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(8,3273.695);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(9,2816.422);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(10,2497.554);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(11,2261.058);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(12,2071.421);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(13,1850.072);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(14,1635.075);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(15,1406.074);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(16,1206.583);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(17,963.7219);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(18,796.8749);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(19,651.8144);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(20,524.6244);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(21,411.1009);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(22,317.4026);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(23,244.2088);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(24,186.2199);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(25,137.826);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(26,98.38983);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(27,66.37145);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(28,38.81987);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(29,30.46829);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(30,16.57144);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(31,32.79871);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(1,7.639663);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(2,17.72807);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(3,20.88009);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(4,20.53286);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(5,19.05975);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(6,17.17851);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(7,15.49195);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(8,14.26417);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(9,13.24456);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(10,12.48375);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(11,11.87336);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(12,11.37097);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(13,10.74899);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(14,10.1016);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(15,9.371048);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(16,8.673246);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(17,7.740721);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(18,7.037002);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(19,6.364814);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(20,5.704546);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(21,5.043692);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(22,4.4349);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(23,3.881269);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(24,3.376112);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(25,2.904419);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(26,2.452967);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(27,2.012683);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(28,1.529229);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(29,1.362754);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(30,1.007164);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(31,1.420002);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetEntries(965144);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_4 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(1,250.0986);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(2,985.4001);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(3,1164.826);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(4,897.5737);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(5,674.0589);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(6,531.2374);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(7,417.5964);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(8,366.6617);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(9,335.8766);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(10,281.0041);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(11,271.8444);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(12,248.894);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(13,208.1046);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(14,190.3941);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(15,164.5823);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(16,129.7395);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(17,107.4284);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(18,100.4971);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(19,75.86946);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(20,69.49696);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(21,52.57933);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(22,40.94484);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(23,33.14434);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(24,21.49498);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(25,19.56699);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(26,16.39588);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(27,11.94394);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(28,6.034653);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(29,3.408538);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(30,1.818186);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(31,3.335711);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(1,5.576747);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(2,19.24965);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(3,23.26962);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(4,21.82745);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(5,20.84652);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(6,17.72924);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(7,14.54813);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(8,14.26807);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(9,15.20503);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(10,11.3317);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(11,13.4025);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(12,12.90067);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(13,9.220164);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(14,9.830849);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(15,9.060809);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(16,9.070346);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(17,6.270041);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(18,8.51123);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(19,6.778465);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(20,6.75799);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(21,4.584179);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(22,4.119742);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(23,5.380447);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(24,2.18905);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(25,3.21406);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(26,3.189945);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(27,3.030742);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(28,1.043925);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(29,0.8569273);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(30,0.6671667);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(31,0.8924088);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetEntries(50664);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_5 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(1,50.11345);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(2,143.4904);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(3,122.6091);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(4,78.52219);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(5,59.8482);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(6,42.88088);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(7,30.4757);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(8,29.18152);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(9,22.83571);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(10,29.44732);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(11,19.00036);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(12,21.23557);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(13,14.17069);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(14,16.01642);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(15,11.07713);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(16,8.845876);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(17,13.62837);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(18,7.746397);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(19,8.755829);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(20,7.524487);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(21,3.951269);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(22,2.88159);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(23,6.299391);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(24,3.744838);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(25,1.792971);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(26,1.286594);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(27,0.8875775);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(28,0.722079);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(29,1.200352);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(31,0.3304704);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(1,3.762276);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(2,10.30474);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(3,13.21477);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(4,11.16182);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(5,5.916334);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(6,3.724765);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(7,3.992033);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(8,3.988575);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(9,3.174801);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(10,4.53906);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(11,2.557145);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(12,3.747295);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(13,1.839548);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(14,3.458849);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(15,2.589423);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(16,1.593117);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(17,6.475409);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(18,2.26796);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(19,2.333901);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(20,2.479927);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(21,0.751265);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(22,0.7214519);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(23,2.439767);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(24,1.388337);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(25,0.4894809);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(26,0.4870262);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(27,0.4425187);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(28,0.3252099);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(29,0.5683436);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(31,0.2690296);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetEntries(8033);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_6 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(2,0.3153059);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(3,0.7207813);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(4,0.7184138);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(5,0.1343693);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(6,0.7207813);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(7,0.7649811);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(8,0.586412);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(10,0.3153059);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(14,0.1343693);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(15,0.4520427);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(2,0.3153059);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(3,0.4903599);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(4,0.3918968);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(5,0.1343693);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(6,0.4903599);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(7,0.4657153);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(8,0.4715906);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(10,0.3153059);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(14,0.1343693);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(15,0.4520427);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetEntries(20);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_7 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(1,0.5452932);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(2,1.296834);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(3,1.324512);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(4,1.078716);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(5,0.3271759);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(6,0.5611013);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(7,0.8487291);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(8,0.5611013);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(9,0.2181173);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(10,0.4243645);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(11,0.3271759);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(12,0.1090586);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(14,0.1090586);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(15,0.6701599);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(17,0.1090586);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(24,0.1090586);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(1,0.2438625);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(2,0.4543808);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(3,0.5472594);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(4,0.4274042);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(5,0.1888951);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(6,0.4650122);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(7,0.4718296);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(8,0.4650122);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(9,0.1542322);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(10,0.3336339);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(11,0.1888951);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(12,0.1090586);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(14,0.1090586);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(15,0.4776297);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(17,0.1090586);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(24,0.1090586);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetEntries(57);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_8 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(1,4.421894);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(2,19.24929);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(3,19.07305);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(4,19.22561);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(5,17.16337);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(6,9.306299);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(7,7.209661);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(8,8.224849);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(9,7.334453);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(10,6.035984);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(11,3.139596);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(12,5.694174);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(13,4.671253);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(14,4.733649);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(15,3.931613);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(16,3.656065);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(17,2.090486);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(18,1.561713);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(19,1.831109);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(20,0.7858656);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(21,0.2532256);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(22,0.53264);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(23,0.2794144);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(24,0.4864143);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(25,0.2432072);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(28,0.2794144);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(1,1.074195);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(2,2.24126);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(3,2.236746);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(4,2.254033);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(5,2.1167);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(6,1.554082);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(7,1.364654);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(8,1.456642);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(9,1.388534);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(10,1.260737);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(11,0.9079118);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(12,1.215942);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(13,1.103199);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(14,1.117998);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(15,1.017165);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(16,0.9785315);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(17,0.74087);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(18,0.6384858);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(19,0.6933707);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(20,0.4542233);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(21,0.2532256);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(22,0.3770883);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(23,0.2794144);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(24,0.3439469);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(25,0.2432072);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(28,0.2794144);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetEntries(581);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_9 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(1,3.945378);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(2,18.41804);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(3,22.27776);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(4,18.64996);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(5,14.01956);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(6,10.21159);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(7,7.736392);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(8,6.527198);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(9,6.228612);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(10,6.15476);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(11,6.003607);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(12,5.926775);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(13,5.054249);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(14,4.212161);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(15,3.295575);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(16,2.464865);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(17,1.872938);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(18,1.282835);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(19,0.9123122);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(20,0.6396835);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(21,0.5448058);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(22,0.4206588);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(23,0.4174364);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(24,0.2750935);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(25,0.2038549);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(26,0.1512373);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(27,0.08783631);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(28,0.05155042);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(29,0.01948427);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(30,0.005274846);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(31,0.005274846);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(1,0.0854477);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(2,0.1845999);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(3,0.2020387);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(4,0.1841597);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(5,0.1597308);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(6,0.1366041);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(7,0.1186776);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(8,0.1092718);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(9,0.1068263);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(10,0.106341);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(11,0.1051571);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(12,0.1047034);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(13,0.09629632);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(14,0.08824855);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(15,0.07766755);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(16,0.06713444);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(17,0.05902604);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(18,0.04834077);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(19,0.04118301);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(20,0.03475715);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(21,0.03131547);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(22,0.02768072);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(23,0.02775125);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(24,0.02291517);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(25,0.01914857);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(26,0.01692474);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(27,0.01283825);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(28,0.01013576);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(29,0.006022948);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(30,0.003117872);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(31,0.003117872);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetEntries(84585);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_10 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(1,1.672694);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(2,8.040427);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(3,10.70551);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(4,9.045139);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(5,6.831763);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(6,4.929108);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(7,3.587668);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(8,3.040141);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(9,2.758165);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(10,2.502196);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(11,2.406379);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(12,2.112084);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(13,1.86159);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(14,1.683644);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(15,1.374292);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(16,0.9869166);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(17,0.8760425);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(18,0.6310244);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(19,0.5324696);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(20,0.3791621);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(21,0.3408353);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(22,0.268288);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(23,0.2121665);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(24,0.1587827);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(25,0.09855478);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(26,0.08760425);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(27,0.03695804);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(28,0.01779461);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(29,0.009581715);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(30,0.005475266);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(31,0.002737633);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(1,0.02830231);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(2,0.06205164);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(3,0.07160073);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(4,0.06581446);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(5,0.0571979);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(6,0.04858451);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(7,0.04144955);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(8,0.0381558);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(9,0.03634326);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(10,0.0346158);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(11,0.03394656);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(12,0.03180309);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(13,0.02985766);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(14,0.0283948);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(15,0.02565389);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(16,0.02173972);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(17,0.02048219);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(18,0.01738348);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(19,0.01596839);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(20,0.01347492);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(21,0.01277574);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(22,0.01133481);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(23,0.01007981);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(24,0.008719976);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(25,0.006869934);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(26,0.006477036);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(27,0.004206958);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(28,0.002919161);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(29,0.002142078);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(30,0.001619259);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(31,0.001144989);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetEntries(147270);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_11 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(1,0.03519711);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(2,0.09827106);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(3,0.07829548);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(4,0.06725419);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(5,0.0210833);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(6,0.01746355);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(7,0.01318204);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(8,0.01681507);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(9,0.01202728);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(10,0.0106833);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(11,0.009103048);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(12,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(13,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(14,0.004315259);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(15,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(16,0.004551524);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(17,0.004551524);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(19,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(24,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(25,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(26,0.004315259);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(27,0.002275762);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(1,0.008727818);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(2,0.01434918);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(3,0.01283883);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(4,0.01239685);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(5,0.0065421);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(6,0.005958482);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(7,0.005505734);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(8,0.006005742);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(9,0.005032895);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(10,0.004818046);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(11,0.004551524);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(12,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(13,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(14,0.003158712);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(15,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(16,0.003218413);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(17,0.003218413);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(19,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(24,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(25,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(26,0.003158712);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(27,0.002275762);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetEntries(200);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_12 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(1,0.009326045);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(2,0.04125772);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(3,0.04286129);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(4,0.0282295);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(5,0.01331397);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(6,0.006940066);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(7,0.005395112);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(8,0.006951341);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(9,0.005844092);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(10,0.004323314);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(11,0.002559479);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(12,0.005752378);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(13,0.002893242);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(14,0.002501534);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(15,0.003043238);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(16,0.001106576);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(17,0.0009565794);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(18,0.001463842);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(19,0.002420421);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(20,0.001371791);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(21,0.0005072625);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(22,0.0005993136);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(23,0.0005648715);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(24,0.0008645283);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(25,0.0005648715);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(27,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(28,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(1,0.001641095);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(2,0.003416256);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(3,0.003449417);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(4,0.002891233);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(5,0.001956509);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(6,0.001398104);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(7,0.001235725);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(8,0.00139088);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(9,0.001334403);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(10,0.001069626);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(11,0.0008327465);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(12,0.001286334);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(13,0.0009334847);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(14,0.0008572663);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(15,0.0009362955);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(16,0.0005590015);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(17,0.0005542809);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(18,0.0006634166);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(19,0.0008644934);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(20,0.000627238);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(21,0.0003645467);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(22,0.0004237787);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(23,0.0004132058);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(24,0.0005104245);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(25,0.0004132058);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(27,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(28,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetEntries(702);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all__153 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all__153","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(1,16063);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(2,65337);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(3,63931);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(4,51234);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(5,42091);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(6,33506);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(7,27613);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(8,23480);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(9,20342);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(10,18094);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(11,16600);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(12,15301);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(13,13639);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(14,12106);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(15,10794);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(16,9315);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(17,7768);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(18,6580);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(19,5380);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(20,4546);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(21,3700);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(22,3012);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(23,2473);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(24,1949);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(25,1401);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(26,1061);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(27,750);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(28,464);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(29,319);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(30,163);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(31,299);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetEntries(479340);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all__153->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetLineWidth(2);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all__153->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_all_fx1111[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_all_fy1111[30] = {
   16587.79,
   78926.94,
   88898.84,
   69397.05,
   50447.56,
   47940.06,
   37658.89,
   32289.88,
   26391.58,
   41458.86,
   27402.68,
   19955.79,
   33177.65,
   20308.57,
   14563.79,
   10691.33,
   8404.778,
   7101.904,
   6755.557,
   6520.229,
   4255.994,
   5684.39,
   3311.483,
   1484.817,
   2421.25,
   1524.64,
   520.9511,
   1062.997,
   184.3738,
   121.1108};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_all_fex1111[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_all_fey1111[30] = {
   1142.48,
   3567.951,
   4368.105,
   3611.787,
   3007.87,
   3913.272,
   3169.434,
   2628.752,
   1987.256,
   15053.6,
   2513.055,
   2158.836,
   14966.97,
   2262.66,
   1535.23,
   1255.422,
   970.218,
   990.3134,
   951.1541,
   1621.648,
   818.3266,
   1886.219,
   766.4094,
   302.4341,
   709.4089,
   477.3306,
   94.91701,
   468.5692,
   39.85829,
   47.77118};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_Bj1_all_fx1111,Graph_from_VbbHcc_tags_Z_dR_Bj1_all_fy1111,Graph_from_VbbHcc_tags_Z_dR_Bj1_all_fex1111,Graph_from_VbbHcc_tags_Z_dR_Bj1_all_fey1111);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_Bj1_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->SetMinimum(66.00563);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->SetMaximum(102586.3);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR_Bj1_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj1_tags_all->cd();
  
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
   
   TH1D *data_mc_ratio__154 = new TH1D("data_mc_ratio__154","",30,0,6);
   data_mc_ratio__154->SetBinContent(1,0.9683628);
   data_mc_ratio__154->SetBinContent(2,0.8278162);
   data_mc_ratio__154->SetBinContent(3,0.7191432);
   data_mc_ratio__154->SetBinContent(4,0.7382735);
   data_mc_ratio__154->SetBinContent(5,0.8343516);
   data_mc_ratio__154->SetBinContent(6,0.6989144);
   data_mc_ratio__154->SetBinContent(7,0.7332398);
   data_mc_ratio__154->SetBinContent(8,0.7271628);
   data_mc_ratio__154->SetBinContent(9,0.770776);
   data_mc_ratio__154->SetBinContent(10,0.4364326);
   data_mc_ratio__154->SetBinContent(11,0.6057801);
   data_mc_ratio__154->SetBinContent(12,0.7667449);
   data_mc_ratio__154->SetBinContent(13,0.41109);
   data_mc_ratio__154->SetBinContent(14,0.596103);
   data_mc_ratio__154->SetBinContent(15,0.7411533);
   data_mc_ratio__154->SetBinContent(16,0.8712666);
   data_mc_ratio__154->SetBinContent(17,0.9242362);
   data_mc_ratio__154->SetBinContent(18,0.9265121);
   data_mc_ratio__154->SetBinContent(19,0.7963814);
   data_mc_ratio__154->SetBinContent(20,0.6972148);
   data_mc_ratio__154->SetBinContent(21,0.8693622);
   data_mc_ratio__154->SetBinContent(22,0.5298722);
   data_mc_ratio__154->SetBinContent(23,0.7467954);
   data_mc_ratio__154->SetBinContent(24,1.312619);
   data_mc_ratio__154->SetBinContent(25,0.5786268);
   data_mc_ratio__154->SetBinContent(26,0.695902);
   data_mc_ratio__154->SetBinContent(27,1.439674);
   data_mc_ratio__154->SetBinContent(28,0.4365015);
   data_mc_ratio__154->SetBinContent(29,1.730181);
   data_mc_ratio__154->SetBinContent(30,1.345875);
   data_mc_ratio__154->SetBinContent(31,1.448446);
   data_mc_ratio__154->SetBinError(1,0.007640552);
   data_mc_ratio__154->SetBinError(2,0.003238578);
   data_mc_ratio__154->SetBinError(3,0.002844197);
   data_mc_ratio__154->SetBinError(4,0.003261656);
   data_mc_ratio__154->SetBinError(5,0.004066815);
   data_mc_ratio__154->SetBinError(6,0.003818235);
   data_mc_ratio__154->SetBinError(7,0.004412546);
   data_mc_ratio__154->SetBinError(8,0.004745507);
   data_mc_ratio__154->SetBinError(9,0.005404199);
   data_mc_ratio__154->SetBinError(10,0.003244516);
   data_mc_ratio__154->SetBinError(11,0.004701765);
   data_mc_ratio__154->SetBinError(12,0.006198563);
   data_mc_ratio__154->SetBinError(13,0.003520024);
   data_mc_ratio__154->SetBinError(14,0.005417775);
   data_mc_ratio__154->SetBinError(15,0.007133733);
   data_mc_ratio__154->SetBinError(16,0.009027336);
   data_mc_ratio__154->SetBinError(17,0.01048645);
   data_mc_ratio__154->SetBinError(18,0.01142189);
   data_mc_ratio__154->SetBinError(19,0.0108575);
   data_mc_ratio__154->SetBinError(20,0.01034075);
   data_mc_ratio__154->SetBinError(21,0.01429223);
   data_mc_ratio__154->SetBinError(22,0.009654808);
   data_mc_ratio__154->SetBinError(23,0.01501722);
   data_mc_ratio__154->SetBinError(24,0.0297326);
   data_mc_ratio__154->SetBinError(25,0.01545893);
   data_mc_ratio__154->SetBinError(26,0.02136439);
   data_mc_ratio__154->SetBinError(27,0.05256948);
   data_mc_ratio__154->SetBinError(28,0.02026408);
   data_mc_ratio__154->SetBinError(29,0.09687154);
   data_mc_ratio__154->SetBinError(30,0.1054171);
   data_mc_ratio__154->SetBinError(31,0.4552672);
   data_mc_ratio__154->SetMinimum(0.4);
   data_mc_ratio__154->SetMaximum(1.6);
   data_mc_ratio__154->SetEntries(613.3232);
   data_mc_ratio__154->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__154->SetLineColor(ci);
   data_mc_ratio__154->SetLineWidth(2);
   data_mc_ratio__154->SetMarkerStyle(20);
   data_mc_ratio__154->SetMarkerSize(1.2);
   data_mc_ratio__154->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__154->GetXaxis()->SetRange(1,30);
   data_mc_ratio__154->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__154->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__154->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__154->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__154->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__154->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__154->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__154->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__154->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__154->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__154->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__154->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__154->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__154->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__154->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__154->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__154->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1112[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1112[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1112[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1112[30] = {
   0.06887478,
   0.04520575,
   0.04913568,
   0.05204526,
   0.0596237,
   0.08162843,
   0.08416164,
   0.08141101,
   0.07529887,
   0.3630973,
   0.09170837,
   0.108181,
   0.451116,
   0.111414,
   0.1054142,
   0.1174243,
   0.1154365,
   0.1394434,
   0.1407958,
   0.2487103,
   0.1922763,
   0.3318244,
   0.2314399,
   0.2036844,
   0.2929929,
   0.3130776,
   0.1821995,
   0.4407999,
   0.216182,
   0.394442};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1112,Graph_from_mc_statistical_error_fy1112,Graph_from_mc_statistical_error_fex1112,Graph_from_mc_statistical_error_fey1112);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1112 = new TH1F("Graph_Graph_from_mc_statistical_error1112","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1112->SetMinimum(0.4586608);
   Graph_Graph_from_mc_statistical_error1112->SetMaximum(1.541339);
   Graph_Graph_from_mc_statistical_error1112->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1112->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1112->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1112->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1112->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1112->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1112->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1112->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1112->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1112->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1112->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1112->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1112->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1112->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1112->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1112->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1112);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_tags_all->cd();
   Z_dR_Bj1_tags_all->Modified();
   Z_dR_Bj1_tags_all->cd();
   Z_dR_Bj1_tags_all->SetSelected(Z_dR_Bj1_tags_all);
}
