#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_tagFirst_2combo_18_logY()
{
//=========Macro generated from canvas: H_pt_tagFirst_2combo_18/H_pt_tagFirst_2combo_18
//=========  (Thu Apr 11 14:04:09 2024) by ROOT version 6.28/10
   TCanvas *H_pt_tagFirst_2combo_18 = new TCanvas("H_pt_tagFirst_2combo_18", "H_pt_tagFirst_2combo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_pt_tagFirst_2combo_18->SetHighLightColor(2);
   H_pt_tagFirst_2combo_18->Range(59.99999,-90.67658,1660,816.0891);
   H_pt_tagFirst_2combo_18->SetFillColor(0);
   H_pt_tagFirst_2combo_18->SetFillStyle(4000);
   H_pt_tagFirst_2combo_18->SetBorderMode(0);
   H_pt_tagFirst_2combo_18->SetBorderSize(2);
   H_pt_tagFirst_2combo_18->SetLeftMargin(0.15);
   H_pt_tagFirst_2combo_18->SetFrameFillStyle(1000);
   H_pt_tagFirst_2combo_18->SetFrameBorderMode(0);
   H_pt_tagFirst_2combo_18->SetFrameFillStyle(1000);
   H_pt_tagFirst_2combo_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2combo_H_pt__100 = new TH1D("VH_tagFirst_2combo_H_pt__100","",500,0,2000);
   VH_tagFirst_2combo_H_pt__100->SetBinContent(64,826.4895);
   VH_tagFirst_2combo_H_pt__100->SetBinContent(103,690.8691);
   VH_tagFirst_2combo_H_pt__100->SetBinContent(165,428.6841);
   VH_tagFirst_2combo_H_pt__100->SetBinContent(204,249.8734);
   VH_tagFirst_2combo_H_pt__100->SetBinError(64,826.4895);
   VH_tagFirst_2combo_H_pt__100->SetBinError(103,690.8691);
   VH_tagFirst_2combo_H_pt__100->SetBinError(165,428.6841);
   VH_tagFirst_2combo_H_pt__100->SetBinError(204,249.8734);
   VH_tagFirst_2combo_H_pt__100->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2combo_H_pt__100->SetLineColor(ci);
   VH_tagFirst_2combo_H_pt__100->GetXaxis()->SetTitle("H p_{T} [GeV]");
   VH_tagFirst_2combo_H_pt__100->GetXaxis()->SetRange(76,375);
   VH_tagFirst_2combo_H_pt__100->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_H_pt__100->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_H_pt__100->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_H_pt__100->GetYaxis()->SetTitle("Events/4.0 GeV");
   VH_tagFirst_2combo_H_pt__100->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_H_pt__100->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2combo_H_pt__100->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2combo_H_pt__100->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2combo_H_pt__100->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_H_pt__100->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_H_pt__100->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_H_pt__100->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_H_pt__100->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_tagFirst_2combo_18->Modified();
   H_pt_tagFirst_2combo_18->cd();
   H_pt_tagFirst_2combo_18->SetSelected(H_pt_tagFirst_2combo_18);
}
