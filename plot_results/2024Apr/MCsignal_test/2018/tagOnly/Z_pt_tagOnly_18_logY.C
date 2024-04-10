#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_tagOnly_18_logY()
{
//=========Macro generated from canvas: Z_pt_tagOnly_18/Z_pt_tagOnly_18
//=========  (Tue Apr  9 15:53:52 2024) by ROOT version 6.28/10
   TCanvas *Z_pt_tagOnly_18 = new TCanvas("Z_pt_tagOnly_18", "Z_pt_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_pt_tagOnly_18->SetHighLightColor(2);
   Z_pt_tagOnly_18->Range(59.99999,-0.13125,1660,1.18125);
   Z_pt_tagOnly_18->SetFillColor(0);
   Z_pt_tagOnly_18->SetFillStyle(4000);
   Z_pt_tagOnly_18->SetBorderMode(0);
   Z_pt_tagOnly_18->SetBorderSize(2);
   Z_pt_tagOnly_18->SetLeftMargin(0.15);
   Z_pt_tagOnly_18->SetFrameFillStyle(1000);
   Z_pt_tagOnly_18->SetFrameBorderMode(0);
   Z_pt_tagOnly_18->SetFrameFillStyle(1000);
   Z_pt_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Z_pt__27 = new TH1D("VH_tagOnly_Z_pt__27","",500,0,2000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Z_pt__27->SetLineColor(ci);
   VH_tagOnly_Z_pt__27->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   VH_tagOnly_Z_pt__27->GetXaxis()->SetRange(76,375);
   VH_tagOnly_Z_pt__27->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Z_pt__27->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_pt__27->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Z_pt__27->GetYaxis()->SetTitle("Events/4.0 GeV");
   VH_tagOnly_Z_pt__27->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Z_pt__27->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Z_pt__27->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Z_pt__27->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Z_pt__27->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Z_pt__27->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Z_pt__27->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_pt__27->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Z_pt__27->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_tagOnly_18->Modified();
   Z_pt_tagOnly_18->cd();
   Z_pt_tagOnly_18->SetSelected(Z_pt_tagOnly_18);
}
