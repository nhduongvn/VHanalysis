#ifdef __CLING__
#pragma cling optimize(0)
#endif
void dR_HZ_tagOnly_18()
{
//=========Macro generated from canvas: dR_HZ_tagOnly_18/dR_HZ_tagOnly_18
//=========  (Tue Apr  9 15:53:52 2024) by ROOT version 6.28/10
   TCanvas *dR_HZ_tagOnly_18 = new TCanvas("dR_HZ_tagOnly_18", "dR_HZ_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   dR_HZ_tagOnly_18->SetHighLightColor(2);
   dR_HZ_tagOnly_18->Range(-1.22,-0.13125,6.913333,1.18125);
   dR_HZ_tagOnly_18->SetFillColor(0);
   dR_HZ_tagOnly_18->SetFillStyle(4000);
   dR_HZ_tagOnly_18->SetBorderMode(0);
   dR_HZ_tagOnly_18->SetBorderSize(2);
   dR_HZ_tagOnly_18->SetLeftMargin(0.15);
   dR_HZ_tagOnly_18->SetFrameFillStyle(1000);
   dR_HZ_tagOnly_18->SetFrameBorderMode(0);
   dR_HZ_tagOnly_18->SetFrameFillStyle(1000);
   dR_HZ_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_dR_HZ__34 = new TH1D("VH_tagOnly_dR_HZ__34","",60,0,6);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_dR_HZ__34->SetLineColor(ci);
   VH_tagOnly_dR_HZ__34->GetXaxis()->SetTitle("#DeltaR_{ZH}");
   VH_tagOnly_dR_HZ__34->GetXaxis()->SetRange(1,61);
   VH_tagOnly_dR_HZ__34->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_dR_HZ__34->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_dR_HZ__34->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_dR_HZ__34->GetYaxis()->SetTitle("Events/0.1");
   VH_tagOnly_dR_HZ__34->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_dR_HZ__34->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_dR_HZ__34->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_dR_HZ__34->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_dR_HZ__34->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_dR_HZ__34->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_dR_HZ__34->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_dR_HZ__34->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_dR_HZ__34->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dR_HZ_tagOnly_18->Modified();
   dR_HZ_tagOnly_18->cd();
   dR_HZ_tagOnly_18->SetSelected(dR_HZ_tagOnly_18);
}
