void Z_dR_both_16_logY()
{
//=========Macro generated from canvas: Z_dR_both_16/Z_dR_both_16
//=========  (Thu Aug 10 12:32:44 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_both_16 = new TCanvas("Z_dR_both_16", "Z_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_both_16->SetHighLightColor(2);
   Z_dR_both_16->Range(0,0,1,1);
   Z_dR_both_16->SetFillColor(0);
   Z_dR_both_16->SetFillStyle(4000);
   Z_dR_both_16->SetBorderMode(0);
   Z_dR_both_16->SetBorderSize(2);
   Z_dR_both_16->SetFrameFillStyle(1000);
   Z_dR_both_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.839548,6.314516,11.3094);
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
   st->SetMaximum(2.394303e+09);
   
   TH1F *st_stack_209 = new TH1F("st_stack_209","",30,0,6);
   st_stack_209->SetMinimum(0.00149486);
   st_stack_209->SetMaximum(7.843342e+09);
   st_stack_209->SetDirectory(0);
   st_stack_209->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_209->SetLineColor(ci);
   st_stack_209->GetXaxis()->SetRange(1,30);
   st_stack_209->GetXaxis()->SetLabelFont(42);
   st_stack_209->GetXaxis()->SetLabelSize(0.035);
   st_stack_209->GetXaxis()->SetTitleSize(0.035);
   st_stack_209->GetXaxis()->SetTitleFont(42);
   st_stack_209->GetYaxis()->SetTitle("Events/0.2");
   st_stack_209->GetYaxis()->SetLabelFont(42);
   st_stack_209->GetYaxis()->SetLabelSize(0.05);
   st_stack_209->GetYaxis()->SetTitleSize(0.057);
   st_stack_209->GetYaxis()->SetTitleOffset(1.2);
   st_stack_209->GetYaxis()->SetTitleFont(42);
   st_stack_209->GetZaxis()->SetLabelFont(42);
   st_stack_209->GetZaxis()->SetLabelSize(0.035);
   st_stack_209->GetZaxis()->SetTitleSize(0.035);
   st_stack_209->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_209);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,15924.12);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,14642.48);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,10433.92);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,10894.93);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,7514.779);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,7824.869);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,5363.889);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,4567.297);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,8695.986);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,6645.491);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,6565.084);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,7161.106);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,10829.34);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,10411.61);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,8523.439);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,5647.493);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,4679.816);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,5863.657);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,3588.762);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,3662.085);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,4908.439);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,893.7737);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(25,3233.071);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(26,1871.724);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(27,2184.031);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(28,1522.457);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(29,971.0933);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(30,761.0556);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(31,532.8131);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,2068.214);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,2030.243);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,1856.416);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,1930.6);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,1129.369);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,1749.752);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,911.9716);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,741.7461);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,2221.239);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,1061.103);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,1027.938);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,1688.791);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,2650.607);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,2302.36);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,1277.187);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,986.6365);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,867.8605);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,1022.46);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,1477.359);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,776.1626);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,1636.882);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,115.5657);
   VbbHcc_both_Z_dR_stack_1->SetBinError(25,1520.516);
   VbbHcc_both_Z_dR_stack_1->SetBinError(26,549.4059);
   VbbHcc_both_Z_dR_stack_1->SetBinError(27,664.0941);
   VbbHcc_both_Z_dR_stack_1->SetBinError(28,478.6142);
   VbbHcc_both_Z_dR_stack_1->SetBinError(29,288.7749);
   VbbHcc_both_Z_dR_stack_1->SetBinError(30,283.6261);
   VbbHcc_both_Z_dR_stack_1->SetBinError(31,276.1012);
   VbbHcc_both_Z_dR_stack_1->SetEntries(10203);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_2 = new TH1D("VbbHcc_both_Z_dR_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,35.48618);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,41.64169);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,35.13348);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,39.31776);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,43.06764);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,40.72959);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,42.04283);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,36.28729);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,43.39498);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,40.6878);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,43.34866);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,38.0956);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,38.04553);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,37.35208);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,31.97829);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,33.24953);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,26.84058);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,22.63703);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,21.84796);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,18.24414);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,16.20654);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,14.7474);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,11.69427);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(26,11.67678);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(27,6.899226);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(28,8.073092);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(29,4.855579);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(30,4.390247);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(31,4.102326);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,2.421666);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,2.561821);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,2.281922);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,2.470212);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,2.611386);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,2.399105);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,2.580671);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,2.280843);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,2.726406);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,2.519925);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,2.658998);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,2.474369);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,2.424571);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,2.405799);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,2.197137);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,2.32858);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,1.972833);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,1.841659);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,1.835346);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,1.734632);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,1.548194);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,1.562102);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,1.354062);
   VbbHcc_both_Z_dR_stack_2->SetBinError(26,1.354017);
   VbbHcc_both_Z_dR_stack_2->SetBinError(27,1.010609);
   VbbHcc_both_Z_dR_stack_2->SetBinError(28,1.172361);
   VbbHcc_both_Z_dR_stack_2->SetBinError(29,0.8680181);
   VbbHcc_both_Z_dR_stack_2->SetBinError(30,0.8571709);
   VbbHcc_both_Z_dR_stack_2->SetBinError(31,0.8845132);
   VbbHcc_both_Z_dR_stack_2->SetEntries(10096);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_3 = new TH1D("VbbHcc_both_Z_dR_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(2,0.605116);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(3,519.9444);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(4,780.2591);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(5,800.7843);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(6,847.6181);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(7,848.1555);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(8,820.5109);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(9,788.5023);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(10,762.4321);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(11,736.2593);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(12,735.24);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(13,713.2385);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(14,705.652);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(15,686.2631);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(16,656.3976);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(17,608.9181);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(18,562.051);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(19,502.5046);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(20,448.4824);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(21,400.8346);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(22,351.7191);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(23,307.407);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(24,265.7564);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(25,234.8728);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(26,203.9053);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(27,171.6585);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(28,137.0461);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(29,110.8091);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(30,73.2474);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(31,54.32945);
   VbbHcc_both_Z_dR_stack_3->SetBinError(2,0.2027391);
   VbbHcc_both_Z_dR_stack_3->SetBinError(3,5.702877);
   VbbHcc_both_Z_dR_stack_3->SetBinError(4,7.013434);
   VbbHcc_both_Z_dR_stack_3->SetBinError(5,7.118613);
   VbbHcc_both_Z_dR_stack_3->SetBinError(6,7.330657);
   VbbHcc_both_Z_dR_stack_3->SetBinError(7,7.330079);
   VbbHcc_both_Z_dR_stack_3->SetBinError(8,7.192545);
   VbbHcc_both_Z_dR_stack_3->SetBinError(9,7.039012);
   VbbHcc_both_Z_dR_stack_3->SetBinError(10,6.933242);
   VbbHcc_both_Z_dR_stack_3->SetBinError(11,6.79809);
   VbbHcc_both_Z_dR_stack_3->SetBinError(12,6.791159);
   VbbHcc_both_Z_dR_stack_3->SetBinError(13,6.687124);
   VbbHcc_both_Z_dR_stack_3->SetBinError(14,6.663289);
   VbbHcc_both_Z_dR_stack_3->SetBinError(15,6.576297);
   VbbHcc_both_Z_dR_stack_3->SetBinError(16,6.434326);
   VbbHcc_both_Z_dR_stack_3->SetBinError(17,6.204707);
   VbbHcc_both_Z_dR_stack_3->SetBinError(18,5.963358);
   VbbHcc_both_Z_dR_stack_3->SetBinError(19,5.633699);
   VbbHcc_both_Z_dR_stack_3->SetBinError(20,5.323776);
   VbbHcc_both_Z_dR_stack_3->SetBinError(21,5.026783);
   VbbHcc_both_Z_dR_stack_3->SetBinError(22,4.701882);
   VbbHcc_both_Z_dR_stack_3->SetBinError(23,4.398411);
   VbbHcc_both_Z_dR_stack_3->SetBinError(24,4.083202);
   VbbHcc_both_Z_dR_stack_3->SetBinError(25,3.838813);
   VbbHcc_both_Z_dR_stack_3->SetBinError(26,3.582143);
   VbbHcc_both_Z_dR_stack_3->SetBinError(27,3.28456);
   VbbHcc_both_Z_dR_stack_3->SetBinError(28,2.939021);
   VbbHcc_both_Z_dR_stack_3->SetBinError(29,2.633601);
   VbbHcc_both_Z_dR_stack_3->SetBinError(30,2.146705);
   VbbHcc_both_Z_dR_stack_3->SetBinError(31,1.83369);
   VbbHcc_both_Z_dR_stack_3->SetEntries(243289);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_4 = new TH1D("VbbHcc_both_Z_dR_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(2,0.1448776);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(3,108.6453);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(4,158.0541);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(5,156.0897);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(6,142.8672);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(7,139.5657);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(8,100.7905);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(9,79.84826);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(10,76.05876);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(11,73.03495);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(12,74.54155);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(13,92.42704);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(14,96.94022);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(15,83.09204);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(16,83.79436);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(17,91.15449);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(18,62.0333);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(19,64.13161);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(20,64.51805);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(21,49.82055);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(22,45.4385);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(23,37.04771);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(24,35.60242);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(25,33.14805);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(26,21.19871);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(27,26.62668);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(28,25.48579);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(29,16.1458);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(30,12.15791);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(31,6.759412);
   VbbHcc_both_Z_dR_stack_4->SetBinError(2,0.1027791);
   VbbHcc_both_Z_dR_stack_4->SetBinError(3,4.399405);
   VbbHcc_both_Z_dR_stack_4->SetBinError(4,7.580276);
   VbbHcc_both_Z_dR_stack_4->SetBinError(5,7.880492);
   VbbHcc_both_Z_dR_stack_4->SetBinError(6,9.999669);
   VbbHcc_both_Z_dR_stack_4->SetBinError(7,12.09037);
   VbbHcc_both_Z_dR_stack_4->SetBinError(8,8.846555);
   VbbHcc_both_Z_dR_stack_4->SetBinError(9,6.360186);
   VbbHcc_both_Z_dR_stack_4->SetBinError(10,6.345375);
   VbbHcc_both_Z_dR_stack_4->SetBinError(11,5.744256);
   VbbHcc_both_Z_dR_stack_4->SetBinError(12,5.763874);
   VbbHcc_both_Z_dR_stack_4->SetBinError(13,9.126833);
   VbbHcc_both_Z_dR_stack_4->SetBinError(14,8.811033);
   VbbHcc_both_Z_dR_stack_4->SetBinError(15,5.875957);
   VbbHcc_both_Z_dR_stack_4->SetBinError(16,7.391254);
   VbbHcc_both_Z_dR_stack_4->SetBinError(17,8.747371);
   VbbHcc_both_Z_dR_stack_4->SetBinError(18,5.452723);
   VbbHcc_both_Z_dR_stack_4->SetBinError(19,6.656683);
   VbbHcc_both_Z_dR_stack_4->SetBinError(20,7.185673);
   VbbHcc_both_Z_dR_stack_4->SetBinError(21,6.4975);
   VbbHcc_both_Z_dR_stack_4->SetBinError(22,6.437637);
   VbbHcc_both_Z_dR_stack_4->SetBinError(23,5.753075);
   VbbHcc_both_Z_dR_stack_4->SetBinError(24,6.300828);
   VbbHcc_both_Z_dR_stack_4->SetBinError(25,5.109983);
   VbbHcc_both_Z_dR_stack_4->SetBinError(26,3.167536);
   VbbHcc_both_Z_dR_stack_4->SetBinError(27,3.437547);
   VbbHcc_both_Z_dR_stack_4->SetBinError(28,4.220144);
   VbbHcc_both_Z_dR_stack_4->SetBinError(29,1.652187);
   VbbHcc_both_Z_dR_stack_4->SetBinError(30,1.384746);
   VbbHcc_both_Z_dR_stack_4->SetBinError(31,1.059333);
   VbbHcc_both_Z_dR_stack_4->SetEntries(15464);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_5 = new TH1D("VbbHcc_both_Z_dR_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(2,0.0002136538);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(3,27.40283);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(4,16.68547);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(5,12.92151);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(6,8.826225);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(7,10.05042);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(8,10.34278);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(9,6.769107);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(10,8.422623);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(11,5.695127);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(12,9.316348);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(13,7.053272);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(14,9.68869);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(15,11.22299);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(16,5.907112);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(17,7.345281);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(18,8.884227);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(19,5.113507);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(20,4.573433);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(21,3.963262);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(22,3.965323);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(23,2.459403);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(24,3.713984);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(25,2.166025);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(26,2.566653);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(27,1.559382);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(28,2.126943);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(29,1.732721);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(30,1.242498);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(31,0.2221849);
   VbbHcc_both_Z_dR_stack_5->SetBinError(2,0.0002136538);
   VbbHcc_both_Z_dR_stack_5->SetBinError(3,6.495887);
   VbbHcc_both_Z_dR_stack_5->SetBinError(4,2.174136);
   VbbHcc_both_Z_dR_stack_5->SetBinError(5,2.063054);
   VbbHcc_both_Z_dR_stack_5->SetBinError(6,1.349553);
   VbbHcc_both_Z_dR_stack_5->SetBinError(7,1.942872);
   VbbHcc_both_Z_dR_stack_5->SetBinError(8,2.026333);
   VbbHcc_both_Z_dR_stack_5->SetBinError(9,1.252531);
   VbbHcc_both_Z_dR_stack_5->SetBinError(10,1.909836);
   VbbHcc_both_Z_dR_stack_5->SetBinError(11,1.303051);
   VbbHcc_both_Z_dR_stack_5->SetBinError(12,2.041774);
   VbbHcc_both_Z_dR_stack_5->SetBinError(13,1.301886);
   VbbHcc_both_Z_dR_stack_5->SetBinError(14,2.239775);
   VbbHcc_both_Z_dR_stack_5->SetBinError(15,6.192551);
   VbbHcc_both_Z_dR_stack_5->SetBinError(16,1.276402);
   VbbHcc_both_Z_dR_stack_5->SetBinError(17,1.656573);
   VbbHcc_both_Z_dR_stack_5->SetBinError(18,2.164388);
   VbbHcc_both_Z_dR_stack_5->SetBinError(19,1.235815);
   VbbHcc_both_Z_dR_stack_5->SetBinError(20,1.223389);
   VbbHcc_both_Z_dR_stack_5->SetBinError(21,1.17944);
   VbbHcc_both_Z_dR_stack_5->SetBinError(22,1.166352);
   VbbHcc_both_Z_dR_stack_5->SetBinError(23,0.545398);
   VbbHcc_both_Z_dR_stack_5->SetBinError(24,1.174558);
   VbbHcc_both_Z_dR_stack_5->SetBinError(25,0.4859818);
   VbbHcc_both_Z_dR_stack_5->SetBinError(26,1.091257);
   VbbHcc_both_Z_dR_stack_5->SetBinError(27,0.5056194);
   VbbHcc_both_Z_dR_stack_5->SetBinError(28,0.6016176);
   VbbHcc_both_Z_dR_stack_5->SetBinError(29,0.4154303);
   VbbHcc_both_Z_dR_stack_5->SetBinError(30,0.3174207);
   VbbHcc_both_Z_dR_stack_5->SetBinError(31,0.123172);
   VbbHcc_both_Z_dR_stack_5->SetEntries(3789);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_6 = new TH1D("VbbHcc_both_Z_dR_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(3,0.1343693);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(7,0.1343693);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(10,0.1343693);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(11,0.1343693);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(12,0.2687386);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(13,0.1343693);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(22,0.2687386);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(25,0.1343693);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(28,0.1343693);
   VbbHcc_both_Z_dR_stack_6->SetBinError(3,0.1343693);
   VbbHcc_both_Z_dR_stack_6->SetBinError(7,0.1343693);
   VbbHcc_both_Z_dR_stack_6->SetBinError(10,0.1343693);
   VbbHcc_both_Z_dR_stack_6->SetBinError(11,0.1343693);
   VbbHcc_both_Z_dR_stack_6->SetBinError(12,0.1900269);
   VbbHcc_both_Z_dR_stack_6->SetBinError(13,0.1343693);
   VbbHcc_both_Z_dR_stack_6->SetBinError(22,0.1900269);
   VbbHcc_both_Z_dR_stack_6->SetBinError(25,0.1343693);
   VbbHcc_both_Z_dR_stack_6->SetBinError(28,0.1343693);
   VbbHcc_both_Z_dR_stack_6->SetEntries(11);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_7 = new TH1D("VbbHcc_both_Z_dR_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(3,0.6543518);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(4,0.6543518);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(5,0.3271759);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(6,0.2181173);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(7,0.1090586);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(8,0.1090586);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(9,0.2181173);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(10,0.2181173);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(11,0.2181173);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(13,0.4362346);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(14,0.4362346);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(15,0.4362346);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(16,0.2181173);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(17,0.3271759);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(18,0.1090586);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(19,0.1090586);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(21,0.1090586);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(22,0.2181173);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(24,0.3271759);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(25,0.1090586);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(29,0.1090586);
   VbbHcc_both_Z_dR_stack_7->SetBinError(3,0.267138);
   VbbHcc_both_Z_dR_stack_7->SetBinError(4,0.267138);
   VbbHcc_both_Z_dR_stack_7->SetBinError(5,0.1888951);
   VbbHcc_both_Z_dR_stack_7->SetBinError(6,0.1542322);
   VbbHcc_both_Z_dR_stack_7->SetBinError(7,0.1090586);
   VbbHcc_both_Z_dR_stack_7->SetBinError(8,0.1090586);
   VbbHcc_both_Z_dR_stack_7->SetBinError(9,0.1542322);
   VbbHcc_both_Z_dR_stack_7->SetBinError(10,0.1542322);
   VbbHcc_both_Z_dR_stack_7->SetBinError(11,0.1542322);
   VbbHcc_both_Z_dR_stack_7->SetBinError(13,0.2181173);
   VbbHcc_both_Z_dR_stack_7->SetBinError(14,0.2181173);
   VbbHcc_both_Z_dR_stack_7->SetBinError(15,0.2181173);
   VbbHcc_both_Z_dR_stack_7->SetBinError(16,0.1542322);
   VbbHcc_both_Z_dR_stack_7->SetBinError(17,0.1888951);
   VbbHcc_both_Z_dR_stack_7->SetBinError(18,0.1090586);
   VbbHcc_both_Z_dR_stack_7->SetBinError(19,0.1090586);
   VbbHcc_both_Z_dR_stack_7->SetBinError(21,0.1090586);
   VbbHcc_both_Z_dR_stack_7->SetBinError(22,0.1542322);
   VbbHcc_both_Z_dR_stack_7->SetBinError(24,0.1888951);
   VbbHcc_both_Z_dR_stack_7->SetBinError(25,0.1090586);
   VbbHcc_both_Z_dR_stack_7->SetBinError(29,0.1090586);
   VbbHcc_both_Z_dR_stack_7->SetEntries(52);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_8 = new TH1D("VbbHcc_both_Z_dR_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(3,0.7296215);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(4,4.864143);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(5,4.864143);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(6,2.918486);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(7,1.459243);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(8,1.459243);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(9,2.188864);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(10,1.216036);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(11,2.432072);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(12,1.945657);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(13,2.188864);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(14,1.945657);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(15,1.216036);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(16,1.945657);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(17,2.188864);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(18,2.188864);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(19,0.7296215);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(20,0.4864143);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(21,0.2432072);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(22,1.216036);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(23,0.2432072);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(26,0.7296215);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(27,0.9728286);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(28,0.2432072);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(29,0.7296215);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(30,0.9728286);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(31,0.2432072);
   VbbHcc_both_Z_dR_stack_8->SetBinError(3,0.4212471);
   VbbHcc_both_Z_dR_stack_8->SetBinError(4,1.087655);
   VbbHcc_both_Z_dR_stack_8->SetBinError(5,1.087655);
   VbbHcc_both_Z_dR_stack_8->SetBinError(6,0.8424943);
   VbbHcc_both_Z_dR_stack_8->SetBinError(7,0.5957334);
   VbbHcc_both_Z_dR_stack_8->SetBinError(8,0.5957334);
   VbbHcc_both_Z_dR_stack_8->SetBinError(9,0.7296215);
   VbbHcc_both_Z_dR_stack_8->SetBinError(10,0.5438277);
   VbbHcc_both_Z_dR_stack_8->SetBinError(11,0.7690885);
   VbbHcc_both_Z_dR_stack_8->SetBinError(12,0.6878937);
   VbbHcc_both_Z_dR_stack_8->SetBinError(13,0.7296215);
   VbbHcc_both_Z_dR_stack_8->SetBinError(14,0.6878937);
   VbbHcc_both_Z_dR_stack_8->SetBinError(15,0.5438277);
   VbbHcc_both_Z_dR_stack_8->SetBinError(16,0.6878937);
   VbbHcc_both_Z_dR_stack_8->SetBinError(17,0.7296215);
   VbbHcc_both_Z_dR_stack_8->SetBinError(18,0.7296215);
   VbbHcc_both_Z_dR_stack_8->SetBinError(19,0.4212471);
   VbbHcc_both_Z_dR_stack_8->SetBinError(20,0.3439469);
   VbbHcc_both_Z_dR_stack_8->SetBinError(21,0.2432072);
   VbbHcc_both_Z_dR_stack_8->SetBinError(22,0.5438277);
   VbbHcc_both_Z_dR_stack_8->SetBinError(23,0.2432072);
   VbbHcc_both_Z_dR_stack_8->SetBinError(26,0.4212471);
   VbbHcc_both_Z_dR_stack_8->SetBinError(27,0.4864143);
   VbbHcc_both_Z_dR_stack_8->SetBinError(28,0.2432072);
   VbbHcc_both_Z_dR_stack_8->SetBinError(29,0.4212471);
   VbbHcc_both_Z_dR_stack_8->SetBinError(30,0.4864143);
   VbbHcc_both_Z_dR_stack_8->SetBinError(31,0.2432072);
   VbbHcc_both_Z_dR_stack_8->SetEntries(175);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_9 = new TH1D("VbbHcc_both_Z_dR_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(2,0.001373951);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(3,2.106267);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(4,4.02018);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(5,4.036667);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(6,3.368927);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(7,2.352204);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(8,1.696829);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(9,1.159614);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(10,1.071682);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(11,1.096413);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(12,1.298383);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(13,1.562182);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(14,1.716065);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(15,1.900174);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(16,1.83972);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(17,1.834224);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(18,1.661106);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(19,1.331358);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(20,1.104656);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(21,0.7982654);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(22,0.6278955);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(23,0.4341684);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(24,0.3750886);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(25,0.390202);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(26,0.4231768);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(27,0.390202);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(28,0.4369163);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(29,0.3764625);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(30,0.2115884);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(31,0.1250295);
   VbbHcc_both_Z_dR_stack_9->SetBinError(2,0.001373951);
   VbbHcc_both_Z_dR_stack_9->SetBinError(3,0.05379504);
   VbbHcc_both_Z_dR_stack_9->SetBinError(4,0.07432045);
   VbbHcc_both_Z_dR_stack_9->SetBinError(5,0.0744727);
   VbbHcc_both_Z_dR_stack_9->SetBinError(6,0.06803485);
   VbbHcc_both_Z_dR_stack_9->SetBinError(7,0.05684903);
   VbbHcc_both_Z_dR_stack_9->SetBinError(8,0.04828416);
   VbbHcc_both_Z_dR_stack_9->SetBinError(9,0.03991558);
   VbbHcc_both_Z_dR_stack_9->SetBinError(10,0.03837236);
   VbbHcc_both_Z_dR_stack_9->SetBinError(11,0.03881259);
   VbbHcc_both_Z_dR_stack_9->SetBinError(12,0.04223642);
   VbbHcc_both_Z_dR_stack_9->SetBinError(13,0.04632884);
   VbbHcc_both_Z_dR_stack_9->SetBinError(14,0.04855706);
   VbbHcc_both_Z_dR_stack_9->SetBinError(15,0.05109545);
   VbbHcc_both_Z_dR_stack_9->SetBinError(16,0.05027609);
   VbbHcc_both_Z_dR_stack_9->SetBinError(17,0.05020094);
   VbbHcc_both_Z_dR_stack_9->SetBinError(18,0.0477732);
   VbbHcc_both_Z_dR_stack_9->SetBinError(19,0.04276939);
   VbbHcc_both_Z_dR_stack_9->SetBinError(20,0.03895823);
   VbbHcc_both_Z_dR_stack_9->SetBinError(21,0.03311763);
   VbbHcc_both_Z_dR_stack_9->SetBinError(22,0.02937171);
   VbbHcc_both_Z_dR_stack_9->SetBinError(23,0.02442388);
   VbbHcc_both_Z_dR_stack_9->SetBinError(24,0.02270139);
   VbbHcc_both_Z_dR_stack_9->SetBinError(25,0.02315423);
   VbbHcc_both_Z_dR_stack_9->SetBinError(26,0.02411274);
   VbbHcc_both_Z_dR_stack_9->SetBinError(27,0.02315423);
   VbbHcc_both_Z_dR_stack_9->SetBinError(28,0.02450105);
   VbbHcc_both_Z_dR_stack_9->SetBinError(29,0.02274293);
   VbbHcc_both_Z_dR_stack_9->SetBinError(30,0.01705028);
   VbbHcc_both_Z_dR_stack_9->SetBinError(31,0.01310666);
   VbbHcc_both_Z_dR_stack_9->SetEntries(28929);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_10 = new TH1D("VbbHcc_both_Z_dR_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(3,0.7450942);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(4,1.557859);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(5,1.872582);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(6,1.687472);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(7,1.261755);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(8,0.8883126);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(9,0.6591631);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(10,0.5929245);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(11,0.5782446);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(12,0.6416188);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(13,0.6938936);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(14,0.7064252);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(15,0.7146602);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(16,0.712512);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(17,0.6763493);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(18,0.6294452);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(19,0.5284762);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(20,0.4672503);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(21,0.3748744);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(22,0.3150807);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(23,0.2409651);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(24,0.2198404);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(25,0.2112473);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(26,0.2330881);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(27,0.2416812);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(28,0.20158);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(29,0.1657754);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(30,0.1034754);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(31,0.05227475);
   VbbHcc_both_Z_dR_stack_10->SetBinError(3,0.01633334);
   VbbHcc_both_Z_dR_stack_10->SetBinError(4,0.02361748);
   VbbHcc_both_Z_dR_stack_10->SetBinError(5,0.02589345);
   VbbHcc_both_Z_dR_stack_10->SetBinError(6,0.02458034);
   VbbHcc_both_Z_dR_stack_10->SetBinError(7,0.0212548);
   VbbHcc_both_Z_dR_stack_10->SetBinError(8,0.01783415);
   VbbHcc_both_Z_dR_stack_10->SetBinError(9,0.01536264);
   VbbHcc_both_Z_dR_stack_10->SetBinError(10,0.01457033);
   VbbHcc_both_Z_dR_stack_10->SetBinError(11,0.01438883);
   VbbHcc_both_Z_dR_stack_10->SetBinError(12,0.01515682);
   VbbHcc_both_Z_dR_stack_10->SetBinError(13,0.01576217);
   VbbHcc_both_Z_dR_stack_10->SetBinError(14,0.01590386);
   VbbHcc_both_Z_dR_stack_10->SetBinError(15,0.01599629);
   VbbHcc_both_Z_dR_stack_10->SetBinError(16,0.01597223);
   VbbHcc_both_Z_dR_stack_10->SetBinError(17,0.01556163);
   VbbHcc_both_Z_dR_stack_10->SetBinError(18,0.01501234);
   VbbHcc_both_Z_dR_stack_10->SetBinError(19,0.01375569);
   VbbHcc_both_Z_dR_stack_10->SetBinError(20,0.01293434);
   VbbHcc_both_Z_dR_stack_10->SetBinError(21,0.01158544);
   VbbHcc_both_Z_dR_stack_10->SetBinError(22,0.01062137);
   VbbHcc_both_Z_dR_stack_10->SetBinError(23,0.009288522);
   VbbHcc_both_Z_dR_stack_10->SetBinError(24,0.008872035);
   VbbHcc_both_Z_dR_stack_10->SetBinError(25,0.008696912);
   VbbHcc_both_Z_dR_stack_10->SetBinError(26,0.009135442);
   VbbHcc_both_Z_dR_stack_10->SetBinError(27,0.009302313);
   VbbHcc_both_Z_dR_stack_10->SetBinError(28,0.008495585);
   VbbHcc_both_Z_dR_stack_10->SetBinError(29,0.007704236);
   VbbHcc_both_Z_dR_stack_10->SetBinError(30,0.006086786);
   VbbHcc_both_Z_dR_stack_10->SetBinError(31,0.004326289);
   VbbHcc_both_Z_dR_stack_10->SetEntries(50200);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_11 = new TH1D("VbbHcc_both_Z_dR_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(3,0.008205022);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(4,0.01914505);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(5,0.005470015);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(6,0.01367504);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(9,0.002735007);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(10,0.002735007);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(11,0.008205022);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(13,0.002735007);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(14,0.002735007);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(15,0.002735007);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(16,0.002735007);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(17,0.005470015);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(18,0.005470015);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(19,0.002735007);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(23,0.002735007);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(29,0.01094003);
   VbbHcc_both_Z_dR_stack_11->SetBinError(3,0.004737172);
   VbbHcc_both_Z_dR_stack_11->SetBinError(4,0.00723615);
   VbbHcc_both_Z_dR_stack_11->SetBinError(5,0.003867885);
   VbbHcc_both_Z_dR_stack_11->SetBinError(6,0.006115663);
   VbbHcc_both_Z_dR_stack_11->SetBinError(9,0.002735007);
   VbbHcc_both_Z_dR_stack_11->SetBinError(10,0.002735007);
   VbbHcc_both_Z_dR_stack_11->SetBinError(11,0.004737172);
   VbbHcc_both_Z_dR_stack_11->SetBinError(13,0.002735007);
   VbbHcc_both_Z_dR_stack_11->SetBinError(14,0.002735007);
   VbbHcc_both_Z_dR_stack_11->SetBinError(15,0.002735007);
   VbbHcc_both_Z_dR_stack_11->SetBinError(16,0.002735007);
   VbbHcc_both_Z_dR_stack_11->SetBinError(17,0.003867885);
   VbbHcc_both_Z_dR_stack_11->SetBinError(18,0.003867885);
   VbbHcc_both_Z_dR_stack_11->SetBinError(19,0.002735007);
   VbbHcc_both_Z_dR_stack_11->SetBinError(23,0.002735007);
   VbbHcc_both_Z_dR_stack_11->SetBinError(29,0.005470015);
   VbbHcc_both_Z_dR_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_12 = new TH1D("VbbHcc_both_Z_dR_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(3,0.003215393);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(4,0.006073519);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(5,0.007145317);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(6,0.006788051);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(7,0.001429063);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(8,0.001786329);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(9,0.001786329);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(10,0.001786329);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(11,0.0007145317);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(12,0.002500861);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(13,0.001786329);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(14,0.0003572658);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(15,0.001429063);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(17,0.002500861);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(18,0.0007145317);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(19,0.001786329);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(20,0.0007145317);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(21,0.001071798);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(22,0.0003572658);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(23,0.0007145317);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(24,0.001071798);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(25,0.001071798);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(26,0.0003572658);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(27,0.0007145317);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(29,0.0007145317);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(31,0.0003572658);
   VbbHcc_both_Z_dR_stack_12->SetBinError(3,0.001071798);
   VbbHcc_both_Z_dR_stack_12->SetBinError(4,0.001473045);
   VbbHcc_both_Z_dR_stack_12->SetBinError(5,0.001597741);
   VbbHcc_both_Z_dR_stack_12->SetBinError(6,0.001557286);
   VbbHcc_both_Z_dR_stack_12->SetBinError(7,0.0007145317);
   VbbHcc_both_Z_dR_stack_12->SetBinError(8,0.0007988707);
   VbbHcc_both_Z_dR_stack_12->SetBinError(9,0.0007988707);
   VbbHcc_both_Z_dR_stack_12->SetBinError(10,0.0007988707);
   VbbHcc_both_Z_dR_stack_12->SetBinError(11,0.0005052502);
   VbbHcc_both_Z_dR_stack_12->SetBinError(12,0.0009452366);
   VbbHcc_both_Z_dR_stack_12->SetBinError(13,0.0007988707);
   VbbHcc_both_Z_dR_stack_12->SetBinError(14,0.0003572658);
   VbbHcc_both_Z_dR_stack_12->SetBinError(15,0.0007145317);
   VbbHcc_both_Z_dR_stack_12->SetBinError(17,0.0009452366);
   VbbHcc_both_Z_dR_stack_12->SetBinError(18,0.0005052502);
   VbbHcc_both_Z_dR_stack_12->SetBinError(19,0.0007988707);
   VbbHcc_both_Z_dR_stack_12->SetBinError(20,0.0005052502);
   VbbHcc_both_Z_dR_stack_12->SetBinError(21,0.0006188026);
   VbbHcc_both_Z_dR_stack_12->SetBinError(22,0.0003572658);
   VbbHcc_both_Z_dR_stack_12->SetBinError(23,0.0005052502);
   VbbHcc_both_Z_dR_stack_12->SetBinError(24,0.0006188026);
   VbbHcc_both_Z_dR_stack_12->SetBinError(25,0.0006188026);
   VbbHcc_both_Z_dR_stack_12->SetBinError(26,0.0003572658);
   VbbHcc_both_Z_dR_stack_12->SetBinError(27,0.0005052502);
   VbbHcc_both_Z_dR_stack_12->SetBinError(29,0.0005052502);
   VbbHcc_both_Z_dR_stack_12->SetBinError(31,0.0003572658);
   VbbHcc_both_Z_dR_stack_12->SetEntries(137);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR__573 = new TH1D("VbbHcc_both_Z_dR__573","",30,0,6);
   VbbHcc_both_Z_dR__573->SetBinContent(2,6);
   VbbHcc_both_Z_dR__573->SetBinContent(3,7598);
   VbbHcc_both_Z_dR__573->SetBinContent(4,8376);
   VbbHcc_both_Z_dR__573->SetBinContent(5,6359);
   VbbHcc_both_Z_dR__573->SetBinContent(6,5653);
   VbbHcc_both_Z_dR__573->SetBinContent(7,5031);
   VbbHcc_both_Z_dR__573->SetBinContent(8,4693);
   VbbHcc_both_Z_dR__573->SetBinContent(9,4490);
   VbbHcc_both_Z_dR__573->SetBinContent(10,4501);
   VbbHcc_both_Z_dR__573->SetBinContent(11,4336);
   VbbHcc_both_Z_dR__573->SetBinContent(12,4251);
   VbbHcc_both_Z_dR__573->SetBinContent(13,4386);
   VbbHcc_both_Z_dR__573->SetBinContent(14,4357);
   VbbHcc_both_Z_dR__573->SetBinContent(15,4424);
   VbbHcc_both_Z_dR__573->SetBinContent(16,4347);
   VbbHcc_both_Z_dR__573->SetBinContent(17,3981);
   VbbHcc_both_Z_dR__573->SetBinContent(18,3658);
   VbbHcc_both_Z_dR__573->SetBinContent(19,3403);
   VbbHcc_both_Z_dR__573->SetBinContent(20,2993);
   VbbHcc_both_Z_dR__573->SetBinContent(21,2654);
   VbbHcc_both_Z_dR__573->SetBinContent(22,2174);
   VbbHcc_both_Z_dR__573->SetBinContent(23,1905);
   VbbHcc_both_Z_dR__573->SetBinContent(24,1519);
   VbbHcc_both_Z_dR__573->SetBinContent(25,1358);
   VbbHcc_both_Z_dR__573->SetBinContent(26,1222);
   VbbHcc_both_Z_dR__573->SetBinContent(27,1157);
   VbbHcc_both_Z_dR__573->SetBinContent(28,1033);
   VbbHcc_both_Z_dR__573->SetBinContent(29,984);
   VbbHcc_both_Z_dR__573->SetBinContent(30,687);
   VbbHcc_both_Z_dR__573->SetBinContent(31,482);
   VbbHcc_both_Z_dR__573->SetEntries(102047);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR__573->SetLineColor(ci);
   VbbHcc_both_Z_dR__573->SetLineWidth(2);
   VbbHcc_both_Z_dR__573->SetMarkerStyle(20);
   VbbHcc_both_Z_dR__573->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR__573->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR__573->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__573->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__573->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__573->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__573->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__573->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__573->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__573->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR__573->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__573->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__573->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__573->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__573->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__573->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_fx1417[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_fy1417[30] = {
   0,
   0.7515812,
   16619.98,
   15650.24,
   11449.97,
   11941.78,
   8560.936,
   8801.398,
   6285.282,
   5453.735,
   9558.839,
   7509.434,
   7426.171,
   8016.29,
   11652.24,
   11199.78,
   9267.87,
   6318.306,
   5281.109,
   6405.927,
   4066.754,
   4084.098,
   5272.481,
   1214.517,
   3515.798,
   2112.457,
   2392.38,
   1696.205,
   1106.029,
   853.3815};
   Double_t Graph_from_VbbHcc_both_Z_dR_fex1417[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_Z_dR_fey1417[30] = {
   0,
   0.2273073,
   2068.238,
   2030.272,
   1856.45,
   1930.642,
   1129.462,
   1749.792,
   912.0258,
   741.8118,
   2221.259,
   1061.146,
   1028.005,
   1688.83,
   2650.63,
   2302.382,
   1277.235,
   986.675,
   867.9075,
   1022.502,
   1477.384,
   776.2066,
   1636.899,
   115.826,
   1520.53,
   549.4297,
   664.1122,
   478.6438,
   288.7936,
   283.6395};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_fx1417,Graph_from_VbbHcc_both_Z_dR_fy1417,Graph_from_VbbHcc_both_Z_dR_fex1417,Graph_from_VbbHcc_both_Z_dR_fey1417);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR1417 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR1417","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->SetMinimum(20.55704);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->SetMaximum(20557.04);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR1417->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR1417);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR","MC unc. (stat.)","fl");

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
   Z_dR_both_16->cd();
  
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
   
   TH1D *data_mc_ratio__574 = new TH1D("data_mc_ratio__574","",30,0,6);
   data_mc_ratio__574->SetBinContent(2,7.983169);
   data_mc_ratio__574->SetBinContent(3,0.4571605);
   data_mc_ratio__574->SetBinContent(4,0.5351994);
   data_mc_ratio__574->SetBinContent(5,0.5553728);
   data_mc_ratio__574->SetBinContent(6,0.4733801);
   data_mc_ratio__574->SetBinContent(7,0.5876694);
   data_mc_ratio__574->SetBinContent(8,0.5332107);
   data_mc_ratio__574->SetBinContent(9,0.7143673);
   data_mc_ratio__574->SetBinContent(10,0.8253059);
   data_mc_ratio__574->SetBinContent(11,0.4536116);
   data_mc_ratio__574->SetBinContent(12,0.566088);
   data_mc_ratio__574->SetBinContent(13,0.5906139);
   data_mc_ratio__574->SetBinContent(14,0.5435182);
   data_mc_ratio__574->SetBinContent(15,0.3796696);
   data_mc_ratio__574->SetBinContent(16,0.3881328);
   data_mc_ratio__574->SetBinContent(17,0.4295485);
   data_mc_ratio__574->SetBinContent(18,0.5789527);
   data_mc_ratio__574->SetBinContent(19,0.6443722);
   data_mc_ratio__574->SetBinContent(20,0.4672236);
   data_mc_ratio__574->SetBinContent(21,0.6526089);
   data_mc_ratio__574->SetBinContent(22,0.5323085);
   data_mc_ratio__574->SetBinContent(23,0.36131);
   data_mc_ratio__574->SetBinContent(24,1.250703);
   data_mc_ratio__574->SetBinContent(25,0.3862565);
   data_mc_ratio__574->SetBinContent(26,0.5784732);
   data_mc_ratio__574->SetBinContent(27,0.4836187);
   data_mc_ratio__574->SetBinContent(28,0.6090065);
   data_mc_ratio__574->SetBinContent(29,0.8896692);
   data_mc_ratio__574->SetBinContent(30,0.8050326);
   data_mc_ratio__574->SetBinContent(31,0.8051485);
   data_mc_ratio__574->SetBinError(2,3.259115);
   data_mc_ratio__574->SetBinError(3,0.005244681);
   data_mc_ratio__574->SetBinError(4,0.005847865);
   data_mc_ratio__574->SetBinError(5,0.006964504);
   data_mc_ratio__574->SetBinError(6,0.006296084);
   data_mc_ratio__574->SetBinError(7,0.008285255);
   data_mc_ratio__574->SetBinError(8,0.007783476);
   data_mc_ratio__574->SetBinError(9,0.01066101);
   data_mc_ratio__574->SetBinError(10,0.01230157);
   data_mc_ratio__574->SetBinError(11,0.006888735);
   data_mc_ratio__574->SetBinError(12,0.008682371);
   data_mc_ratio__574->SetBinError(13,0.008918039);
   data_mc_ratio__574->SetBinError(14,0.00823418);
   data_mc_ratio__574->SetBinError(15,0.005708188);
   data_mc_ratio__574->SetBinError(16,0.005886884);
   data_mc_ratio__574->SetBinError(17,0.006807947);
   data_mc_ratio__574->SetBinError(18,0.009572409);
   data_mc_ratio__574->SetBinError(19,0.01104602);
   data_mc_ratio__574->SetBinError(20,0.008540266);
   data_mc_ratio__574->SetBinError(21,0.01266784);
   data_mc_ratio__574->SetBinError(22,0.01141652);
   data_mc_ratio__574->SetBinError(23,0.008278134);
   data_mc_ratio__574->SetBinError(24,0.03209041);
   data_mc_ratio__574->SetBinError(25,0.01048156);
   data_mc_ratio__574->SetBinError(26,0.01654808);
   data_mc_ratio__574->SetBinError(27,0.01421793);
   data_mc_ratio__574->SetBinError(28,0.01894836);
   data_mc_ratio__574->SetBinError(29,0.02836162);
   data_mc_ratio__574->SetBinError(30,0.03071391);
   data_mc_ratio__574->SetBinError(31,0.3731607);
   data_mc_ratio__574->SetMinimum(0.4);
   data_mc_ratio__574->SetMaximum(1.6);
   data_mc_ratio__574->SetEntries(34.7803);
   data_mc_ratio__574->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__574->SetLineColor(ci);
   data_mc_ratio__574->SetLineWidth(2);
   data_mc_ratio__574->SetMarkerStyle(20);
   data_mc_ratio__574->SetMarkerSize(1.2);
   data_mc_ratio__574->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__574->GetXaxis()->SetRange(1,30);
   data_mc_ratio__574->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__574->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__574->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__574->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__574->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__574->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__574->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__574->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__574->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__574->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__574->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__574->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__574->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__574->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__574->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__574->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__574->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1418[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1418[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1418[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1418[30] = {
   0,
   0.3024388,
   0.1244428,
   0.1297279,
   0.1621358,
   0.1616712,
   0.1319321,
   0.1988084,
   0.145105,
   0.136019,
   0.2323775,
   0.1413084,
   0.1384301,
   0.2106748,
   0.2274782,
   0.205574,
   0.1378133,
   0.1561613,
   0.1643419,
   0.1596181,
   0.3632832,
   0.1900558,
   0.3104609,
   0.09536792,
   0.4324849,
   0.2600903,
   0.2775947,
   0.282185,
   0.2611085,
   0.3323712};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1418,Graph_from_mc_statistical_error_fy1418,Graph_from_mc_statistical_error_fex1418,Graph_from_mc_statistical_error_fey1418);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1418 = new TH1F("Graph_Graph_from_mc_statistical_error1418","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1418->SetMinimum(0.4810181);
   Graph_Graph_from_mc_statistical_error1418->SetMaximum(1.518982);
   Graph_Graph_from_mc_statistical_error1418->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1418->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1418->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1418->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1418->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1418->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1418->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1418->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1418->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1418->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1418->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1418->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1418->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1418->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1418->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1418->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1418);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_both_16->cd();
   Z_dR_both_16->Modified();
   Z_dR_both_16->cd();
   Z_dR_both_16->SetSelected(Z_dR_both_16);
}
