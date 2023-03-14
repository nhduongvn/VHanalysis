#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenGlu_signal_16_logY()
{
//=========Macro generated from canvas: GenJet_all_nGenGlu_signal_16/GenJet_all_nGenGlu_signal_16
//=========  (Fri Mar 10 12:49:21 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenGlu_signal_16 = new TCanvas("GenJet_all_nGenGlu_signal_16", "GenJet_all_nGenGlu_signal_16",0,0,600,600);
   GenJet_all_nGenGlu_signal_16->SetHighLightColor(2);
   GenJet_all_nGenGlu_signal_16->Range(-4.867058,-0.8096344,22.93266,3.027266);
   GenJet_all_nGenGlu_signal_16->SetFillColor(0);
   GenJet_all_nGenGlu_signal_16->SetFillStyle(4000);
   GenJet_all_nGenGlu_signal_16->SetBorderMode(0);
   GenJet_all_nGenGlu_signal_16->SetBorderSize(2);
   GenJet_all_nGenGlu_signal_16->SetLogy();
   GenJet_all_nGenGlu_signal_16->SetLeftMargin(0.15709);
   GenJet_all_nGenGlu_signal_16->SetRightMargin(0.1234783);
   GenJet_all_nGenGlu_signal_16->SetBottomMargin(0.12);
   GenJet_all_nGenGlu_signal_16->SetFrameFillStyle(1000);
   GenJet_all_nGenGlu_signal_16->SetFrameBorderMode(0);
   GenJet_all_nGenGlu_signal_16->SetFrameFillStyle(1000);
   GenJet_all_nGenGlu_signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(294.6238);
   
   TH1F *st_stack_25 = new TH1F("st_stack_25","",20,-0.5,19.5);
   st_stack_25->SetMinimum(0.4475006);
   st_stack_25->SetMaximum(440.1248);
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
   st_stack_25->GetYaxis()->SetTitle("Event/1.0");
   st_stack_25->GetYaxis()->SetLabelFont(42);
   st_stack_25->GetYaxis()->SetTitleSize(0.037);
   st_stack_25->GetYaxis()->SetTitleFont(42);
   st_stack_25->GetZaxis()->SetLabelFont(42);
   st_stack_25->GetZaxis()->SetTitleOffset(1);
   st_stack_25->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_25);
   
   
   TH1D *GenJet_all_nGenGlu_stack_1 = new TH1D("GenJet_all_nGenGlu_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenGlu_stack_1->SetBinContent(1,212.0153);
   GenJet_all_nGenGlu_stack_1->SetBinContent(2,217.5685);
   GenJet_all_nGenGlu_stack_1->SetBinContent(3,132.8125);
   GenJet_all_nGenGlu_stack_1->SetBinContent(4,64.8949);
   GenJet_all_nGenGlu_stack_1->SetBinContent(5,27.72405);
   GenJet_all_nGenGlu_stack_1->SetBinContent(6,10.68262);
   GenJet_all_nGenGlu_stack_1->SetBinContent(7,3.994934);
   GenJet_all_nGenGlu_stack_1->SetBinContent(8,1.334969);
   GenJet_all_nGenGlu_stack_1->SetBinContent(9,0.4313618);
   GenJet_all_nGenGlu_stack_1->SetBinContent(10,0.1517694);
   GenJet_all_nGenGlu_stack_1->SetBinContent(11,0.04593474);
   GenJet_all_nGenGlu_stack_1->SetBinContent(12,0.01187477);
   GenJet_all_nGenGlu_stack_1->SetBinContent(13,0.002903028);
   GenJet_all_nGenGlu_stack_1->SetBinContent(14,0.002857902);
   GenJet_all_nGenGlu_stack_1->SetBinError(1,0.8310751);
   GenJet_all_nGenGlu_stack_1->SetBinError(2,0.8206295);
   GenJet_all_nGenGlu_stack_1->SetBinError(3,0.6331135);
   GenJet_all_nGenGlu_stack_1->SetBinError(4,0.4398531);
   GenJet_all_nGenGlu_stack_1->SetBinError(5,0.2860042);
   GenJet_all_nGenGlu_stack_1->SetBinError(6,0.1770945);
   GenJet_all_nGenGlu_stack_1->SetBinError(7,0.107907);
   GenJet_all_nGenGlu_stack_1->SetBinError(8,0.06247024);
   GenJet_all_nGenGlu_stack_1->SetBinError(9,0.03513425);
   GenJet_all_nGenGlu_stack_1->SetBinError(10,0.02097238);
   GenJet_all_nGenGlu_stack_1->SetBinError(11,0.01152355);
   GenJet_all_nGenGlu_stack_1->SetBinError(12,0.005947191);
   GenJet_all_nGenGlu_stack_1->SetBinError(13,0.002903028);
   GenJet_all_nGenGlu_stack_1->SetBinError(14,0.002857902);
   GenJet_all_nGenGlu_stack_1->SetEntries(249005);

   ci = TColor::GetColor("#cc0000");
   GenJet_all_nGenGlu_stack_1->SetFillColor(ci);
   GenJet_all_nGenGlu_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenGlu_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenGlu_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenGlu_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenGlu_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenGlu_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenGlu_stack_1,"");
   
   TH1D *GenJet_all_nGenGlu_stack_2 = new TH1D("GenJet_all_nGenGlu_stack_2","",20,-0.5,19.5);
   GenJet_all_nGenGlu_stack_2->SetBinContent(1,15.1707);
   GenJet_all_nGenGlu_stack_2->SetBinContent(2,26.9692);
   GenJet_all_nGenGlu_stack_2->SetBinContent(3,23.75927);
   GenJet_all_nGenGlu_stack_2->SetBinContent(4,14.85971);
   GenJet_all_nGenGlu_stack_2->SetBinContent(5,7.368694);
   GenJet_all_nGenGlu_stack_2->SetBinContent(6,3.189495);
   GenJet_all_nGenGlu_stack_2->SetBinContent(7,1.198545);
   GenJet_all_nGenGlu_stack_2->SetBinContent(8,0.4291195);
   GenJet_all_nGenGlu_stack_2->SetBinContent(9,0.1522142);
   GenJet_all_nGenGlu_stack_2->SetBinContent(10,0.04143011);
   GenJet_all_nGenGlu_stack_2->SetBinContent(11,0.01438664);
   GenJet_all_nGenGlu_stack_2->SetBinContent(12,0.002251177);
   GenJet_all_nGenGlu_stack_2->SetBinContent(13,0.001503764);
   GenJet_all_nGenGlu_stack_2->SetBinContent(14,0.001595401);
   GenJet_all_nGenGlu_stack_2->SetBinContent(16,0.0003720141);
   GenJet_all_nGenGlu_stack_2->SetBinError(1,0.07615909);
   GenJet_all_nGenGlu_stack_2->SetBinError(2,0.1015582);
   GenJet_all_nGenGlu_stack_2->SetBinError(3,0.09527565);
   GenJet_all_nGenGlu_stack_2->SetBinError(4,0.0752746);
   GenJet_all_nGenGlu_stack_2->SetBinError(5,0.05300798);
   GenJet_all_nGenGlu_stack_2->SetBinError(6,0.03487018);
   GenJet_all_nGenGlu_stack_2->SetBinError(7,0.02133146);
   GenJet_all_nGenGlu_stack_2->SetBinError(8,0.01274623);
   GenJet_all_nGenGlu_stack_2->SetBinError(9,0.007605302);
   GenJet_all_nGenGlu_stack_2->SetBinError(10,0.003966818);
   GenJet_all_nGenGlu_stack_2->SetBinError(11,0.002341344);
   GenJet_all_nGenGlu_stack_2->SetBinError(12,0.0009267641);
   GenJet_all_nGenGlu_stack_2->SetBinError(13,0.0007533297);
   GenJet_all_nGenGlu_stack_2->SetBinError(14,0.0007985359);
   GenJet_all_nGenGlu_stack_2->SetBinError(16,0.0003720141);
   GenJet_all_nGenGlu_stack_2->SetEntries(248576);

   ci = TColor::GetColor("#00cc00");
   GenJet_all_nGenGlu_stack_2->SetFillColor(ci);
   GenJet_all_nGenGlu_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenGlu_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenGlu_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenGlu_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenGlu_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenGlu_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenGlu_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_all_nGenGlu_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GenJet_all_nGenGlu_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_all_nGenGlu_signal_16->Modified();
   GenJet_all_nGenGlu_signal_16->cd();
   GenJet_all_nGenGlu_signal_16->SetSelected(GenJet_all_nGenGlu_signal_16);
}
