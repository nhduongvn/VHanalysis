#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenGlu_all__signal_16()
{
//=========Macro generated from canvas: nGenGlu_all__signal_16/nGenGlu_all__signal_16
//=========  (Mon Mar  6 10:53:08 2023) by ROOT version 6.26/06
   TCanvas *nGenGlu_all__signal_16 = new TCanvas("nGenGlu_all__signal_16", "nGenGlu_all__signal_16",0,0,600,600);
   nGenGlu_all__signal_16->SetHighLightColor(2);
   nGenGlu_all__signal_16->Range(-3.775293,-39.50225,17.0745,289.6832);
   nGenGlu_all__signal_16->SetFillColor(0);
   nGenGlu_all__signal_16->SetFillStyle(4000);
   nGenGlu_all__signal_16->SetBorderMode(0);
   nGenGlu_all__signal_16->SetBorderSize(2);
   nGenGlu_all__signal_16->SetLeftMargin(0.15709);
   nGenGlu_all__signal_16->SetRightMargin(0.1234783);
   nGenGlu_all__signal_16->SetBottomMargin(0.12);
   nGenGlu_all__signal_16->SetFrameFillStyle(1000);
   nGenGlu_all__signal_16->SetFrameBorderMode(0);
   nGenGlu_all__signal_16->SetFrameFillStyle(1000);
   nGenGlu_all__signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_25 = new TH1F("st_stack_25","",15,-0.5,14.5);
   st_stack_25->SetMinimum(0);
   st_stack_25->SetMaximum(256.7646);
   st_stack_25->SetDirectory(0);
   st_stack_25->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_25->SetLineColor(ci);
   st_stack_25->GetXaxis()->SetTitle("Gen gluon jet multiplicity");
   st_stack_25->GetXaxis()->SetLabelFont(42);
   st_stack_25->GetXaxis()->SetTitleOffset(1);
   st_stack_25->GetXaxis()->SetTitleFont(42);
   st_stack_25->GetYaxis()->SetTitle("Events/1.0");
   st_stack_25->GetYaxis()->SetLabelFont(42);
   st_stack_25->GetYaxis()->SetTitleSize(0.037);
   st_stack_25->GetYaxis()->SetTitleFont(42);
   st_stack_25->GetZaxis()->SetLabelFont(42);
   st_stack_25->GetZaxis()->SetTitleOffset(1);
   st_stack_25->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_25);
   
   
   TH1D *nGenGlu_all_stack_1 = new TH1D("nGenGlu_all_stack_1","",15,-0.5,14.5);
   nGenGlu_all_stack_1->SetBinContent(1,212.0153);
   nGenGlu_all_stack_1->SetBinContent(2,217.5685);
   nGenGlu_all_stack_1->SetBinContent(3,132.8125);
   nGenGlu_all_stack_1->SetBinContent(4,64.8949);
   nGenGlu_all_stack_1->SetBinContent(5,27.72405);
   nGenGlu_all_stack_1->SetBinContent(6,10.68262);
   nGenGlu_all_stack_1->SetBinContent(7,3.994934);
   nGenGlu_all_stack_1->SetBinContent(8,1.334969);
   nGenGlu_all_stack_1->SetBinContent(9,0.4313618);
   nGenGlu_all_stack_1->SetBinContent(10,0.1517694);
   nGenGlu_all_stack_1->SetBinContent(11,0.04593474);
   nGenGlu_all_stack_1->SetBinContent(12,0.01187477);
   nGenGlu_all_stack_1->SetBinContent(13,0.002903028);
   nGenGlu_all_stack_1->SetBinContent(14,0.002857902);
   nGenGlu_all_stack_1->SetBinError(1,0.8310751);
   nGenGlu_all_stack_1->SetBinError(2,0.8206295);
   nGenGlu_all_stack_1->SetBinError(3,0.6331135);
   nGenGlu_all_stack_1->SetBinError(4,0.4398531);
   nGenGlu_all_stack_1->SetBinError(5,0.2860042);
   nGenGlu_all_stack_1->SetBinError(6,0.1770945);
   nGenGlu_all_stack_1->SetBinError(7,0.107907);
   nGenGlu_all_stack_1->SetBinError(8,0.06247024);
   nGenGlu_all_stack_1->SetBinError(9,0.03513425);
   nGenGlu_all_stack_1->SetBinError(10,0.02097238);
   nGenGlu_all_stack_1->SetBinError(11,0.01152355);
   nGenGlu_all_stack_1->SetBinError(12,0.005947191);
   nGenGlu_all_stack_1->SetBinError(13,0.002903028);
   nGenGlu_all_stack_1->SetBinError(14,0.002857902);
   nGenGlu_all_stack_1->SetEntries(249005);

   ci = TColor::GetColor("#cc0000");
   nGenGlu_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenGlu_all_stack_1->SetLineColor(ci);
   nGenGlu_all_stack_1->GetXaxis()->SetRange(1,15);
   nGenGlu_all_stack_1->GetXaxis()->SetLabelFont(42);
   nGenGlu_all_stack_1->GetXaxis()->SetTitleOffset(1);
   nGenGlu_all_stack_1->GetXaxis()->SetTitleFont(42);
   nGenGlu_all_stack_1->GetYaxis()->SetLabelFont(42);
   nGenGlu_all_stack_1->GetYaxis()->SetTitleFont(42);
   nGenGlu_all_stack_1->GetZaxis()->SetLabelFont(42);
   nGenGlu_all_stack_1->GetZaxis()->SetTitleOffset(1);
   nGenGlu_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(nGenGlu_all_stack_1,"");
   
   TH1D *nGenGlu_all_stack_2 = new TH1D("nGenGlu_all_stack_2","",15,-0.5,14.5);
   nGenGlu_all_stack_2->SetBinContent(1,15.1707);
   nGenGlu_all_stack_2->SetBinContent(2,26.9692);
   nGenGlu_all_stack_2->SetBinContent(3,23.75927);
   nGenGlu_all_stack_2->SetBinContent(4,14.85971);
   nGenGlu_all_stack_2->SetBinContent(5,7.368694);
   nGenGlu_all_stack_2->SetBinContent(6,3.189495);
   nGenGlu_all_stack_2->SetBinContent(7,1.198545);
   nGenGlu_all_stack_2->SetBinContent(8,0.4291195);
   nGenGlu_all_stack_2->SetBinContent(9,0.1522142);
   nGenGlu_all_stack_2->SetBinContent(10,0.04143011);
   nGenGlu_all_stack_2->SetBinContent(11,0.01438664);
   nGenGlu_all_stack_2->SetBinContent(12,0.002251177);
   nGenGlu_all_stack_2->SetBinContent(13,0.001503764);
   nGenGlu_all_stack_2->SetBinContent(14,0.001595401);
   nGenGlu_all_stack_2->SetBinContent(16,0.0003720141);
   nGenGlu_all_stack_2->SetBinError(1,0.07615909);
   nGenGlu_all_stack_2->SetBinError(2,0.1015582);
   nGenGlu_all_stack_2->SetBinError(3,0.09527565);
   nGenGlu_all_stack_2->SetBinError(4,0.0752746);
   nGenGlu_all_stack_2->SetBinError(5,0.05300798);
   nGenGlu_all_stack_2->SetBinError(6,0.03487018);
   nGenGlu_all_stack_2->SetBinError(7,0.02133146);
   nGenGlu_all_stack_2->SetBinError(8,0.01274623);
   nGenGlu_all_stack_2->SetBinError(9,0.007605302);
   nGenGlu_all_stack_2->SetBinError(10,0.003966818);
   nGenGlu_all_stack_2->SetBinError(11,0.002341344);
   nGenGlu_all_stack_2->SetBinError(12,0.0009267641);
   nGenGlu_all_stack_2->SetBinError(13,0.0007533297);
   nGenGlu_all_stack_2->SetBinError(14,0.0007985359);
   nGenGlu_all_stack_2->SetBinError(16,0.0003720141);
   nGenGlu_all_stack_2->SetEntries(248576);

   ci = TColor::GetColor("#00cc00");
   nGenGlu_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenGlu_all_stack_2->SetLineColor(ci);
   nGenGlu_all_stack_2->GetXaxis()->SetRange(1,15);
   nGenGlu_all_stack_2->GetXaxis()->SetLabelFont(42);
   nGenGlu_all_stack_2->GetXaxis()->SetTitleOffset(1);
   nGenGlu_all_stack_2->GetXaxis()->SetTitleFont(42);
   nGenGlu_all_stack_2->GetYaxis()->SetLabelFont(42);
   nGenGlu_all_stack_2->GetYaxis()->SetTitleFont(42);
   nGenGlu_all_stack_2->GetZaxis()->SetLabelFont(42);
   nGenGlu_all_stack_2->GetZaxis()->SetTitleOffset(1);
   nGenGlu_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(nGenGlu_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nGenGlu_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("nGenGlu_all_stack_1","ZHcc","F");

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
   nGenGlu_all__signal_16->Modified();
   nGenGlu_all__signal_16->cd();
   nGenGlu_all__signal_16->SetSelected(nGenGlu_all__signal_16);
}
