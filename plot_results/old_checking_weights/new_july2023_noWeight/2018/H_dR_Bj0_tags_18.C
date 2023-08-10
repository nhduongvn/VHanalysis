void H_dR_Bj0_tags_18()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_18/H_dR_Bj0_tags_18
//=========  (Thu Aug  3 12:23:24 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_tags_18 = new TCanvas("H_dR_Bj0_tags_18", "H_dR_Bj0_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_tags_18->SetHighLightColor(2);
   H_dR_Bj0_tags_18->Range(0,0,1,1);
   H_dR_Bj0_tags_18->SetFillColor(0);
   H_dR_Bj0_tags_18->SetFillStyle(4000);
   H_dR_Bj0_tags_18->SetBorderMode(0);
   H_dR_Bj0_tags_18->SetBorderSize(2);
   H_dR_Bj0_tags_18->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-99.44087,6.314516,99351.42);
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
   st->SetMaximum(85148.89);
   
   TH1F *st_stack_43 = new TH1F("st_stack_43","",30,0,6);
   st_stack_43->SetMinimum(0.01);
   st_stack_43->SetMaximum(89406.33);
   st_stack_43->SetDirectory(0);
   st_stack_43->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_43->SetLineColor(ci);
   st_stack_43->GetXaxis()->SetRange(1,30);
   st_stack_43->GetXaxis()->SetLabelFont(42);
   st_stack_43->GetXaxis()->SetLabelSize(0.035);
   st_stack_43->GetXaxis()->SetTitleSize(0.035);
   st_stack_43->GetXaxis()->SetTitleFont(42);
   st_stack_43->GetYaxis()->SetTitle("Events/0.2");
   st_stack_43->GetYaxis()->SetLabelFont(42);
   st_stack_43->GetYaxis()->SetLabelSize(0.05);
   st_stack_43->GetYaxis()->SetTitleSize(0.057);
   st_stack_43->GetYaxis()->SetTitleOffset(1.2);
   st_stack_43->GetYaxis()->SetTitleFont(42);
   st_stack_43->GetZaxis()->SetLabelFont(42);
   st_stack_43->GetZaxis()->SetLabelSize(0.035);
   st_stack_43->GetZaxis()->SetTitleSize(0.035);
   st_stack_43->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_43);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(1,5410.775);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(2,25106.15);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(3,27888.48);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(4,20676.79);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(5,18437.66);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(6,16340.24);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(7,15806.08);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(8,12139.54);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(9,9732.858);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(10,9470.326);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(11,7625.159);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(12,7413.486);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(13,7672.149);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(14,5394.987);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(15,3527.683);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(16,4977.954);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(17,3443.024);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(18,3293.694);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(19,1962.158);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(20,1611.848);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(21,1601.457);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(22,1134.988);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(23,2508.253);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(24,1110.936);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(25,465.267);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(26,318.3933);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(27,107.2192);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(28,140.0423);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(29,17.81694);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(30,114.0541);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(31,181.9543);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(1,701.9348);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(2,2017.838);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(3,2301.611);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(4,2024.606);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(5,1879.562);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(6,2410.837);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(7,1895.064);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(8,2076.139);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(9,1333.888);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(10,1995.178);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(11,1211.589);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(12,1098.814);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(13,1261.9);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(14,948.7912);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(15,578.737);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(16,942.9584);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(17,772.3118);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(18,769.7667);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(19,416.2239);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(20,406.3858);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(21,542.772);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(22,391.9866);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(23,1668.779);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(24,395.3002);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(25,103.1528);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(26,80.53794);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(27,39.75578);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(28,43.91796);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(29,11.47962);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(30,56.48374);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(31,72.54311);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetEntries(10231);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(1,34.39463);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(2,137.9257);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(3,152.5013);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(4,127.506);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(5,115.9502);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(6,94.64422);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(7,82.45325);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(8,67.6714);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(9,61.47757);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(10,53.36254);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(11,44.90094);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(12,49.08664);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(13,42.16827);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(14,38.62579);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(15,31.99943);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(16,25.36141);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(17,23.15017);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(18,19.79448);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(19,15.34929);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(20,12.14089);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(21,10.90823);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(22,8.173688);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(23,8.663765);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(24,5.161122);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(25,5.739772);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(26,2.834044);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(27,2.535215);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(28,2.151856);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(29,1.530252);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(30,0.8006945);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(31,1.019757);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(1,2.494958);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(2,4.824111);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(3,5.056247);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(4,4.647893);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(5,4.454972);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(6,3.936717);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(7,3.800397);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(8,3.367948);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(9,3.2516);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(10,3.060603);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(11,2.5938);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(12,2.971323);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(13,2.69676);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(14,2.54295);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(15,2.267755);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(16,1.987654);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(17,1.822619);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(18,1.790243);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(19,1.537087);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(20,1.374157);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(21,1.32236);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(22,1.143601);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(23,1.20076);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(24,0.8385906);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(25,1.092589);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(26,0.6101648);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(27,0.6322138);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(28,0.6153855);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(29,0.5371153);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(30,0.3410494);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(31,0.3582064);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetEntries(14890);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_3 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(1,519.1239);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(2,2491.813);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(3,3161.378);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(4,2898.169);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(5,2382.032);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(6,1944.231);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(7,1562.839);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(8,1333.818);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(9,1153.5);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(10,1049.677);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(11,942.9228);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(12,857.2881);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(13,785.6973);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(14,699.8862);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(15,622.4492);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(16,544.6154);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(17,455.0007);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(18,355.8122);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(19,301.9486);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(20,248.4203);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(21,204.543);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(22,153.2648);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(23,125.234);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(24,95.07412);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(25,68.76061);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(26,55.56002);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(27,37.63079);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(28,26.99532);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(29,14.98312);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(30,9.905854);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(31,17.28066);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(1,5.630989);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(2,12.36292);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(3,13.96697);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(4,13.39776);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(5,12.13992);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(6,10.96609);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(7,9.824414);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(8,9.073682);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(9,8.440694);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(10,8.054865);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(11,7.63872);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(12,7.283359);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(13,6.965952);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(14,6.585708);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(15,6.199956);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(16,5.794508);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(17,5.298388);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(18,4.68057);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(19,4.310431);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(20,3.913689);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(21,3.541462);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(22,3.063461);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(23,2.764724);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(24,2.402359);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(25,2.048745);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(26,1.841149);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(27,1.512485);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(28,1.276414);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(29,0.9509382);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(30,0.7786338);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(31,1.018435);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetEntries(421807);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_4 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(1,100.3993);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(2,385.0295);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(3,442.7612);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(4,341.3354);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(5,269.5048);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(6,239.5512);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(7,186.9215);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(8,180.93);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(9,141.0338);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(10,127.3642);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(11,124.9217);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(12,113.1733);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(13,100.4583);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(14,100.8631);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(15,77.50888);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(16,71.37715);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(17,58.11108);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(18,42.35679);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(19,44.053);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(20,35.15727);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(21,24.14705);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(22,16.1883);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(23,19.67481);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(24,13.49028);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(25,10.16168);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(26,5.537126);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(27,5.344937);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(28,3.420634);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(29,1.084713);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(30,1.991791);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(31,1.726615);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(1,4.366798);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(2,13.25676);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(3,16.67939);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(4,12.723);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(5,11.88281);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(6,9.410128);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(7,9.926051);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(8,10.65078);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(9,7.442933);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(10,7.144957);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(11,6.063952);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(12,8.737654);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(13,7.602716);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(14,7.694346);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(15,6.03784);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(16,5.890067);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(17,5.512493);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(18,3.409651);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(19,3.659991);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(20,4.902267);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(21,2.703665);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(22,1.951161);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(23,4.520014);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(24,4.298499);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(25,1.491101);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(26,1.159329);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(27,1.146178);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(28,0.7518266);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(29,0.3298002);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(30,0.645186);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(31,0.7489647);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetEntries(18660);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_5 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(1,9.506086);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(2,32.24743);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(3,36.62718);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(4,37.87146);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(5,25.7765);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(6,27.1633);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(7,24.19952);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(8,16.3215);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(9,12.72562);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(10,13.14559);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(11,7.63751);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(12,12.59867);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(13,14.29648);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(14,8.991039);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(15,7.085861);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(16,6.618303);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(17,3.520457);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(18,6.386079);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(19,4.309217);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(20,3.990268);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(21,3.059177);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(22,2.162548);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(23,2.241548);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(24,0.9178107);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(25,1.067871);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(26,0.9485182);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(27,0.5185086);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(28,0.3225762);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(29,0.3430468);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(30,0.1388096);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(31,0.3796991);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(1,1.209744);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(2,4.268346);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(3,5.154143);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(4,11.46425);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(5,4.365947);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(6,4.604836);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(7,4.538091);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(8,3.324515);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(9,2.517633);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(10,3.23619);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(11,1.140966);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(12,3.184974);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(13,4.289875);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(14,2.3762);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(15,2.289682);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(16,1.080139);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(17,0.8243064);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(18,2.263537);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(19,2.1459);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(20,2.163582);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(21,0.782958);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(22,0.6858477);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(23,0.6083155);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(24,0.3690648);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(25,0.4050357);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(26,0.4904132);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(27,0.2534286);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(28,0.1853618);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(29,0.1899483);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(30,0.1271571);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(31,0.2192194);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetEntries(2359);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_6 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(1,0.4520427);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(2,0.4520427);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(3,0.4520427);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(16,0.4520427);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(1,0.4520427);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(2,0.4520427);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(3,0.4520427);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(16,0.4520427);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetEntries(4);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_7 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(1,1.416796);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(2,2.833593);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(3,1.416796);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(4,0.7083982);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(5,0.3541991);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(7,1.062597);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(9,0.7083982);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(12,0.7083982);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(13,0.3541991);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(15,0.3541991);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(17,0.3541991);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(18,0.7083982);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(27,0.3541991);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(1,0.7083982);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(2,1.001826);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(3,0.7083982);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(4,0.5009132);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(5,0.3541991);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(7,0.6134909);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(9,0.5009132);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(12,0.5009132);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(13,0.3541991);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(15,0.3541991);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(17,0.3541991);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(18,0.5009132);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(27,0.3541991);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetEntries(32);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_8 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(1,1.117657);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(2,6.985359);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(3,8.941259);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(4,9.500088);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(5,5.308873);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(6,3.073558);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(7,1.117657);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(8,1.397072);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(9,3.073558);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(10,3.632387);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(11,4.191215);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(12,2.794144);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(13,3.073558);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(14,3.073558);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(15,2.235315);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(16,0.8382431);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(17,1.117657);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(18,0.8382431);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(19,0.8382431);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(23,0.2794144);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(24,0.5588287);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(26,0.2794144);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(1,0.5588287);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(2,1.397072);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(3,1.580606);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(4,1.629252);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(5,1.217939);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(6,0.9267126);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(7,0.5588287);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(8,0.6247895);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(9,0.9267126);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(10,1.007443);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(11,1.082167);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(12,0.8835858);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(13,0.9267126);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(14,0.9267126);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(15,0.7903031);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(16,0.4839599);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(17,0.5588287);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(18,0.4839599);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(19,0.4839599);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(23,0.2794144);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(24,0.3951516);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(26,0.2794144);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetEntries(230);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_9 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(1,1.645761);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(2,8.096228);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(3,9.140829);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(4,7.531641);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(5,5.575014);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(6,4.173832);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(7,3.339523);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(8,2.809222);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(9,2.58293);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(10,2.694933);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(11,2.617217);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(12,2.477784);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(13,2.361209);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(14,1.920054);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(15,1.456041);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(16,1.014886);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(17,0.7497354);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(18,0.5280149);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(19,0.3108659);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(20,0.2537214);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(21,0.2331494);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(22,0.2057201);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(23,0.1462898);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(24,0.1417183);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(25,0.1211463);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(26,0.08000225);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(27,0.05257291);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(28,0.01142889);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(29,0.004571557);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(30,0.01371467);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(31,0.006857336);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(1,0.06133388);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(2,0.1360374);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(3,0.1445473);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(4,0.1312085);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(5,0.112886);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(6,0.09767526);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(7,0.08736939);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(8,0.08013276);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(9,0.07683753);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(10,0.0784858);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(11,0.07734583);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(12,0.07525733);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(13,0.07346565);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(14,0.06624816);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(15,0.05769044);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(16,0.04816434);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(17,0.04139721);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(18,0.03474083);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(19,0.02665653);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(20,0.02408217);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(21,0.02308523);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(22,0.0216848);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(23,0.01828623);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(24,0.01799824);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(25,0.01664072);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(26,0.01352285);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(27,0.01096221);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(28,0.005111156);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(29,0.003232579);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(30,0.005598991);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(31,0.003959085);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetEntries(27254);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_10 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(1,0.6724512);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(2,3.329468);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(3,4.344702);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(4,3.819499);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(5,2.885936);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(6,2.087102);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(7,1.612571);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(8,1.394382);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(9,1.229846);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(10,1.109425);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(11,1.121944);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(12,1.002119);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(13,0.9055437);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(14,0.7875071);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(15,0.6647013);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(16,0.531761);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(17,0.436974);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(18,0.3135721);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(19,0.2474);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(20,0.185401);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(21,0.14844);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(22,0.1216135);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(23,0.1025369);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(24,0.07571037);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(25,0.04948001);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(26,0.02980723);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(27,0.02444193);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(28,0.01192289);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(29,0.01013446);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(30,0.002384579);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(31,0.005961446);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(1,0.02002194);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(2,0.04455159);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(3,0.05089274);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(4,0.04771765);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(5,0.04147813);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(6,0.03527343);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(7,0.03100525);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(8,0.02883147);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(9,0.02707704);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(10,0.02571727);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(11,0.02586196);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(12,0.02444193);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(13,0.02323435);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(14,0.02166721);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(15,0.01990623);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(16,0.01780468);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(17,0.01614);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(18,0.01367239);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(19,0.01214439);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(20,0.01051313);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(21,0.009407004);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(22,0.008514649);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(23,0.007818364);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(24,0.006718209);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(25,0.005431136);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(26,0.004215379);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(27,0.003817188);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(28,0.00266604);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(29,0.002457967);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(30,0.001192289);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(31,0.001885175);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetEntries(49090);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_11 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(1,0.004551524);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(2,0.02503338);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(3,0.0295849);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(4,0.02275762);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(5,0.0182061);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(6,0.009103048);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(7,0.01137881);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(8,0.006827286);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(9,0.002275762);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(10,0.002275762);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(11,0.006827286);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(14,0.004551524);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(15,0.004551524);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(16,0.002275762);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(17,0.004551524);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(19,0.004551524);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(20,0.006827286);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(21,0.002275762);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(22,0.006827286);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(1,0.003218413);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(2,0.007547848);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(3,0.008205376);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(4,0.007196591);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(5,0.006436827);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(6,0.004551524);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(7,0.005088758);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(8,0.003941735);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(9,0.002275762);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(10,0.002275762);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(11,0.003941735);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(14,0.003218413);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(15,0.003218413);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(16,0.002275762);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(17,0.003218413);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(19,0.003218413);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(20,0.003941735);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(21,0.002275762);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(22,0.003941735);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetEntries(77);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_12 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(1,0.001797941);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(2,0.01378421);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(3,0.01857872);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(4,0.0110873);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(5,0.009888674);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(6,0.008690047);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(7,0.003296225);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(8,0.005393822);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(9,0.002097598);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(10,0.002996568);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(11,0.002996568);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(12,0.0005993136);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(13,0.0005993136);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(14,0.0008989704);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(15,0.001198627);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(16,0.001198627);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(17,0.0005993136);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(18,0.0008989704);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(19,0.0005993136);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(20,0.0005993136);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(24,0.0002996568);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(25,0.0005993136);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(26,0.0002996568);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(27,0.0002996568);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(1,0.0007340063);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(2,0.002032371);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(3,0.0023595);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(4,0.001822741);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(5,0.001721397);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(6,0.001613701);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(7,0.0009938492);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(8,0.001271336);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(9,0.0007928174);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(10,0.000947598);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(11,0.000947598);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(12,0.0004237787);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(13,0.0004237787);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(14,0.0005190208);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(15,0.0005993136);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(16,0.0005993136);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(17,0.0004237787);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(18,0.0005190208);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(19,0.0004237787);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(20,0.0004237787);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(24,0.0002996568);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(25,0.0004237787);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(26,0.0002996568);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(27,0.0002996568);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetEntries(298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR_Bj0__117 = new TH1D("VbbHcc_tags_H_dR_Bj0__117","",30,0,6);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(1,9000);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(2,37587);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(3,38317);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(4,31671);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(5,27054);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(6,22160);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(7,18553);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(8,16243);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(9,14246);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(10,12935);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(11,11766);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(12,10880);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(13,9949);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(14,8923);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(15,8225);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(16,7131);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(17,5797);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(18,4865);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(19,3961);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(20,3276);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(21,2668);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(22,2190);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(23,1794);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(24,1423);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(25,1086);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(26,798);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(27,624);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(28,419);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(29,250);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(30,161);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(31,283);
   VbbHcc_tags_H_dR_Bj0__117->SetEntries(314264);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0__117->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0__117->SetLineWidth(2);
   VbbHcc_tags_H_dR_Bj0__117->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_Bj0__117->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_Bj0__117->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0__117->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__117->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__117->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__117->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__117->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__117->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__117->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__117->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0__117->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__117->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__117->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__117->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__117->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__117->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fx1085[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fy1085[30] = {
   6079.51,
   28174.9,
   31706.09,
   24103.26,
   21245.08,
   18655.18,
   17669.64,
   13743.9,
   11109.19,
   10721.32,
   8753.482,
   8452.615,
   8621.464,
   6249.14,
   4271.443,
   5628.767,
   3985.47,
   3720.433,
   2329.22,
   1912.004,
   1844.498,
   1315.112,
   2664.595,
   1226.356,
   551.1682,
   383.6626,
   153.6802,
   172.956,
   35.77278,
   126.9074};
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fex1085[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fey1085[30] = {
   701.9772,
   2017.93,
   2301.726,
   2024.729,
   1879.65,
   2410.888,
   1895.125,
   2076.192,
   1333.942,
   1995.212,
   1211.632,
   1098.882,
   1261.953,
   948.852,
   578.8114,
   942.9975,
   772.3525,
   769.7942,
   416.2709,
   406.4423,
   542.7924,
   392.0057,
   1668.788,
   395.3321,
   103.1905,
   80.57162,
   39.80845,
   43.94764,
   11.53773,
   56.49397};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_Bj0_fx1085,Graph_from_VbbHcc_tags_H_dR_Bj0_fy1085,Graph_from_VbbHcc_tags_H_dR_Bj0_fex1085,Graph_from_VbbHcc_tags_H_dR_Bj0_fey1085);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->SetMinimum(21.81154);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->SetMaximum(37406.17);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR_Bj0","MC unc. (stat.)","fl");

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
   H_dR_Bj0_tags_18->cd();
  
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
   
   TH1D *data_mc_ratio__118 = new TH1D("data_mc_ratio__118","",30,0,6);
   data_mc_ratio__118->SetBinContent(1,1.480383);
   data_mc_ratio__118->SetBinContent(2,1.33406);
   data_mc_ratio__118->SetBinContent(3,1.208506);
   data_mc_ratio__118->SetBinContent(4,1.313972);
   data_mc_ratio__118->SetBinContent(5,1.273424);
   data_mc_ratio__118->SetBinContent(6,1.187874);
   data_mc_ratio__118->SetBinContent(7,1.049993);
   data_mc_ratio__118->SetBinContent(8,1.181834);
   data_mc_ratio__118->SetBinContent(9,1.282361);
   data_mc_ratio__118->SetBinContent(10,1.206475);
   data_mc_ratio__118->SetBinContent(11,1.344151);
   data_mc_ratio__118->SetBinContent(12,1.287176);
   data_mc_ratio__118->SetBinContent(13,1.15398);
   data_mc_ratio__118->SetBinContent(14,1.427877);
   data_mc_ratio__118->SetBinContent(15,1.925579);
   data_mc_ratio__118->SetBinContent(16,1.266885);
   data_mc_ratio__118->SetBinContent(17,1.454534);
   data_mc_ratio__118->SetBinContent(18,1.307644);
   data_mc_ratio__118->SetBinContent(19,1.70057);
   data_mc_ratio__118->SetBinContent(20,1.713386);
   data_mc_ratio__118->SetBinContent(21,1.446464);
   data_mc_ratio__118->SetBinContent(22,1.665258);
   data_mc_ratio__118->SetBinContent(23,0.6732731);
   data_mc_ratio__118->SetBinContent(24,1.160348);
   data_mc_ratio__118->SetBinContent(25,1.97036);
   data_mc_ratio__118->SetBinContent(26,2.079953);
   data_mc_ratio__118->SetBinContent(27,4.060381);
   data_mc_ratio__118->SetBinContent(28,2.422581);
   data_mc_ratio__118->SetBinContent(29,6.988554);
   data_mc_ratio__118->SetBinContent(30,1.268642);
   data_mc_ratio__118->SetBinContent(31,1.398402);
   data_mc_ratio__118->SetBinError(1,0.0156046);
   data_mc_ratio__118->SetBinError(2,0.006881078);
   data_mc_ratio__118->SetBinError(3,0.006173808);
   data_mc_ratio__118->SetBinError(4,0.007383378);
   data_mc_ratio__118->SetBinError(5,0.007742076);
   data_mc_ratio__118->SetBinError(6,0.007979678);
   data_mc_ratio__118->SetBinError(7,0.007708667);
   data_mc_ratio__118->SetBinError(8,0.009273063);
   data_mc_ratio__118->SetBinError(9,0.01074395);
   data_mc_ratio__118->SetBinError(10,0.01060804);
   data_mc_ratio__118->SetBinError(11,0.01239178);
   data_mc_ratio__118->SetBinError(12,0.01234023);
   data_mc_ratio__118->SetBinError(13,0.01156934);
   data_mc_ratio__118->SetBinError(14,0.01511594);
   data_mc_ratio__118->SetBinError(15,0.02123212);
   data_mc_ratio__118->SetBinError(16,0.01500244);
   data_mc_ratio__118->SetBinError(17,0.0191039);
   data_mc_ratio__118->SetBinError(18,0.0187477);
   data_mc_ratio__118->SetBinError(19,0.02702041);
   data_mc_ratio__118->SetBinError(20,0.02993527);
   data_mc_ratio__118->SetBinError(21,0.02800365);
   data_mc_ratio__118->SetBinError(22,0.03558438);
   data_mc_ratio__118->SetBinError(23,0.01589571);
   data_mc_ratio__118->SetBinError(24,0.03075996);
   data_mc_ratio__118->SetBinError(25,0.05979031);
   data_mc_ratio__118->SetBinError(26,0.07362953);
   data_mc_ratio__118->SetBinError(27,0.1625453);
   data_mc_ratio__118->SetBinError(28,0.1183508);
   data_mc_ratio__118->SetBinError(29,0.441995);
   data_mc_ratio__118->SetBinError(30,0.099983);
   data_mc_ratio__118->SetBinError(31,0.5082017);
   data_mc_ratio__118->SetMinimum(0.4);
   data_mc_ratio__118->SetMaximum(1.6);
   data_mc_ratio__118->SetEntries(285.1992);
   data_mc_ratio__118->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__118->SetLineColor(ci);
   data_mc_ratio__118->SetLineWidth(2);
   data_mc_ratio__118->SetMarkerStyle(20);
   data_mc_ratio__118->SetMarkerSize(1.2);
   data_mc_ratio__118->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__118->GetXaxis()->SetRange(1,30);
   data_mc_ratio__118->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__118->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__118->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__118->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__118->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__118->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__118->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__118->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__118->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__118->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__118->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__118->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__118->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__118->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__118->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__118->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__118->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1086[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1086[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1086[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1086[30] = {
   0.1154661,
   0.07162157,
   0.07259572,
   0.0840023,
   0.0884746,
   0.1292342,
   0.1072532,
   0.1510628,
   0.1200755,
   0.1860977,
   0.1384171,
   0.1300049,
   0.1463734,
   0.1518372,
   0.1355072,
   0.1675318,
   0.1937921,
   0.2069098,
   0.1787169,
   0.212574,
   0.2942764,
   0.2980778,
   0.6262821,
   0.3223632,
   0.1872215,
   0.2100065,
   0.2590344,
   0.2540972,
   0.3225284,
   0.4451591};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1086,Graph_from_mc_statistical_error_fy1086,Graph_from_mc_statistical_error_fex1086,Graph_from_mc_statistical_error_fey1086);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1086 = new TH1F("Graph_Graph_from_mc_statistical_error1086","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1086->SetMinimum(0.2484615);
   Graph_Graph_from_mc_statistical_error1086->SetMaximum(1.751538);
   Graph_Graph_from_mc_statistical_error1086->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1086->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1086->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1086->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1086->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1086->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1086->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1086->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1086->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1086->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1086->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1086->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1086->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1086->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1086->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1086->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1086);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_tags_18->cd();
   H_dR_Bj0_tags_18->Modified();
   H_dR_Bj0_tags_18->cd();
   H_dR_Bj0_tags_18->SetSelected(H_dR_Bj0_tags_18);
}
