void nB_medium_jets_16()
{
//=========Macro generated from canvas: nB_medium_jets_16/nB_medium_jets_16
//=========  (Thu Dec 15 10:04:52 2022) by ROOT version 6.14/09
   TCanvas *nB_medium_jets_16 = new TCanvas("nB_medium_jets_16", "nB_medium_jets_16",0,0,600,600);
   nB_medium_jets_16->SetHighLightColor(2);
   nB_medium_jets_16->Range(-2.683529,-107.2398,11.21633,786.425);
   nB_medium_jets_16->SetFillColor(0);
   nB_medium_jets_16->SetFillStyle(4000);
   nB_medium_jets_16->SetBorderMode(0);
   nB_medium_jets_16->SetBorderSize(2);
   nB_medium_jets_16->SetLeftMargin(0.15709);
   nB_medium_jets_16->SetRightMargin(0.1234783);
   nB_medium_jets_16->SetBottomMargin(0.12);
   nB_medium_jets_16->SetFrameFillStyle(1000);
   nB_medium_jets_16->SetFrameBorderMode(0);
   nB_medium_jets_16->SetFrameFillStyle(1000);
   nB_medium_jets_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(663.8652);
   
   TH1F *st_stack_17 = new TH1F("st_stack_17","",10,-0.5,9.5);
   st_stack_17->SetMinimum(0);
   st_stack_17->SetMaximum(697.0585);
   st_stack_17->SetDirectory(0);
   st_stack_17->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_17->SetLineColor(ci);
   st_stack_17->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_17->GetXaxis()->SetRange(1,10);
   st_stack_17->GetXaxis()->SetLabelFont(42);
   st_stack_17->GetXaxis()->SetLabelSize(0.035);
   st_stack_17->GetXaxis()->SetTitleSize(0.035);
   st_stack_17->GetXaxis()->SetTitleFont(42);
   st_stack_17->GetYaxis()->SetTitle("Events/1.0");
   st_stack_17->GetYaxis()->SetLabelFont(42);
   st_stack_17->GetYaxis()->SetLabelSize(0.035);
   st_stack_17->GetYaxis()->SetTitleSize(0.037);
   st_stack_17->GetYaxis()->SetTitleOffset(0);
   st_stack_17->GetYaxis()->SetTitleFont(42);
   st_stack_17->GetZaxis()->SetLabelFont(42);
   st_stack_17->GetZaxis()->SetLabelSize(0.035);
   st_stack_17->GetZaxis()->SetTitleSize(0.035);
   st_stack_17->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_17);
   
   
   TH1D *VbbHcc_jets_nB_medium_stack_1 = new TH1D("VbbHcc_jets_nB_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(1,395.7407);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(2,174.4993);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(3,48.03495);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(4,8.343149);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(5,0.721431);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(6,0.03460756);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(7,0.00289275);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(1,0.8022131);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(2,0.5281762);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(3,0.2762334);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(4,0.1148789);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(5,0.03362403);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(6,0.007419483);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(7,0.002047546);
   VbbHcc_jets_nB_medium_stack_1->SetEntries(472445);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_nB_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nB_medium_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nB_medium_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nB_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nB_medium_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nB_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_nB_medium_stack_2 = new TH1D("VbbHcc_jets_nB_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(1,46.8361);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(2,26.96284);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(3,10.48084);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(4,2.316247);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(5,0.2349484);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(6,0.01563149);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(7,0.001305159);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(9,0.0002048819);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(1,0.09419607);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(2,0.07147952);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(3,0.04460882);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(4,0.02096299);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(5,0.006665188);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(6,0.001706889);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(7,0.0004973829);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(9,0.0002048819);
   VbbHcc_jets_nB_medium_stack_2->SetEntries(492720);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_nB_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nB_medium_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nB_medium_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nB_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nB_medium_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nB_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nB_medium_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nB_medium_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_jets_16->Modified();
   nB_medium_jets_16->cd();
   nB_medium_jets_16->SetSelected(nB_medium_jets_16);
}
