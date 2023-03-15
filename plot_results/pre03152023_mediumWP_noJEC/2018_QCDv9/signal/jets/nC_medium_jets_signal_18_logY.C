#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_jets_signal_18_logY()
{
//=========Macro generated from canvas: nC_medium_jets_signal_18/nC_medium_jets_signal_18
//=========  (Thu Mar  9 13:30:11 2023) by ROOT version 6.26/06
   TCanvas *nC_medium_jets_signal_18 = new TCanvas("nC_medium_jets_signal_18", "nC_medium_jets_signal_18",0,0,600,600);
   nC_medium_jets_signal_18->SetHighLightColor(2);
   nC_medium_jets_signal_18->Range(-2.683529,0.3744373,11.21633,3.243739);
   nC_medium_jets_signal_18->SetFillColor(0);
   nC_medium_jets_signal_18->SetFillStyle(4000);
   nC_medium_jets_signal_18->SetBorderMode(0);
   nC_medium_jets_signal_18->SetBorderSize(2);
   nC_medium_jets_signal_18->SetLogy();
   nC_medium_jets_signal_18->SetLeftMargin(0.15709);
   nC_medium_jets_signal_18->SetRightMargin(0.1234783);
   nC_medium_jets_signal_18->SetBottomMargin(0.12);
   nC_medium_jets_signal_18->SetFrameFillStyle(1000);
   nC_medium_jets_signal_18->SetFrameBorderMode(0);
   nC_medium_jets_signal_18->SetFrameFillStyle(1000);
   nC_medium_jets_signal_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(663.5521);
   
   TH1F *st_stack_35 = new TH1F("st_stack_35","",10,-0.5,9.5);
   st_stack_35->SetMinimum(5.233033);
   st_stack_35->SetMaximum(905.3339);
   st_stack_35->SetDirectory(0);
   st_stack_35->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_35->SetLineColor(ci);
   st_stack_35->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_35->GetXaxis()->SetRange(1,10);
   st_stack_35->GetXaxis()->SetLabelFont(42);
   st_stack_35->GetXaxis()->SetTitleOffset(1);
   st_stack_35->GetXaxis()->SetTitleFont(42);
   st_stack_35->GetYaxis()->SetTitle("Event/1.0");
   st_stack_35->GetYaxis()->SetLabelFont(42);
   st_stack_35->GetYaxis()->SetTitleSize(0.037);
   st_stack_35->GetYaxis()->SetTitleFont(42);
   st_stack_35->GetZaxis()->SetLabelFont(42);
   st_stack_35->GetZaxis()->SetTitleOffset(1);
   st_stack_35->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_35);
   
   
   TH1D *VbbHcc_jets_nC_medium_stack_1 = new TH1D("VbbHcc_jets_nC_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(1,416.6754);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(2,483.325);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(3,244.5029);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(4,59.41219);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(5,8.70543);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(6,0.768178);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(7,0.06447426);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(8,0.01319064);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(1,1.199583);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(2,1.248259);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(3,0.8908446);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(4,0.432201);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(5,0.1677729);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(6,0.04642001);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(7,0.01291519);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(8,0.00594794);
   VbbHcc_jets_nC_medium_stack_1->SetEntries(498953);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_nC_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_nC_medium_stack_2 = new TH1D("VbbHcc_jets_nC_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(1,29.70426);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(2,67.42325);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(3,49.64391);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(4,17.64302);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(5,3.431119);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(6,0.3476266);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(7,0.02873211);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(8,0.001358632);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(1,0.1097132);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(2,0.1674649);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(3,0.1393518);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(4,0.08337992);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(5,0.0355009);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(6,0.01108697);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(7,0.003171066);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(8,0.0006883341);
   VbbHcc_jets_nC_medium_stack_2->SetEntries(493157);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_nC_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_1","ZHcc","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_jets_signal_18->Modified();
   nC_medium_jets_signal_18->cd();
   nC_medium_jets_signal_18->SetSelected(nC_medium_jets_signal_18);
}
