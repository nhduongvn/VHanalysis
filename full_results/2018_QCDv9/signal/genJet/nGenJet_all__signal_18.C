#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenJet_all__signal_18()
{
//=========Macro generated from canvas: nGenJet_all__signal_18/nGenJet_all__signal_18
//=========  (Mon Mar  6 10:53:08 2023) by ROOT version 6.26/06
   TCanvas *nGenJet_all__signal_18 = new TCanvas("nGenJet_all__signal_18", "nGenJet_all__signal_18",0,0,600,600);
   nGenJet_all__signal_18->SetHighLightColor(2);
   nGenJet_all__signal_18->Range(-3.775293,-49.24351,17.0745,361.119);
   nGenJet_all__signal_18->SetFillColor(0);
   nGenJet_all__signal_18->SetFillStyle(4000);
   nGenJet_all__signal_18->SetBorderMode(0);
   nGenJet_all__signal_18->SetBorderSize(2);
   nGenJet_all__signal_18->SetLeftMargin(0.15709);
   nGenJet_all__signal_18->SetRightMargin(0.1234783);
   nGenJet_all__signal_18->SetBottomMargin(0.12);
   nGenJet_all__signal_18->SetFrameFillStyle(1000);
   nGenJet_all__signal_18->SetFrameBorderMode(0);
   nGenJet_all__signal_18->SetFrameFillStyle(1000);
   nGenJet_all__signal_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_5 = new TH1F("st_stack_5","",15,-0.5,14.5);
   st_stack_5->SetMinimum(0);
   st_stack_5->SetMaximum(320.0828);
   st_stack_5->SetDirectory(0);
   st_stack_5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_5->SetLineColor(ci);
   st_stack_5->GetXaxis()->SetTitle("Gen Jet multiplicity");
   st_stack_5->GetXaxis()->SetLabelFont(42);
   st_stack_5->GetXaxis()->SetTitleOffset(1);
   st_stack_5->GetXaxis()->SetTitleFont(42);
   st_stack_5->GetYaxis()->SetTitle("Events/1.0");
   st_stack_5->GetYaxis()->SetLabelFont(42);
   st_stack_5->GetYaxis()->SetTitleSize(0.037);
   st_stack_5->GetYaxis()->SetTitleFont(42);
   st_stack_5->GetZaxis()->SetLabelFont(42);
   st_stack_5->GetZaxis()->SetTitleOffset(1);
   st_stack_5->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_5);
   
   
   TH1D *nGenJet_all_stack_1 = new TH1D("nGenJet_all_stack_1","",15,-0.5,14.5);
   nGenJet_all_stack_1->SetBinContent(1,0.002133138);
   nGenJet_all_stack_1->SetBinContent(2,0.03164037);
   nGenJet_all_stack_1->SetBinContent(3,2.652365);
   nGenJet_all_stack_1->SetBinContent(4,43.51251);
   nGenJet_all_stack_1->SetBinContent(5,214.1033);
   nGenJet_all_stack_1->SetBinContent(6,278.391);
   nGenJet_all_stack_1->SetBinContent(7,243.405);
   nGenJet_all_stack_1->SetBinContent(8,175.1211);
   nGenJet_all_stack_1->SetBinContent(9,114.1298);
   nGenJet_all_stack_1->SetBinContent(10,66.06294);
   nGenJet_all_stack_1->SetBinContent(11,36.96729);
   nGenJet_all_stack_1->SetBinContent(12,20.06195);
   nGenJet_all_stack_1->SetBinContent(13,9.946769);
   nGenJet_all_stack_1->SetBinContent(14,4.884041);
   nGenJet_all_stack_1->SetBinContent(15,2.259468);
   nGenJet_all_stack_1->SetBinContent(16,1.935426);
   nGenJet_all_stack_1->SetBinError(1,0.002133138);
   nGenJet_all_stack_1->SetBinError(2,0.009749948);
   nGenJet_all_stack_1->SetBinError(3,0.0912396);
   nGenJet_all_stack_1->SetBinError(4,0.3778992);
   nGenJet_all_stack_1->SetBinError(5,0.8616224);
   nGenJet_all_stack_1->SetBinError(6,0.9713699);
   nGenJet_all_stack_1->SetBinError(7,0.894656);
   nGenJet_all_stack_1->SetBinError(8,0.7521963);
   nGenJet_all_stack_1->SetBinError(9,0.6071105);
   nGenJet_all_stack_1->SetBinError(10,0.4441857);
   nGenJet_all_stack_1->SetBinError(11,0.3291773);
   nGenJet_all_stack_1->SetBinError(12,0.2464516);
   nGenJet_all_stack_1->SetBinError(13,0.2019684);
   nGenJet_all_stack_1->SetBinError(14,0.1311168);
   nGenJet_all_stack_1->SetBinError(15,0.07926068);
   nGenJet_all_stack_1->SetBinError(16,0.07361984);
   nGenJet_all_stack_1->SetEntries(498953);

   ci = TColor::GetColor("#cc0000");
   nGenJet_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenJet_all_stack_1->SetLineColor(ci);
   nGenJet_all_stack_1->GetXaxis()->SetRange(1,15);
   nGenJet_all_stack_1->GetXaxis()->SetLabelFont(42);
   nGenJet_all_stack_1->GetXaxis()->SetTitleOffset(1);
   nGenJet_all_stack_1->GetXaxis()->SetTitleFont(42);
   nGenJet_all_stack_1->GetYaxis()->SetLabelFont(42);
   nGenJet_all_stack_1->GetYaxis()->SetTitleFont(42);
   nGenJet_all_stack_1->GetZaxis()->SetLabelFont(42);
   nGenJet_all_stack_1->GetZaxis()->SetTitleOffset(1);
   nGenJet_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(nGenJet_all_stack_1,"");
   
   TH1D *nGenJet_all_stack_2 = new TH1D("nGenJet_all_stack_2","",15,-0.5,14.5);
   nGenJet_all_stack_2->SetBinContent(3,0.04188295);
   nGenJet_all_stack_2->SetBinContent(4,1.244398);
   nGenJet_all_stack_2->SetBinContent(5,10.81172);
   nGenJet_all_stack_2->SetBinContent(6,26.44975);
   nGenJet_all_stack_2->SetBinContent(7,35.50398);
   nGenJet_all_stack_2->SetBinContent(8,33.3714);
   nGenJet_all_stack_2->SetBinContent(9,25.05376);
   nGenJet_all_stack_2->SetBinContent(10,16.32601);
   nGenJet_all_stack_2->SetBinContent(11,9.515139);
   nGenJet_all_stack_2->SetBinContent(12,5.082088);
   nGenJet_all_stack_2->SetBinContent(13,2.584311);
   nGenJet_all_stack_2->SetBinContent(14,1.241616);
   nGenJet_all_stack_2->SetBinContent(15,0.5457785);
   nGenJet_all_stack_2->SetBinContent(16,0.4514472);
   nGenJet_all_stack_2->SetBinError(3,0.003842075);
   nGenJet_all_stack_2->SetBinError(4,0.02589833);
   nGenJet_all_stack_2->SetBinError(5,0.06676809);
   nGenJet_all_stack_2->SetBinError(6,0.1023745);
   nGenJet_all_stack_2->SetBinError(7,0.1208147);
   nGenJet_all_stack_2->SetBinError(8,0.1147582);
   nGenJet_all_stack_2->SetBinError(9,0.09922682);
   nGenJet_all_stack_2->SetBinError(10,0.08161761);
   nGenJet_all_stack_2->SetBinError(11,0.06266865);
   nGenJet_all_stack_2->SetBinError(12,0.04475876);
   nGenJet_all_stack_2->SetBinError(13,0.03162805);
   nGenJet_all_stack_2->SetBinError(14,0.02555862);
   nGenJet_all_stack_2->SetBinError(15,0.01419273);
   nGenJet_all_stack_2->SetBinError(16,0.01279113);
   nGenJet_all_stack_2->SetEntries(493157);

   ci = TColor::GetColor("#00cc00");
   nGenJet_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenJet_all_stack_2->SetLineColor(ci);
   nGenJet_all_stack_2->GetXaxis()->SetRange(1,15);
   nGenJet_all_stack_2->GetXaxis()->SetLabelFont(42);
   nGenJet_all_stack_2->GetXaxis()->SetTitleOffset(1);
   nGenJet_all_stack_2->GetXaxis()->SetTitleFont(42);
   nGenJet_all_stack_2->GetYaxis()->SetLabelFont(42);
   nGenJet_all_stack_2->GetYaxis()->SetTitleFont(42);
   nGenJet_all_stack_2->GetZaxis()->SetLabelFont(42);
   nGenJet_all_stack_2->GetZaxis()->SetTitleOffset(1);
   nGenJet_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(nGenJet_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nGenJet_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("nGenJet_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nGenJet_all__signal_18->Modified();
   nGenJet_all__signal_18->cd();
   nGenJet_all__signal_18->SetSelected(nGenJet_all__signal_18);
}
