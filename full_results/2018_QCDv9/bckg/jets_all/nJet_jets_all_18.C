void nJet_jets_all_18()
{
//=========Macro generated from canvas: nJet_jets_all_18/nJet_jets_all_18
//=========  (Thu Dec 15 10:05:11 2022) by ROOT version 6.14/09
   TCanvas *nJet_jets_all_18 = new TCanvas("nJet_jets_all_18", "nJet_jets_all_18",0,0,600,600);
   nJet_jets_all_18->SetHighLightColor(2);
   nJet_jets_all_18->Range(-3.556941,-1.071503e+11,15.90286,7.85769e+11);
   nJet_jets_all_18->SetFillColor(0);
   nJet_jets_all_18->SetFillStyle(4000);
   nJet_jets_all_18->SetBorderMode(0);
   nJet_jets_all_18->SetBorderSize(2);
   nJet_jets_all_18->SetLeftMargin(0.15709);
   nJet_jets_all_18->SetRightMargin(0.1234783);
   nJet_jets_all_18->SetBottomMargin(0.12);
   nJet_jets_all_18->SetFrameFillStyle(1000);
   nJet_jets_all_18->SetFrameBorderMode(0);
   nJet_jets_all_18->SetFrameFillStyle(1000);
   nJet_jets_all_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(6.633115e+11);
   
   TH1F *st_stack_47 = new TH1F("st_stack_47","",14,-0.5,13.5);
   st_stack_47->SetMinimum(0);
   st_stack_47->SetMaximum(6.96477e+11);
   st_stack_47->SetDirectory(0);
   st_stack_47->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_47->SetLineColor(ci);
   st_stack_47->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_47->GetXaxis()->SetRange(1,14);
   st_stack_47->GetXaxis()->SetLabelFont(42);
   st_stack_47->GetXaxis()->SetLabelSize(0.035);
   st_stack_47->GetXaxis()->SetTitleSize(0.035);
   st_stack_47->GetXaxis()->SetTitleFont(42);
   st_stack_47->GetYaxis()->SetTitle("Events/1.0");
   st_stack_47->GetYaxis()->SetLabelFont(42);
   st_stack_47->GetYaxis()->SetLabelSize(0.035);
   st_stack_47->GetYaxis()->SetTitleSize(0.037);
   st_stack_47->GetYaxis()->SetTitleOffset(0);
   st_stack_47->GetYaxis()->SetTitleFont(42);
   st_stack_47->GetZaxis()->SetLabelFont(42);
   st_stack_47->GetZaxis()->SetLabelSize(0.035);
   st_stack_47->GetZaxis()->SetTitleSize(0.035);
   st_stack_47->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_47);
   
   
   TH1D *VbbHcc_jets_all_nJet_stack_1 = new TH1D("VbbHcc_jets_all_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(1,9.061354e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(2,4.66717e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(3,1.667489e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(4,3.759987e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(5,4.422061e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(6,3.815885e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(7,2.762473e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(8,1.778477e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(9,1.049015e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(10,5.769535e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(11,2.99794e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(12,1.477184e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(13,6.938041e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(14,3.171892e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(15,2.370018e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(1,1730611);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(2,1.334072e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(3,8.063185e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(4,1.134524e+08);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(5,1.143642e+08);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(6,1.000049e+08);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(7,8.110212e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(8,6.289421e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(9,4.689377e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(10,3.398555e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(11,2.39694e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(12,1.648638e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(13,1.1088e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(14,7366055);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(15,6169623);
   VbbHcc_jets_all_nJet_stack_1->SetEntries(3.026752e+08);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_nJet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nJet_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nJet_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nJet_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_all_nJet_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nJet_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nJet_stack_2 = new TH1D("VbbHcc_jets_all_nJet_stack_2","",14,-0.5,13.5);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(1,37.2895);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(2,2165.731);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(3,41151.65);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(4,350290.9);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(5,1582728);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(6,4173266);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(7,7206400);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(8,9077350);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(9,9106499);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(10,7704400);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(11,5705178);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(12,3800404);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(13,2317110);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(14,1311414);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(15,1340716);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(1,1.4937);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(2,12.67612);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(3,58.40814);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(4,173.5974);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(5,379.0774);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(6,628.7412);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(7,829.3626);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(8,918.9574);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(9,905.5866);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(10,817.7232);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(11,691.1744);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(12,555.1088);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(13,426.6296);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(14,316.692);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(15,313.2277);
   VbbHcc_jets_all_nJet_stack_2->SetEntries(7.771882e+08);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_nJet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nJet_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nJet_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nJet_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_all_nJet_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nJet_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nJet_stack_1","QCD","F");

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
   nJet_jets_all_18->Modified();
   nJet_jets_all_18->cd();
   nJet_jets_all_18->SetSelected(nJet_jets_all_18);
}
