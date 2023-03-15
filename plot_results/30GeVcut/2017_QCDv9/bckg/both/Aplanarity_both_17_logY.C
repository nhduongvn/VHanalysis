#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_17_logY()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Tue Feb 14 16:02:04 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2183529,-1.183584,1.171633,11.04751);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetFillStyle(4000);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLogy();
   Aplanarity_both_17->SetLeftMargin(0.15709);
   Aplanarity_both_17->SetRightMargin(0.1234783);
   Aplanarity_both_17->SetBottomMargin(0.12);
   Aplanarity_both_17->SetFrameFillStyle(1000);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameFillStyle(1000);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(2.491061e+09);
   
   TH1F *st_stack_190 = new TH1F("st_stack_190","",50,0,1);
   st_stack_190->SetMinimum(1.923746);
   st_stack_190->SetMaximum(6.674243e+09);
   st_stack_190->SetDirectory(0);
   st_stack_190->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_190->SetLineColor(ci);
   st_stack_190->GetXaxis()->SetTitle("Aplanarity");
   st_stack_190->GetXaxis()->SetRange(1,50);
   st_stack_190->GetXaxis()->SetLabelFont(42);
   st_stack_190->GetXaxis()->SetTitleOffset(1);
   st_stack_190->GetXaxis()->SetTitleFont(42);
   st_stack_190->GetYaxis()->SetTitle("Events/0.02");
   st_stack_190->GetYaxis()->SetLabelFont(42);
   st_stack_190->GetYaxis()->SetTitleSize(0.037);
   st_stack_190->GetYaxis()->SetTitleFont(42);
   st_stack_190->GetZaxis()->SetLabelFont(42);
   st_stack_190->GetZaxis()->SetTitleOffset(1);
   st_stack_190->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_190);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,2.395969e+07);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,1.121883e+07);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,5844635);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,3284941);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,1853465);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,1257737);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,857811.8);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,475679.6);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,384499.7);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,230760.5);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,140799.6);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,103932.6);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,66597.35);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,37031.78);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,22602.6);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,24890.27);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,18314.14);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,5436.601);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,2269.638);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(20,1874.314);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(21,41.0434);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,323280.6);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,253949.2);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,185474.7);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,142147.6);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,96460.73);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,89831.05);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,79447.03);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,41101.31);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,57288.8);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,38409.41);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,18343.96);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,23177.81);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,19726.18);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,6363.391);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,4556.16);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,12697.78);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,14933.94);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,2281.654);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,773.2527);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(20,1458.911);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(21,25.22362);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(539612);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(0,0.2756689);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,950922.6);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,673082.7);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,450151.9);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,309323);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,217762.6);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,155661.7);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,112189.2);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,81404.61);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,59110.07);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,42723.73);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,30594.67);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,21807.85);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,15234.94);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,10444.4);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,7001.513);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,4553.646);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,2807.586);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,1660.87);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(19,923.4504);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(20,471.2621);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(21,205.6762);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(22,78.16448);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(23,19.73258);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(24,3.7051);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(25,0.07282258);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(0,0.1418976);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,263.3761);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,223.0859);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,182.8568);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,151.7644);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,127.4305);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,107.8157);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,91.56046);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,78.01057);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,66.53216);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,56.56988);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,47.88346);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,40.46341);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,33.80722);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,28.01212);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,22.94692);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,18.49662);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,14.52227);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,11.16511);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(19,8.332123);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(20,5.939917);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(21,3.94568);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(22,2.431593);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(23,1.226666);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(24,0.539571);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(25,0.07282258);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(4.685053e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_1","QCD","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_17->Modified();
   Aplanarity_both_17->cd();
   Aplanarity_both_17->SetSelected(Aplanarity_both_17);
}
