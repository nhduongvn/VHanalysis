#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dPhi_DHZfirst_18()
{
//=========Macro generated from canvas: Z_dPhi_DHZfirst_18/Z_dPhi_DHZfirst_18
//=========  (Tue Apr  9 15:53:52 2024) by ROOT version 6.28/10
   TCanvas *Z_dPhi_DHZfirst_18 = new TCanvas("Z_dPhi_DHZfirst_18", "Z_dPhi_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dPhi_DHZfirst_18->SetHighLightColor(2);
   Z_dPhi_DHZfirst_18->Range(-0.8,-0.13125,4.533333,1.18125);
   Z_dPhi_DHZfirst_18->SetFillColor(0);
   Z_dPhi_DHZfirst_18->SetFillStyle(4000);
   Z_dPhi_DHZfirst_18->SetBorderMode(0);
   Z_dPhi_DHZfirst_18->SetBorderSize(2);
   Z_dPhi_DHZfirst_18->SetLeftMargin(0.15);
   Z_dPhi_DHZfirst_18->SetFrameFillStyle(1000);
   Z_dPhi_DHZfirst_18->SetFrameBorderMode(0);
   Z_dPhi_DHZfirst_18->SetFrameFillStyle(1000);
   Z_dPhi_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dPhi__55 = new TH1D("VH_DHZfirst_Z_dPhi__55","",120,0,4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dPhi__55->SetLineColor(ci);
   VH_DHZfirst_Z_dPhi__55->GetXaxis()->SetTitle("#Delta#phi(b,b)");
   VH_DHZfirst_Z_dPhi__55->GetXaxis()->SetRange(1,120);
   VH_DHZfirst_Z_dPhi__55->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dPhi__55->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dPhi__55->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dPhi__55->GetYaxis()->SetTitle("Events/0.033");
   VH_DHZfirst_Z_dPhi__55->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dPhi__55->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dPhi__55->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dPhi__55->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dPhi__55->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dPhi__55->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dPhi__55->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dPhi__55->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dPhi__55->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dPhi_DHZfirst_18->Modified();
   Z_dPhi_DHZfirst_18->cd();
   Z_dPhi_DHZfirst_18->SetSelected(Z_dPhi_DHZfirst_18);
}
