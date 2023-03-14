#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_jets_all_signal_18_logY()
{
//=========Macro generated from canvas: nJet_jets_all_signal_18/nJet_jets_all_signal_18
//=========  (Fri Mar 10 14:09:16 2023) by ROOT version 6.26/06
   TCanvas *nJet_jets_all_signal_18 = new TCanvas("nJet_jets_all_signal_18", "nJet_jets_all_signal_18",0,0,600,600);
   nJet_jets_all_signal_18->SetHighLightColor(2);
   nJet_jets_all_signal_18->Range(-3.556941,0.4726455,15.90286,2.846571);
   nJet_jets_all_signal_18->SetFillColor(0);
   nJet_jets_all_signal_18->SetFillStyle(4000);
   nJet_jets_all_signal_18->SetBorderMode(0);
   nJet_jets_all_signal_18->SetBorderSize(2);
   nJet_jets_all_signal_18->SetLogy();
   nJet_jets_all_signal_18->SetLeftMargin(0.15709);
   nJet_jets_all_signal_18->SetRightMargin(0.1234783);
   nJet_jets_all_signal_18->SetBottomMargin(0.12);
   nJet_jets_all_signal_18->SetFrameFillStyle(1000);
   nJet_jets_all_signal_18->SetFrameBorderMode(0);
   nJet_jets_all_signal_18->SetFrameFillStyle(1000);
   nJet_jets_all_signal_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(312.9922);
   
   TH1F *st_stack_161 = new TH1F("st_stack_161","",14,-0.5,13.5);
   st_stack_161->SetMinimum(5.721587);
   st_stack_161->SetMaximum(406.6103);
   st_stack_161->SetDirectory(0);
   st_stack_161->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_161->SetLineColor(ci);
   st_stack_161->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_161->GetXaxis()->SetRange(1,14);
   st_stack_161->GetXaxis()->SetLabelFont(42);
   st_stack_161->GetXaxis()->SetTitleOffset(1);
   st_stack_161->GetXaxis()->SetTitleFont(42);
   st_stack_161->GetYaxis()->SetTitle("Event/1.0");
   st_stack_161->GetYaxis()->SetLabelFont(42);
   st_stack_161->GetYaxis()->SetTitleSize(0.037);
   st_stack_161->GetYaxis()->SetTitleFont(42);
   st_stack_161->GetZaxis()->SetLabelFont(42);
   st_stack_161->GetZaxis()->SetTitleOffset(1);
   st_stack_161->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_161);
   
   
   TH1D *VbbHcc_jets_all_nJet_stack_1 = new TH1D("VbbHcc_jets_all_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(1,0.01890475);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(2,0.268988);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(3,5.170632);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(4,45.586);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(5,151.0988);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(6,222.067);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(7,229.8078);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(8,193.6917);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(9,143.668);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(10,95.45477);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(11,58.06692);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(12,33.51633);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(13,18.00214);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(14,9.064337);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(15,7.9844);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(1,0.007211988);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(2,0.03140049);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(3,0.1374189);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(4,0.4581512);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(5,0.7948924);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(6,0.9038232);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(7,0.8721774);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(8,0.7586104);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(9,0.6450354);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(10,0.5058601);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(11,0.3904147);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(12,0.2913981);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(13,0.2096097);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(14,0.1479214);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(15,0.1348408);
   VbbHcc_jets_all_nJet_stack_1->SetEntries(498953);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_nJet_stack_1->SetFillColor(ci);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nJet_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nJet_stack_2 = new TH1D("VbbHcc_jets_all_nJet_stack_2","",14,-0.5,13.5);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(2,0.002412098);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(3,0.1176385);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(4,1.82273);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(5,9.592365);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(6,21.20923);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(7,29.97569);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(8,30.87261);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(9,26.28859);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(10,19.27487);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(11,12.72185);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(12,7.673839);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(13,4.353786);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(14,2.224214);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(15,2.093457);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(2,0.001003923);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(3,0.007624678);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(4,0.03269144);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(5,0.06861333);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(6,0.09894802);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(7,0.1148936);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(8,0.1110388);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(9,0.1001329);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(10,0.08274961);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(11,0.0663298);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(12,0.05189677);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(13,0.0374397);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(14,0.02627434);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(15,0.02511461);
   VbbHcc_jets_all_nJet_stack_2->SetEntries(493157);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_nJet_stack_2->SetFillColor(ci);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nJet_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nJet_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_jets_all_signal_18->Modified();
   nJet_jets_all_signal_18->cd();
   nJet_jets_all_signal_18->SetSelected(nJet_jets_all_signal_18);
}
