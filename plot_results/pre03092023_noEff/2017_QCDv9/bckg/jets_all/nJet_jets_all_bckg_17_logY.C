#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_jets_all_bckg_17_logY()
{
//=========Macro generated from canvas: nJet_jets_all_bckg_17/nJet_jets_all_bckg_17
//=========  (Wed Mar  1 14:06:43 2023) by ROOT version 6.26/06
   TCanvas *nJet_jets_all_bckg_17 = new TCanvas("nJet_jets_all_bckg_17", "nJet_jets_all_bckg_17",0,0,600,600);
   nJet_jets_all_bckg_17->SetHighLightColor(2);
   nJet_jets_all_bckg_17->Range(-3.556941,2.508698,15.90286,15.15328);
   nJet_jets_all_bckg_17->SetFillColor(0);
   nJet_jets_all_bckg_17->SetFillStyle(4000);
   nJet_jets_all_bckg_17->SetBorderMode(0);
   nJet_jets_all_bckg_17->SetBorderSize(2);
   nJet_jets_all_bckg_17->SetLogy();
   nJet_jets_all_bckg_17->SetLeftMargin(0.15709);
   nJet_jets_all_bckg_17->SetRightMargin(0.1234783);
   nJet_jets_all_bckg_17->SetBottomMargin(0.12);
   nJet_jets_all_bckg_17->SetFrameFillStyle(1000);
   nJet_jets_all_bckg_17->SetFrameBorderMode(0);
   nJet_jets_all_bckg_17->SetFrameFillStyle(1000);
   nJet_jets_all_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(56790.52);
   st->SetMaximum(2.825985e+13);
   
   TH1F *st_stack_160 = new TH1F("st_stack_160","",14,-0.5,13.5);
   st_stack_160->SetMinimum(10618.13);
   st_stack_160->SetMaximum(7.741444e+13);
   st_stack_160->SetDirectory(0);
   st_stack_160->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_160->SetLineColor(ci);
   st_stack_160->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_160->GetXaxis()->SetRange(1,14);
   st_stack_160->GetXaxis()->SetLabelFont(42);
   st_stack_160->GetXaxis()->SetTitleOffset(1);
   st_stack_160->GetXaxis()->SetTitleFont(42);
   st_stack_160->GetYaxis()->SetTitle("Events/1.0");
   st_stack_160->GetYaxis()->SetLabelFont(42);
   st_stack_160->GetYaxis()->SetTitleSize(0.037);
   st_stack_160->GetYaxis()->SetTitleFont(42);
   st_stack_160->GetZaxis()->SetLabelFont(42);
   st_stack_160->GetZaxis()->SetTitleOffset(1);
   st_stack_160->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_160);
   
   
   TH1D *VbbHcc_jets_all_nJet_stack_1 = new TH1D("VbbHcc_jets_all_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(1,5.67905e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(2,2.921067e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(3,1.012377e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(4,2.329226e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(5,2.825975e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(6,2.540652e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(7,1.939439e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(8,1.338145e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(9,8.629636e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(10,5.28497e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(11,3.110351e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(12,1.771043e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(13,9.780087e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(14,5.268318e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(15,5.57657e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(1,994553.2);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(2,7133374);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(3,4.146136e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(4,6.239922e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(5,6.794662e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(6,6.369227e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(7,5.510738e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(8,4.543361e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(9,3.630983e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(10,2.832768e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(11,2.169828e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(12,1.635691e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(13,1.21449e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(14,8909765);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(15,9131386);
   VbbHcc_jets_all_nJet_stack_1->SetEntries(3.054959e+08);

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
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(1,23.90756);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(2,1365.325);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(3,25515.98);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(4,215880.5);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(5,971658.5);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(6,2572324);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(7,4490934);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(8,5753697);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(9,5911698);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(10,5162574);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(11,3987467);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(12,2801356);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(13,1826943);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(14,1121941);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(15,1426757);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(1,1.017627);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(2,7.774096);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(3,34.35862);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(4,103.0897);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(5,227.5236);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(6,385.8913);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(7,526.9095);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(8,608.6444);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(9,624.8267);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(10,588.6665);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(11,520.2288);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(12,437.8135);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(13,354.7385);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(14,278.786);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(15,315.8674);
   VbbHcc_jets_all_nJet_stack_2->SetEntries(6.313347e+08);

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
   nJet_jets_all_bckg_17->Modified();
   nJet_jets_all_bckg_17->cd();
   nJet_jets_all_bckg_17->SetSelected(nJet_jets_all_bckg_17);
}
