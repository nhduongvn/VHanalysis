#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_WZ_DHZfirst_2b1c_18()
{
//=========Macro generated from canvas: nB_medium_WZ_DHZfirst_2b1c_18/nB_medium_WZ_DHZfirst_2b1c_18
//=========  (Fri May 24 12:44:37 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_WZ_DHZfirst_2b1c_18 = new TCanvas("nB_medium_WZ_DHZfirst_2b1c_18", "nB_medium_WZ_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_WZ_DHZfirst_2b1c_18->SetHighLightColor(2);
   nB_medium_WZ_DHZfirst_2b1c_18->Range(-2.5,-349269.1,10.83333,3143422);
   nB_medium_WZ_DHZfirst_2b1c_18->SetFillColor(0);
   nB_medium_WZ_DHZfirst_2b1c_18->SetFillStyle(4000);
   nB_medium_WZ_DHZfirst_2b1c_18->SetBorderMode(0);
   nB_medium_WZ_DHZfirst_2b1c_18->SetBorderSize(2);
   nB_medium_WZ_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   nB_medium_WZ_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   nB_medium_WZ_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   nB_medium_WZ_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   nB_medium_WZ_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__8367 = new TH1D("Jets_cut_nB_medium__8367","",10,-0.5,9.5);
   Jets_cut_nB_medium__8367->SetBinContent(1,2661098);
   Jets_cut_nB_medium__8367->SetBinContent(2,234152.3);
   Jets_cut_nB_medium__8367->SetBinContent(3,25778.02);
   Jets_cut_nB_medium__8367->SetBinContent(4,1185.778);
   Jets_cut_nB_medium__8367->SetBinContent(5,35.63859);
   Jets_cut_nB_medium__8367->SetBinContent(6,1.062271);
   Jets_cut_nB_medium__8367->SetBinError(1,1170.034);
   Jets_cut_nB_medium__8367->SetBinError(2,356.1193);
   Jets_cut_nB_medium__8367->SetBinError(3,125.7726);
   Jets_cut_nB_medium__8367->SetBinError(4,28.97245);
   Jets_cut_nB_medium__8367->SetBinError(5,6.11129);
   Jets_cut_nB_medium__8367->SetBinError(6,1.062271);
   Jets_cut_nB_medium__8367->SetEntries(7940000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__8367->SetLineColor(ci);
   Jets_cut_nB_medium__8367->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__8367->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__8367->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__8367->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__8367->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__8367->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__8367->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__8367->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__8367->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__8367->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__8367->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__8367->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__8367->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__8367->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__8367->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_WZ_DHZfirst_2b1c_18->Modified();
   nB_medium_WZ_DHZfirst_2b1c_18->cd();
   nB_medium_WZ_DHZfirst_2b1c_18->SetSelected(nB_medium_WZ_DHZfirst_2b1c_18);
}
