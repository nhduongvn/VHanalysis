#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenL_signal_17()
{
//=========Macro generated from canvas: GenJet_all_nGenL_signal_17/GenJet_all_nGenL_signal_17
//=========  (Fri Mar 10 12:49:27 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenL_signal_17 = new TCanvas("GenJet_all_nGenL_signal_17", "GenJet_all_nGenL_signal_17",0,0,600,600);
   GenJet_all_nGenL_signal_17->SetHighLightColor(2);
   GenJet_all_nGenL_signal_17->Range(-4.867058,-55.26949,22.93266,405.3096);
   GenJet_all_nGenL_signal_17->SetFillColor(0);
   GenJet_all_nGenL_signal_17->SetFillStyle(4000);
   GenJet_all_nGenL_signal_17->SetBorderMode(0);
   GenJet_all_nGenL_signal_17->SetBorderSize(2);
   GenJet_all_nGenL_signal_17->SetLeftMargin(0.15709);
   GenJet_all_nGenL_signal_17->SetRightMargin(0.1234783);
   GenJet_all_nGenL_signal_17->SetBottomMargin(0.12);
   GenJet_all_nGenL_signal_17->SetFrameFillStyle(1000);
   GenJet_all_nGenL_signal_17->SetFrameBorderMode(0);
   GenJet_all_nGenL_signal_17->SetFrameFillStyle(1000);
   GenJet_all_nGenL_signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(359.2517);
   
   TH1F *st_stack_9 = new TH1F("st_stack_9","",20,-0.5,19.5);
   st_stack_9->SetMinimum(0);
   st_stack_9->SetMaximum(359.2517);
   st_stack_9->SetDirectory(0);
   st_stack_9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_9->SetLineColor(ci);
   st_stack_9->GetXaxis()->SetTitle("Gen l-jet multiplicity");
   st_stack_9->GetXaxis()->SetLabelFont(42);
   st_stack_9->GetXaxis()->SetTitleOffset(1);
   st_stack_9->GetXaxis()->SetTitleFont(42);
   st_stack_9->GetYaxis()->SetTitle("Event/1.0");
   st_stack_9->GetYaxis()->SetLabelFont(42);
   st_stack_9->GetYaxis()->SetTitleSize(0.037);
   st_stack_9->GetYaxis()->SetTitleFont(42);
   st_stack_9->GetZaxis()->SetLabelFont(42);
   st_stack_9->GetZaxis()->SetTitleOffset(1);
   st_stack_9->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_9);
   
   
   TH1D *GenJet_all_nGenL_stack_1 = new TH1D("GenJet_all_nGenL_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenL_stack_1->SetBinContent(1,161.1854);
   GenJet_all_nGenL_stack_1->SetBinContent(2,152.2691);
   GenJet_all_nGenL_stack_1->SetBinContent(3,264.8307);
   GenJet_all_nGenL_stack_1->SetBinContent(4,150.8744);
   GenJet_all_nGenL_stack_1->SetBinContent(5,61.77655);
   GenJet_all_nGenL_stack_1->SetBinContent(6,20.7773);
   GenJet_all_nGenL_stack_1->SetBinContent(7,6.170241);
   GenJet_all_nGenL_stack_1->SetBinContent(8,1.592362);
   GenJet_all_nGenL_stack_1->SetBinContent(9,0.4900555);
   GenJet_all_nGenL_stack_1->SetBinContent(10,0.1048055);
   GenJet_all_nGenL_stack_1->SetBinContent(11,0.02065302);
   GenJet_all_nGenL_stack_1->SetBinContent(12,0.009642207);
   GenJet_all_nGenL_stack_1->SetBinError(1,0.567135);
   GenJet_all_nGenL_stack_1->SetBinError(2,0.5439816);
   GenJet_all_nGenL_stack_1->SetBinError(3,0.7206048);
   GenJet_all_nGenL_stack_1->SetBinError(4,0.5369381);
   GenJet_all_nGenL_stack_1->SetBinError(5,0.3407247);
   GenJet_all_nGenL_stack_1->SetBinError(6,0.1963709);
   GenJet_all_nGenL_stack_1->SetBinError(7,0.1074013);
   GenJet_all_nGenL_stack_1->SetBinError(8,0.05415395);
   GenJet_all_nGenL_stack_1->SetBinError(9,0.03008735);
   GenJet_all_nGenL_stack_1->SetBinError(10,0.01356792);
   GenJet_all_nGenL_stack_1->SetBinError(11,0.006081697);
   GenJet_all_nGenL_stack_1->SetBinError(12,0.004351764);
   GenJet_all_nGenL_stack_1->SetEntries(499112);

   ci = TColor::GetColor("#cc0000");
   GenJet_all_nGenL_stack_1->SetFillColor(ci);
   GenJet_all_nGenL_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenL_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenL_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenL_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenL_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenL_stack_1,"");
   
   TH1D *GenJet_all_nGenL_stack_2 = new TH1D("GenJet_all_nGenL_stack_2","",20,-0.5,19.5);
   GenJet_all_nGenL_stack_2->SetBinContent(1,17.12807);
   GenJet_all_nGenL_stack_2->SetBinContent(2,19.31099);
   GenJet_all_nGenL_stack_2->SetBinContent(3,33.34816);
   GenJet_all_nGenL_stack_2->SetBinContent(4,25.57884);
   GenJet_all_nGenL_stack_2->SetBinContent(5,12.0646);
   GenJet_all_nGenL_stack_2->SetBinContent(6,4.376141);
   GenJet_all_nGenL_stack_2->SetBinContent(7,1.351837);
   GenJet_all_nGenL_stack_2->SetBinContent(8,0.3969816);
   GenJet_all_nGenL_stack_2->SetBinContent(9,0.1022251);
   GenJet_all_nGenL_stack_2->SetBinContent(10,0.02472541);
   GenJet_all_nGenL_stack_2->SetBinContent(11,0.008437724);
   GenJet_all_nGenL_stack_2->SetBinContent(12,0.001651415);
   GenJet_all_nGenL_stack_2->SetBinContent(13,0.0002355801);
   GenJet_all_nGenL_stack_2->SetBinError(1,0.06428278);
   GenJet_all_nGenL_stack_2->SetBinError(2,0.06813068);
   GenJet_all_nGenL_stack_2->SetBinError(3,0.08959764);
   GenJet_all_nGenL_stack_2->SetBinError(4,0.07831299);
   GenJet_all_nGenL_stack_2->SetBinError(5,0.05368824);
   GenJet_all_nGenL_stack_2->SetBinError(6,0.0323207);
   GenJet_all_nGenL_stack_2->SetBinError(7,0.01791188);
   GenJet_all_nGenL_stack_2->SetBinError(8,0.009757172);
   GenJet_all_nGenL_stack_2->SetBinError(9,0.004927157);
   GenJet_all_nGenL_stack_2->SetBinError(10,0.002412439);
   GenJet_all_nGenL_stack_2->SetBinError(11,0.001418604);
   GenJet_all_nGenL_stack_2->SetBinError(12,0.0006367536);
   GenJet_all_nGenL_stack_2->SetBinError(13,0.0002355801);
   GenJet_all_nGenL_stack_2->SetEntries(495010);

   ci = TColor::GetColor("#00cc00");
   GenJet_all_nGenL_stack_2->SetFillColor(ci);
   GenJet_all_nGenL_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenL_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenL_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenL_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenL_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_all_nGenL_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("GenJet_all_nGenL_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_all_nGenL_signal_17->Modified();
   GenJet_all_nGenL_signal_17->cd();
   GenJet_all_nGenL_signal_17->SetSelected(GenJet_all_nGenL_signal_17);
}
