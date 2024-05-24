#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_WW_tagOnly_2b1c_17()
{
//=========Macro generated from canvas: nJet_WW_tagOnly_2b1c_17/nJet_WW_tagOnly_2b1c_17
//=========  (Fri May 24 12:34:28 2024) by ROOT version 6.28/10
   TCanvas *nJet_WW_tagOnly_2b1c_17 = new TCanvas("nJet_WW_tagOnly_2b1c_17", "nJet_WW_tagOnly_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_WW_tagOnly_2b1c_17->SetHighLightColor(2);
   nJet_WW_tagOnly_2b1c_17->Range(-3.3,-282674.9,15.36667,2544074);
   nJet_WW_tagOnly_2b1c_17->SetFillColor(0);
   nJet_WW_tagOnly_2b1c_17->SetFillStyle(4000);
   nJet_WW_tagOnly_2b1c_17->SetBorderMode(0);
   nJet_WW_tagOnly_2b1c_17->SetBorderSize(2);
   nJet_WW_tagOnly_2b1c_17->SetLeftMargin(0.15);
   nJet_WW_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   nJet_WW_tagOnly_2b1c_17->SetFrameBorderMode(0);
   nJet_WW_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   nJet_WW_tagOnly_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__7463 = new TH1D("Jets_cut_nJet__7463","",14,-0.5,13.5);
   Jets_cut_nJet__7463->SetBinContent(1,2153713);
   Jets_cut_nJet__7463->SetBinContent(2,1313499);
   Jets_cut_nJet__7463->SetBinContent(3,686516.9);
   Jets_cut_nJet__7463->SetBinContent(4,211053.5);
   Jets_cut_nJet__7463->SetBinContent(5,65013.51);
   Jets_cut_nJet__7463->SetBinContent(6,15210.19);
   Jets_cut_nJet__7463->SetBinContent(7,2876.867);
   Jets_cut_nJet__7463->SetBinContent(8,494.5406);
   Jets_cut_nJet__7463->SetBinContent(9,85.87173);
   Jets_cut_nJet__7463->SetBinContent(10,10.27743);
   Jets_cut_nJet__7463->SetBinContent(11,1.187704);
   Jets_cut_nJet__7463->SetBinContent(13,0.3905973);
   Jets_cut_nJet__7463->SetBinError(1,837.4939);
   Jets_cut_nJet__7463->SetBinError(2,644.7321);
   Jets_cut_nJet__7463->SetBinError(3,450.6205);
   Jets_cut_nJet__7463->SetBinError(4,236.9824);
   Jets_cut_nJet__7463->SetBinError(5,135.2166);
   Jets_cut_nJet__7463->SetBinError(6,69.25406);
   Jets_cut_nJet__7463->SetBinError(7,31.44385);
   Jets_cut_nJet__7463->SetBinError(8,13.36806);
   Jets_cut_nJet__7463->SetBinError(9,5.6877);
   Jets_cut_nJet__7463->SetBinError(10,2.013789);
   Jets_cut_nJet__7463->SetBinError(11,0.6018512);
   Jets_cut_nJet__7463->SetBinError(13,0.3905973);
   Jets_cut_nJet__7463->SetEntries(1.5634e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__7463->SetLineColor(ci);
   Jets_cut_nJet__7463->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__7463->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__7463->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__7463->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__7463->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__7463->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__7463->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__7463->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__7463->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__7463->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__7463->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__7463->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__7463->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__7463->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__7463->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_WW_tagOnly_2b1c_17->Modified();
   nJet_WW_tagOnly_2b1c_17->cd();
   nJet_WW_tagOnly_2b1c_17->SetSelected(nJet_WW_tagOnly_2b1c_17);
}
