void Z_dR_algo_18()
{
//=========Macro generated from canvas: Z_dR_algo_18/Z_dR_algo_18
//=========  (Thu Aug 10 12:28:22 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_algo_18 = new TCanvas("Z_dR_algo_18", "Z_dR_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_algo_18->SetHighLightColor(2);
   Z_dR_algo_18->Range(0,0,1,1);
   Z_dR_algo_18->SetFillColor(0);
   Z_dR_algo_18->SetFillStyle(4000);
   Z_dR_algo_18->SetBorderMode(0);
   Z_dR_algo_18->SetBorderSize(2);
   Z_dR_algo_18->SetFrameFillStyle(1000);
   Z_dR_algo_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-410.0153,6.314516,409615.3);
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
   st->SetMaximum(351059.7);
   
   TH1F *st_stack_115 = new TH1F("st_stack_115","",30,0,6);
   st_stack_115->SetMinimum(0.01);
   st_stack_115->SetMaximum(368612.7);
   st_stack_115->SetDirectory(0);
   st_stack_115->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_115->SetLineColor(ci);
   st_stack_115->GetXaxis()->SetRange(1,30);
   st_stack_115->GetXaxis()->SetLabelFont(42);
   st_stack_115->GetXaxis()->SetLabelSize(0.035);
   st_stack_115->GetXaxis()->SetTitleSize(0.035);
   st_stack_115->GetXaxis()->SetTitleFont(42);
   st_stack_115->GetYaxis()->SetTitle("Events/0.2");
   st_stack_115->GetYaxis()->SetLabelFont(42);
   st_stack_115->GetYaxis()->SetLabelSize(0.05);
   st_stack_115->GetYaxis()->SetTitleSize(0.057);
   st_stack_115->GetYaxis()->SetTitleOffset(1.2);
   st_stack_115->GetYaxis()->SetTitleFont(42);
   st_stack_115->GetZaxis()->SetLabelFont(42);
   st_stack_115->GetZaxis()->SetLabelSize(0.035);
   st_stack_115->GetZaxis()->SetTitleSize(0.035);
   st_stack_115->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_115);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(2,52.68733);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,112264.6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,135339);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,97634.28);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,96908.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,108792.7);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,98203.85);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,90488.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,94129);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,100137.8);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,84131.88);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,82614.29);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,77995.19);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,69999.07);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,71244.56);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,59875.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,50579.61);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,54119.27);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,38254.86);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(21,35997.7);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(22,32016.85);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(23,32436.11);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(24,30829.17);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(25,31666.38);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(26,47140.86);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(27,24945.22);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(28,20253.66);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(29,22207.51);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(30,14615.54);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(31,12649.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(2,19.86862);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,3871.881);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,4962.259);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,4185.824);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,4541.429);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,4552.542);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,4232.467);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,4183.671);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,4300.733);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,4933.714);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,4443.236);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,4154.291);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,3763.996);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,3895.819);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,3950.339);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,3645.968);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,3414.783);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,3630.431);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,2548.22);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(21,2484.755);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(22,2280.092);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(23,2392.931);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(24,2329.107);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(25,2519.649);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(26,20249.01);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(27,2594.216);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(28,2311.22);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(29,2959.208);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(30,1657.872);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(31,1392.579);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(114901);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(2,0.1033664);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,543.3322);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,898.0491);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,952.3618);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,924.9782);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,897.8695);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,805.782);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,782.8213);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,733.4124);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,681.94);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,622.1804);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,560.5064);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,526.3997);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,486.9287);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,450.9228);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,389.7455);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,344.0833);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,316.6142);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,278.5058);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,280.3325);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,259.8421);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,249.7901);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(24,238.9987);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(25,209.2331);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(26,201.9291);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(27,188.0133);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(28,159.1765);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(29,136.5737);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(30,97.01707);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(31,74.61224);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(2,0.07322099);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,9.463712);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,11.93969);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,12.19928);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,11.82353);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,11.89806);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,11.28068);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,11.30553);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,11.02295);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,10.68722);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,10.11456);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,9.415991);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,9.041231);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,8.683271);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,8.340322);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,7.79533);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,7.351596);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,7.107024);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,6.524064);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,6.720885);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,6.50973);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,6.383444);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(24,6.331855);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(25,5.703937);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(26,5.69898);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(27,5.430094);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(28,4.916236);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(29,4.483819);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(30,3.880249);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(31,3.248921);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(162879);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_3 = new TH1D("VbbHcc_algo_Z_dR_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(2,6.672392);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(3,10941);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(4,20337.49);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(5,23005.54);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(6,22223.06);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(7,18875.57);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(8,15397.96);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(9,12474.77);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(10,10431.48);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(11,8991.871);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(12,8073.442);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(13,7444.76);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(14,6975.408);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(15,6546.744);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(16,6083.446);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(17,5468.778);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(18,4964.533);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(19,4549.457);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(20,4236.919);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(21,3932.034);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(22,3723.854);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(23,3549.426);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(24,3500.489);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(25,3497.98);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(26,3516.942);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(27,3449.564);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(28,3132.484);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(29,2547.564);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(30,1562.732);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(31,1129.056);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(2,0.6444556);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(3,26.19494);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(4,35.78715);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(5,38.05176);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(6,37.30852);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(7,34.24878);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(8,30.79299);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(9,27.5652);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(10,25.10236);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(11,23.24083);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(12,21.98045);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(13,21.09354);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(14,20.40828);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(15,19.76263);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(16,19.05568);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(17,18.07959);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(18,17.2219);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(19,16.50792);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(20,15.95192);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(21,15.37929);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(22,14.9715);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(23,14.64895);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(24,14.58971);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(25,14.62424);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(26,14.70341);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(27,14.60674);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(28,13.93837);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(29,12.56959);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(30,9.826968);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(31,8.298139);
   VbbHcc_algo_Z_dR_stack_3->SetEntries(3891102);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_4 = new TH1D("VbbHcc_algo_Z_dR_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(2,0.6218485);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(3,726.0686);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(4,1062.439);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(5,951.7254);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(6,763.5551);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(7,623.4898);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(8,585.3325);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(9,568.3959);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(10,548.856);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(11,521.7381);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(12,461.5395);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(13,449.6705);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(14,426.8977);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(15,394.8464);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(16,360.64);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(17,307.5593);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(18,285.6453);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(19,270.3986);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(20,257.8344);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(21,219.7927);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(22,208.8299);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(23,194.2242);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(24,181.7329);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(25,154.2405);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(26,161.1442);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(27,157.262);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(28,139.203);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(29,128.6188);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(30,87.27012);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(31,69.6661);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(2,0.2567477);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(3,15.96404);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(4,22.70554);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(5,23.69932);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(6,23.86187);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(7,20.59677);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(8,17.7524);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(9,17.19726);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(10,18.3369);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(11,17.30626);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(12,14.3353);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(13,16.21061);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(14,15.95687);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(15,14.51877);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(16,16.57307);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(17,14.54116);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(18,12.68205);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(19,13.20532);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(20,14.10947);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(21,9.229398);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(22,11.80423);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(23,10.35474);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(24,10.79036);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(25,8.67154);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(26,12.99241);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(27,10.54396);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(28,8.698213);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(29,9.154541);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(30,6.402513);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(31,7.08948);
   VbbHcc_algo_Z_dR_stack_4->SetEntries(56536);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_5 = new TH1D("VbbHcc_algo_Z_dR_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(2,0.1265664);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(3,221.8857);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(4,274.527);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(5,216.7771);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(6,206.4296);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(7,208.0671);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(8,205.9529);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(9,201.1695);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(10,179.7525);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(11,164.3901);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(12,156.8187);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(13,133.8935);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(14,143.526);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(15,135.1365);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(16,148.9705);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(17,108.64);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(18,91.71997);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(19,93.03015);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(20,87.45748);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(21,64.69189);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(22,67.52639);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(23,66.53217);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(24,62.92097);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(25,57.44371);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(26,45.78019);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(27,37.64829);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(28,49.85497);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(29,49.94522);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(30,20.91643);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(31,16.49793);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(2,0.1265664);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(3,12.68406);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(4,16.9034);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(5,20.1217);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(6,19.6957);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(7,24.73088);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(8,24.33183);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(9,21.98573);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(10,23.82442);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(11,16.069);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(12,18.81701);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(13,17.51008);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(14,18.24081);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(15,15.54095);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(16,18.79055);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(17,14.45621);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(18,13.01423);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(19,13.94979);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(20,13.89827);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(21,7.766537);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(22,8.522024);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(23,8.514824);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(24,12.80974);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(25,12.29765);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(26,6.67293);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(27,6.229433);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(28,12.53627);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(29,12.3932);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(30,3.987184);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(31,2.715236);
   VbbHcc_algo_Z_dR_stack_5->SetEntries(15329);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_6 = new TH1D("VbbHcc_algo_Z_dR_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(3,2.712256);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(4,3.616341);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(5,3.164299);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(6,2.712256);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(7,1.356128);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(8,1.356128);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(9,2.712256);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(10,1.808171);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(11,1.356128);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(12,0.4520427);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(13,1.808171);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(14,1.356128);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(15,0.4520427);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(16,0.4520427);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(17,0.4520427);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(19,0.4520427);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(20,1.356128);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(21,1.356128);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(22,0.4520427);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(23,0.9040853);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(24,0.9040853);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(26,1.356128);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(28,0.9040853);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(29,0.4520427);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(30,0.4520427);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(31,0.4520427);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(3,1.107274);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(4,1.27857);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(5,1.195992);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(6,1.107274);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(7,0.7829609);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(8,0.7829609);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(9,1.107274);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(10,0.9040853);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(11,0.7829609);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(12,0.4520427);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(13,0.9040853);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(14,0.7829609);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(15,0.4520427);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(16,0.4520427);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(17,0.4520427);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(19,0.4520427);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(20,0.7829609);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(21,0.7829609);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(22,0.4520427);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(23,0.6392849);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(24,0.6392849);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(26,0.7829609);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(28,0.6392849);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(29,0.4520427);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(30,0.4520427);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(31,0.4520427);
   VbbHcc_algo_Z_dR_stack_6->SetEntries(77);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_7 = new TH1D("VbbHcc_algo_Z_dR_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(3,11.33437);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(4,12.39697);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(5,9.917575);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(6,3.187792);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(7,2.479394);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(8,2.833593);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(9,1.770996);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(10,1.770996);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(11,3.187792);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(12,2.479394);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(13,3.89619);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(14,2.833593);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(15,3.187792);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(16,3.89619);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(17,2.125195);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(18,1.062597);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(19,3.89619);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(20,1.770996);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(21,1.416796);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(22,0.3541991);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(23,0.7083982);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(24,1.416796);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(25,1.062597);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(26,0.7083982);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(27,2.479394);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(28,1.062597);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(29,2.125195);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(30,1.416796);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(31,0.7083982);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(3,2.003653);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(4,2.09547);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(5,1.874246);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(6,1.062597);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(7,0.9371228);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(8,1.001826);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(9,0.7920133);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(10,0.7920133);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(11,1.062597);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(12,0.9371228);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(13,1.174746);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(14,1.001826);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(15,1.062597);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(16,1.174746);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(17,0.8676071);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(18,0.6134909);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(19,1.174746);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(20,0.7920133);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(21,0.7083982);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(22,0.3541991);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(23,0.5009132);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(24,0.7083982);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(25,0.6134909);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(26,0.5009132);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(27,0.9371228);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(28,0.6134909);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(29,0.8676071);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(30,0.7083982);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(31,0.5009132);
   VbbHcc_algo_Z_dR_stack_7->SetEntries(247);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_8 = new TH1D("VbbHcc_algo_Z_dR_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(3,15.92662);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(4,23.75022);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(5,20.11783);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(6,11.45599);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(7,5.029458);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(8,6.42653);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(9,5.029458);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(10,3.632387);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(11,6.42653);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(12,5.308873);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(13,6.147116);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(14,6.42653);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(15,4.191215);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(16,4.750044);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(17,3.073558);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(18,3.073558);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(19,2.514729);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(20,2.235315);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(21,2.514729);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(22,1.676486);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(23,0.2794144);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(24,0.5588287);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(25,1.397072);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(26,2.235315);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(27,1.117657);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(28,2.235315);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(29,2.794144);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(30,0.5588287);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(31,0.8382431);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(3,2.109532);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(4,2.576073);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(5,2.370909);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(6,1.789125);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(7,1.185455);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(8,1.340024);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(9,1.185455);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(10,1.007443);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(11,1.340024);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(12,1.217939);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(13,1.310569);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(14,1.340024);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(15,1.082167);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(16,1.152055);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(17,0.9267126);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(18,0.9267126);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(19,0.8382431);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(20,0.7903031);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(21,0.8382431);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(22,0.6844226);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(23,0.2794144);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(24,0.3951516);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(25,0.6247895);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(26,0.7903031);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(27,0.5588287);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(28,0.7903031);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(29,0.8835858);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(30,0.3951516);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(31,0.4839599);
   VbbHcc_algo_Z_dR_stack_8->SetEntries(543);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_9 = new TH1D("VbbHcc_algo_Z_dR_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(2,0.002285779);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(3,11.2826);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(4,18.96053);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(5,16.1856);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(6,10.10086);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(7,5.735019);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(8,3.513242);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(9,2.873224);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(10,2.683504);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(11,2.795507);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(12,2.928082);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(13,2.845794);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(14,2.886938);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(15,2.733791);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(16,2.548643);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(17,2.272064);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(18,2.157775);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(19,1.997771);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(20,1.648046);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(21,1.506328);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(22,1.296036);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(23,0.9120257);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(24,0.8685959);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(25,0.836595);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(26,1.010314);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(27,1.371467);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(28,1.577187);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(29,1.666333);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(30,1.046887);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(31,0.5691589);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(2,0.002285779);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(3,0.1605912);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(4,0.2081816);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(5,0.1923453);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(6,0.1519484);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(7,0.1144945);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(8,0.08961302);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(9,0.08104044);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(10,0.0783192);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(11,0.07993692);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(12,0.08181044);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(13,0.08065269);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(14,0.08123363);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(15,0.07904962);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(16,0.07632584);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(17,0.07206549);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(18,0.0702296);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(19,0.0675756);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(20,0.06137646);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(21,0.05867821);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(22,0.05442842);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(23,0.04565839);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(24,0.04455803);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(25,0.04372952);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(26,0.04805574);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(27,0.05598991);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(28,0.06004249);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(29,0.06171602);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(30,0.0489178);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(31,0.03606898);
   VbbHcc_algo_Z_dR_stack_9->SetEntries(47604);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_10 = new TH1D("VbbHcc_algo_Z_dR_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(2,0.001788434);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(3,2.902032);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(4,6.454458);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(5,7.737361);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(6,7.194274);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(7,5.117306);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(8,3.612637);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(9,2.819168);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(10,2.534807);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(11,2.508577);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(12,2.425713);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(13,2.394117);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(14,2.187255);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(15,1.996488);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(16,1.817645);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(17,1.602437);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(18,1.480823);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(19,1.405709);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(20,1.304961);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(21,1.226866);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(22,1.090945);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(23,0.9770811);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(24,0.8679866);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(25,0.8763326);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(26,0.9186589);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(27,1.017023);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(28,0.9919847);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(29,0.7439885);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(30,0.4709543);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(31,0.2986685);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(2,0.001032553);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(3,0.04159364);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(4,0.06203056);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(5,0.06791603);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(6,0.06548914);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(7,0.05523273);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(8,0.04640748);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(9,0.04099551);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(10,0.03887302);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(11,0.03867137);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(12,0.0380273);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(13,0.03777883);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(14,0.03610983);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(15,0.03449922);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(16,0.03291777);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(17,0.03090767);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(18,0.0297117);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(19,0.02894833);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(20,0.02789167);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(21,0.02704421);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(22,0.02550217);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(23,0.02413466);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(24,0.02274743);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(25,0.02285653);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(26,0.023402);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(27,0.02462301);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(28,0.02431803);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(29,0.02106003);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(30,0.0167558);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(31,0.01334352);
   VbbHcc_algo_Z_dR_stack_10->SetEntries(112352);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_11 = new TH1D("VbbHcc_algo_Z_dR_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(3,0.08647895);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(4,0.152476);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(5,0.1024093);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(6,0.05461829);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(7,0.02503338);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(8,0.02275762);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(9,0.02730914);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(10,0.02503338);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(11,0.0182061);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(12,0.01365457);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(13,0.04551524);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(14,0.02730914);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(15,0.02503338);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(16,0.01137881);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(17,0.02048186);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(18,0.0295849);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(19,0.01593033);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(20,0.01593033);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(21,0.009103048);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(22,0.01365457);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(23,0.01137881);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(24,0.002275762);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(25,0.006827286);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(26,0.009103048);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(27,0.009103048);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(28,0.01137881);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(29,0.006827286);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(30,0.002275762);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(3,0.01402874);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(4,0.01862791);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(5,0.01526627);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(6,0.01114891);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(7,0.007547848);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(8,0.007196591);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(9,0.00788347);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(10,0.007547848);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(11,0.006436827);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(12,0.005574455);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(13,0.01017752);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(14,0.00788347);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(15,0.007547848);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(16,0.005088758);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(17,0.006827286);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(18,0.008205376);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(19,0.0060211);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(20,0.0060211);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(21,0.004551524);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(22,0.005574455);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(23,0.005088758);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(24,0.002275762);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(25,0.003941735);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(26,0.004551524);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(27,0.004551524);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(28,0.005088758);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(29,0.003941735);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(30,0.002275762);
   VbbHcc_algo_Z_dR_stack_11->SetEntries(352);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_12 = new TH1D("VbbHcc_algo_Z_dR_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(3,0.02187495);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(4,0.04794509);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(5,0.04434921);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(6,0.0332619);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(7,0.02487151);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(8,0.01738009);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(9,0.01468318);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(10,0.01438353);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(11,0.0152825);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(12,0.0131849);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(13,0.0131849);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(14,0.01258559);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(15,0.01168662);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(16,0.01048799);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(17,0.009589018);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(18,0.00839039);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(19,0.005094166);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(20,0.00839039);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(21,0.008989704);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(22,0.00749142);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(23,0.005993136);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(24,0.002397254);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(25,0.003895538);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(26,0.003895538);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(27,0.00659245);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(28,0.005393822);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(29,0.005693479);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(30,0.002097598);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(31,0.001498284);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(3,0.002560269);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(4,0.003790392);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(5,0.003645482);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(6,0.00315708);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(7,0.002730003);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(8,0.002282118);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(9,0.002097598);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(10,0.002076083);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(11,0.002139978);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(12,0.001987698);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(13,0.001987698);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(14,0.001941998);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(15,0.001871356);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(16,0.001772794);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(17,0.001695115);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(18,0.001585635);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(19,0.001235517);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(20,0.001585635);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(21,0.001641288);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(22,0.001498284);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(23,0.001340106);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(24,0.0008475574);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(25,0.001080428);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(26,0.001080428);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(27,0.001405515);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(28,0.001271336);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(29,0.001306174);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(30,0.0007928174);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(31,0.000670053);
   VbbHcc_algo_Z_dR_stack_12->SetEntries(1270);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR__315 = new TH1D("VbbHcc_algo_Z_dR__315","",30,0,6);
   VbbHcc_algo_Z_dR__315->SetBinContent(2,70);
   VbbHcc_algo_Z_dR__315->SetBinContent(3,111991);
   VbbHcc_algo_Z_dR__315->SetBinContent(4,151919);
   VbbHcc_algo_Z_dR__315->SetBinContent(5,133005);
   VbbHcc_algo_Z_dR__315->SetBinContent(6,126439);
   VbbHcc_algo_Z_dR__315->SetBinContent(7,121729);
   VbbHcc_algo_Z_dR__315->SetBinContent(8,118143);
   VbbHcc_algo_Z_dR__315->SetBinContent(9,115706);
   VbbHcc_algo_Z_dR__315->SetBinContent(10,111855);
   VbbHcc_algo_Z_dR__315->SetBinContent(11,107965);
   VbbHcc_algo_Z_dR__315->SetBinContent(12,102594);
   VbbHcc_algo_Z_dR__315->SetBinContent(13,97643);
   VbbHcc_algo_Z_dR__315->SetBinContent(14,92592);
   VbbHcc_algo_Z_dR__315->SetBinContent(15,87488);
   VbbHcc_algo_Z_dR__315->SetBinContent(16,82537);
   VbbHcc_algo_Z_dR__315->SetBinContent(17,70192);
   VbbHcc_algo_Z_dR__315->SetBinContent(18,62116);
   VbbHcc_algo_Z_dR__315->SetBinContent(19,56450);
   VbbHcc_algo_Z_dR__315->SetBinContent(20,51627);
   VbbHcc_algo_Z_dR__315->SetBinContent(21,47052);
   VbbHcc_algo_Z_dR__315->SetBinContent(22,43454);
   VbbHcc_algo_Z_dR__315->SetBinContent(23,39992);
   VbbHcc_algo_Z_dR__315->SetBinContent(24,37461);
   VbbHcc_algo_Z_dR__315->SetBinContent(25,34212);
   VbbHcc_algo_Z_dR__315->SetBinContent(26,31559);
   VbbHcc_algo_Z_dR__315->SetBinContent(27,28390);
   VbbHcc_algo_Z_dR__315->SetBinContent(28,25943);
   VbbHcc_algo_Z_dR__315->SetBinContent(29,23251);
   VbbHcc_algo_Z_dR__315->SetBinContent(30,16084);
   VbbHcc_algo_Z_dR__315->SetBinContent(31,14441);
   VbbHcc_algo_Z_dR__315->SetEntries(2143929);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR__315->SetLineColor(ci);
   VbbHcc_algo_Z_dR__315->SetLineWidth(2);
   VbbHcc_algo_Z_dR__315->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR__315->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR__315->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR__315->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__315->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__315->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__315->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__315->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__315->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__315->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__315->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR__315->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__315->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__315->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__315->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__315->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__315->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_fx1229[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_fy1229[30] = {
   0,
   60.21558,
   124741.1,
   157976.9,
   122818,
   121061.2,
   129417.5,
   115216.7,
   104530.7,
   106035,
   110514.1,
   93459.48,
   91220.27,
   86083.15,
   77575.32,
   78302.03,
   66159.58,
   56273.4,
   59359.06,
   43123.92,
   40502.59,
   36281.8,
   36499.88,
   34817.93,
   35589.46,
   51072.9,
   28783.71,
   23741.17,
   25078,
   16387.42};
   Double_t Graph_from_VbbHcc_algo_Z_dR_fex1229[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_fey1229[30] = {
   0,
   19.88127,
   3872.036,
   4962.485,
   4186.132,
   4541.704,
   4552.8,
   4232.701,
   4183.87,
   4300.926,
   4933.837,
   4443.365,
   4154.424,
   3764.141,
   3895.937,
   3950.473,
   3646.079,
   3414.883,
   3630.526,
   2548.356,
   2484.841,
   2280.197,
   2393.022,
   2329.221,
   2519.743,
   20249.02,
   2594.292,
   2311.318,
   2959.279,
   1657.923};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_fx1229,Graph_from_VbbHcc_algo_Z_dR_fy1229,Graph_from_VbbHcc_algo_Z_dR_fex1229,Graph_from_VbbHcc_algo_Z_dR_fey1229);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR1229 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR1229","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->SetMaximum(179233.3);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR1229);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR","MC unc. (stat.)","fl");

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
   Z_dR_algo_18->cd();
  
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
   
   TH1D *data_mc_ratio__316 = new TH1D("data_mc_ratio__316","",30,0,6);
   data_mc_ratio__316->SetBinContent(2,1.16249);
   data_mc_ratio__316->SetBinContent(3,0.8977874);
   data_mc_ratio__316->SetBinContent(4,0.9616533);
   data_mc_ratio__316->SetBinContent(5,1.082944);
   data_mc_ratio__316->SetBinContent(6,1.044422);
   data_mc_ratio__316->SetBinContent(7,0.9405916);
   data_mc_ratio__316->SetBinContent(8,1.025399);
   data_mc_ratio__316->SetBinContent(9,1.106909);
   data_mc_ratio__316->SetBinContent(10,1.054888);
   data_mc_ratio__316->SetBinContent(11,0.9769342);
   data_mc_ratio__316->SetBinContent(12,1.097738);
   data_mc_ratio__316->SetBinContent(13,1.070409);
   data_mc_ratio__316->SetBinContent(14,1.075611);
   data_mc_ratio__316->SetBinContent(15,1.127781);
   data_mc_ratio__316->SetBinContent(16,1.054085);
   data_mc_ratio__316->SetBinContent(17,1.06095);
   data_mc_ratio__316->SetBinContent(18,1.103825);
   data_mc_ratio__316->SetBinContent(19,0.9509922);
   data_mc_ratio__316->SetBinContent(20,1.197178);
   data_mc_ratio__316->SetBinContent(21,1.161703);
   data_mc_ratio__316->SetBinContent(22,1.197681);
   data_mc_ratio__316->SetBinContent(23,1.095675);
   data_mc_ratio__316->SetBinContent(24,1.075911);
   data_mc_ratio__316->SetBinContent(25,0.9612957);
   data_mc_ratio__316->SetBinContent(26,0.6179207);
   data_mc_ratio__316->SetBinContent(27,0.9863218);
   data_mc_ratio__316->SetBinContent(28,1.092743);
   data_mc_ratio__316->SetBinContent(29,0.9271473);
   data_mc_ratio__316->SetBinContent(30,0.9814845);
   data_mc_ratio__316->SetBinContent(31,1.035806);
   data_mc_ratio__316->SetBinError(2,0.1389441);
   data_mc_ratio__316->SetBinError(3,0.002682761);
   data_mc_ratio__316->SetBinError(4,0.002467246);
   data_mc_ratio__316->SetBinError(5,0.002969423);
   data_mc_ratio__316->SetBinError(6,0.002937214);
   data_mc_ratio__316->SetBinError(7,0.002695902);
   data_mc_ratio__316->SetBinError(8,0.002983244);
   data_mc_ratio__316->SetBinError(9,0.003254124);
   data_mc_ratio__316->SetBinError(10,0.003154123);
   data_mc_ratio__316->SetBinError(11,0.002973198);
   data_mc_ratio__316->SetBinError(12,0.003427186);
   data_mc_ratio__316->SetBinError(13,0.003425541);
   data_mc_ratio__316->SetBinError(14,0.00353483);
   data_mc_ratio__316->SetBinError(15,0.003812858);
   data_mc_ratio__316->SetBinError(16,0.003669031);
   data_mc_ratio__316->SetBinError(17,0.004004526);
   data_mc_ratio__316->SetBinError(18,0.004428928);
   data_mc_ratio__316->SetBinError(19,0.004002626);
   data_mc_ratio__316->SetBinError(20,0.005268904);
   data_mc_ratio__316->SetBinError(21,0.005355577);
   data_mc_ratio__316->SetBinError(22,0.005745477);
   data_mc_ratio__316->SetBinError(23,0.005478922);
   data_mc_ratio__316->SetBinError(24,0.005558873);
   data_mc_ratio__316->SetBinError(25,0.00519718);
   data_mc_ratio__316->SetBinError(26,0.003478333);
   data_mc_ratio__316->SetBinError(27,0.005853774);
   data_mc_ratio__316->SetBinError(28,0.006784347);
   data_mc_ratio__316->SetBinError(29,0.006080341);
   data_mc_ratio__316->SetBinError(30,0.007739028);
   data_mc_ratio__316->SetBinError(31,0.1038238);
   data_mc_ratio__316->SetMinimum(0.4);
   data_mc_ratio__316->SetMaximum(1.6);
   data_mc_ratio__316->SetEntries(2691.499);
   data_mc_ratio__316->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__316->SetLineColor(ci);
   data_mc_ratio__316->SetLineWidth(2);
   data_mc_ratio__316->SetMarkerStyle(20);
   data_mc_ratio__316->SetMarkerSize(1.2);
   data_mc_ratio__316->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__316->GetXaxis()->SetRange(1,30);
   data_mc_ratio__316->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__316->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__316->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__316->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__316->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__316->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__316->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__316->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__316->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__316->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__316->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__316->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__316->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__316->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__316->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__316->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__316->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1230[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1230[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1230[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1230[30] = {
   0,
   0.3301682,
   0.03104058,
   0.03141273,
   0.03408404,
   0.03751578,
   0.03517917,
   0.03673689,
   0.04002528,
   0.04056139,
   0.04464442,
   0.04754323,
   0.04554277,
   0.0437268,
   0.05022135,
   0.05045174,
   0.05511037,
   0.06068378,
   0.06116213,
   0.0590938,
   0.06135018,
   0.06284686,
   0.06556247,
   0.06689718,
   0.07080024,
   0.3964728,
   0.09013058,
   0.09735487,
   0.118003,
   0.1011704};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1230,Graph_from_mc_statistical_error_fy1230,Graph_from_mc_statistical_error_fex1230,Graph_from_mc_statistical_error_fey1230);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1230 = new TH1F("Graph_Graph_from_mc_statistical_error1230","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1230->SetMinimum(0.5242326);
   Graph_Graph_from_mc_statistical_error1230->SetMaximum(1.475767);
   Graph_Graph_from_mc_statistical_error1230->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1230->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1230->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1230);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_algo_18->cd();
   Z_dR_algo_18->Modified();
   Z_dR_algo_18->cd();
   Z_dR_algo_18->SetSelected(Z_dR_algo_18);
}
