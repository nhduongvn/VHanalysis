#ifdef __CLING__
#pragma cling optimize(0)
#endif
void dPhi_HZ_tagOnly_18()
{
//=========Macro generated from canvas: dPhi_HZ_tagOnly_18/dPhi_HZ_tagOnly_18
//=========  (Tue Apr  9 15:53:52 2024) by ROOT version 6.28/10
   TCanvas *dPhi_HZ_tagOnly_18 = new TCanvas("dPhi_HZ_tagOnly_18", "dPhi_HZ_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   dPhi_HZ_tagOnly_18->SetHighLightColor(2);
   dPhi_HZ_tagOnly_18->Range(-5.6,-0.13125,5.066667,1.18125);
   dPhi_HZ_tagOnly_18->SetFillColor(0);
   dPhi_HZ_tagOnly_18->SetFillStyle(4000);
   dPhi_HZ_tagOnly_18->SetBorderMode(0);
   dPhi_HZ_tagOnly_18->SetBorderSize(2);
   dPhi_HZ_tagOnly_18->SetLeftMargin(0.15);
   dPhi_HZ_tagOnly_18->SetFrameFillStyle(1000);
   dPhi_HZ_tagOnly_18->SetFrameBorderMode(0);
   dPhi_HZ_tagOnly_18->SetFrameFillStyle(1000);
   dPhi_HZ_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_dPhi_HZ__33 = new TH1D("VH_tagOnly_dPhi_HZ__33","",480,-4,4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_dPhi_HZ__33->SetLineColor(ci);
   VH_tagOnly_dPhi_HZ__33->GetXaxis()->SetTitle("#Delta#Phi_{ZH}");
   VH_tagOnly_dPhi_HZ__33->GetXaxis()->SetRange(1,480);
   VH_tagOnly_dPhi_HZ__33->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_dPhi_HZ__33->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_dPhi_HZ__33->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_dPhi_HZ__33->GetYaxis()->SetTitle("Events/0.017");
   VH_tagOnly_dPhi_HZ__33->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_dPhi_HZ__33->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_dPhi_HZ__33->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_dPhi_HZ__33->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_dPhi_HZ__33->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_dPhi_HZ__33->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_dPhi_HZ__33->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_dPhi_HZ__33->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_dPhi_HZ__33->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dPhi_HZ_tagOnly_18->Modified();
   dPhi_HZ_tagOnly_18->cd();
   dPhi_HZ_tagOnly_18->SetSelected(dPhi_HZ_tagOnly_18);
}
