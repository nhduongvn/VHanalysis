#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_jets_16()
{
//=========Macro generated from canvas: nB_medium_jets_16/nB_medium_jets_16
//=========  (Mon Dec 19 11:02:46 2022) by ROOT version 6.26/06
   TCanvas *nB_medium_jets_16 = new TCanvas("nB_medium_jets_16", "nB_medium_jets_16",0,0,600,600);
   nB_medium_jets_16->SetHighLightColor(2);
   nB_medium_jets_16->Range(-2.683529,-2.510748e+11,11.21633,1.841215e+12);
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
   st->SetMaximum(1.631986e+12);
   
   TH1F *st_stack_17 = new TH1F("st_stack_17","",10,-0.5,9.5);
   st_stack_17->SetMinimum(0);
   st_stack_17->SetMaximum(1.631986e+12);
   st_stack_17->SetDirectory(0);
   st_stack_17->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_17->SetLineColor(ci);
   st_stack_17->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_17->GetXaxis()->SetRange(1,10);
   st_stack_17->GetXaxis()->SetLabelFont(42);
   st_stack_17->GetXaxis()->SetTitleOffset(1);
   st_stack_17->GetXaxis()->SetTitleFont(42);
   st_stack_17->GetYaxis()->SetTitle("Events/1.0");
   st_stack_17->GetYaxis()->SetLabelFont(42);
   st_stack_17->GetYaxis()->SetTitleSize(0.037);
   st_stack_17->GetYaxis()->SetTitleFont(42);
   st_stack_17->GetZaxis()->SetLabelFont(42);
   st_stack_17->GetZaxis()->SetTitleOffset(1);
   st_stack_17->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_17);
   
   
   TH1D *VbbHcc_jets_nB_medium_stack_1 = new TH1D("VbbHcc_jets_nB_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(1,1.087985e+12);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(2,6.006268e+10);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(3,3.418603e+09);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(4,6.189954e+07);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(5,1715856);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(6,26735.59);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(7,323.6134);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(8,10.96204);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(1,1.389708e+08);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(2,3.173988e+07);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(3,7053121);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(4,766815.4);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(5,98911.01);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(6,3895.66);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(7,73.61729);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(8,9.250679);
   VbbHcc_jets_nB_medium_stack_1->SetEntries(2.445319e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_nB_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_nB_medium_stack_2 = new TH1D("VbbHcc_jets_nB_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(1,5129722);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(2,1.363568e+07);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(3,9931876);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(4,1093444);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(5,60904.28);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(6,2751.32);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(7,133.9629);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(8,7.156014);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(9,0.5639147);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(10,0.09096386);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(1,601.1329);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(2,986.0124);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(3,848.1119);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(4,291.1983);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(5,69.91013);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(6,14.90019);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(7,3.31412);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(8,0.7884464);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(9,0.2203737);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(10,0.09096386);
   VbbHcc_jets_nB_medium_stack_2->SetEntries(4.67375e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_nB_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nB_medium_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nB_medium_stack_1","QCD","F");

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
