#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenL_all__signal_17()
{
//=========Macro generated from canvas: nGenL_all__signal_17/nGenL_all__signal_17
//=========  (Mon Mar  6 10:53:08 2023) by ROOT version 6.26/06
   TCanvas *nGenL_all__signal_17 = new TCanvas("nGenL_all__signal_17", "nGenL_all__signal_17",0,0,600,600);
   nGenL_all__signal_17->SetHighLightColor(2);
   nGenL_all__signal_17->Range(-3.775293,-48.16736,17.0745,353.2273);
   nGenL_all__signal_17->SetFillColor(0);
   nGenL_all__signal_17->SetFillStyle(4000);
   nGenL_all__signal_17->SetBorderMode(0);
   nGenL_all__signal_17->SetBorderSize(2);
   nGenL_all__signal_17->SetLeftMargin(0.15709);
   nGenL_all__signal_17->SetRightMargin(0.1234783);
   nGenL_all__signal_17->SetBottomMargin(0.12);
   nGenL_all__signal_17->SetFrameFillStyle(1000);
   nGenL_all__signal_17->SetFrameBorderMode(0);
   nGenL_all__signal_17->SetFrameFillStyle(1000);
   nGenL_all__signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_9 = new TH1F("st_stack_9","",15,-0.5,14.5);
   st_stack_9->SetMinimum(0);
   st_stack_9->SetMaximum(313.0878);
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
   st_stack_9->GetYaxis()->SetTitle("Events/1.0");
   st_stack_9->GetYaxis()->SetLabelFont(42);
   st_stack_9->GetYaxis()->SetTitleSize(0.037);
   st_stack_9->GetYaxis()->SetTitleFont(42);
   st_stack_9->GetZaxis()->SetLabelFont(42);
   st_stack_9->GetZaxis()->SetTitleOffset(1);
   st_stack_9->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_9);
   
   
   TH1D *nGenL_all_stack_1 = new TH1D("nGenL_all_stack_1","",15,-0.5,14.5);
   nGenL_all_stack_1->SetBinContent(1,161.1854);
   nGenL_all_stack_1->SetBinContent(2,152.2691);
   nGenL_all_stack_1->SetBinContent(3,264.8307);
   nGenL_all_stack_1->SetBinContent(4,150.8744);
   nGenL_all_stack_1->SetBinContent(5,61.77655);
   nGenL_all_stack_1->SetBinContent(6,20.7773);
   nGenL_all_stack_1->SetBinContent(7,6.170241);
   nGenL_all_stack_1->SetBinContent(8,1.592362);
   nGenL_all_stack_1->SetBinContent(9,0.4900555);
   nGenL_all_stack_1->SetBinContent(10,0.1048055);
   nGenL_all_stack_1->SetBinContent(11,0.02065302);
   nGenL_all_stack_1->SetBinContent(12,0.009642207);
   nGenL_all_stack_1->SetBinError(1,0.567135);
   nGenL_all_stack_1->SetBinError(2,0.5439816);
   nGenL_all_stack_1->SetBinError(3,0.7206048);
   nGenL_all_stack_1->SetBinError(4,0.5369381);
   nGenL_all_stack_1->SetBinError(5,0.3407247);
   nGenL_all_stack_1->SetBinError(6,0.1963709);
   nGenL_all_stack_1->SetBinError(7,0.1074013);
   nGenL_all_stack_1->SetBinError(8,0.05415395);
   nGenL_all_stack_1->SetBinError(9,0.03008735);
   nGenL_all_stack_1->SetBinError(10,0.01356792);
   nGenL_all_stack_1->SetBinError(11,0.006081697);
   nGenL_all_stack_1->SetBinError(12,0.004351764);
   nGenL_all_stack_1->SetEntries(499112);

   ci = TColor::GetColor("#cc0000");
   nGenL_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenL_all_stack_1->SetLineColor(ci);
   nGenL_all_stack_1->GetXaxis()->SetRange(1,15);
   nGenL_all_stack_1->GetXaxis()->SetLabelFont(42);
   nGenL_all_stack_1->GetXaxis()->SetTitleOffset(1);
   nGenL_all_stack_1->GetXaxis()->SetTitleFont(42);
   nGenL_all_stack_1->GetYaxis()->SetLabelFont(42);
   nGenL_all_stack_1->GetYaxis()->SetTitleFont(42);
   nGenL_all_stack_1->GetZaxis()->SetLabelFont(42);
   nGenL_all_stack_1->GetZaxis()->SetTitleOffset(1);
   nGenL_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(nGenL_all_stack_1,"");
   
   TH1D *nGenL_all_stack_2 = new TH1D("nGenL_all_stack_2","",15,-0.5,14.5);
   nGenL_all_stack_2->SetBinContent(1,17.12807);
   nGenL_all_stack_2->SetBinContent(2,19.31099);
   nGenL_all_stack_2->SetBinContent(3,33.34816);
   nGenL_all_stack_2->SetBinContent(4,25.57884);
   nGenL_all_stack_2->SetBinContent(5,12.0646);
   nGenL_all_stack_2->SetBinContent(6,4.376141);
   nGenL_all_stack_2->SetBinContent(7,1.351837);
   nGenL_all_stack_2->SetBinContent(8,0.3969816);
   nGenL_all_stack_2->SetBinContent(9,0.1022251);
   nGenL_all_stack_2->SetBinContent(10,0.02472541);
   nGenL_all_stack_2->SetBinContent(11,0.008437724);
   nGenL_all_stack_2->SetBinContent(12,0.001651415);
   nGenL_all_stack_2->SetBinContent(13,0.0002355801);
   nGenL_all_stack_2->SetBinError(1,0.06428278);
   nGenL_all_stack_2->SetBinError(2,0.06813068);
   nGenL_all_stack_2->SetBinError(3,0.08959764);
   nGenL_all_stack_2->SetBinError(4,0.07831299);
   nGenL_all_stack_2->SetBinError(5,0.05368824);
   nGenL_all_stack_2->SetBinError(6,0.0323207);
   nGenL_all_stack_2->SetBinError(7,0.01791188);
   nGenL_all_stack_2->SetBinError(8,0.009757172);
   nGenL_all_stack_2->SetBinError(9,0.004927157);
   nGenL_all_stack_2->SetBinError(10,0.002412439);
   nGenL_all_stack_2->SetBinError(11,0.001418604);
   nGenL_all_stack_2->SetBinError(12,0.0006367536);
   nGenL_all_stack_2->SetBinError(13,0.0002355801);
   nGenL_all_stack_2->SetEntries(495010);

   ci = TColor::GetColor("#00cc00");
   nGenL_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenL_all_stack_2->SetLineColor(ci);
   nGenL_all_stack_2->GetXaxis()->SetRange(1,15);
   nGenL_all_stack_2->GetXaxis()->SetLabelFont(42);
   nGenL_all_stack_2->GetXaxis()->SetTitleOffset(1);
   nGenL_all_stack_2->GetXaxis()->SetTitleFont(42);
   nGenL_all_stack_2->GetYaxis()->SetLabelFont(42);
   nGenL_all_stack_2->GetYaxis()->SetTitleFont(42);
   nGenL_all_stack_2->GetZaxis()->SetLabelFont(42);
   nGenL_all_stack_2->GetZaxis()->SetTitleOffset(1);
   nGenL_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(nGenL_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nGenL_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("nGenL_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nGenL_all__signal_17->Modified();
   nGenL_all__signal_17->cd();
   nGenL_all__signal_17->SetSelected(nGenL_all__signal_17);
}
