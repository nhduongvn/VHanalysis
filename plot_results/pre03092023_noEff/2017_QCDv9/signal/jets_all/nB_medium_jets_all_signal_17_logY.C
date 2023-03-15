#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_jets_all_signal_17_logY()
{
//=========Macro generated from canvas: nB_medium_jets_all_signal_17/nB_medium_jets_all_signal_17
//=========  (Wed Mar  1 14:06:43 2023) by ROOT version 6.26/06
   TCanvas *nB_medium_jets_all_signal_17 = new TCanvas("nB_medium_jets_all_signal_17", "nB_medium_jets_all_signal_17",0,0,600,600);
   nB_medium_jets_all_signal_17->SetHighLightColor(2);
   nB_medium_jets_all_signal_17->Range(-2.683529,-0.1236527,11.21633,5.46863);
   nB_medium_jets_all_signal_17->SetFillColor(0);
   nB_medium_jets_all_signal_17->SetFillStyle(4000);
   nB_medium_jets_all_signal_17->SetBorderMode(0);
   nB_medium_jets_all_signal_17->SetBorderSize(2);
   nB_medium_jets_all_signal_17->SetLogy();
   nB_medium_jets_all_signal_17->SetLeftMargin(0.15709);
   nB_medium_jets_all_signal_17->SetRightMargin(0.1234783);
   nB_medium_jets_all_signal_17->SetBottomMargin(0.12);
   nB_medium_jets_all_signal_17->SetFrameFillStyle(1000);
   nB_medium_jets_all_signal_17->SetFrameBorderMode(0);
   nB_medium_jets_all_signal_17->SetFrameFillStyle(1000);
   nB_medium_jets_all_signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(46809.7);
   
   TH1F *st_stack_183 = new TH1F("st_stack_183","",10,-0.5,9.5);
   st_stack_183->SetMinimum(3.527128);
   st_stack_183->SetMaximum(81171.16);
   st_stack_183->SetDirectory(0);
   st_stack_183->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_183->SetLineColor(ci);
   st_stack_183->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_183->GetXaxis()->SetRange(1,10);
   st_stack_183->GetXaxis()->SetLabelFont(42);
   st_stack_183->GetXaxis()->SetTitleOffset(1);
   st_stack_183->GetXaxis()->SetTitleFont(42);
   st_stack_183->GetYaxis()->SetTitle("Events/1.0");
   st_stack_183->GetYaxis()->SetLabelFont(42);
   st_stack_183->GetYaxis()->SetTitleSize(0.037);
   st_stack_183->GetYaxis()->SetTitleFont(42);
   st_stack_183->GetZaxis()->SetLabelFont(42);
   st_stack_183->GetZaxis()->SetTitleOffset(1);
   st_stack_183->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_183);
   
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_1 = new TH1D("VbbHcc_jets_all_nB_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(1,415.3694);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(2,261.9075);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(3,110.4834);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(4,28.03346);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(5,3.926784);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(6,0.3571758);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(7,0.02222716);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(8,0.001245676);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(1,0.9014757);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(2,0.7126756);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(3,0.4612836);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(4,0.2320362);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(5,0.08646023);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(6,0.02632249);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(7,0.006449538);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(8,0.001245676);
   VbbHcc_jets_all_nB_medium_stack_1->SetEntries(499112);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_nB_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_2 = new TH1D("VbbHcc_jets_all_nB_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(1,52.7276);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(2,36.25822);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(3,18.28814);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(4,5.460773);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(5,0.8628607);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(6,0.08697985);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(7,0.007971329);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(8,0.0001082815);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(9,0.0002591961);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(1,0.1124848);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(2,0.09334591);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(3,0.06631488);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(4,0.03627726);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(5,0.01440673);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(6,0.004557199);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(7,0.001414132);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(8,0.0001082815);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(9,0.0002591961);
   VbbHcc_jets_all_nB_medium_stack_2->SetEntries(495010);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_nB_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_1","ZHcc","F");

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
   nB_medium_jets_all_signal_17->Modified();
   nB_medium_jets_all_signal_17->cd();
   nB_medium_jets_all_signal_17->SetSelected(nB_medium_jets_all_signal_17);
}
