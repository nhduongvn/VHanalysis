#ifdef __CLING__
#pragma cling optimize(0)
#endif
void dR_HZ_tagFirst_2combo_18()
{
//=========Macro generated from canvas: dR_HZ_tagFirst_2combo_18/dR_HZ_tagFirst_2combo_18
//=========  (Thu Apr 11 14:04:09 2024) by ROOT version 6.28/10
   TCanvas *dR_HZ_tagFirst_2combo_18 = new TCanvas("dR_HZ_tagFirst_2combo_18", "dR_HZ_tagFirst_2combo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   dR_HZ_tagFirst_2combo_18->SetHighLightColor(2);
   dR_HZ_tagFirst_2combo_18->Range(-1.22,-108.4768,6.913333,976.2907);
   dR_HZ_tagFirst_2combo_18->SetFillColor(0);
   dR_HZ_tagFirst_2combo_18->SetFillStyle(4000);
   dR_HZ_tagFirst_2combo_18->SetBorderMode(0);
   dR_HZ_tagFirst_2combo_18->SetBorderSize(2);
   dR_HZ_tagFirst_2combo_18->SetLeftMargin(0.15);
   dR_HZ_tagFirst_2combo_18->SetFrameFillStyle(1000);
   dR_HZ_tagFirst_2combo_18->SetFrameBorderMode(0);
   dR_HZ_tagFirst_2combo_18->SetFrameFillStyle(1000);
   dR_HZ_tagFirst_2combo_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2combo_dR_HZ__106 = new TH1D("VH_tagFirst_2combo_dR_HZ__106","",60,0,6);
   VH_tagFirst_2combo_dR_HZ__106->SetBinContent(30,690.8691);
   VH_tagFirst_2combo_dR_HZ__106->SetBinContent(42,249.8734);
   VH_tagFirst_2combo_dR_HZ__106->SetBinContent(43,428.6841);
   VH_tagFirst_2combo_dR_HZ__106->SetBinContent(44,826.4895);
   VH_tagFirst_2combo_dR_HZ__106->SetBinError(30,690.8691);
   VH_tagFirst_2combo_dR_HZ__106->SetBinError(42,249.8734);
   VH_tagFirst_2combo_dR_HZ__106->SetBinError(43,428.6841);
   VH_tagFirst_2combo_dR_HZ__106->SetBinError(44,826.4895);
   VH_tagFirst_2combo_dR_HZ__106->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2combo_dR_HZ__106->SetLineColor(ci);
   VH_tagFirst_2combo_dR_HZ__106->GetXaxis()->SetTitle("#DeltaR_{ZH}");
   VH_tagFirst_2combo_dR_HZ__106->GetXaxis()->SetRange(1,61);
   VH_tagFirst_2combo_dR_HZ__106->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_dR_HZ__106->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_dR_HZ__106->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_dR_HZ__106->GetYaxis()->SetTitle("Events/0.1");
   VH_tagFirst_2combo_dR_HZ__106->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_dR_HZ__106->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2combo_dR_HZ__106->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2combo_dR_HZ__106->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2combo_dR_HZ__106->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_dR_HZ__106->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_dR_HZ__106->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_dR_HZ__106->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_dR_HZ__106->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dR_HZ_tagFirst_2combo_18->Modified();
   dR_HZ_tagFirst_2combo_18->cd();
   dR_HZ_tagFirst_2combo_18->SetSelected(dR_HZ_tagFirst_2combo_18);
}
