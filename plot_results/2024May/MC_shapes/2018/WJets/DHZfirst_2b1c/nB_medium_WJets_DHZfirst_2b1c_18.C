#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_WJets_DHZfirst_2b1c_18()
{
//=========Macro generated from canvas: nB_medium_WJets_DHZfirst_2b1c_18/nB_medium_WJets_DHZfirst_2b1c_18
//=========  (Fri May 24 12:44:36 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_WJets_DHZfirst_2b1c_18 = new TCanvas("nB_medium_WJets_DHZfirst_2b1c_18", "nB_medium_WJets_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_WJets_DHZfirst_2b1c_18->SetHighLightColor(2);
   nB_medium_WJets_DHZfirst_2b1c_18->Range(-2.5,-3.232852e+07,10.83333,2.909566e+08);
   nB_medium_WJets_DHZfirst_2b1c_18->SetFillColor(0);
   nB_medium_WJets_DHZfirst_2b1c_18->SetFillStyle(4000);
   nB_medium_WJets_DHZfirst_2b1c_18->SetBorderMode(0);
   nB_medium_WJets_DHZfirst_2b1c_18->SetBorderSize(2);
   nB_medium_WJets_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   nB_medium_WJets_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   nB_medium_WJets_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   nB_medium_WJets_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   nB_medium_WJets_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__8352 = new TH1D("Jets_cut_nB_medium__8352","",10,-0.5,9.5);
   Jets_cut_nB_medium__8352->SetBinContent(1,2.463125e+08);
   Jets_cut_nB_medium__8352->SetBinContent(2,2.01748e+07);
   Jets_cut_nB_medium__8352->SetBinContent(3,1020030);
   Jets_cut_nB_medium__8352->SetBinContent(4,37691.85);
   Jets_cut_nB_medium__8352->SetBinContent(5,1132.651);
   Jets_cut_nB_medium__8352->SetBinContent(6,62.53226);
   Jets_cut_nB_medium__8352->SetBinContent(7,2.66967);
   Jets_cut_nB_medium__8352->SetBinContent(8,0.002089871);
   Jets_cut_nB_medium__8352->SetBinError(1,42524.07);
   Jets_cut_nB_medium__8352->SetBinError(2,13319.44);
   Jets_cut_nB_medium__8352->SetBinError(3,3262.144);
   Jets_cut_nB_medium__8352->SetBinError(4,520.6234);
   Jets_cut_nB_medium__8352->SetBinError(5,60.6333);
   Jets_cut_nB_medium__8352->SetBinError(6,24.50953);
   Jets_cut_nB_medium__8352->SetBinError(7,1.191225);
   Jets_cut_nB_medium__8352->SetBinError(8,0.002089871);
   Jets_cut_nB_medium__8352->SetEntries(1.903233e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__8352->SetLineColor(ci);
   Jets_cut_nB_medium__8352->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__8352->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__8352->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__8352->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__8352->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__8352->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__8352->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__8352->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__8352->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__8352->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__8352->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__8352->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__8352->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__8352->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__8352->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_WJets_DHZfirst_2b1c_18->Modified();
   nB_medium_WJets_DHZfirst_2b1c_18->cd();
   nB_medium_WJets_DHZfirst_2b1c_18->SetSelected(nB_medium_WJets_DHZfirst_2b1c_18);
}
