#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_tagOnly_17()
{
//=========Macro generated from canvas: nJet_tagOnly_17/nJet_tagOnly_17
//=========  (Mon Apr  8 11:27:54 2024) by ROOT version 6.28/10
   TCanvas *nJet_tagOnly_17 = new TCanvas("nJet_tagOnly_17", "nJet_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_tagOnly_17->SetHighLightColor(2);
   nJet_tagOnly_17->Range(-3.3,-22.4096,15.36667,201.6864);
   nJet_tagOnly_17->SetFillColor(0);
   nJet_tagOnly_17->SetFillStyle(4000);
   nJet_tagOnly_17->SetBorderMode(0);
   nJet_tagOnly_17->SetBorderSize(2);
   nJet_tagOnly_17->SetLeftMargin(0.15);
   nJet_tagOnly_17->SetFrameFillStyle(1000);
   nJet_tagOnly_17->SetFrameBorderMode(0);
   nJet_tagOnly_17->SetFrameFillStyle(1000);
   nJet_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__296 = new TH1D("Jets_cut_nJet__296","",14,-0.5,13.5);
   Jets_cut_nJet__296->SetBinContent(1,90.32952);
   Jets_cut_nJet__296->SetBinContent(2,118.4219);
   Jets_cut_nJet__296->SetBinContent(3,170.7398);
   Jets_cut_nJet__296->SetBinContent(4,113.5808);
   Jets_cut_nJet__296->SetBinContent(5,56.0044);
   Jets_cut_nJet__296->SetBinContent(6,16.84709);
   Jets_cut_nJet__296->SetBinContent(7,4.623265);
   Jets_cut_nJet__296->SetBinContent(8,1.206942);
   Jets_cut_nJet__296->SetBinContent(9,0.2560961);
   Jets_cut_nJet__296->SetBinContent(10,0.06200969);
   Jets_cut_nJet__296->SetBinContent(11,0.003213498);
   Jets_cut_nJet__296->SetBinContent(12,0.003587917);
   Jets_cut_nJet__296->SetBinError(1,0.3609097);
   Jets_cut_nJet__296->SetBinError(2,0.403813);
   Jets_cut_nJet__296->SetBinError(3,0.4684286);
   Jets_cut_nJet__296->SetBinError(4,0.3678529);
   Jets_cut_nJet__296->SetBinError(5,0.2681921);
   Jets_cut_nJet__296->SetBinError(6,0.1551353);
   Jets_cut_nJet__296->SetBinError(7,0.0844222);
   Jets_cut_nJet__296->SetBinError(8,0.04519467);
   Jets_cut_nJet__296->SetBinError(9,0.02090503);
   Jets_cut_nJet__296->SetBinError(10,0.009609451);
   Jets_cut_nJet__296->SetBinError(11,0.001872239);
   Jets_cut_nJet__296->SetBinError(12,0.002179139);
   Jets_cut_nJet__296->SetEntries(499616);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__296->SetLineColor(ci);
   Jets_cut_nJet__296->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__296->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__296->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__296->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__296->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__296->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__296->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__296->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__296->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__296->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__296->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__296->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__296->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__296->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__296->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_tagOnly_17->Modified();
   nJet_tagOnly_17->cd();
   nJet_tagOnly_17->SetSelected(nJet_tagOnly_17);
}
