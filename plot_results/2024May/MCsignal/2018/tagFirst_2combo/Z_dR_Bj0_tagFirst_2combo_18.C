#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_tagFirst_2combo_18()
{
//=========Macro generated from canvas: Z_dR_Bj0_tagFirst_2combo_18/Z_dR_Bj0_tagFirst_2combo_18
//=========  (Thu May 23 13:53:22 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_Bj0_tagFirst_2combo_18 = new TCanvas("Z_dR_Bj0_tagFirst_2combo_18", "Z_dR_Bj0_tagFirst_2combo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_tagFirst_2combo_18->SetHighLightColor(2);
   Z_dR_Bj0_tagFirst_2combo_18->Range(-1.2,-0.002800963,6.8,0.02520867);
   Z_dR_Bj0_tagFirst_2combo_18->SetFillColor(0);
   Z_dR_Bj0_tagFirst_2combo_18->SetFillStyle(4000);
   Z_dR_Bj0_tagFirst_2combo_18->SetBorderMode(0);
   Z_dR_Bj0_tagFirst_2combo_18->SetBorderSize(2);
   Z_dR_Bj0_tagFirst_2combo_18->SetLeftMargin(0.15);
   Z_dR_Bj0_tagFirst_2combo_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_tagFirst_2combo_18->SetFrameBorderMode(0);
   Z_dR_Bj0_tagFirst_2combo_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_tagFirst_2combo_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2combo_Z_dR_Bj0__109 = new TH1D("VH_tagFirst_2combo_Z_dR_Bj0__109","",30,0,6);
   VH_tagFirst_2combo_Z_dR_Bj0__109->SetBinContent(1,0.006402201);
   VH_tagFirst_2combo_Z_dR_Bj0__109->SetBinContent(2,0.02134067);
   VH_tagFirst_2combo_Z_dR_Bj0__109->SetBinContent(3,0.008536268);
   VH_tagFirst_2combo_Z_dR_Bj0__109->SetBinContent(4,0.002134067);
   VH_tagFirst_2combo_Z_dR_Bj0__109->SetBinContent(12,0.002134067);
   VH_tagFirst_2combo_Z_dR_Bj0__109->SetBinContent(14,0.002134067);
   VH_tagFirst_2combo_Z_dR_Bj0__109->SetBinError(1,0.003696313);
   VH_tagFirst_2combo_Z_dR_Bj0__109->SetBinError(2,0.006748513);
   VH_tagFirst_2combo_Z_dR_Bj0__109->SetBinError(3,0.004268134);
   VH_tagFirst_2combo_Z_dR_Bj0__109->SetBinError(4,0.002134067);
   VH_tagFirst_2combo_Z_dR_Bj0__109->SetBinError(12,0.002134067);
   VH_tagFirst_2combo_Z_dR_Bj0__109->SetBinError(14,0.002134067);
   VH_tagFirst_2combo_Z_dR_Bj0__109->SetEntries(20);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2combo_Z_dR_Bj0__109->SetLineColor(ci);
   VH_tagFirst_2combo_Z_dR_Bj0__109->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VH_tagFirst_2combo_Z_dR_Bj0__109->GetXaxis()->SetRange(1,30);
   VH_tagFirst_2combo_Z_dR_Bj0__109->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Z_dR_Bj0__109->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_Z_dR_Bj0__109->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Z_dR_Bj0__109->GetYaxis()->SetTitle("Events/0.2");
   VH_tagFirst_2combo_Z_dR_Bj0__109->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Z_dR_Bj0__109->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2combo_Z_dR_Bj0__109->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2combo_Z_dR_Bj0__109->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2combo_Z_dR_Bj0__109->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Z_dR_Bj0__109->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Z_dR_Bj0__109->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_Z_dR_Bj0__109->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Z_dR_Bj0__109->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_tagFirst_2combo_18->Modified();
   Z_dR_Bj0_tagFirst_2combo_18->cd();
   Z_dR_Bj0_tagFirst_2combo_18->SetSelected(Z_dR_Bj0_tagFirst_2combo_18);
}
