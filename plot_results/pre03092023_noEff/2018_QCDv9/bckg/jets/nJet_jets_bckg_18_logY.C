#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_jets_bckg_18_logY()
{
//=========Macro generated from canvas: nJet_jets_bckg_18/nJet_jets_bckg_18
//=========  (Wed Mar  1 14:06:39 2023) by ROOT version 6.26/06
   TCanvas *nJet_jets_bckg_18 = new TCanvas("nJet_jets_bckg_18", "nJet_jets_bckg_18",0,0,600,600);
   nJet_jets_bckg_18->SetHighLightColor(2);
   nJet_jets_bckg_18->Range(-3.556941,-2.101577,15.90286,16.44476);
   nJet_jets_bckg_18->SetFillColor(0);
   nJet_jets_bckg_18->SetFillStyle(4000);
   nJet_jets_bckg_18->SetBorderMode(0);
   nJet_jets_bckg_18->SetBorderSize(2);
   nJet_jets_bckg_18->SetLogy();
   nJet_jets_bckg_18->SetLeftMargin(0.15709);
   nJet_jets_bckg_18->SetRightMargin(0.1234783);
   nJet_jets_bckg_18->SetBottomMargin(0.12);
   nJet_jets_bckg_18->SetFrameFillStyle(1000);
   nJet_jets_bckg_18->SetFrameBorderMode(0);
   nJet_jets_bckg_18->SetFrameFillStyle(1000);
   nJet_jets_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1.079019e+14);
   
   TH1F *st_stack_6 = new TH1F("st_stack_6","",14,-0.5,13.5);
   st_stack_6->SetMinimum(1.330404);
   st_stack_6->SetMaximum(3.891596e+14);
   st_stack_6->SetDirectory(0);
   st_stack_6->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_6->SetLineColor(ci);
   st_stack_6->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_6->GetXaxis()->SetRange(1,14);
   st_stack_6->GetXaxis()->SetLabelFont(42);
   st_stack_6->GetXaxis()->SetTitleOffset(1);
   st_stack_6->GetXaxis()->SetTitleFont(42);
   st_stack_6->GetYaxis()->SetTitle("Events/1.0");
   st_stack_6->GetYaxis()->SetLabelFont(42);
   st_stack_6->GetYaxis()->SetTitleSize(0.037);
   st_stack_6->GetYaxis()->SetTitleFont(42);
   st_stack_6->GetZaxis()->SetLabelFont(42);
   st_stack_6->GetZaxis()->SetTitleOffset(1);
   st_stack_6->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_6);
   
   
   TH1D *VbbHcc_jets_nJet_stack_1 = new TH1D("VbbHcc_jets_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_1->SetBinContent(1,1.079017e+12);
   VbbHcc_jets_nJet_stack_1->SetBinContent(2,5.982441e+11);
   VbbHcc_jets_nJet_stack_1->SetBinContent(3,3.364549e+11);
   VbbHcc_jets_nJet_stack_1->SetBinContent(4,2.727242e+10);
   VbbHcc_jets_nJet_stack_1->SetBinContent(5,3.644637e+09);
   VbbHcc_jets_nJet_stack_1->SetBinContent(6,4.443197e+08);
   VbbHcc_jets_nJet_stack_1->SetBinContent(7,6.126205e+07);
   VbbHcc_jets_nJet_stack_1->SetBinContent(8,8713498);
   VbbHcc_jets_nJet_stack_1->SetBinContent(9,1226349);
   VbbHcc_jets_nJet_stack_1->SetBinContent(10,180055.4);
   VbbHcc_jets_nJet_stack_1->SetBinContent(11,26742.46);
   VbbHcc_jets_nJet_stack_1->SetBinContent(12,3519.098);
   VbbHcc_jets_nJet_stack_1->SetBinContent(13,533.0695);
   VbbHcc_jets_nJet_stack_1->SetBinContent(14,53.98061);
   VbbHcc_jets_nJet_stack_1->SetBinContent(15,26.09126);
   VbbHcc_jets_nJet_stack_1->SetBinError(1,1.816517e+08);
   VbbHcc_jets_nJet_stack_1->SetBinError(2,1.310409e+08);
   VbbHcc_jets_nJet_stack_1->SetBinError(3,9.045076e+07);
   VbbHcc_jets_nJet_stack_1->SetBinError(4,1.450945e+07);
   VbbHcc_jets_nJet_stack_1->SetBinError(5,3123241);
   VbbHcc_jets_nJet_stack_1->SetBinError(6,751788);
   VbbHcc_jets_nJet_stack_1->SetBinError(7,252829.3);
   VbbHcc_jets_nJet_stack_1->SetBinError(8,83230.78);
   VbbHcc_jets_nJet_stack_1->SetBinError(9,9949.338);
   VbbHcc_jets_nJet_stack_1->SetBinError(10,2535.17);
   VbbHcc_jets_nJet_stack_1->SetBinError(11,862.5736);
   VbbHcc_jets_nJet_stack_1->SetBinError(12,169.0679);
   VbbHcc_jets_nJet_stack_1->SetBinError(13,58.5606);
   VbbHcc_jets_nJet_stack_1->SetBinError(14,12.88186);
   VbbHcc_jets_nJet_stack_1->SetBinError(15,14.2875);
   VbbHcc_jets_nJet_stack_1->SetEntries(3.038349e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_nJet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_1->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_1,"");
   
   TH1D *VbbHcc_jets_nJet_stack_2 = new TH1D("VbbHcc_jets_nJet_stack_2","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_2->SetBinContent(1,1805937);
   VbbHcc_jets_nJet_stack_2->SetBinContent(2,6448626);
   VbbHcc_jets_nJet_stack_2->SetBinContent(3,1.340318e+07);
   VbbHcc_jets_nJet_stack_2->SetBinContent(4,1.48622e+07);
   VbbHcc_jets_nJet_stack_2->SetBinContent(5,1.016083e+07);
   VbbHcc_jets_nJet_stack_2->SetBinContent(6,4729263);
   VbbHcc_jets_nJet_stack_2->SetBinContent(7,1671513);
   VbbHcc_jets_nJet_stack_2->SetBinContent(8,481478.5);
   VbbHcc_jets_nJet_stack_2->SetBinContent(9,121252.2);
   VbbHcc_jets_nJet_stack_2->SetBinContent(10,27482.88);
   VbbHcc_jets_nJet_stack_2->SetBinContent(11,5736.086);
   VbbHcc_jets_nJet_stack_2->SetBinContent(12,1135.277);
   VbbHcc_jets_nJet_stack_2->SetBinContent(13,205.3284);
   VbbHcc_jets_nJet_stack_2->SetBinContent(14,39.96727);
   VbbHcc_jets_nJet_stack_2->SetBinContent(15,7.309964);
   VbbHcc_jets_nJet_stack_2->SetBinError(1,363.7348);
   VbbHcc_jets_nJet_stack_2->SetBinError(2,700.1981);
   VbbHcc_jets_nJet_stack_2->SetBinError(3,1046.714);
   VbbHcc_jets_nJet_stack_2->SetBinError(4,1140.352);
   VbbHcc_jets_nJet_stack_2->SetBinError(5,966.7857);
   VbbHcc_jets_nJet_stack_2->SetBinError(6,668.8861);
   VbbHcc_jets_nJet_stack_2->SetBinError(7,401.1999);
   VbbHcc_jets_nJet_stack_2->SetBinError(8,216.1864);
   VbbHcc_jets_nJet_stack_2->SetBinError(9,109.1027);
   VbbHcc_jets_nJet_stack_2->SetBinError(10,52.08917);
   VbbHcc_jets_nJet_stack_2->SetBinError(11,23.30418);
   VbbHcc_jets_nJet_stack_2->SetBinError(12,10.23374);
   VbbHcc_jets_nJet_stack_2->SetBinError(13,4.436871);
   VbbHcc_jets_nJet_stack_2->SetBinError(14,1.845197);
   VbbHcc_jets_nJet_stack_2->SetBinError(15,0.7966344);
   VbbHcc_jets_nJet_stack_2->SetEntries(7.957776e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_nJet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_2->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nJet_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_jets_bckg_18->Modified();
   nJet_jets_bckg_18->cd();
   nJet_jets_bckg_18->SetSelected(nJet_jets_bckg_18);
}
