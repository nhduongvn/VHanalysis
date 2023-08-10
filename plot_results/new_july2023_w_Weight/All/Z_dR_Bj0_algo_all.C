void Z_dR_Bj0_algo_all()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_all/Z_dR_Bj0_algo_all
//=========  (Thu Aug 10 12:24:16 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_algo_all = new TCanvas("Z_dR_Bj0_algo_all", "Z_dR_Bj0_algo_all",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_algo_all->SetHighLightColor(2);
   Z_dR_Bj0_algo_all->Range(0,0,1,1);
   Z_dR_Bj0_algo_all->SetFillColor(0);
   Z_dR_Bj0_algo_all->SetFillStyle(4000);
   Z_dR_Bj0_algo_all->SetBorderMode(0);
   Z_dR_Bj0_algo_all->SetBorderSize(2);
   Z_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-3808.772,6.314516,3805263);
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
   st->SetMaximum(3261292);
   
   TH1F *st_stack_148 = new TH1F("st_stack_148","",30,0,6);
   st_stack_148->SetMinimum(0.3);
   st_stack_148->SetMaximum(3424356);
   st_stack_148->SetDirectory(0);
   st_stack_148->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_148->SetLineColor(ci);
   st_stack_148->GetXaxis()->SetRange(1,30);
   st_stack_148->GetXaxis()->SetLabelFont(42);
   st_stack_148->GetXaxis()->SetLabelSize(0.035);
   st_stack_148->GetXaxis()->SetTitleSize(0.035);
   st_stack_148->GetXaxis()->SetTitleFont(42);
   st_stack_148->GetYaxis()->SetTitle("Events/0.2");
   st_stack_148->GetYaxis()->SetLabelFont(42);
   st_stack_148->GetYaxis()->SetLabelSize(0.05);
   st_stack_148->GetYaxis()->SetTitleSize(0.057);
   st_stack_148->GetYaxis()->SetTitleOffset(1.2);
   st_stack_148->GetYaxis()->SetTitleFont(42);
   st_stack_148->GetZaxis()->SetLabelFont(42);
   st_stack_148->GetZaxis()->SetLabelSize(0.035);
   st_stack_148->GetZaxis()->SetTitleSize(0.035);
   st_stack_148->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_148);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(1,345838.9);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(2,1264426);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(3,1212067);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(4,996759.3);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(5,690913.7);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(6,448932.7);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(7,361161.5);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(8,245853.2);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(9,199998.4);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(10,183643.8);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(11,138661.9);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(12,153630.4);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(13,91454.89);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(14,89257.34);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(15,77052.85);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(16,60566.55);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(17,49694.28);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(18,39047.45);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(19,31308.13);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(20,27999.89);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(21,17394.54);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(22,11281.63);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(23,7272.764);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(24,4199.433);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(25,2782.064);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(26,2605.797);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(27,413.3468);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(28,1079.821);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(29,262.4751);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(30,662.263);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(31,1530.891);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(1,5611.332);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(2,21438.78);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(3,16889.86);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(4,25993.17);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(5,21158.69);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(6,12297.26);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(7,33513.67);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(8,8556.921);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(9,7657.272);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(10,25839.1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(11,7119.906);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(12,25773.66);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(13,5185.597);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(14,6096.782);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(15,5072.793);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(16,3972.291);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(17,3858.189);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(18,3578.667);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(19,2868.297);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(20,3522.79);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(21,2639.017);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(22,2200.022);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(23,1733.576);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(24,969.2375);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(25,722.5459);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(26,1473.33);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(27,273.6062);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(28,530.5765);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(29,69.10963);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(30,384.2306);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(31,546.6558);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetEntries(355717);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(1,1822.145);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(2,9488.074);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(3,10424.72);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(4,7545.23);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(5,4911.478);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(6,3297.529);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(7,2286.317);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(8,1728.615);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(9,1352.506);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(10,1102.325);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(11,913.253);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(12,770.58);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(13,670.2287);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(14,578.0005);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(15,521.2104);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(16,449.2001);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(17,384.7408);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(18,330.5765);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(19,258.5964);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(20,183.4652);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(21,107.2073);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(22,64.01803);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(23,37.82884);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(24,26.3593);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(25,12.0673);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(26,12.68199);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(27,7.464871);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(28,7.066005);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(29,3.325429);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(30,2.69275);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(31,7.180861);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(1,16.7439);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(2,37.09935);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(3,38.58609);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(4,32.80545);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(5,26.40811);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(6,21.72467);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(7,18.08187);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(8,15.6218);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(9,13.83313);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(10,12.52436);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(11,11.31205);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(12,10.38538);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(13,9.806542);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(14,8.969116);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(15,8.705491);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(16,7.970763);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(17,7.301166);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(18,6.902126);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(19,6.130372);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(20,5.128149);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(21,3.871884);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(22,2.88267);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(23,2.262099);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(24,1.87718);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(25,1.119312);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(26,1.347489);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(27,0.8523477);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(28,0.9943587);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(29,0.6317271);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(30,0.5543134);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(31,0.9042939);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetEntries(639487);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_3 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(1,29001.44);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(2,182213.5);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(3,189676.4);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(4,123064.4);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(5,73974.45);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(6,47498.99);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(7,33052.61);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(8,24641.5);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(9,19370.84);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(10,15810.36);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(11,13230.89);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(12,11285.14);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(13,9870.152);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(14,8691.104);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(15,7839.767);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(16,7033.747);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(17,6165.48);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(18,5276.712);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(19,4122.545);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(20,2814.663);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(21,1576.356);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(22,732.3084);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(23,361.4775);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(24,202.0508);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(25,131.8422);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(26,83.51151);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(27,55.39957);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(28,41.14727);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(29,31.05572);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(30,19.45944);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(31,50.23448);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(1,44.28383);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(2,110.643);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(3,112.3042);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(4,90.0606);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(5,69.68272);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(6,55.80087);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(7,46.53323);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(8,40.14543);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(9,35.58927);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(10,32.13952);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(11,29.40761);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(12,27.16458);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(13,25.41691);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(14,23.86775);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(15,22.70576);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(16,21.5336);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(17,20.17936);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(18,18.69008);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(19,16.53157);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(20,13.65045);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(21,10.18667);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(22,6.912829);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(23,4.829315);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(24,3.596691);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(25,2.895069);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(26,2.29673);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(27,1.880503);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(28,1.61419);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(29,1.402327);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(30,1.111387);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(31,1.791944);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetEntries(1.27678e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_4 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(1,2091.504);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(2,7881.179);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(3,6962.089);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(4,4893.741);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(5,3215.252);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(6,2088.688);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(7,1560.144);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(8,1194.12);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(9,923.0604);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(10,737.3852);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(11,637.8949);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(12,512.1302);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(13,451.0412);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(14,379.6808);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(15,361.3106);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(16,307.7693);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(17,251.5591);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(18,202.4714);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(19,156.9499);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(20,84.22461);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(21,64.87694);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(22,33.92029);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(23,16.6927);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(24,16.75933);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(25,9.357966);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(26,8.731243);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(27,4.158358);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(28,5.641483);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(29,2.340987);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(30,1.314155);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(31,4.628368);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(1,20.86919);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(2,61.03016);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(3,69.86577);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(4,60.70224);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(5,50.32085);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(6,39.26743);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(7,34.88425);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(8,30.78288);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(9,25.3805);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(10,24.07298);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(11,21.86683);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(12,19.1096);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(13,17.57388);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(14,15.68508);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(15,18.03615);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(16,16.14614);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(17,14.53828);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(18,12.72465);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(19,10.29242);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(20,5.761215);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(21,5.436987);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(22,4.32662);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(23,2.028673);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(24,3.153285);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(25,1.697787);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(26,1.568733);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(27,0.8917446);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(28,2.882579);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(29,0.738004);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(30,0.6676194);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(31,1.011551);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetEntries(204480);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_5 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(1,1134.424);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(2,3222.945);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(3,2667.743);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(4,1935.867);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(5,1239.277);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(6,885.5376);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(7,602.4672);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(8,485.6256);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(9,333.2583);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(10,311.4786);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(11,254.1987);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(12,209.052);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(13,148.9715);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(14,188.8685);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(15,114.0323);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(16,126.6319);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(17,86.98664);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(18,62.73299);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(19,76.64087);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(20,48.80606);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(21,29.59184);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(22,14.11361);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(23,11.03374);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(24,3.802239);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(25,5.085958);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(26,5.471887);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(27,1.00958);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(28,4.551492);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(29,0.7753186);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(30,0.3181341);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(31,1.247968);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(1,20.30228);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(2,64.09278);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(3,69.75931);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(4,63.26214);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(5,49.43928);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(6,43.11379);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(7,33.0352);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(8,34.0072);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(9,23.86959);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(10,23.74213);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(11,23.59526);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(12,22.0119);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(13,13.87565);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(14,22.63063);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(15,13.35755);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(16,16.41657);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(17,12.59775);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(18,10.34887);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(19,13.86905);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(20,8.628258);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(21,9.066108);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(22,3.193615);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(23,3.434956);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(24,1.214487);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(25,2.44145);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(26,1.993973);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(27,0.4058442);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(28,1.972356);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(29,0.3990756);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(30,0.2254452);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(31,0.4772977);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetEntries(98236);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_6 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(1,10.96365);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(2,33.72203);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(3,26.78176);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(4,18.19849);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(5,12.08457);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(6,7.249645);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(7,5.030666);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(8,3.818975);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(9,4.764893);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(10,1.793368);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(11,1.52463);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(12,1.793368);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(13,1.707934);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(14,1.436828);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(15,2.431082);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(16,0.6718465);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(17,0.9871524);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(18,0.7184138);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(19,0.7184138);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(20,0.5374772);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(21,0.4520427);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(22,0.1343693);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(24,0.4496752);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(1,1.627142);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(2,2.985976);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(3,2.559566);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(4,2.102936);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(5,1.690328);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(6,1.514627);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(7,1.078806);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(8,0.9562728);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(9,1.101232);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(10,0.5459157);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(11,0.5117751);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(12,0.5459157);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(13,0.6558553);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(14,0.5542258);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(15,0.8703267);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(16,0.3004589);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(17,0.435538);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(18,0.3918968);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(19,0.3918968);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(20,0.2687386);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(21,0.4520427);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(22,0.1343693);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(24,0.3427432);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetEntries(733);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_7 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(1,15.35384);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(2,48.88276);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(3,34.29894);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(4,23.65433);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(5,14.88772);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(6,10.77419);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(7,7.992346);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(8,5.893947);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(9,5.096164);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(10,3.257799);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(11,2.385949);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(12,1.405118);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(13,3.164936);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(14,1.611443);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(15,2.772884);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(16,1.525737);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(17,0.6422496);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(18,1.296137);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(19,1.078175);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(20,0.4359249);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(21,0.6700051);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(22,0.1089812);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(24,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(26,0.1089812);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(29,0.1089812);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(1,1.723112);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(2,3.185165);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(3,2.641002);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(4,2.180424);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(5,1.722862);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(6,1.615543);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(7,1.183768);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(8,1.040479);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(9,1.091247);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(10,0.6481469);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(11,0.5701571);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(12,0.4671048);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(13,0.7516997);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(14,0.5529266);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(15,0.8760294);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(16,0.4077705);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(17,0.3674895);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(18,0.4542136);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(19,0.4272659);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(20,0.2179625);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(21,0.4775944);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(22,0.1089812);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(24,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(26,0.1089812);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(29,0.1089812);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetEntries(1323);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_8 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(1,33.30747);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(2,130.2533);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(3,88.66407);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(4,43.46773);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(5,34.77035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(6,16.31102);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(7,13.98142);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(8,13.62572);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(9,9.523317);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(10,8.675056);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(11,4.635046);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(12,4.638912);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(13,2.550712);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(14,2.833993);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(15,5.006911);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(16,4.102406);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(17,2.803937);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(18,1.298469);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(19,1.045243);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(20,1.324657);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(21,1.841127);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(22,0.4864143);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(23,0.2432072);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(27,0.2432072);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(1,2.938028);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(2,5.824346);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(3,4.789083);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(4,3.339716);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(5,2.986561);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(6,2.042528);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(7,1.906093);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(8,1.875181);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(9,1.568558);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(10,1.490363);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(11,1.094589);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(12,1.095032);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(13,0.8082318);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(14,0.855735);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(15,1.150647);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(16,1.027584);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(17,0.8469722);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(18,0.5818655);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(19,0.5238742);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(20,0.5937311);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(21,0.696948);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(22,0.3439469);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(23,0.2432072);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(27,0.2432072);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetEntries(1651);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_9 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(1,21.20811);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(2,96.68907);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(3,59.95711);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(4,30.98163);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(5,17.38962);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(6,12.03073);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(7,8.90649);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(8,7.275477);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(9,6.074798);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(10,4.998595);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(11,4.124669);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(12,3.30728);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(13,2.980927);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(14,2.554352);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(15,2.29107);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(16,1.906858);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(17,1.546403);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(18,1.346201);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(19,1.081778);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(20,0.7700011);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(21,0.471924);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(22,0.228036);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(23,0.09392878);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(24,0.05039353);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(25,0.02690057);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(26,0.01845105);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(27,0.004158668);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(28,0.005058224);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(29,0.001386223);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(30,0.007624699);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(31,0.01740299);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(1,0.1976334);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(2,0.4213587);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(3,0.3273148);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(4,0.2340293);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(5,0.1750142);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(6,0.1462974);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(7,0.1258037);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(8,0.113689);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(9,0.1043963);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(10,0.09469698);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(11,0.08645725);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(12,0.07698011);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(13,0.07348625);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(14,0.06732127);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(15,0.06373236);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(16,0.0583166);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(17,0.05202349);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(18,0.04859548);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(19,0.04356219);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(20,0.03694909);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(21,0.0289866);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(22,0.02000848);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(23,0.01287354);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(24,0.009761255);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(25,0.006883787);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(26,0.005659428);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(27,0.002401008);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(28,0.003011314);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(29,0.001386223);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(30,0.003892275);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(31,0.005629979);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetEntries(167452);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_10 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(1,6.211539);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(2,38.8156);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(3,35.26321);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(4,20.68729);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(5,12.08142);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(6,7.900606);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(7,5.868512);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(8,4.788662);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(9,3.994211);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(10,3.091363);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(11,2.520565);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(12,2.156956);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(13,1.907232);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(14,1.695927);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(15,1.635554);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(16,1.33369);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(17,1.108664);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(18,0.9001038);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(19,0.6627289);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(20,0.4967036);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(21,0.3197015);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(22,0.1372109);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(23,0.06723336);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(24,0.04939594);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(25,0.01234899);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(26,0.02332586);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(27,0.009604766);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(28,0.01372109);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(29,0.005488438);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(30,0.009604766);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(31,0.01234899);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(1,0.05460534);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(2,0.1365019);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(3,0.1301057);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(4,0.0996523);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(5,0.07615432);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(6,0.06158369);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(7,0.05307616);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(8,0.04794492);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(9,0.04378758);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(10,0.03852214);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(11,0.03478439);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(12,0.03217778);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(13,0.03025779);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(14,0.02853245);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(15,0.02801999);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(16,0.02530247);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(17,0.02306936);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(18,0.02078652);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(19,0.01783624);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(20,0.01544131);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(21,0.01238819);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(22,0.008115772);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(23,0.005681041);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(24,0.004869463);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(25,0.002434732);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(26,0.003346219);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(27,0.002147232);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(28,0.002566433);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(29,0.001623154);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(30,0.002147232);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(31,0.002434732);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetEntries(336228);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_11 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(1,0.1825608);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(2,0.7733351);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(3,0.52908);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(4,0.2705031);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(5,0.1792461);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(6,0.1071097);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(7,0.06639508);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(8,0.0838314);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(9,0.05977031);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(10,0.04851201);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(11,0.03208745);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(12,0.04061075);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(13,0.02345693);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(14,0.02798663);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(15,0.01967439);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(16,0.005255579);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(17,0.02304933);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(18,0.01094003);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(19,0.008416081);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(20,0.008523299);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(21,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(23,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(1,0.02055487);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(2,0.04306806);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(3,0.03574279);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(4,0.02558514);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(5,0.02124134);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(6,0.01577516);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(7,0.01249712);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(8,0.01445378);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(9,0.01167195);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(10,0.01045822);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(11,0.008803886);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(12,0.009843187);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(13,0.007586401);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(14,0.008287395);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(15,0.006757599);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(16,0.003716255);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(17,0.007197882);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(18,0.005470015);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(19,0.004336466);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(20,0.004402264);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(21,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(23,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetEntries(1102);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_12 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(1,0.04145271);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(2,0.2904867);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(3,0.2351242);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(4,0.1367753);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(5,0.0781201);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(6,0.05850319);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(7,0.04004743);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(8,0.03995336);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(9,0.03084687);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(10,0.02725199);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(11,0.01860441);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(12,0.01694491);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(13,0.01522775);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(14,0.01395861);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(15,0.009521423);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(16,0.01135476);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(17,0.008403235);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(18,0.005717599);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(19,0.003723664);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(20,0.002293928);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(21,0.001844611);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(22,0.0008645283);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(23,0.0005648715);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(26,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(27,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(1,0.003471482);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(2,0.009267912);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(3,0.008345474);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(4,0.006329971);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(5,0.004832088);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(6,0.004118501);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(7,0.003411585);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(8,0.003473891);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(9,0.003039591);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(10,0.002814912);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(11,0.002376032);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(12,0.002232397);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(13,0.002124069);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(14,0.002074454);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(15,0.001663261);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(16,0.001817706);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(17,0.001597931);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(18,0.001313426);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(19,0.001021662);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(20,0.0008317484);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(21,0.0007193555);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(22,0.0005104245);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(23,0.0004132058);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(26,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(27,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetEntries(3862);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all__406 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all__406","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(1,179111);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(2,679800);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(3,627372);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(4,465193);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(5,305358);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(6,204682);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(7,147484);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(8,111938);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(9,89433);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(10,73379);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(11,61271);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(12,52195);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(13,44462);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(14,38094);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(15,33113);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(16,28443);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(17,23661);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(18,19324);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(19,15153);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(20,10994);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(21,7087);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(22,4425);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(23,2797);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(24,1984);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(25,1460);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(26,991);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(27,716);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(28,500);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(29,343);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(30,240);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetBinContent(31,639);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetEntries(3231671);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all__406->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetLineWidth(2);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR_Bj0_all__406->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR_Bj0_all__406->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all__406->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all__406->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all__406->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all__406->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all__406->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all__406->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all__406->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all__406->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all__406->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all__406->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all__406->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all__406->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all__406->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all__406->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_all_fx1295[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_all_fy1295[30] = {
   379975.7,
   1467581,
   1422044,
   1134336,
   774345.6,
   502757.9,
   398704.9,
   273938.5,
   222007.6,
   201627.2,
   153713.4,
   166420.7,
   102607.6,
   99105.17,
   85903.34,
   68493.45,
   56590.16,
   44925.52,
   35927.46,
   31134.63,
   19176.33,
   12127.09,
   7700.203,
   4449.269,
   2940.457,
   2716.345,
   481.6364,
   1138.246,
   300.0884,
   686.0647};
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_all_fex1295[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_all_fey1295[30] = {
   5611.608,
   21439.28,
   16890.56,
   25993.5,
   21158.94,
   12297.54,
   33513.74,
   8557.153,
   7657.446,
   25839.15,
   7120.049,
   25773.69,
   5185.717,
   6096.898,
   5072.901,
   3972.424,
   3858.297,
   3578.76,
   2868.403,
   3522.835,
   2639.061,
   2200.042,
   1733.589,
   969.252,
   722.5586,
   1473.334,
   273.6159,
   530.5914,
   69.13192,
   384.2333};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_Bj0_all_fx1295,Graph_from_VbbHcc_algo_Z_dR_Bj0_all_fy1295,Graph_from_VbbHcc_algo_Z_dR_Bj0_all_fex1295,Graph_from_VbbHcc_algo_Z_dR_Bj0_all_fey1295);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_Bj0_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->SetMinimum(187.2185);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->SetMaximum(1637902);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR_Bj0_all","MC unc. (stat.)","fl");

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
   Z_dR_Bj0_algo_all->cd();
  
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
   
   TH1D *data_mc_ratio__407 = new TH1D("data_mc_ratio__407","",30,0,6);
   data_mc_ratio__407->SetBinContent(1,0.4713749);
   data_mc_ratio__407->SetBinContent(2,0.4632112);
   data_mc_ratio__407->SetBinContent(3,0.4411762);
   data_mc_ratio__407->SetBinContent(4,0.4101016);
   data_mc_ratio__407->SetBinContent(5,0.3943433);
   data_mc_ratio__407->SetBinContent(6,0.4071185);
   data_mc_ratio__407->SetBinContent(7,0.3699076);
   data_mc_ratio__407->SetBinContent(8,0.4086245);
   data_mc_ratio__407->SetBinContent(9,0.4028375);
   data_mc_ratio__407->SetBinContent(10,0.363934);
   data_mc_ratio__407->SetBinContent(11,0.3986054);
   data_mc_ratio__407->SetBinContent(12,0.3136329);
   data_mc_ratio__407->SetBinContent(13,0.4333206);
   data_mc_ratio__407->SetBinContent(14,0.3843796);
   data_mc_ratio__407->SetBinContent(15,0.3854681);
   data_mc_ratio__407->SetBinContent(16,0.415266);
   data_mc_ratio__407->SetBinContent(17,0.4181115);
   data_mc_ratio__407->SetBinContent(18,0.4301341);
   data_mc_ratio__407->SetBinContent(19,0.4217665);
   data_mc_ratio__407->SetBinContent(20,0.3531117);
   data_mc_ratio__407->SetBinContent(21,0.3695702);
   data_mc_ratio__407->SetBinContent(22,0.3648857);
   data_mc_ratio__407->SetBinContent(23,0.3632372);
   data_mc_ratio__407->SetBinContent(24,0.4459159);
   data_mc_ratio__407->SetBinContent(25,0.4965215);
   data_mc_ratio__407->SetBinContent(26,0.3648285);
   data_mc_ratio__407->SetBinContent(27,1.486599);
   data_mc_ratio__407->SetBinContent(28,0.4392725);
   data_mc_ratio__407->SetBinContent(29,1.142996);
   data_mc_ratio__407->SetBinContent(30,0.3498212);
   data_mc_ratio__407->SetBinContent(31,0.4008249);
   data_mc_ratio__407->SetBinError(1,0.001113795);
   data_mc_ratio__407->SetBinError(2,0.0005618087);
   data_mc_ratio__407->SetBinError(3,0.0005569927);
   data_mc_ratio__407->SetBinError(4,0.0006012774);
   data_mc_ratio__407->SetBinError(5,0.0007136246);
   data_mc_ratio__407->SetBinError(6,0.0008998725);
   data_mc_ratio__407->SetBinError(7,0.0009632097);
   data_mc_ratio__407->SetBinError(8,0.001221337);
   data_mc_ratio__407->SetBinError(9,0.001347041);
   data_mc_ratio__407->SetBinError(10,0.001343497);
   data_mc_ratio__407->SetBinError(11,0.001610333);
   data_mc_ratio__407->SetBinError(12,0.0013728);
   data_mc_ratio__407->SetBinError(13,0.002055014);
   data_mc_ratio__407->SetBinError(14,0.001969391);
   data_mc_ratio__407->SetBinError(15,0.002118309);
   data_mc_ratio__407->SetBinError(16,0.002462287);
   data_mc_ratio__407->SetBinError(17,0.002718164);
   data_mc_ratio__407->SetBinError(18,0.00309425);
   data_mc_ratio__407->SetBinError(19,0.003426279);
   data_mc_ratio__407->SetBinError(20,0.003367706);
   data_mc_ratio__407->SetBinError(21,0.004390012);
   data_mc_ratio__407->SetBinError(22,0.005485297);
   data_mc_ratio__407->SetBinError(23,0.006868217);
   data_mc_ratio__407->SetBinError(24,0.01001111);
   data_mc_ratio__407->SetBinError(25,0.01299456);
   data_mc_ratio__407->SetBinError(26,0.01158916);
   data_mc_ratio__407->SetBinError(27,0.0555568);
   data_mc_ratio__407->SetBinError(28,0.01964486);
   data_mc_ratio__407->SetBinError(29,0.06171601);
   data_mc_ratio__407->SetBinError(30,0.02258086);
   data_mc_ratio__407->SetBinError(31,0.1383558);
   data_mc_ratio__407->SetMinimum(0.4);
   data_mc_ratio__407->SetMaximum(1.6);
   data_mc_ratio__407->SetEntries(201.1628);
   data_mc_ratio__407->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__407->SetLineColor(ci);
   data_mc_ratio__407->SetLineWidth(2);
   data_mc_ratio__407->SetMarkerStyle(20);
   data_mc_ratio__407->SetMarkerSize(1.2);
   data_mc_ratio__407->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__407->GetXaxis()->SetRange(1,30);
   data_mc_ratio__407->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__407->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__407->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__407->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__407->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__407->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__407->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__407->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__407->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__407->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__407->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__407->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__407->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__407->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__407->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__407->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__407->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1296[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1296[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1296[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1296[30] = {
   0.01476834,
   0.01460858,
   0.01187766,
   0.02291516,
   0.02732493,
   0.02446017,
   0.08405651,
   0.03123749,
   0.03449181,
   0.1281531,
   0.04632028,
   0.1548707,
   0.05053929,
   0.06151947,
   0.05905359,
   0.05799713,
   0.06817964,
   0.07965985,
   0.07983874,
   0.1131485,
   0.1376207,
   0.1814155,
   0.2251354,
   0.2178452,
   0.2457301,
   0.5423959,
   0.5680964,
   0.4661484,
   0.2303718,
   0.560054};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1296,Graph_from_mc_statistical_error_fy1296,Graph_from_mc_statistical_error_fex1296,Graph_from_mc_statistical_error_fey1296);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1296 = new TH1F("Graph_Graph_from_mc_statistical_error1296","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1296->SetMinimum(0.3182843);
   Graph_Graph_from_mc_statistical_error1296->SetMaximum(1.681716);
   Graph_Graph_from_mc_statistical_error1296->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1296->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1296->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1296->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1296->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1296->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1296->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1296->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1296->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1296->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1296->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1296->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1296->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1296->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1296->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1296->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1296);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_algo_all->cd();
   Z_dR_Bj0_algo_all->Modified();
   Z_dR_Bj0_algo_all->cd();
   Z_dR_Bj0_algo_all->SetSelected(Z_dR_Bj0_algo_all);
}
