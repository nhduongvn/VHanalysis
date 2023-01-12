#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_alljet_16()
{
//=========Macro generated from canvas: Z_dR_alljet_16/Z_dR_alljet_16
//=========  (Mon Dec 19 11:11:23 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_alljet_16 = new TCanvas("Z_dR_alljet_16", "Z_dR_alljet_16",0,0,600,600);
   Z_dR_alljet_16->SetHighLightColor(2);
   Z_dR_alljet_16->Range(-1.310117,-12.92833,7.029799,94.80776);
   Z_dR_alljet_16->SetFillColor(0);
   Z_dR_alljet_16->SetFillStyle(4000);
   Z_dR_alljet_16->SetBorderMode(0);
   Z_dR_alljet_16->SetBorderSize(2);
   Z_dR_alljet_16->SetLeftMargin(0.15709);
   Z_dR_alljet_16->SetRightMargin(0.1234783);
   Z_dR_alljet_16->SetBottomMargin(0.12);
   Z_dR_alljet_16->SetFrameFillStyle(1000);
   Z_dR_alljet_16->SetFrameBorderMode(0);
   Z_dR_alljet_16->SetFrameFillStyle(1000);
   Z_dR_alljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(84.03415);
   
   TH1F *st_stack_185 = new TH1F("st_stack_185","",30,0,6);
   st_stack_185->SetMinimum(0);
   st_stack_185->SetMaximum(84.03415);
   st_stack_185->SetDirectory(0);
   st_stack_185->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_185->SetLineColor(ci);
   st_stack_185->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_185->GetXaxis()->SetRange(1,30);
   st_stack_185->GetXaxis()->SetLabelFont(42);
   st_stack_185->GetXaxis()->SetTitleOffset(1);
   st_stack_185->GetXaxis()->SetTitleFont(42);
   st_stack_185->GetYaxis()->SetTitle("Events/0.2");
   st_stack_185->GetYaxis()->SetLabelFont(42);
   st_stack_185->GetYaxis()->SetTitleSize(0.037);
   st_stack_185->GetYaxis()->SetTitleFont(42);
   st_stack_185->GetZaxis()->SetLabelFont(42);
   st_stack_185->GetZaxis()->SetTitleOffset(1);
   st_stack_185->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_185);
   
   
   TH1D *VbbHcc_alljet_Z_dR_stack_1 = new TH1D("VbbHcc_alljet_Z_dR_stack_1","",30,0,6);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(2,0.01409921);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(3,10.7762);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(4,20.3502);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(5,20.5861);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(6,23.38579);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(7,26.51275);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(8,29.89216);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(9,32.61473);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(10,34.88682);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(11,37.95417);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(12,40.5598);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(13,43.29039);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(14,46.46842);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(15,48.89219);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(16,47.94553);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(17,28.84296);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(18,19.31376);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(19,14.3351);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(20,11.1137);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(21,9.248589);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(22,7.759541);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(23,6.504151);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(24,5.733298);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(25,4.959841);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(26,4.099537);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(27,3.700666);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(28,3.226313);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(29,2.870843);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(30,2.511628);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(31,10.98109);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(2,0.004712939);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(3,0.1320617);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(4,0.1810902);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(5,0.1818851);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(6,0.1939958);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(7,0.2063099);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(8,0.2190989);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(9,0.2282936);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(10,0.2370094);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(11,0.246678);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(12,0.2556354);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(13,0.2640237);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(14,0.2731295);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(15,0.2804214);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(16,0.2778144);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(17,0.215156);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(18,0.175882);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(19,0.1511818);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(20,0.133358);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(21,0.1210907);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(22,0.1110077);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(23,0.1018427);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(24,0.09557913);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(25,0.08983075);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(26,0.08192727);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(27,0.07746437);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(28,0.07216017);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(29,0.06880697);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(30,0.06407211);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(31,0.1358928);
   VbbHcc_alljet_Z_dR_stack_1->SetEntries(451639);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_alljet_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_alljet_Z_dR_stack_2 = new TH1D("VbbHcc_alljet_Z_dR_stack_2","",30,0,6);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(2,0.001163695);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(3,1.505963);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(4,2.660262);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(5,2.941761);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(6,3.491343);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(7,3.91938);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(8,4.199976);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(9,4.539535);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(10,4.947526);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(11,5.39766);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(12,5.811252);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(13,6.250431);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(14,6.612034);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(15,7.130574);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(16,7.044174);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(17,4.373326);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(18,3.110576);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(19,2.343915);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(20,1.879503);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(21,1.489738);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(22,1.205151);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(23,0.99907);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(24,0.8092875);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(25,0.6688829);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(26,0.5486885);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(27,0.4338498);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(28,0.3630813);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(29,0.2873291);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(30,0.2479247);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(31,0.8151345);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(2,0.0004636312);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(3,0.0169126);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(4,0.0224316);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(5,0.02361076);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(6,0.02570258);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(7,0.02726137);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(8,0.02822527);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(9,0.02936042);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(10,0.03062413);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(11,0.03200188);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(12,0.03319857);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(13,0.03444694);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(14,0.03542812);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(15,0.03677412);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(16,0.03654598);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(17,0.02877509);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(18,0.02424812);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(19,0.02104987);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(20,0.01885269);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(21,0.01675698);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(22,0.01508361);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(23,0.01372747);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(24,0.01235623);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(25,0.01122133);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(26,0.01015071);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(27,0.009047069);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(28,0.008254421);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(29,0.007337276);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(30,0.006837853);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(31,0.01234944);
   VbbHcc_alljet_Z_dR_stack_2->SetEntries(488414);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_alljet_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_Z_dR_stack_1","ZHcc","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_alljet_16->Modified();
   Z_dR_alljet_16->cd();
   Z_dR_alljet_16->SetSelected(Z_dR_alljet_16);
}
