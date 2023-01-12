#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_jets_all_17_logY()
{
//=========Macro generated from canvas: nJet_jets_all_17/nJet_jets_all_17
//=========  (Mon Dec 19 11:02:05 2022) by ROOT version 6.26/06
   TCanvas *nJet_jets_all_17 = new TCanvas("nJet_jets_all_17", "nJet_jets_all_17",0,0,600,600);
   nJet_jets_all_17->SetHighLightColor(2);
   nJet_jets_all_17->Range(-3.556941,2.508276,15.90286,15.15334);
   nJet_jets_all_17->SetFillColor(0);
   nJet_jets_all_17->SetFillStyle(4000);
   nJet_jets_all_17->SetBorderMode(0);
   nJet_jets_all_17->SetBorderSize(2);
   nJet_jets_all_17->SetLogy();
   nJet_jets_all_17->SetLeftMargin(0.15709);
   nJet_jets_all_17->SetRightMargin(0.1234783);
   nJet_jets_all_17->SetBottomMargin(0.12);
   nJet_jets_all_17->SetFrameFillStyle(1000);
   nJet_jets_all_17->SetFrameBorderMode(0);
   nJet_jets_all_17->SetFrameFillStyle(1000);
   nJet_jets_all_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(56744.69);
   st->SetMaximum(2.825987e+13);
   
   TH1F *st_stack_106 = new TH1F("st_stack_106","",14,-0.5,13.5);
   st_stack_106->SetMinimum(10609.22);
   st_stack_106->SetMaximum(7.741648e+13);
   st_stack_106->SetDirectory(0);
   st_stack_106->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_106->SetLineColor(ci);
   st_stack_106->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_106->GetXaxis()->SetRange(1,14);
   st_stack_106->GetXaxis()->SetLabelFont(42);
   st_stack_106->GetXaxis()->SetTitleOffset(1);
   st_stack_106->GetXaxis()->SetTitleFont(42);
   st_stack_106->GetYaxis()->SetTitle("Events/1.0");
   st_stack_106->GetYaxis()->SetLabelFont(42);
   st_stack_106->GetYaxis()->SetTitleSize(0.037);
   st_stack_106->GetYaxis()->SetTitleFont(42);
   st_stack_106->GetZaxis()->SetLabelFont(42);
   st_stack_106->GetZaxis()->SetTitleOffset(1);
   st_stack_106->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_106);
   
   
   TH1D *VbbHcc_jets_all_nJet_stack_1 = new TH1D("VbbHcc_jets_all_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(1,5.674467e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(2,2.921601e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(3,1.012468e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(4,2.329095e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(5,2.825978e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(6,2.540673e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(7,1.939458e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(8,1.338169e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(9,8.629033e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(10,5.284943e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(11,3.110466e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(12,1.771269e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(13,9.777683e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(14,5.267831e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(15,5.576305e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(1,989914.8);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(2,7104388);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(3,4.129233e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(4,6.214036e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(5,6.766708e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(6,6.343078e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(7,5.488178e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(8,4.524769e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(9,3.61598e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(10,2.821158e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(11,2.160988e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(12,1.629132e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(13,1.209323e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(14,8872952);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(15,9093637);
   VbbHcc_jets_all_nJet_stack_1->SetEntries(3.0187e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_nJet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nJet_stack_1->SetLineColor(ci);
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
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(1,23.82281);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(2,1366.885);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(3,25512.25);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(4,215882.6);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(5,971720.7);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(6,2572349);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(7,4490905);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(8,5753764);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(9,5911636);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(10,5162546);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(11,3987433);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(12,2801361);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(13,1826963);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(14,1121972);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(15,1426702);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(1,1.02414);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(2,7.841956);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(3,34.62803);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(4,103.86);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(5,229.032);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(6,387.998);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(7,529.2257);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(8,610.9018);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(9,626.8499);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(10,590.3877);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(11,521.633);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(12,438.9268);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(13,355.5986);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(14,279.4389);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(15,316.5583);
   VbbHcc_jets_all_nJet_stack_2->SetEntries(6.245234e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_nJet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nJet_stack_2->SetLineColor(ci);
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nJet_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nJet_stack_1","QCD","F");

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
   nJet_jets_all_17->Modified();
   nJet_jets_all_17->cd();
   nJet_jets_all_17->SetSelected(nJet_jets_all_17);
}
