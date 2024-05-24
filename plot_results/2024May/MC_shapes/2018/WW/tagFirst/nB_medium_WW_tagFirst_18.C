#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_WW_tagFirst_18()
{
//=========Macro generated from canvas: nB_medium_WW_tagFirst_18/nB_medium_WW_tagFirst_18
//=========  (Fri May 24 12:43:14 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_WW_tagFirst_18 = new TCanvas("nB_medium_WW_tagFirst_18", "nB_medium_WW_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_WW_tagFirst_18->SetHighLightColor(2);
   nB_medium_WW_tagFirst_18->Range(-2.5,-933607,10.83333,8402462);
   nB_medium_WW_tagFirst_18->SetFillColor(0);
   nB_medium_WW_tagFirst_18->SetFillStyle(4000);
   nB_medium_WW_tagFirst_18->SetBorderMode(0);
   nB_medium_WW_tagFirst_18->SetBorderSize(2);
   nB_medium_WW_tagFirst_18->SetLeftMargin(0.15);
   nB_medium_WW_tagFirst_18->SetFrameFillStyle(1000);
   nB_medium_WW_tagFirst_18->SetFrameBorderMode(0);
   nB_medium_WW_tagFirst_18->SetFrameFillStyle(1000);
   nB_medium_WW_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__4464 = new TH1D("Jets_cut_nB_medium__4464","",10,-0.5,9.5);
   Jets_cut_nB_medium__4464->SetBinContent(1,7113195);
   Jets_cut_nB_medium__4464->SetBinContent(2,294117.6);
   Jets_cut_nB_medium__4464->SetBinContent(3,9838.168);
   Jets_cut_nB_medium__4464->SetBinContent(4,326.2176);
   Jets_cut_nB_medium__4464->SetBinContent(5,8.581376);
   Jets_cut_nB_medium__4464->SetBinError(1,2174.369);
   Jets_cut_nB_medium__4464->SetBinError(2,479.987);
   Jets_cut_nB_medium__4464->SetBinError(3,98.08386);
   Jets_cut_nB_medium__4464->SetBinError(4,17.97645);
   Jets_cut_nB_medium__4464->SetBinError(5,3.359134);
   Jets_cut_nB_medium__4464->SetEntries(1.5484e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__4464->SetLineColor(ci);
   Jets_cut_nB_medium__4464->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__4464->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__4464->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__4464->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__4464->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__4464->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__4464->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__4464->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__4464->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__4464->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__4464->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__4464->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__4464->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__4464->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__4464->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_WW_tagFirst_18->Modified();
   nB_medium_WW_tagFirst_18->cd();
   nB_medium_WW_tagFirst_18->SetSelected(nB_medium_WW_tagFirst_18);
}
