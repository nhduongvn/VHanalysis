#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetpt_JEC_tagFirst_2combo_18_logY()
{
//=========Macro generated from canvas: Z_jetpt_JEC_tagFirst_2combo_18/Z_jetpt_JEC_tagFirst_2combo_18
//=========  (Thu Apr 11 14:04:10 2024) by ROOT version 6.28/10
   TCanvas *Z_jetpt_JEC_tagFirst_2combo_18 = new TCanvas("Z_jetpt_JEC_tagFirst_2combo_18", "Z_jetpt_JEC_tagFirst_2combo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetpt_JEC_tagFirst_2combo_18->SetHighLightColor(2);
   Z_jetpt_JEC_tagFirst_2combo_18->Range(-60,-90.67658,340,816.0891);
   Z_jetpt_JEC_tagFirst_2combo_18->SetFillColor(0);
   Z_jetpt_JEC_tagFirst_2combo_18->SetFillStyle(4000);
   Z_jetpt_JEC_tagFirst_2combo_18->SetBorderMode(0);
   Z_jetpt_JEC_tagFirst_2combo_18->SetBorderSize(2);
   Z_jetpt_JEC_tagFirst_2combo_18->SetLeftMargin(0.15);
   Z_jetpt_JEC_tagFirst_2combo_18->SetFrameFillStyle(1000);
   Z_jetpt_JEC_tagFirst_2combo_18->SetFrameBorderMode(0);
   Z_jetpt_JEC_tagFirst_2combo_18->SetFrameFillStyle(1000);
   Z_jetpt_JEC_tagFirst_2combo_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2combo_Z_jetpt_JEC__118 = new TH1D("VH_tagFirst_2combo_Z_jetpt_JEC__118","",75,0,300);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinContent(42,428.6841);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinContent(47,690.8691);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinContent(76,1076.363);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinError(42,428.6841);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinError(47,690.8691);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinError(76,863.4359);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetLineColor(ci);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->GetXaxis()->SetTitle("b-jet p_{T} (w/ JEC) [GeV]");
   VH_tagFirst_2combo_Z_jetpt_JEC__118->GetXaxis()->SetRange(1,75);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->GetYaxis()->SetTitle("Events/4.0 GeV");
   VH_tagFirst_2combo_Z_jetpt_JEC__118->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetpt_JEC_tagFirst_2combo_18->Modified();
   Z_jetpt_JEC_tagFirst_2combo_18->cd();
   Z_jetpt_JEC_tagFirst_2combo_18->SetSelected(Z_jetpt_JEC_tagFirst_2combo_18);
}
