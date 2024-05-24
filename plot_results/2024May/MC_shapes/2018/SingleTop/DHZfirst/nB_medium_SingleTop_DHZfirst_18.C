#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_SingleTop_DHZfirst_18()
{
//=========Macro generated from canvas: nB_medium_SingleTop_DHZfirst_18/nB_medium_SingleTop_DHZfirst_18
//=========  (Fri May 24 12:43:46 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_SingleTop_DHZfirst_18 = new TCanvas("nB_medium_SingleTop_DHZfirst_18", "nB_medium_SingleTop_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_SingleTop_DHZfirst_18->SetHighLightColor(2);
   nB_medium_SingleTop_DHZfirst_18->Range(-2.5,-1027248,10.83333,9245232);
   nB_medium_SingleTop_DHZfirst_18->SetFillColor(0);
   nB_medium_SingleTop_DHZfirst_18->SetFillStyle(4000);
   nB_medium_SingleTop_DHZfirst_18->SetBorderMode(0);
   nB_medium_SingleTop_DHZfirst_18->SetBorderSize(2);
   nB_medium_SingleTop_DHZfirst_18->SetLeftMargin(0.15);
   nB_medium_SingleTop_DHZfirst_18->SetFrameFillStyle(1000);
   nB_medium_SingleTop_DHZfirst_18->SetFrameBorderMode(0);
   nB_medium_SingleTop_DHZfirst_18->SetFrameFillStyle(1000);
   nB_medium_SingleTop_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__6021 = new TH1D("Jets_cut_nB_medium__6021","",10,-0.5,9.5);
   Jets_cut_nB_medium__6021->SetBinContent(1,7826652);
   Jets_cut_nB_medium__6021->SetBinContent(2,7705860);
   Jets_cut_nB_medium__6021->SetBinContent(3,1711790);
   Jets_cut_nB_medium__6021->SetBinContent(4,101357.7);
   Jets_cut_nB_medium__6021->SetBinContent(5,3919.675);
   Jets_cut_nB_medium__6021->SetBinContent(6,148.2639);
   Jets_cut_nB_medium__6021->SetBinContent(7,5.302185);
   Jets_cut_nB_medium__6021->SetBinContent(8,0.08674624);
   Jets_cut_nB_medium__6021->SetBinError(1,1057.852);
   Jets_cut_nB_medium__6021->SetBinError(2,1142.84);
   Jets_cut_nB_medium__6021->SetBinError(3,600.3224);
   Jets_cut_nB_medium__6021->SetBinError(4,182.7925);
   Jets_cut_nB_medium__6021->SetBinError(5,45.23429);
   Jets_cut_nB_medium__6021->SetBinError(6,9.448057);
   Jets_cut_nB_medium__6021->SetBinError(7,1.36679);
   Jets_cut_nB_medium__6021->SetBinError(8,0.06136678);
   Jets_cut_nB_medium__6021->SetEntries(2.85745e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__6021->SetLineColor(ci);
   Jets_cut_nB_medium__6021->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__6021->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__6021->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__6021->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__6021->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__6021->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__6021->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__6021->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__6021->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__6021->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__6021->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__6021->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__6021->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__6021->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__6021->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_SingleTop_DHZfirst_18->Modified();
   nB_medium_SingleTop_DHZfirst_18->cd();
   nB_medium_SingleTop_DHZfirst_18->SetSelected(nB_medium_SingleTop_DHZfirst_18);
}
