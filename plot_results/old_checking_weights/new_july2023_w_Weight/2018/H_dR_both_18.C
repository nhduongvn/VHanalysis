void H_dR_both_18()
{
//=========Macro generated from canvas: H_dR_both_18/H_dR_both_18
//=========  (Thu Aug 10 10:43:04 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_18 = new TCanvas("H_dR_both_18", "H_dR_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_18->SetHighLightColor(2);
   H_dR_both_18->Range(0,0,1,1);
   H_dR_both_18->SetFillColor(0);
   H_dR_both_18->SetFillStyle(4000);
   H_dR_both_18->SetBorderMode(0);
   H_dR_both_18->SetBorderSize(2);
   H_dR_both_18->SetFrameFillStyle(1000);
   H_dR_both_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-2.859077,6.525,11.98747);
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
   st->SetMaximum(9.376638e+09);
   
   TH1F *st_stack_215 = new TH1F("st_stack_215","",30,0,6);
   st_stack_215->SetMinimum(0.001431429);
   st_stack_215->SetMaximum(3.182815e+10);
   st_stack_215->SetDirectory(0);
   st_stack_215->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_215->SetLineColor(ci);
   st_stack_215->GetXaxis()->SetRange(1,31);
   st_stack_215->GetXaxis()->SetLabelFont(42);
   st_stack_215->GetXaxis()->SetLabelSize(0.035);
   st_stack_215->GetXaxis()->SetTitleSize(0.035);
   st_stack_215->GetXaxis()->SetTitleFont(42);
   st_stack_215->GetYaxis()->SetTitle("Events/0.2");
   st_stack_215->GetYaxis()->SetLabelFont(42);
   st_stack_215->GetYaxis()->SetLabelSize(0.05);
   st_stack_215->GetYaxis()->SetTitleSize(0.057);
   st_stack_215->GetYaxis()->SetTitleOffset(1.2);
   st_stack_215->GetYaxis()->SetTitleFont(42);
   st_stack_215->GetZaxis()->SetLabelFont(42);
   st_stack_215->GetZaxis()->SetLabelSize(0.035);
   st_stack_215->GetZaxis()->SetTitleSize(0.035);
   st_stack_215->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_215);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(2,10.87835);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,14733.06);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,13402.37);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,8983.226);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,13769.62);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,8409.367);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,12065.19);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,13017.47);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,12776.76);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,12647.82);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,13549.23);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,15361.9);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,20870.66);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,21986.53);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,24283.97);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,13650.2);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,10340.17);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,7031.071);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,4079.368);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,1380.36);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,1147.262);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,1116.976);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,587.0085);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,126.3007);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,12.33252);
   VbbHcc_both_H_dR_stack_1->SetBinError(2,10.87835);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,1764.682);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,1691.236);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,1254.409);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,2719.873);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,1236.985);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,1724.914);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,2448.503);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,2443.18);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,1657.838);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,1687.461);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,1758.709);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,2165.585);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,2504.003);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,2311.943);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,1796.603);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,1600.793);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,1387.651);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,811.5684);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,184.2342);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,245.4515);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,430.5906);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,406.2149);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,41.98876);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,8.368974);
   VbbHcc_both_H_dR_stack_1->SetEntries(10527);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_stack_2 = new TH1D("VbbHcc_both_H_dR_stack_2","",30,0,6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,35.12326);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,49.65111);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,53.71531);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,59.40943);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,61.6661);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,63.58178);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,71.60326);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,87.69769);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,102.2168);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,107.4369);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,115.5931);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,125.4193);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,144.6576);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,128.4793);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,81.33389);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,55.00533);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,36.99062);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,23.73127);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,16.88496);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,9.904937);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,6.996172);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,2.468893);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,2.056396);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,0.9479148);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,0.3011846);
   VbbHcc_both_H_dR_stack_2->SetBinContent(28,0.2890648);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,2.617862);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,3.281672);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,3.458609);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,3.702261);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,3.713476);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,3.713701);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,3.887432);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,4.544291);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,5.281693);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,4.957792);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,5.056257);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,5.188006);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,5.638426);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,5.154122);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,4.141268);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,3.336305);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,2.818765);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,2.151449);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,1.980237);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,1.301892);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,1.054674);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,0.5634075);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,0.6691566);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,0.3762876);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,0.1398988);
   VbbHcc_both_H_dR_stack_2->SetBinError(28,0.2890648);
   VbbHcc_both_H_dR_stack_2->SetEntries(15109);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_stack_3 = new TH1D("VbbHcc_both_H_dR_stack_3","",30,0,6);
   VbbHcc_both_H_dR_stack_3->SetBinContent(2,0.7494376);
   VbbHcc_both_H_dR_stack_3->SetBinContent(3,795.0002);
   VbbHcc_both_H_dR_stack_3->SetBinContent(4,1273.521);
   VbbHcc_both_H_dR_stack_3->SetBinContent(5,1416.767);
   VbbHcc_both_H_dR_stack_3->SetBinContent(6,1579.596);
   VbbHcc_both_H_dR_stack_3->SetBinContent(7,1639.013);
   VbbHcc_both_H_dR_stack_3->SetBinContent(8,1652.243);
   VbbHcc_both_H_dR_stack_3->SetBinContent(9,1692.251);
   VbbHcc_both_H_dR_stack_3->SetBinContent(10,1804.953);
   VbbHcc_both_H_dR_stack_3->SetBinContent(11,1964.361);
   VbbHcc_both_H_dR_stack_3->SetBinContent(12,2163.458);
   VbbHcc_both_H_dR_stack_3->SetBinContent(13,2368.591);
   VbbHcc_both_H_dR_stack_3->SetBinContent(14,2593.301);
   VbbHcc_both_H_dR_stack_3->SetBinContent(15,2785.698);
   VbbHcc_both_H_dR_stack_3->SetBinContent(16,2753.241);
   VbbHcc_both_H_dR_stack_3->SetBinContent(17,1592.845);
   VbbHcc_both_H_dR_stack_3->SetBinContent(18,988.1171);
   VbbHcc_both_H_dR_stack_3->SetBinContent(19,628.0411);
   VbbHcc_both_H_dR_stack_3->SetBinContent(20,408.0131);
   VbbHcc_both_H_dR_stack_3->SetBinContent(21,254.5784);
   VbbHcc_both_H_dR_stack_3->SetBinContent(22,160.8311);
   VbbHcc_both_H_dR_stack_3->SetBinContent(23,87.23746);
   VbbHcc_both_H_dR_stack_3->SetBinContent(24,51.04392);
   VbbHcc_both_H_dR_stack_3->SetBinContent(25,21.5502);
   VbbHcc_both_H_dR_stack_3->SetBinContent(26,8.6113);
   VbbHcc_both_H_dR_stack_3->SetBinContent(27,4.129571);
   VbbHcc_both_H_dR_stack_3->SetBinContent(28,0.7629309);
   VbbHcc_both_H_dR_stack_3->SetBinError(2,0.2509171);
   VbbHcc_both_H_dR_stack_3->SetBinError(3,9.484337);
   VbbHcc_both_H_dR_stack_3->SetBinError(4,11.43229);
   VbbHcc_both_H_dR_stack_3->SetBinError(5,11.44804);
   VbbHcc_both_H_dR_stack_3->SetBinError(6,12.57107);
   VbbHcc_both_H_dR_stack_3->SetBinError(7,13.8299);
   VbbHcc_both_H_dR_stack_3->SetBinError(8,12.33705);
   VbbHcc_both_H_dR_stack_3->SetBinError(9,12.43154);
   VbbHcc_both_H_dR_stack_3->SetBinError(10,13.9968);
   VbbHcc_both_H_dR_stack_3->SetBinError(11,13.38424);
   VbbHcc_both_H_dR_stack_3->SetBinError(12,14.67482);
   VbbHcc_both_H_dR_stack_3->SetBinError(13,15.16857);
   VbbHcc_both_H_dR_stack_3->SetBinError(14,15.81118);
   VbbHcc_both_H_dR_stack_3->SetBinError(15,16.18034);
   VbbHcc_both_H_dR_stack_3->SetBinError(16,16.51385);
   VbbHcc_both_H_dR_stack_3->SetBinError(17,12.36319);
   VbbHcc_both_H_dR_stack_3->SetBinError(18,10.65993);
   VbbHcc_both_H_dR_stack_3->SetBinError(19,7.617144);
   VbbHcc_both_H_dR_stack_3->SetBinError(20,6.226488);
   VbbHcc_both_H_dR_stack_3->SetBinError(21,4.776302);
   VbbHcc_both_H_dR_stack_3->SetBinError(22,5.207449);
   VbbHcc_both_H_dR_stack_3->SetBinError(23,2.918533);
   VbbHcc_both_H_dR_stack_3->SetBinError(24,2.154582);
   VbbHcc_both_H_dR_stack_3->SetBinError(25,1.439019);
   VbbHcc_both_H_dR_stack_3->SetBinError(26,0.8618569);
   VbbHcc_both_H_dR_stack_3->SetBinError(27,0.6657832);
   VbbHcc_both_H_dR_stack_3->SetBinError(28,0.2429302);
   VbbHcc_both_H_dR_stack_3->SetEntries(383737);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_stack_4 = new TH1D("VbbHcc_both_H_dR_stack_4","",30,0,6);
   VbbHcc_both_H_dR_stack_4->SetBinContent(3,184.6304);
   VbbHcc_both_H_dR_stack_4->SetBinContent(4,263.2321);
   VbbHcc_both_H_dR_stack_4->SetBinContent(5,221.4859);
   VbbHcc_both_H_dR_stack_4->SetBinContent(6,211.3483);
   VbbHcc_both_H_dR_stack_4->SetBinContent(7,159.1806);
   VbbHcc_both_H_dR_stack_4->SetBinContent(8,161.6794);
   VbbHcc_both_H_dR_stack_4->SetBinContent(9,163.1454);
   VbbHcc_both_H_dR_stack_4->SetBinContent(10,184.0246);
   VbbHcc_both_H_dR_stack_4->SetBinContent(11,203.8604);
   VbbHcc_both_H_dR_stack_4->SetBinContent(12,234.7665);
   VbbHcc_both_H_dR_stack_4->SetBinContent(13,300.3185);
   VbbHcc_both_H_dR_stack_4->SetBinContent(14,313.4305);
   VbbHcc_both_H_dR_stack_4->SetBinContent(15,364.3957);
   VbbHcc_both_H_dR_stack_4->SetBinContent(16,407.0441);
   VbbHcc_both_H_dR_stack_4->SetBinContent(17,200.0028);
   VbbHcc_both_H_dR_stack_4->SetBinContent(18,116.2684);
   VbbHcc_both_H_dR_stack_4->SetBinContent(19,79.40444);
   VbbHcc_both_H_dR_stack_4->SetBinContent(20,49.56723);
   VbbHcc_both_H_dR_stack_4->SetBinContent(21,27.60067);
   VbbHcc_both_H_dR_stack_4->SetBinContent(22,14.76201);
   VbbHcc_both_H_dR_stack_4->SetBinContent(23,9.020957);
   VbbHcc_both_H_dR_stack_4->SetBinContent(24,4.672971);
   VbbHcc_both_H_dR_stack_4->SetBinContent(25,1.770647);
   VbbHcc_both_H_dR_stack_4->SetBinContent(26,0.911328);
   VbbHcc_both_H_dR_stack_4->SetBinContent(27,0.4220774);
   VbbHcc_both_H_dR_stack_4->SetBinContent(28,0.1842317);
   VbbHcc_both_H_dR_stack_4->SetBinError(3,8.213949);
   VbbHcc_both_H_dR_stack_4->SetBinError(4,13.04826);
   VbbHcc_both_H_dR_stack_4->SetBinError(5,11.70244);
   VbbHcc_both_H_dR_stack_4->SetBinError(6,13.38668);
   VbbHcc_both_H_dR_stack_4->SetBinError(7,8.820769);
   VbbHcc_both_H_dR_stack_4->SetBinError(8,8.758377);
   VbbHcc_both_H_dR_stack_4->SetBinError(9,8.768323);
   VbbHcc_both_H_dR_stack_4->SetBinError(10,9.940974);
   VbbHcc_both_H_dR_stack_4->SetBinError(11,9.789706);
   VbbHcc_both_H_dR_stack_4->SetBinError(12,13.33949);
   VbbHcc_both_H_dR_stack_4->SetBinError(13,17.23168);
   VbbHcc_both_H_dR_stack_4->SetBinError(14,14.03066);
   VbbHcc_both_H_dR_stack_4->SetBinError(15,15.9921);
   VbbHcc_both_H_dR_stack_4->SetBinError(16,19.71398);
   VbbHcc_both_H_dR_stack_4->SetBinError(17,13.309);
   VbbHcc_both_H_dR_stack_4->SetBinError(18,8.827409);
   VbbHcc_both_H_dR_stack_4->SetBinError(19,6.88693);
   VbbHcc_both_H_dR_stack_4->SetBinError(20,4.354777);
   VbbHcc_both_H_dR_stack_4->SetBinError(21,3.489421);
   VbbHcc_both_H_dR_stack_4->SetBinError(22,2.06933);
   VbbHcc_both_H_dR_stack_4->SetBinError(23,1.537271);
   VbbHcc_both_H_dR_stack_4->SetBinError(24,1.281022);
   VbbHcc_both_H_dR_stack_4->SetBinError(25,0.6757242);
   VbbHcc_both_H_dR_stack_4->SetBinError(26,0.4941977);
   VbbHcc_both_H_dR_stack_4->SetBinError(27,0.2515067);
   VbbHcc_both_H_dR_stack_4->SetBinError(28,0.1842317);
   VbbHcc_both_H_dR_stack_4->SetEntries(19219);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_stack_5 = new TH1D("VbbHcc_both_H_dR_stack_5","",30,0,6);
   VbbHcc_both_H_dR_stack_5->SetBinContent(3,17.84767);
   VbbHcc_both_H_dR_stack_5->SetBinContent(4,18.80882);
   VbbHcc_both_H_dR_stack_5->SetBinContent(5,21.99689);
   VbbHcc_both_H_dR_stack_5->SetBinContent(6,16.40459);
   VbbHcc_both_H_dR_stack_5->SetBinContent(7,18.20985);
   VbbHcc_both_H_dR_stack_5->SetBinContent(8,18.0176);
   VbbHcc_both_H_dR_stack_5->SetBinContent(9,21.20032);
   VbbHcc_both_H_dR_stack_5->SetBinContent(10,18.95205);
   VbbHcc_both_H_dR_stack_5->SetBinContent(11,25.62585);
   VbbHcc_both_H_dR_stack_5->SetBinContent(12,27.63824);
   VbbHcc_both_H_dR_stack_5->SetBinContent(13,24.73661);
   VbbHcc_both_H_dR_stack_5->SetBinContent(14,33.27416);
   VbbHcc_both_H_dR_stack_5->SetBinContent(15,26.1818);
   VbbHcc_both_H_dR_stack_5->SetBinContent(16,33.58023);
   VbbHcc_both_H_dR_stack_5->SetBinContent(17,18.92516);
   VbbHcc_both_H_dR_stack_5->SetBinContent(18,8.205179);
   VbbHcc_both_H_dR_stack_5->SetBinContent(19,12.16209);
   VbbHcc_both_H_dR_stack_5->SetBinContent(20,7.546274);
   VbbHcc_both_H_dR_stack_5->SetBinContent(21,3.612827);
   VbbHcc_both_H_dR_stack_5->SetBinContent(22,1.62836);
   VbbHcc_both_H_dR_stack_5->SetBinContent(23,3.665802);
   VbbHcc_both_H_dR_stack_5->SetBinContent(24,0.4686198);
   VbbHcc_both_H_dR_stack_5->SetBinContent(25,2.5194);
   VbbHcc_both_H_dR_stack_5->SetBinContent(26,3.039206);
   VbbHcc_both_H_dR_stack_5->SetBinContent(27,0.2445201);
   VbbHcc_both_H_dR_stack_5->SetBinContent(28,0.5559845);
   VbbHcc_both_H_dR_stack_5->SetBinError(3,2.955746);
   VbbHcc_both_H_dR_stack_5->SetBinError(4,3.874206);
   VbbHcc_both_H_dR_stack_5->SetBinError(5,9.513929);
   VbbHcc_both_H_dR_stack_5->SetBinError(6,3.498308);
   VbbHcc_both_H_dR_stack_5->SetBinError(7,3.350363);
   VbbHcc_both_H_dR_stack_5->SetBinError(8,3.588486);
   VbbHcc_both_H_dR_stack_5->SetBinError(9,4.477925);
   VbbHcc_both_H_dR_stack_5->SetBinError(10,3.910135);
   VbbHcc_both_H_dR_stack_5->SetBinError(11,4.792123);
   VbbHcc_both_H_dR_stack_5->SetBinError(12,5.009657);
   VbbHcc_both_H_dR_stack_5->SetBinError(13,4.512482);
   VbbHcc_both_H_dR_stack_5->SetBinError(14,6.014678);
   VbbHcc_both_H_dR_stack_5->SetBinError(15,3.353652);
   VbbHcc_both_H_dR_stack_5->SetBinError(16,5.013281);
   VbbHcc_both_H_dR_stack_5->SetBinError(17,3.358077);
   VbbHcc_both_H_dR_stack_5->SetBinError(18,1.201564);
   VbbHcc_both_H_dR_stack_5->SetBinError(19,3.635661);
   VbbHcc_both_H_dR_stack_5->SetBinError(20,3.331446);
   VbbHcc_both_H_dR_stack_5->SetBinError(21,0.819593);
   VbbHcc_both_H_dR_stack_5->SetBinError(22,0.4821453);
   VbbHcc_both_H_dR_stack_5->SetBinError(23,2.341649);
   VbbHcc_both_H_dR_stack_5->SetBinError(24,0.3374625);
   VbbHcc_both_H_dR_stack_5->SetBinError(25,2.203134);
   VbbHcc_both_H_dR_stack_5->SetBinError(26,3.039206);
   VbbHcc_both_H_dR_stack_5->SetBinError(27,0.2445201);
   VbbHcc_both_H_dR_stack_5->SetBinError(28,0.5559845);
   VbbHcc_both_H_dR_stack_5->SetEntries(2591);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_stack_6 = new TH1D("VbbHcc_both_H_dR_stack_6","",30,0,6);
   VbbHcc_both_H_dR_stack_6->SetBinContent(4,0.5029805);
   VbbHcc_both_H_dR_stack_6->SetBinContent(6,0.4921557);
   VbbHcc_both_H_dR_stack_6->SetBinContent(9,0.2493026);
   VbbHcc_both_H_dR_stack_6->SetBinContent(15,0.6599753);
   VbbHcc_both_H_dR_stack_6->SetBinContent(16,0.3743199);
   VbbHcc_both_H_dR_stack_6->SetBinError(4,0.5029805);
   VbbHcc_both_H_dR_stack_6->SetBinError(6,0.4921557);
   VbbHcc_both_H_dR_stack_6->SetBinError(9,0.2493026);
   VbbHcc_both_H_dR_stack_6->SetBinError(15,0.6599753);
   VbbHcc_both_H_dR_stack_6->SetBinError(16,0.3743199);
   VbbHcc_both_H_dR_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_stack_7 = new TH1D("VbbHcc_both_H_dR_stack_7","",30,0,6);
   VbbHcc_both_H_dR_stack_7->SetBinContent(3,0.753614);
   VbbHcc_both_H_dR_stack_7->SetBinContent(4,2.400267);
   VbbHcc_both_H_dR_stack_7->SetBinContent(5,2.258391);
   VbbHcc_both_H_dR_stack_7->SetBinContent(7,1.027309);
   VbbHcc_both_H_dR_stack_7->SetBinContent(9,0.6194923);
   VbbHcc_both_H_dR_stack_7->SetBinContent(10,0.5144501);
   VbbHcc_both_H_dR_stack_7->SetBinContent(11,1.389715);
   VbbHcc_both_H_dR_stack_7->SetBinContent(12,0.5144501);
   VbbHcc_both_H_dR_stack_7->SetBinContent(13,0.4019721);
   VbbHcc_both_H_dR_stack_7->SetBinContent(14,1.878301);
   VbbHcc_both_H_dR_stack_7->SetBinContent(15,1.514291);
   VbbHcc_both_H_dR_stack_7->SetBinContent(16,0.4786962);
   VbbHcc_both_H_dR_stack_7->SetBinContent(17,0.6750199);
   VbbHcc_both_H_dR_stack_7->SetBinContent(19,0.3805224);
   VbbHcc_both_H_dR_stack_7->SetBinError(3,0.5329115);
   VbbHcc_both_H_dR_stack_7->SetBinError(4,1.078162);
   VbbHcc_both_H_dR_stack_7->SetBinError(5,1.027283);
   VbbHcc_both_H_dR_stack_7->SetBinError(7,0.5998066);
   VbbHcc_both_H_dR_stack_7->SetBinError(9,0.5211516);
   VbbHcc_both_H_dR_stack_7->SetBinError(10,0.5144501);
   VbbHcc_both_H_dR_stack_7->SetBinError(11,0.8094488);
   VbbHcc_both_H_dR_stack_7->SetBinError(12,0.5144501);
   VbbHcc_both_H_dR_stack_7->SetBinError(13,0.4019721);
   VbbHcc_both_H_dR_stack_7->SetBinError(14,1.173197);
   VbbHcc_both_H_dR_stack_7->SetBinError(15,0.7663233);
   VbbHcc_both_H_dR_stack_7->SetBinError(16,0.4786962);
   VbbHcc_both_H_dR_stack_7->SetBinError(17,0.6750199);
   VbbHcc_both_H_dR_stack_7->SetBinError(19,0.3805224);
   VbbHcc_both_H_dR_stack_7->SetEntries(33);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_stack_8 = new TH1D("VbbHcc_both_H_dR_stack_8","",30,0,6);
   VbbHcc_both_H_dR_stack_8->SetBinContent(3,7.586486);
   VbbHcc_both_H_dR_stack_8->SetBinContent(4,9.405665);
   VbbHcc_both_H_dR_stack_8->SetBinContent(5,9.195686);
   VbbHcc_both_H_dR_stack_8->SetBinContent(6,2.730323);
   VbbHcc_both_H_dR_stack_8->SetBinContent(7,1.45997);
   VbbHcc_both_H_dR_stack_8->SetBinContent(8,2.574224);
   VbbHcc_both_H_dR_stack_8->SetBinContent(9,1.920641);
   VbbHcc_both_H_dR_stack_8->SetBinContent(10,2.940722);
   VbbHcc_both_H_dR_stack_8->SetBinContent(11,4.106456);
   VbbHcc_both_H_dR_stack_8->SetBinContent(12,4.194775);
   VbbHcc_both_H_dR_stack_8->SetBinContent(13,3.128945);
   VbbHcc_both_H_dR_stack_8->SetBinContent(14,3.699037);
   VbbHcc_both_H_dR_stack_8->SetBinContent(15,7.202937);
   VbbHcc_both_H_dR_stack_8->SetBinContent(16,7.003343);
   VbbHcc_both_H_dR_stack_8->SetBinContent(17,2.676263);
   VbbHcc_both_H_dR_stack_8->SetBinContent(18,2.381264);
   VbbHcc_both_H_dR_stack_8->SetBinContent(19,0.7260518);
   VbbHcc_both_H_dR_stack_8->SetBinContent(23,0.3010719);
   VbbHcc_both_H_dR_stack_8->SetBinError(3,1.562072);
   VbbHcc_both_H_dR_stack_8->SetBinError(4,1.758614);
   VbbHcc_both_H_dR_stack_8->SetBinError(5,1.765476);
   VbbHcc_both_H_dR_stack_8->SetBinError(6,0.9175467);
   VbbHcc_both_H_dR_stack_8->SetBinError(7,0.692426);
   VbbHcc_both_H_dR_stack_8->SetBinError(8,0.8974122);
   VbbHcc_both_H_dR_stack_8->SetBinError(9,0.7935502);
   VbbHcc_both_H_dR_stack_8->SetBinError(10,0.9632968);
   VbbHcc_both_H_dR_stack_8->SetBinError(11,1.253349);
   VbbHcc_both_H_dR_stack_8->SetBinError(12,1.200303);
   VbbHcc_both_H_dR_stack_8->SetBinError(13,0.9581537);
   VbbHcc_both_H_dR_stack_8->SetBinError(14,1.122274);
   VbbHcc_both_H_dR_stack_8->SetBinError(15,1.548186);
   VbbHcc_both_H_dR_stack_8->SetBinError(16,1.542964);
   VbbHcc_both_H_dR_stack_8->SetBinError(17,0.9049776);
   VbbHcc_both_H_dR_stack_8->SetBinError(18,0.9096537);
   VbbHcc_both_H_dR_stack_8->SetBinError(19,0.4262175);
   VbbHcc_both_H_dR_stack_8->SetBinError(23,0.3010719);
   VbbHcc_both_H_dR_stack_8->SetEntries(232);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_stack_9 = new TH1D("VbbHcc_both_H_dR_stack_9","",30,0,6);
   VbbHcc_both_H_dR_stack_9->SetBinContent(2,0.005339897);
   VbbHcc_both_H_dR_stack_9->SetBinContent(3,4.376868);
   VbbHcc_both_H_dR_stack_9->SetBinContent(4,8.366137);
   VbbHcc_both_H_dR_stack_9->SetBinContent(5,7.939232);
   VbbHcc_both_H_dR_stack_9->SetBinContent(6,6.321078);
   VbbHcc_both_H_dR_stack_9->SetBinContent(7,3.909067);
   VbbHcc_both_H_dR_stack_9->SetBinContent(8,2.316904);
   VbbHcc_both_H_dR_stack_9->SetBinContent(9,1.768012);
   VbbHcc_both_H_dR_stack_9->SetBinContent(10,1.753773);
   VbbHcc_both_H_dR_stack_9->SetBinContent(11,2.133798);
   VbbHcc_both_H_dR_stack_9->SetBinContent(12,3.04485);
   VbbHcc_both_H_dR_stack_9->SetBinContent(13,4.189054);
   VbbHcc_both_H_dR_stack_9->SetBinContent(14,5.965435);
   VbbHcc_both_H_dR_stack_9->SetBinContent(15,6.964108);
   VbbHcc_both_H_dR_stack_9->SetBinContent(16,7.322305);
   VbbHcc_both_H_dR_stack_9->SetBinContent(17,2.460391);
   VbbHcc_both_H_dR_stack_9->SetBinContent(18,1.047276);
   VbbHcc_both_H_dR_stack_9->SetBinContent(19,0.3463484);
   VbbHcc_both_H_dR_stack_9->SetBinContent(20,0.1661263);
   VbbHcc_both_H_dR_stack_9->SetBinContent(21,0.1246501);
   VbbHcc_both_H_dR_stack_9->SetBinContent(22,0.06364261);
   VbbHcc_both_H_dR_stack_9->SetBinContent(23,0.01912426);
   VbbHcc_both_H_dR_stack_9->SetBinContent(24,0.0410372);
   VbbHcc_both_H_dR_stack_9->SetBinContent(25,0.00893986);
   VbbHcc_both_H_dR_stack_9->SetBinContent(26,0.002431021);
   VbbHcc_both_H_dR_stack_9->SetBinContent(27,0.003691633);
   VbbHcc_both_H_dR_stack_9->SetBinContent(28,0.002510097);
   VbbHcc_both_H_dR_stack_9->SetBinError(2,0.003799859);
   VbbHcc_both_H_dR_stack_9->SetBinError(3,0.1170828);
   VbbHcc_both_H_dR_stack_9->SetBinError(4,0.1588394);
   VbbHcc_both_H_dR_stack_9->SetBinError(5,0.1533263);
   VbbHcc_both_H_dR_stack_9->SetBinError(6,0.134244);
   VbbHcc_both_H_dR_stack_9->SetBinError(7,0.1239945);
   VbbHcc_both_H_dR_stack_9->SetBinError(8,0.09546041);
   VbbHcc_both_H_dR_stack_9->SetBinError(9,0.07140145);
   VbbHcc_both_H_dR_stack_9->SetBinError(10,0.07136035);
   VbbHcc_both_H_dR_stack_9->SetBinError(11,0.0774952);
   VbbHcc_both_H_dR_stack_9->SetBinError(12,0.09689408);
   VbbHcc_both_H_dR_stack_9->SetBinError(13,0.1133619);
   VbbHcc_both_H_dR_stack_9->SetBinError(14,0.138719);
   VbbHcc_both_H_dR_stack_9->SetBinError(15,0.1486263);
   VbbHcc_both_H_dR_stack_9->SetBinError(16,0.1502477);
   VbbHcc_both_H_dR_stack_9->SetBinError(17,0.08798765);
   VbbHcc_both_H_dR_stack_9->SetBinError(18,0.1174518);
   VbbHcc_both_H_dR_stack_9->SetBinError(19,0.03088181);
   VbbHcc_both_H_dR_stack_9->SetBinError(20,0.02161717);
   VbbHcc_both_H_dR_stack_9->SetBinError(21,0.01904668);
   VbbHcc_both_H_dR_stack_9->SetBinError(22,0.01326729);
   VbbHcc_both_H_dR_stack_9->SetBinError(23,0.006767527);
   VbbHcc_both_H_dR_stack_9->SetBinError(24,0.01415235);
   VbbHcc_both_H_dR_stack_9->SetBinError(25,0.006855524);
   VbbHcc_both_H_dR_stack_9->SetBinError(26,0.002431021);
   VbbHcc_both_H_dR_stack_9->SetBinError(27,0.002738431);
   VbbHcc_both_H_dR_stack_9->SetBinError(28,0.002510097);
   VbbHcc_both_H_dR_stack_9->SetEntries(27714);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_stack_10 = new TH1D("VbbHcc_both_H_dR_stack_10","",30,0,6);
   VbbHcc_both_H_dR_stack_10->SetBinContent(2,0.0007180886);
   VbbHcc_both_H_dR_stack_10->SetBinContent(3,1.235844);
   VbbHcc_both_H_dR_stack_10->SetBinContent(4,2.655527);
   VbbHcc_both_H_dR_stack_10->SetBinContent(5,3.191871);
   VbbHcc_both_H_dR_stack_10->SetBinContent(6,3.143988);
   VbbHcc_both_H_dR_stack_10->SetBinContent(7,2.477543);
   VbbHcc_both_H_dR_stack_10->SetBinContent(8,1.829067);
   VbbHcc_both_H_dR_stack_10->SetBinContent(9,1.37606);
   VbbHcc_both_H_dR_stack_10->SetBinContent(10,1.229768);
   VbbHcc_both_H_dR_stack_10->SetBinContent(11,1.372631);
   VbbHcc_both_H_dR_stack_10->SetBinContent(12,1.702038);
   VbbHcc_both_H_dR_stack_10->SetBinContent(13,2.026901);
   VbbHcc_both_H_dR_stack_10->SetBinContent(14,2.360688);
   VbbHcc_both_H_dR_stack_10->SetBinContent(15,2.662648);
   VbbHcc_both_H_dR_stack_10->SetBinContent(16,2.573275);
   VbbHcc_both_H_dR_stack_10->SetBinContent(17,1.050618);
   VbbHcc_both_H_dR_stack_10->SetBinContent(18,0.4643691);
   VbbHcc_both_H_dR_stack_10->SetBinContent(19,0.220326);
   VbbHcc_both_H_dR_stack_10->SetBinContent(20,0.1174188);
   VbbHcc_both_H_dR_stack_10->SetBinContent(21,0.07044509);
   VbbHcc_both_H_dR_stack_10->SetBinContent(22,0.03262811);
   VbbHcc_both_H_dR_stack_10->SetBinContent(23,0.01464053);
   VbbHcc_both_H_dR_stack_10->SetBinContent(24,0.01090145);
   VbbHcc_both_H_dR_stack_10->SetBinContent(25,0.004408577);
   VbbHcc_both_H_dR_stack_10->SetBinContent(26,0.001249231);
   VbbHcc_both_H_dR_stack_10->SetBinContent(27,0.0005988188);
   VbbHcc_both_H_dR_stack_10->SetBinError(2,0.0007180886);
   VbbHcc_both_H_dR_stack_10->SetBinError(3,0.02814595);
   VbbHcc_both_H_dR_stack_10->SetBinError(4,0.04134995);
   VbbHcc_both_H_dR_stack_10->SetBinError(5,0.04532571);
   VbbHcc_both_H_dR_stack_10->SetBinError(6,0.04509177);
   VbbHcc_both_H_dR_stack_10->SetBinError(7,0.03998857);
   VbbHcc_both_H_dR_stack_10->SetBinError(8,0.03440116);
   VbbHcc_both_H_dR_stack_10->SetBinError(9,0.02978809);
   VbbHcc_both_H_dR_stack_10->SetBinError(10,0.02812721);
   VbbHcc_both_H_dR_stack_10->SetBinError(11,0.029723);
   VbbHcc_both_H_dR_stack_10->SetBinError(12,0.03312226);
   VbbHcc_both_H_dR_stack_10->SetBinError(13,0.036209);
   VbbHcc_both_H_dR_stack_10->SetBinError(14,0.03899807);
   VbbHcc_both_H_dR_stack_10->SetBinError(15,0.04147575);
   VbbHcc_both_H_dR_stack_10->SetBinError(16,0.04074413);
   VbbHcc_both_H_dR_stack_10->SetBinError(17,0.02602798);
   VbbHcc_both_H_dR_stack_10->SetBinError(18,0.01728529);
   VbbHcc_both_H_dR_stack_10->SetBinError(19,0.01186244);
   VbbHcc_both_H_dR_stack_10->SetBinError(20,0.008634563);
   VbbHcc_both_H_dR_stack_10->SetBinError(21,0.00669031);
   VbbHcc_both_H_dR_stack_10->SetBinError(22,0.004540628);
   VbbHcc_both_H_dR_stack_10->SetBinError(23,0.003013721);
   VbbHcc_both_H_dR_stack_10->SetBinError(24,0.002602202);
   VbbHcc_both_H_dR_stack_10->SetBinError(25,0.001672293);
   VbbHcc_both_H_dR_stack_10->SetBinError(26,0.0008833744);
   VbbHcc_both_H_dR_stack_10->SetBinError(27,0.0005988188);
   VbbHcc_both_H_dR_stack_10->SetEntries(50073);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_stack_11 = new TH1D("VbbHcc_both_H_dR_stack_11","",30,0,6);
   VbbHcc_both_H_dR_stack_11->SetBinContent(3,0.01717296);
   VbbHcc_both_H_dR_stack_11->SetBinContent(4,0.01237217);
   VbbHcc_both_H_dR_stack_11->SetBinContent(5,0.0317836);
   VbbHcc_both_H_dR_stack_11->SetBinContent(6,0.01971219);
   VbbHcc_both_H_dR_stack_11->SetBinContent(7,0.01341314);
   VbbHcc_both_H_dR_stack_11->SetBinContent(8,0.007746397);
   VbbHcc_both_H_dR_stack_11->SetBinContent(9,0.02323055);
   VbbHcc_both_H_dR_stack_11->SetBinContent(10,0.01160406);
   VbbHcc_both_H_dR_stack_11->SetBinContent(11,0.01384943);
   VbbHcc_both_H_dR_stack_11->SetBinContent(12,0.005717142);
   VbbHcc_both_H_dR_stack_11->SetBinContent(13,0.002811088);
   VbbHcc_both_H_dR_stack_11->SetBinContent(14,0.01023855);
   VbbHcc_both_H_dR_stack_11->SetBinContent(15,0.008868068);
   VbbHcc_both_H_dR_stack_11->SetBinContent(16,0.005558708);
   VbbHcc_both_H_dR_stack_11->SetBinContent(17,0.008457936);
   VbbHcc_both_H_dR_stack_11->SetBinContent(19,0.001999389);
   VbbHcc_both_H_dR_stack_11->SetBinError(3,0.007092572);
   VbbHcc_both_H_dR_stack_11->SetBinError(4,0.006268267);
   VbbHcc_both_H_dR_stack_11->SetBinError(5,0.00966364);
   VbbHcc_both_H_dR_stack_11->SetBinError(6,0.008117162);
   VbbHcc_both_H_dR_stack_11->SetBinError(7,0.006763034);
   VbbHcc_both_H_dR_stack_11->SetBinError(8,0.004793915);
   VbbHcc_both_H_dR_stack_11->SetBinError(9,0.008249322);
   VbbHcc_both_H_dR_stack_11->SetBinError(10,0.005759392);
   VbbHcc_both_H_dR_stack_11->SetBinError(11,0.006197704);
   VbbHcc_both_H_dR_stack_11->SetBinError(12,0.004042812);
   VbbHcc_both_H_dR_stack_11->SetBinError(13,0.002811088);
   VbbHcc_both_H_dR_stack_11->SetBinError(14,0.005231492);
   VbbHcc_both_H_dR_stack_11->SetBinError(15,0.004613822);
   VbbHcc_both_H_dR_stack_11->SetBinError(16,0.003941056);
   VbbHcc_both_H_dR_stack_11->SetBinError(17,0.004885269);
   VbbHcc_both_H_dR_stack_11->SetBinError(19,0.001999389);
   VbbHcc_both_H_dR_stack_11->SetEntries(69);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_stack_12 = new TH1D("VbbHcc_both_H_dR_stack_12","",30,0,6);
   VbbHcc_both_H_dR_stack_12->SetBinContent(3,0.003950752);
   VbbHcc_both_H_dR_stack_12->SetBinContent(4,0.007509086);
   VbbHcc_both_H_dR_stack_12->SetBinContent(5,0.01026815);
   VbbHcc_both_H_dR_stack_12->SetBinContent(6,0.01299157);
   VbbHcc_both_H_dR_stack_12->SetBinContent(7,0.01046182);
   VbbHcc_both_H_dR_stack_12->SetBinContent(8,0.005432679);
   VbbHcc_both_H_dR_stack_12->SetBinContent(9,0.01060813);
   VbbHcc_both_H_dR_stack_12->SetBinContent(10,0.005780339);
   VbbHcc_both_H_dR_stack_12->SetBinContent(11,0.007750518);
   VbbHcc_both_H_dR_stack_12->SetBinContent(12,0.005091946);
   VbbHcc_both_H_dR_stack_12->SetBinContent(13,0.007317777);
   VbbHcc_both_H_dR_stack_12->SetBinContent(14,0.004217009);
   VbbHcc_both_H_dR_stack_12->SetBinContent(15,0.005408253);
   VbbHcc_both_H_dR_stack_12->SetBinContent(16,0.005839202);
   VbbHcc_both_H_dR_stack_12->SetBinContent(17,0.002614873);
   VbbHcc_both_H_dR_stack_12->SetBinContent(18,0.001948279);
   VbbHcc_both_H_dR_stack_12->SetBinContent(19,0.00103893);
   VbbHcc_both_H_dR_stack_12->SetBinContent(20,0.001434769);
   VbbHcc_both_H_dR_stack_12->SetBinContent(21,0.0003895316);
   VbbHcc_both_H_dR_stack_12->SetBinContent(22,0.0006438532);
   VbbHcc_both_H_dR_stack_12->SetBinContent(23,0.0001447381);
   VbbHcc_both_H_dR_stack_12->SetBinError(3,0.001191736);
   VbbHcc_both_H_dR_stack_12->SetBinError(4,0.001649047);
   VbbHcc_both_H_dR_stack_12->SetBinError(5,0.001899612);
   VbbHcc_both_H_dR_stack_12->SetBinError(6,0.002180377);
   VbbHcc_both_H_dR_stack_12->SetBinError(7,0.001939992);
   VbbHcc_both_H_dR_stack_12->SetBinError(8,0.001429563);
   VbbHcc_both_H_dR_stack_12->SetBinError(9,0.001964521);
   VbbHcc_both_H_dR_stack_12->SetBinError(10,0.001371189);
   VbbHcc_both_H_dR_stack_12->SetBinError(11,0.001642962);
   VbbHcc_both_H_dR_stack_12->SetBinError(12,0.001259618);
   VbbHcc_both_H_dR_stack_12->SetBinError(13,0.001631395);
   VbbHcc_both_H_dR_stack_12->SetBinError(14,0.001180229);
   VbbHcc_both_H_dR_stack_12->SetBinError(15,0.001358622);
   VbbHcc_both_H_dR_stack_12->SetBinError(16,0.001364598);
   VbbHcc_both_H_dR_stack_12->SetBinError(17,0.0009679032);
   VbbHcc_both_H_dR_stack_12->SetBinError(18,0.000805975);
   VbbHcc_both_H_dR_stack_12->SetBinError(19,0.0006107792);
   VbbHcc_both_H_dR_stack_12->SetBinError(20,0.0007291297);
   VbbHcc_both_H_dR_stack_12->SetBinError(21,0.0003895316);
   VbbHcc_both_H_dR_stack_12->SetBinError(22,0.000455273);
   VbbHcc_both_H_dR_stack_12->SetBinError(23,0.0001447381);
   VbbHcc_both_H_dR_stack_12->SetEntries(330);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR__590 = new TH1D("VbbHcc_both_H_dR__590","",30,0,6);
   VbbHcc_both_H_dR__590->SetBinContent(2,9);
   VbbHcc_both_H_dR__590->SetBinContent(3,14733);
   VbbHcc_both_H_dR__590->SetBinContent(4,16688);
   VbbHcc_both_H_dR__590->SetBinContent(5,13741);
   VbbHcc_both_H_dR__590->SetBinContent(6,13933);
   VbbHcc_both_H_dR__590->SetBinContent(7,13781);
   VbbHcc_both_H_dR__590->SetBinContent(8,14267);
   VbbHcc_both_H_dR__590->SetBinContent(9,15072);
   VbbHcc_both_H_dR__590->SetBinContent(10,16359);
   VbbHcc_both_H_dR__590->SetBinContent(11,18057);
   VbbHcc_both_H_dR__590->SetBinContent(12,20801);
   VbbHcc_both_H_dR__590->SetBinContent(13,23438);
   VbbHcc_both_H_dR__590->SetBinContent(14,26856);
   VbbHcc_both_H_dR__590->SetBinContent(15,29480);
   VbbHcc_both_H_dR__590->SetBinContent(16,30720);
   VbbHcc_both_H_dR__590->SetBinContent(17,19014);
   VbbHcc_both_H_dR__590->SetBinContent(18,12910);
   VbbHcc_both_H_dR__590->SetBinContent(19,9009);
   VbbHcc_both_H_dR__590->SetBinContent(20,6338);
   VbbHcc_both_H_dR__590->SetBinContent(21,4155);
   VbbHcc_both_H_dR__590->SetBinContent(22,2748);
   VbbHcc_both_H_dR__590->SetBinContent(23,1727);
   VbbHcc_both_H_dR__590->SetBinContent(24,1004);
   VbbHcc_both_H_dR__590->SetBinContent(25,548);
   VbbHcc_both_H_dR__590->SetBinContent(26,262);
   VbbHcc_both_H_dR__590->SetBinContent(27,97);
   VbbHcc_both_H_dR__590->SetBinContent(28,19);
   VbbHcc_both_H_dR__590->SetBinContent(29,1);
   VbbHcc_both_H_dR__590->SetEntries(325796);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR__590->SetLineColor(ci);
   VbbHcc_both_H_dR__590->SetLineWidth(2);
   VbbHcc_both_H_dR__590->SetMarkerStyle(20);
   VbbHcc_both_H_dR__590->SetMarkerSize(1.2);
   VbbHcc_both_H_dR__590->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR__590->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__590->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__590->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__590->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__590->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__590->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__590->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__590->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR__590->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__590->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__590->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__590->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__590->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__590->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_fx1429[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_fy1429[30] = {
   0,
   11.63385,
   15779.64,
   15030.93,
   10719.82,
   15649.1,
   10296.33,
   13967.44,
   14971.64,
   14878.85,
   14952.9,
   16092,
   18180.89,
   23950.01,
   25326.49,
   27624.07,
   15550.18,
   11511.66,
   7789.346,
   4568.511,
   1683.232,
   1334.485,
   1224.231,
   645.7149,
   154.2107,
   25.84595,
   5.101644,
   1.794722,
   0,
   0};
   Double_t Graph_from_VbbHcc_both_H_dR_fex1429[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_fey1429[30] = {
   0,
   10.88125,
   1764.732,
   1691.334,
   1254.558,
   2719.94,
   1237.105,
   1724.988,
   2448.558,
   2443.247,
   1657.937,
   1687.593,
   1758.873,
   2165.704,
   2504.116,
   2312.098,
   1796.703,
   1600.857,
   1387.697,
   811.6136,
   184.3416,
   245.5193,
   430.611,
   406.2231,
   42.08188,
   8.966891,
   0.7654361,
   0.6968787,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_fx1429,Graph_from_VbbHcc_both_H_dR_fy1429,Graph_from_VbbHcc_both_H_dR_fex1429,Graph_from_VbbHcc_both_H_dR_fey1429);
   gre->SetName("Graph_from_VbbHcc_both_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR1429 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR1429","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR1429->SetMinimum(32.92979);
   Graph_Graph_from_VbbHcc_both_H_dR1429->SetMaximum(32929.79);
   Graph_Graph_from_VbbHcc_both_H_dR1429->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR1429->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR1429->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR1429);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR","MC unc. (stat.)","fl");

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
   H_dR_both_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9499975,-0.2774193,6.525,1.658065);
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
   
   TH1D *data_mc_ratio__591 = new TH1D("data_mc_ratio__591","",30,0,6);
   data_mc_ratio__591->SetBinContent(2,0.7736047);
   data_mc_ratio__591->SetBinContent(3,0.9336715);
   data_mc_ratio__591->SetBinContent(4,1.110244);
   data_mc_ratio__591->SetBinContent(5,1.281831);
   data_mc_ratio__591->SetBinContent(6,0.8903389);
   data_mc_ratio__591->SetBinContent(7,1.338437);
   data_mc_ratio__591->SetBinContent(8,1.021447);
   data_mc_ratio__591->SetBinContent(9,1.006703);
   data_mc_ratio__591->SetBinContent(10,1.09948);
   data_mc_ratio__591->SetBinContent(11,1.207592);
   data_mc_ratio__591->SetBinContent(12,1.29263);
   data_mc_ratio__591->SetBinContent(13,1.289155);
   data_mc_ratio__591->SetBinContent(14,1.121336);
   data_mc_ratio__591->SetBinContent(15,1.163999);
   data_mc_ratio__591->SetBinContent(16,1.112073);
   data_mc_ratio__591->SetBinContent(17,1.222751);
   data_mc_ratio__591->SetBinContent(18,1.121471);
   data_mc_ratio__591->SetBinContent(19,1.15658);
   data_mc_ratio__591->SetBinContent(20,1.387323);
   data_mc_ratio__591->SetBinContent(21,2.468466);
   data_mc_ratio__591->SetBinContent(22,2.059221);
   data_mc_ratio__591->SetBinContent(23,1.410681);
   data_mc_ratio__591->SetBinContent(24,1.554866);
   data_mc_ratio__591->SetBinContent(25,3.553579);
   data_mc_ratio__591->SetBinContent(26,10.13699);
   data_mc_ratio__591->SetBinContent(27,19.01348);
   data_mc_ratio__591->SetBinContent(28,10.5866);
   data_mc_ratio__591->SetBinError(2,0.2578682);
   data_mc_ratio__591->SetBinError(3,0.007692163);
   data_mc_ratio__591->SetBinError(4,0.008594414);
   data_mc_ratio__591->SetBinError(5,0.01093507);
   data_mc_ratio__591->SetBinError(6,0.007542807);
   data_mc_ratio__591->SetBinError(7,0.01140139);
   data_mc_ratio__591->SetBinError(8,0.008551641);
   data_mc_ratio__591->SetBinError(9,0.008200041);
   data_mc_ratio__591->SetBinError(10,0.008596252);
   data_mc_ratio__591->SetBinError(11,0.008986638);
   data_mc_ratio__591->SetBinError(12,0.008962561);
   data_mc_ratio__591->SetBinError(13,0.008420638);
   data_mc_ratio__591->SetBinError(14,0.006842503);
   data_mc_ratio__591->SetBinError(15,0.006779362);
   data_mc_ratio__591->SetBinError(16,0.006344872);
   data_mc_ratio__591->SetBinError(17,0.008867504);
   data_mc_ratio__591->SetBinError(18,0.009870181);
   data_mc_ratio__591->SetBinError(19,0.01218533);
   data_mc_ratio__591->SetBinError(20,0.01742615);
   data_mc_ratio__591->SetBinError(21,0.03829495);
   data_mc_ratio__591->SetBinError(22,0.03928209);
   data_mc_ratio__591->SetBinError(23,0.03394554);
   data_mc_ratio__591->SetBinError(24,0.04907113);
   data_mc_ratio__591->SetBinError(25,0.1518014);
   data_mc_ratio__591->SetBinError(26,0.6262651);
   data_mc_ratio__591->SetBinError(27,1.930526);
   data_mc_ratio__591->SetBinError(28,2.428732);
   data_mc_ratio__591->SetMinimum(0.4);
   data_mc_ratio__591->SetMaximum(1.6);
   data_mc_ratio__591->SetEntries(102.9214);
   data_mc_ratio__591->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__591->SetLineColor(ci);
   data_mc_ratio__591->SetLineWidth(2);
   data_mc_ratio__591->SetMarkerStyle(20);
   data_mc_ratio__591->SetMarkerSize(1.2);
   data_mc_ratio__591->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__591->GetXaxis()->SetRange(1,31);
   data_mc_ratio__591->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__591->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__591->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__591->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__591->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__591->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__591->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__591->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__591->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__591->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__591->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__591->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__591->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__591->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__591->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__591->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__591->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1430[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1430[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1430[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1430[30] = {
   0,
   0.9353093,
   0.111836,
   0.1125236,
   0.1170317,
   0.1738081,
   0.12015,
   0.1235007,
   0.1635464,
   0.1642095,
   0.1108773,
   0.1048715,
   0.09674291,
   0.09042602,
   0.0988734,
   0.08369865,
   0.1155423,
   0.1390639,
   0.1781532,
   0.1776539,
   0.1095165,
   0.1839805,
   0.3517399,
   0.629106,
   0.2728856,
   0.3469361,
   0.1500372,
   0.3882934,
   0,
   0};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1430,Graph_from_mc_statistical_error_fy1430,Graph_from_mc_statistical_error_fex1430,Graph_from_mc_statistical_error_fey1430);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1430 = new TH1F("Graph_Graph_from_mc_statistical_error1430","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1430->SetMinimum(0.0582216);
   Graph_Graph_from_mc_statistical_error1430->SetMaximum(2.122371);
   Graph_Graph_from_mc_statistical_error1430->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1430->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1430->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1430->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1430->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1430->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1430->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1430->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1430->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1430->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1430->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1430->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1430->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1430->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1430->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1430->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1430);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_both_18->cd();
   H_dR_both_18->Modified();
   H_dR_both_18->cd();
   H_dR_both_18->SetSelected(H_dR_both_18);
}
