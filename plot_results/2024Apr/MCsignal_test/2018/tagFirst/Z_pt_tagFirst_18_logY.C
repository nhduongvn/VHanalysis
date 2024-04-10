#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_tagFirst_18_logY()
{
//=========Macro generated from canvas: Z_pt_tagFirst_18/Z_pt_tagFirst_18
//=========  (Tue Apr  9 15:53:52 2024) by ROOT version 6.28/10
   TCanvas *Z_pt_tagFirst_18 = new TCanvas("Z_pt_tagFirst_18", "Z_pt_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_pt_tagFirst_18->SetHighLightColor(2);
   Z_pt_tagFirst_18->Range(59.99999,-0.13125,1660,1.18125);
   Z_pt_tagFirst_18->SetFillColor(0);
   Z_pt_tagFirst_18->SetFillStyle(4000);
   Z_pt_tagFirst_18->SetBorderMode(0);
   Z_pt_tagFirst_18->SetBorderSize(2);
   Z_pt_tagFirst_18->SetLeftMargin(0.15);
   Z_pt_tagFirst_18->SetFrameFillStyle(1000);
   Z_pt_tagFirst_18->SetFrameBorderMode(0);
   Z_pt_tagFirst_18->SetFrameFillStyle(1000);
   Z_pt_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Z_pt__3 = new TH1D("VH_tagFirst_Z_pt__3","",500,0,2000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_pt__3->SetLineColor(ci);
   VH_tagFirst_Z_pt__3->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   VH_tagFirst_Z_pt__3->GetXaxis()->SetRange(76,375);
   VH_tagFirst_Z_pt__3->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_pt__3->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_pt__3->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_pt__3->GetYaxis()->SetTitle("Events/4.0 GeV");
   VH_tagFirst_Z_pt__3->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_pt__3->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Z_pt__3->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Z_pt__3->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Z_pt__3->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_pt__3->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_pt__3->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_pt__3->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_pt__3->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_tagFirst_18->Modified();
   Z_pt_tagFirst_18->cd();
   Z_pt_tagFirst_18->SetSelected(Z_pt_tagFirst_18);
}
