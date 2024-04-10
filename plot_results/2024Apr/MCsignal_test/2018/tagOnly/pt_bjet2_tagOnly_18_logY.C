#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_bjet2_tagOnly_18_logY()
{
//=========Macro generated from canvas: pt_bjet2_tagOnly_18/pt_bjet2_tagOnly_18
//=========  (Tue Apr  9 15:53:53 2024) by ROOT version 6.28/10
   TCanvas *pt_bjet2_tagOnly_18 = new TCanvas("pt_bjet2_tagOnly_18", "pt_bjet2_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   pt_bjet2_tagOnly_18->SetHighLightColor(2);
   pt_bjet2_tagOnly_18->Range(-400,-1.492467e+07,2266.667,1.34322e+08);
   pt_bjet2_tagOnly_18->SetFillColor(0);
   pt_bjet2_tagOnly_18->SetFillStyle(4000);
   pt_bjet2_tagOnly_18->SetBorderMode(0);
   pt_bjet2_tagOnly_18->SetBorderSize(2);
   pt_bjet2_tagOnly_18->SetLeftMargin(0.15);
   pt_bjet2_tagOnly_18->SetFrameFillStyle(1000);
   pt_bjet2_tagOnly_18->SetFrameBorderMode(0);
   pt_bjet2_tagOnly_18->SetFrameFillStyle(1000);
   pt_bjet2_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_pt_bjet2__118 = new TH1D("Jets_cut_pt_bjet2__118","",500,0,2000);
   Jets_cut_pt_bjet2__118->SetBinContent(12,1.137117e+08);
   Jets_cut_pt_bjet2__118->SetBinContent(13,8.921098e+07);
   Jets_cut_pt_bjet2__118->SetBinContent(14,4.571274e+07);
   Jets_cut_pt_bjet2__118->SetBinContent(15,3.343124e+07);
   Jets_cut_pt_bjet2__118->SetBinContent(16,1.561384e+07);
   Jets_cut_pt_bjet2__118->SetBinContent(18,5995200);
   Jets_cut_pt_bjet2__118->SetBinContent(20,5731800);
   Jets_cut_pt_bjet2__118->SetBinContent(21,1528151);
   Jets_cut_pt_bjet2__118->SetBinContent(25,2064382);
   Jets_cut_pt_bjet2__118->SetBinError(12,1.728162e+07);
   Jets_cut_pt_bjet2__118->SetBinError(13,1.318903e+07);
   Jets_cut_pt_bjet2__118->SetBinError(14,9698880);
   Jets_cut_pt_bjet2__118->SetBinError(15,1.285657e+07);
   Jets_cut_pt_bjet2__118->SetBinError(16,8384372);
   Jets_cut_pt_bjet2__118->SetBinError(18,3747148);
   Jets_cut_pt_bjet2__118->SetBinError(20,4305678);
   Jets_cut_pt_bjet2__118->SetBinError(21,1528151);
   Jets_cut_pt_bjet2__118->SetBinError(25,2064382);
   Jets_cut_pt_bjet2__118->SetEntries(179);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_pt_bjet2__118->SetLineColor(ci);
   Jets_cut_pt_bjet2__118->GetXaxis()->SetTitle("p_{T} (subsubleading b-jet) [GeV]");
   Jets_cut_pt_bjet2__118->GetXaxis()->SetRange(1,500);
   Jets_cut_pt_bjet2__118->GetXaxis()->SetLabelFont(42);
   Jets_cut_pt_bjet2__118->GetXaxis()->SetTitleOffset(1);
   Jets_cut_pt_bjet2__118->GetXaxis()->SetTitleFont(42);
   Jets_cut_pt_bjet2__118->GetYaxis()->SetTitle("Events/4.0 GeV");
   Jets_cut_pt_bjet2__118->GetYaxis()->SetLabelFont(42);
   Jets_cut_pt_bjet2__118->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_pt_bjet2__118->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_pt_bjet2__118->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_pt_bjet2__118->GetYaxis()->SetTitleFont(42);
   Jets_cut_pt_bjet2__118->GetZaxis()->SetLabelFont(42);
   Jets_cut_pt_bjet2__118->GetZaxis()->SetTitleOffset(1);
   Jets_cut_pt_bjet2__118->GetZaxis()->SetTitleFont(42);
   Jets_cut_pt_bjet2__118->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   pt_bjet2_tagOnly_18->Modified();
   pt_bjet2_tagOnly_18->cd();
   pt_bjet2_tagOnly_18->SetSelected(pt_bjet2_tagOnly_18);
}
