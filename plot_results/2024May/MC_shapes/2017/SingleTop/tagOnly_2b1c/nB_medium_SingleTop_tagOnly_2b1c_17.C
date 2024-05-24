#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_SingleTop_tagOnly_2b1c_17()
{
//=========Macro generated from canvas: nB_medium_SingleTop_tagOnly_2b1c_17/nB_medium_SingleTop_tagOnly_2b1c_17
//=========  (Fri May 24 12:44:19 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_SingleTop_tagOnly_2b1c_17 = new TCanvas("nB_medium_SingleTop_tagOnly_2b1c_17", "nB_medium_SingleTop_tagOnly_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_SingleTop_tagOnly_2b1c_17->SetHighLightColor(2);
   nB_medium_SingleTop_tagOnly_2b1c_17->Range(-2.5,-639630.2,10.83333,5756671);
   nB_medium_SingleTop_tagOnly_2b1c_17->SetFillColor(0);
   nB_medium_SingleTop_tagOnly_2b1c_17->SetFillStyle(4000);
   nB_medium_SingleTop_tagOnly_2b1c_17->SetBorderMode(0);
   nB_medium_SingleTop_tagOnly_2b1c_17->SetBorderSize(2);
   nB_medium_SingleTop_tagOnly_2b1c_17->SetLeftMargin(0.15);
   nB_medium_SingleTop_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   nB_medium_SingleTop_tagOnly_2b1c_17->SetFrameBorderMode(0);
   nB_medium_SingleTop_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   nB_medium_SingleTop_tagOnly_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__7580 = new TH1D("Jets_cut_nB_medium__7580","",10,-0.5,9.5);
   Jets_cut_nB_medium__7580->SetBinContent(1,4873372);
   Jets_cut_nB_medium__7580->SetBinContent(2,4329298);
   Jets_cut_nB_medium__7580->SetBinContent(3,798771);
   Jets_cut_nB_medium__7580->SetBinContent(4,43390.71);
   Jets_cut_nB_medium__7580->SetBinContent(5,1641.187);
   Jets_cut_nB_medium__7580->SetBinContent(6,67.86632);
   Jets_cut_nB_medium__7580->SetBinContent(7,3.498508);
   Jets_cut_nB_medium__7580->SetBinContent(8,0.02710855);
   Jets_cut_nB_medium__7580->SetBinError(1,684.1484);
   Jets_cut_nB_medium__7580->SetBinError(2,655.2279);
   Jets_cut_nB_medium__7580->SetBinError(3,296.6962);
   Jets_cut_nB_medium__7580->SetBinError(4,82.19751);
   Jets_cut_nB_medium__7580->SetBinError(5,19.73407);
   Jets_cut_nB_medium__7580->SetBinError(6,4.289255);
   Jets_cut_nB_medium__7580->SetBinError(7,1.137833);
   Jets_cut_nB_medium__7580->SetBinError(8,0.02710855);
   Jets_cut_nB_medium__7580->SetEntries(2.00651e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__7580->SetLineColor(ci);
   Jets_cut_nB_medium__7580->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__7580->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__7580->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__7580->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__7580->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__7580->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__7580->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__7580->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__7580->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__7580->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__7580->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__7580->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__7580->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__7580->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__7580->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_SingleTop_tagOnly_2b1c_17->Modified();
   nB_medium_SingleTop_tagOnly_2b1c_17->cd();
   nB_medium_SingleTop_tagOnly_2b1c_17->SetSelected(nB_medium_SingleTop_tagOnly_2b1c_17);
}
