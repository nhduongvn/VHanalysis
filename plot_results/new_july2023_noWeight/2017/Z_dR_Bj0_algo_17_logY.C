void Z_dR_Bj0_algo_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_17/Z_dR_Bj0_algo_17
//=========  (Thu Aug 10 12:32:13 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_algo_17 = new TCanvas("Z_dR_Bj0_algo_17", "Z_dR_Bj0_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_algo_17->SetHighLightColor(2);
   Z_dR_Bj0_algo_17->Range(0,0,1,1);
   Z_dR_Bj0_algo_17->SetFillColor(0);
   Z_dR_Bj0_algo_17->SetFillStyle(4000);
   Z_dR_Bj0_algo_17->SetBorderMode(0);
   Z_dR_Bj0_algo_17->SetBorderSize(2);
   Z_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.930781,6.314516,14.72803);
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
   st->SetMaximum(2.36537e+12);
   
   TH1F *st_stack_146 = new TH1F("st_stack_146","",30,0,6);
   st_stack_146->SetMinimum(0.001221456);
   st_stack_146->SetMaximum(9.165288e+12);
   st_stack_146->SetDirectory(0);
   st_stack_146->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_146->SetLineColor(ci);
   st_stack_146->GetXaxis()->SetRange(1,30);
   st_stack_146->GetXaxis()->SetLabelFont(42);
   st_stack_146->GetXaxis()->SetLabelSize(0.035);
   st_stack_146->GetXaxis()->SetTitleSize(0.035);
   st_stack_146->GetXaxis()->SetTitleFont(42);
   st_stack_146->GetYaxis()->SetTitle("Events/0.2");
   st_stack_146->GetYaxis()->SetLabelFont(42);
   st_stack_146->GetYaxis()->SetLabelSize(0.05);
   st_stack_146->GetYaxis()->SetTitleSize(0.057);
   st_stack_146->GetYaxis()->SetTitleOffset(1.2);
   st_stack_146->GetYaxis()->SetTitleFont(42);
   st_stack_146->GetZaxis()->SetLabelFont(42);
   st_stack_146->GetZaxis()->SetLabelSize(0.035);
   st_stack_146->GetZaxis()->SetTitleSize(0.035);
   st_stack_146->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_146);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,92756.86);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,321753.6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,292822.5);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,219456);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,147764.8);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,86659.23);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,84126.3);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,56483.45);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,44604.41);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,45872.16);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,32278.17);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,35651.34);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(13,20762.2);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(14,17607.16);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(15,16005.94);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(16,12697.87);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(17,11138.47);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(18,5757.673);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(19,6982.407);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(20,6909.247);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(21,2882.172);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(22,2575.288);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(23,2645.843);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(24,836.1704);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(25,492.1252);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(26,121.4595);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(27,65.63304);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(28,78.71952);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(29,98.07362);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(30,0.2153231);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(31,189.0814);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,2375.159);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,16222.23);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,7191.516);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,6385.16);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,15574.58);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,3754.876);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,15191.51);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,3306.324);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,3156.859);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,15006.71);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,2819.569);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,14918.99);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(13,1874.463);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(14,2024.738);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(15,1680.104);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(16,1472.263);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(17,1414.908);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(18,875.211);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(19,1122.889);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(20,1540.683);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(21,672.668);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(22,717.5954);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(23,1276.298);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(24,385.1313);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(25,274.7819);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(26,42.15867);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(27,33.37696);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(28,34.7341);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(29,40.79241);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(30,0.2153231);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(31,60.35237);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(116866);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,424.1519);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,2199.471);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,2423.827);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,1748.046);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,1113.927);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,745.9843);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,510.3014);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,392.0644);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,318.3934);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,243.5428);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,208.6699);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,180.5892);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,153.9535);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,127.15);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,122.4842);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,108.0738);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(17,91.34935);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(18,77.92875);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(19,65.47038);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(20,43.00842);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(21,24.17802);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(22,13.86337);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(23,8.913692);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(24,6.47043);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(25,2.279523);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(26,3.213435);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(27,1.908451);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(28,1.925125);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(29,0.7962023);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(30,1.119408);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(31,2.429666);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,8.142077);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,17.92567);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,18.69894);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,15.95441);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,12.63608);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,10.43847);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,8.583607);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,7.47249);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,6.826651);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,5.848344);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,5.448013);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,5.06657);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,4.69647);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,4.155746);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,4.260383);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,3.91994);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(17,3.554236);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(18,3.394498);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(19,3.181751);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(20,2.526479);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(21,1.807608);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(22,1.322559);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(23,1.081918);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(24,0.9371342);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(25,0.4732026);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(26,0.7026903);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(27,0.4552329);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(28,0.5653202);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(29,0.3087198);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(30,0.4725854);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(31,0.5874442);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(147618);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_3 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(1,6827.19);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(2,43282.8);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(3,44735.71);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(4,28492.16);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(5,16930.89);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(6,10856.4);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(7,7549.636);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(8,5717.869);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(9,4517.66);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(10,3694.594);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(11,3128.418);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(12,2664.84);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(13,2357.361);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(14,2062.021);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(15,1848.526);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(16,1653.348);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(17,1438.336);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(18,1239.108);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(19,979.6863);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(20,659.9193);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(21,368.6015);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(22,172.7868);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(23,86.75343);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(24,46.15887);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(25,31.22699);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(26,19.92023);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(27,14.53832);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(28,10.21349);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(29,7.788422);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(30,3.813334);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(31,12.77233);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(1,20.8771);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(2,52.34303);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(3,52.88462);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(4,41.96524);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(5,32.26798);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(6,25.80021);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(7,21.49816);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(8,18.68821);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(9,16.61223);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(10,14.9969);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(11,13.81612);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(12,12.75788);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(13,12.00402);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(14,11.22971);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(15,10.66944);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(16,10.11501);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(17,9.432343);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(18,8.776704);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(19,7.816456);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(20,6.403175);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(21,4.771686);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(22,3.24686);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(23,2.270232);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(24,1.645736);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(25,1.350725);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(26,1.072458);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(27,0.9308412);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(28,0.7678502);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(29,0.6718138);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(30,0.4634701);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(31,0.8580751);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetEntries(3230340);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_4 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(1,509.0279);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(2,1994.818);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(3,1805.087);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(4,1200.363);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(5,779.7172);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(6,491.2332);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(7,371.1695);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(8,295.3099);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(9,225.2493);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(10,183.3953);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(11,138.9503);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(12,130.1576);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(13,100.4208);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(14,94.91093);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(15,74.76789);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(16,78.8613);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(17,57.50038);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(18,51.02622);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(19,33.14681);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(20,18.95529);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(21,12.82133);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(22,6.804764);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(23,5.114993);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(24,4.244383);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(25,0.9435652);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(26,2.51839);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(27,1.734392);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(28,2.968454);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(29,0.4995153);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(31,1.517789);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(1,10.3489);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(2,28.1247);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(3,34.74813);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(4,27.98849);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(5,22.32656);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(6,16.67538);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(7,16.07057);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(8,14.64667);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(9,11.4132);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(10,8.915917);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(11,7.827309);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(12,8.91092);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(13,6.709649);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(14,7.113748);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(15,5.653165);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(16,8.587518);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(17,6.436869);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(18,5.808028);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(19,3.887993);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(20,2.118379);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(21,1.790348);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(22,1.347528);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(23,1.104157);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(24,1.016206);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(25,0.421524);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(26,0.8808085);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(27,0.6649517);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(28,2.731293);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(29,0.2265254);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(31,0.6470722);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetEntries(52708);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_5 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(1,234.7475);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(2,710.6014);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(3,516.4755);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(4,410.8294);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(5,259.4231);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(6,172.3118);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(7,124.2);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(8,109.44);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(9,72.84426);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(10,64.96189);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(11,44.56734);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(12,37.11889);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(13,29.40759);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(14,49.2416);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(15,24.52152);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(16,16.90596);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(17,15.05589);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(18,16.0532);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(19,10.99684);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(20,8.878242);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(21,1.933408);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(22,1.642331);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(23,1.759114);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(24,0.8848356);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(25,1.514829);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(26,1.503215);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(28,1.209343);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(29,0.2212586);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(31,0.3478083);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(1,8.329864);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(2,30.70328);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(3,23.35188);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(4,27.01946);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(5,20.11339);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(6,15.05137);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(7,12.69984);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(8,15.06091);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(9,9.313548);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(10,8.951061);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(11,5.239939);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(12,4.558232);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(13,4.255046);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(14,13.74809);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(15,3.968239);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(16,3.328005);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(17,3.073713);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(18,3.377171);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(19,2.782247);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(20,2.721984);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(21,0.4883448);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(22,0.4670103);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(23,0.6314709);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(24,0.3221588);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(25,1.183369);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(26,1.183312);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(28,1.165312);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(29,0.1819876);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(31,0.2141063);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetEntries(17207);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_6 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(1,2.522447);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(2,7.567341);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(3,4.414282);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(4,3.783671);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(5,1.261224);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(6,0.9459177);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(7,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(8,0.6306118);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(9,1.576529);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(10,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(11,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(12,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(13,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(14,0.6306118);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(17,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(18,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(19,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(24,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(1,0.8918197);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(2,1.544677);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(3,1.179767);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(4,1.092252);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(5,0.6306118);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(6,0.5461258);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(7,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(8,0.4459099);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(9,0.7050454);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(10,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(11,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(12,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(13,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(14,0.4459099);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(17,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(18,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(19,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(24,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetEntries(83);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_7 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(1,5.70267);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(2,21.57097);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(3,13.14094);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(4,8.430034);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(5,3.471191);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(6,3.223248);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(7,2.975306);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(8,1.735595);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(9,2.727364);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(10,1.487653);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(11,0.9917687);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(12,0.4958844);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(13,0.7438266);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(14,0.9917687);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(15,1.487653);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(16,0.7438266);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(17,0.4958844);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(18,0.4958844);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(20,0.4958844);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(22,0.2479422);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(25,0.2479422);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(1,1.189089);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(2,2.312651);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(3,1.805046);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(4,1.445739);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(5,0.9277147);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(6,0.8939683);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(7,0.8588969);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(8,0.6559934);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(9,0.8223312);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(10,0.6073318);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(11,0.4958844);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(12,0.3506432);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(13,0.4294485);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(14,0.4958844);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(15,0.6073318);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(16,0.4294485);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(17,0.3506432);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(18,0.3506432);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(20,0.3506432);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(22,0.2479422);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(25,0.2479422);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetEntries(290);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_8 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(1,8.609671);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(2,35.19836);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(3,24.81611);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(4,10.63548);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(5,9.875799);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(6,3.291933);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(7,4.05161);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(8,3.038707);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(9,2.27903);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(10,2.025805);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(11,1.012902);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(12,2.025805);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(13,0.2532256);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(14,1.266128);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(15,1.519354);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(16,0.7596768);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(17,0.5064512);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(18,0.2532256);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(21,0.7596768);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(1,1.476546);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(2,2.985486);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(3,2.506806);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(4,1.64109);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(5,1.581393);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(6,0.9130179);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(7,1.012902);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(8,0.8771992);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(9,0.7596768);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(10,0.7162302);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(11,0.5064512);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(12,0.7162302);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(13,0.2532256);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(14,0.5662297);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(15,0.6202735);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(16,0.4385996);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(17,0.3581151);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(18,0.2532256);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(21,0.4385996);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetEntries(443);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_9 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(1,5.930709);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(2,27.36977);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(3,16.66639);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(4,8.09012);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(5,4.519097);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(6,3.162399);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(7,2.374222);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(8,2.083501);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(9,1.713639);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(10,1.392231);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(11,1.169345);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(12,0.870548);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(13,0.7639503);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(14,0.7542596);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(15,0.6428165);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(16,0.4780746);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(17,0.3973188);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(18,0.3537106);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(19,0.3246385);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(20,0.1970443);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(21,0.1130582);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(22,0.05814421);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(23,0.01615117);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(24,0.01130582);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(25,0.006460468);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(26,0.008075584);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(30,0.001615117);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(31,0.004845351);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(1,0.09787129);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(2,0.2102508);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(3,0.1640676);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(4,0.1143087);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(5,0.08543342);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(6,0.07146778);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(7,0.06192452);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(8,0.05800946);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(9,0.05260919);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(10,0.04741957);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(11,0.04345835);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(12,0.03749716);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(13,0.03512647);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(14,0.03490297);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(15,0.03222148);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(16,0.02778752);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(17,0.02533212);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(18,0.02390155);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(19,0.02289823);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(20,0.01783955);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(21,0.01351304);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(22,0.009690701);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(23,0.005107448);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(24,0.004273198);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(25,0.003230234);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(26,0.003611511);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(30,0.001615117);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(31,0.002797464);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetEntries(49206);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_10 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(1,1.881985);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(2,11.75837);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(3,10.68241);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(4,6.265406);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(5,3.658241);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(6,2.394462);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(7,1.779158);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(8,1.448702);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(9,1.210292);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(10,0.9366391);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(11,0.7633256);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(12,0.6530352);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(13,0.577988);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(14,0.5141357);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(15,0.4967214);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(16,0.4038453);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(17,0.3354321);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(18,0.2728236);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(19,0.2010934);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(20,0.1500944);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(21,0.09702238);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(22,0.04146255);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(23,0.02031665);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(24,0.01492652);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(25,0.00373163);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(26,0.007048634);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(27,0.002902379);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(28,0.004146255);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(29,0.001658502);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(30,0.002902379);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(31,0.00373163);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(1,0.02793419);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(2,0.06982348);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(3,0.06655224);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(4,0.05096859);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(5,0.03894612);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(6,0.03150881);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(7,0.02716035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(8,0.02450854);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(9,0.02240129);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(10,0.01970671);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(11,0.01779029);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(12,0.01645494);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(13,0.01548059);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(14,0.01460047);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(15,0.01435108);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(16,0.01294004);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(17,0.01179316);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(18,0.01063577);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(19,0.00913118);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(20,0.007888789);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(21,0.006342551);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(22,0.004146255);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(23,0.002902379);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(24,0.002487753);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(25,0.001243877);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(26,0.001709545);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(27,0.001096996);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(28,0.001311161);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(29,0.0008292511);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(30,0.001096996);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(31,0.001243877);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetEntries(112352);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_11 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(1,0.06162979);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(2,0.1975314);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(3,0.1311608);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(4,0.0679508);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(5,0.02844452);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(6,0.03476553);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(7,0.02054326);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(8,0.01422226);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(9,0.02212352);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(10,0.01896301);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(11,0.007901256);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(12,0.01106176);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(13,0.004740753);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(14,0.006321005);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(15,0.006321005);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(17,0.009481507);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(19,0.003160502);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(20,0.003160502);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(21,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(23,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(1,0.009868665);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(2,0.01766774);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(3,0.01439677);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(4,0.0103624);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(5,0.006704438);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(6,0.007412035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(7,0.005697677);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(8,0.004740753);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(9,0.005912758);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(10,0.005474151);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(11,0.003533549);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(12,0.004180952);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(13,0.002737075);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(14,0.003160502);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(15,0.003160502);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(17,0.003870809);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(19,0.002234813);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(20,0.002234813);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(21,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(23,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetEntries(413);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_12 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(1,0.01162592);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(2,0.07556846);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(3,0.06581099);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(4,0.04193634);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(5,0.02055296);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(6,0.0184769);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(7,0.01287155);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(8,0.01058789);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(9,0.008096621);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(10,0.009342254);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(11,0.004152113);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(12,0.004152113);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(13,0.004359719);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(14,0.002491268);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(15,0.002283662);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(16,0.003529296);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(17,0.002076057);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(18,0.001660845);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(19,0.00145324);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(20,0.000622817);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(21,0.0008304226);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(22,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(23,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(27,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(1,0.001553578);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(2,0.003960863);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(3,0.003696314);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(4,0.002950631);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(5,0.00206565);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(6,0.001958548);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(7,0.001634689);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(8,0.001482601);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(9,0.001296497);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(10,0.001392661);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(11,0.0009284407);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(12,0.0009284407);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(13,0.0009513686);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(14,0.0007191671);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(15,0.0006885501);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(16,0.00085598);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(17,0.0006565067);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(18,0.0005871975);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(19,0.0005492729);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(20,0.0003595835);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(21,0.0004152113);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(22,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(23,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(27,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetEntries(1460);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0__400 = new TH1D("VbbHcc_algo_Z_dR_Bj0__400","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(1,16038);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(2,53161);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(3,48155);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(4,36430);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(5,24428);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(6,15949);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(7,11683);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(8,8781);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(9,7084);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(10,5959);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(11,4944);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(12,4275);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(13,3580);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(14,2971);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(15,2651);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(16,2303);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(17,1879);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(18,1500);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(19,1142);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(20,868);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(21,569);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(22,306);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(23,180);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(24,142);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(25,101);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(26,64);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(27,54);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(28,44);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(29,26);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(30,26);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(31,46);
   VbbHcc_algo_Z_dR_Bj0__400->SetEntries(255368);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0__400->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0__400->SetLineWidth(2);
   VbbHcc_algo_Z_dR_Bj0__400->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR_Bj0__400->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR_Bj0__400->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0__400->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__400->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__400->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__400->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__400->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__400->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__400->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__400->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0__400->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__400->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__400->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__400->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__400->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__400->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fx1291[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fy1291[30] = {
   100776.7,
   370045,
   342373.5,
   251344.7,
   166871.6,
   98938.24,
   92693.14,
   63007.1,
   49748.09,
   50064.83,
   35803.04,
   38668.43,
   23406.01,
   19944.65,
   18080.4,
   14557.45,
   12742.78,
   7143.482,
   8072.553,
   7640.855,
   3290.679,
   2770.733,
   2748.422,
   894.2704,
   528.3482,
   148.6299,
   83.81732,
   95.04007,
   107.3807,
   5.152582};
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fex1291[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fey1291[30] = {
   2375.303,
   16222.38,
   7191.858,
   6385.437,
   15574.65,
   3755.047,
   15191.55,
   3306.453,
   3156.945,
   15006.72,
   2819.624,
   14919,
   1874.524,
   2024.833,
   1680.157,
   1472.332,
   1414.962,
   875.2876,
   1122.931,
   1540.703,
   672.69,
   717.6054,
   1276.301,
   385.1375,
   274.7886,
   42.20395,
   33.39966,
   34.87384,
   40.80014,
   0.696067};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_Bj0_fx1291,Graph_from_VbbHcc_algo_Z_dR_Bj0_fy1291,Graph_from_VbbHcc_algo_Z_dR_Bj0_fex1291,Graph_from_VbbHcc_algo_Z_dR_Bj0_fey1291);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->SetMinimum(4.010864);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->SetMaximum(424893.7);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR_Bj0","MC unc. (stat.)","fl");

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
   Z_dR_Bj0_algo_17->cd();
  
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
   
   TH1D *data_mc_ratio__401 = new TH1D("data_mc_ratio__401","",30,0,6);
   data_mc_ratio__401->SetBinContent(1,0.1591439);
   data_mc_ratio__401->SetBinContent(2,0.1436609);
   data_mc_ratio__401->SetBinContent(3,0.1406505);
   data_mc_ratio__401->SetBinContent(4,0.1449404);
   data_mc_ratio__401->SetBinContent(5,0.146388);
   data_mc_ratio__401->SetBinContent(6,0.1612016);
   data_mc_ratio__401->SetBinContent(7,0.1260395);
   data_mc_ratio__401->SetBinContent(8,0.1393652);
   data_mc_ratio__401->SetBinContent(9,0.1423974);
   data_mc_ratio__401->SetBinContent(10,0.1190257);
   data_mc_ratio__401->SetBinContent(11,0.1380888);
   data_mc_ratio__401->SetBinContent(12,0.1105553);
   data_mc_ratio__401->SetBinContent(13,0.1529522);
   data_mc_ratio__401->SetBinContent(14,0.1489622);
   data_mc_ratio__401->SetBinContent(15,0.1466229);
   data_mc_ratio__401->SetBinContent(16,0.1582008);
   data_mc_ratio__401->SetBinContent(17,0.1474561);
   data_mc_ratio__401->SetBinContent(18,0.2099816);
   data_mc_ratio__401->SetBinContent(19,0.141467);
   data_mc_ratio__401->SetBinContent(20,0.1135999);
   data_mc_ratio__401->SetBinContent(21,0.1729127);
   data_mc_ratio__401->SetBinContent(22,0.1104401);
   data_mc_ratio__401->SetBinContent(23,0.06549212);
   data_mc_ratio__401->SetBinContent(24,0.1587887);
   data_mc_ratio__401->SetBinContent(25,0.1911618);
   data_mc_ratio__401->SetBinContent(26,0.4305997);
   data_mc_ratio__401->SetBinContent(27,0.6442583);
   data_mc_ratio__401->SetBinContent(28,0.4629626);
   data_mc_ratio__401->SetBinContent(29,0.2421292);
   data_mc_ratio__401->SetBinContent(30,5.046013);
   data_mc_ratio__401->SetBinContent(31,0.2231303);
   data_mc_ratio__401->SetBinError(1,0.001256652);
   data_mc_ratio__401->SetBinError(2,0.0006230774);
   data_mc_ratio__401->SetBinError(3,0.0006409446);
   data_mc_ratio__401->SetBinError(4,0.0007593813);
   data_mc_ratio__401->SetBinError(5,0.0009366158);
   data_mc_ratio__401->SetBinError(6,0.001276446);
   data_mc_ratio__401->SetBinError(7,0.001166083);
   data_mc_ratio__401->SetBinError(8,0.001487245);
   data_mc_ratio__401->SetBinError(9,0.001691854);
   data_mc_ratio__401->SetBinError(10,0.001541892);
   data_mc_ratio__401->SetBinError(11,0.0019639);
   data_mc_ratio__401->SetBinError(12,0.001690875);
   data_mc_ratio__401->SetBinError(13,0.002556314);
   data_mc_ratio__401->SetBinError(14,0.002732907);
   data_mc_ratio__401->SetBinError(15,0.002847718);
   data_mc_ratio__401->SetBinError(16,0.003296565);
   data_mc_ratio__401->SetBinError(17,0.003401726);
   data_mc_ratio__401->SetBinError(18,0.005421702);
   data_mc_ratio__401->SetBinError(19,0.004186221);
   data_mc_ratio__401->SetBinError(20,0.00385583);
   data_mc_ratio__401->SetBinError(21,0.007248876);
   data_mc_ratio__401->SetBinError(22,0.006313439);
   data_mc_ratio__401->SetBinError(23,0.004881495);
   data_mc_ratio__401->SetBinError(24,0.01332525);
   data_mc_ratio__401->SetBinError(25,0.01902131);
   data_mc_ratio__401->SetBinError(26,0.05382496);
   data_mc_ratio__401->SetBinError(27,0.08767244);
   data_mc_ratio__401->SetBinError(28,0.06979424);
   data_mc_ratio__401->SetBinError(29,0.04748545);
   data_mc_ratio__401->SetBinError(30,0.9896047);
   data_mc_ratio__401->SetBinError(31,0.07315042);
   data_mc_ratio__401->SetMinimum(0.4);
   data_mc_ratio__401->SetMaximum(1.6);
   data_mc_ratio__401->SetEntries(67.59184);
   data_mc_ratio__401->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__401->SetLineColor(ci);
   data_mc_ratio__401->SetLineWidth(2);
   data_mc_ratio__401->SetMarkerStyle(20);
   data_mc_ratio__401->SetMarkerSize(1.2);
   data_mc_ratio__401->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__401->GetXaxis()->SetRange(1,30);
   data_mc_ratio__401->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__401->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__401->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__401->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__401->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__401->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__401->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__401->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__401->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__401->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__401->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__401->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__401->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__401->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__401->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__401->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__401->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1292[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1292[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1292[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1292[30] = {
   0.02356996,
   0.04383894,
   0.02100588,
   0.0254051,
   0.0933331,
   0.03795344,
   0.1638907,
   0.05247746,
   0.06345861,
   0.2997457,
   0.07875374,
   0.3858186,
   0.08008729,
   0.1015226,
   0.09292702,
   0.1011394,
   0.1110404,
   0.1225295,
   0.1391048,
   0.2016401,
   0.2044229,
   0.2589948,
   0.4643759,
   0.4306724,
   0.5200899,
   0.2839532,
   0.3984816,
   0.3669382,
   0.3799579,
   0.1350909};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1292,Graph_from_mc_statistical_error_fy1292,Graph_from_mc_statistical_error_fex1292,Graph_from_mc_statistical_error_fey1292);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1292 = new TH1F("Graph_Graph_from_mc_statistical_error1292","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1292->SetMinimum(0.3758921);
   Graph_Graph_from_mc_statistical_error1292->SetMaximum(1.624108);
   Graph_Graph_from_mc_statistical_error1292->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1292->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1292->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1292->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1292->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1292->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1292->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1292->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1292->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1292->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1292->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1292->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1292->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1292->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1292->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1292->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1292);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_algo_17->cd();
   Z_dR_Bj0_algo_17->Modified();
   Z_dR_Bj0_algo_17->cd();
   Z_dR_Bj0_algo_17->SetSelected(Z_dR_Bj0_algo_17);
}
