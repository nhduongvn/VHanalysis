#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_tagOnly_18_logY()
{
//=========Macro generated from canvas: H_pt_tagOnly_18/H_pt_tagOnly_18
//=========  (Tue Apr  9 15:53:52 2024) by ROOT version 6.28/10
   TCanvas *H_pt_tagOnly_18 = new TCanvas("H_pt_tagOnly_18", "H_pt_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_pt_tagOnly_18->SetHighLightColor(2);
   H_pt_tagOnly_18->Range(59.99999,-0.13125,1660,1.18125);
   H_pt_tagOnly_18->SetFillColor(0);
   H_pt_tagOnly_18->SetFillStyle(4000);
   H_pt_tagOnly_18->SetBorderMode(0);
   H_pt_tagOnly_18->SetBorderSize(2);
   H_pt_tagOnly_18->SetLeftMargin(0.15);
   H_pt_tagOnly_18->SetFrameFillStyle(1000);
   H_pt_tagOnly_18->SetFrameBorderMode(0);
   H_pt_tagOnly_18->SetFrameFillStyle(1000);
   H_pt_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_H_pt__28 = new TH1D("VH_tagOnly_H_pt__28","",500,0,2000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_H_pt__28->SetLineColor(ci);
   VH_tagOnly_H_pt__28->GetXaxis()->SetTitle("H p_{T} [GeV]");
   VH_tagOnly_H_pt__28->GetXaxis()->SetRange(76,375);
   VH_tagOnly_H_pt__28->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_H_pt__28->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_H_pt__28->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_H_pt__28->GetYaxis()->SetTitle("Events/4.0 GeV");
   VH_tagOnly_H_pt__28->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_H_pt__28->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_H_pt__28->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_H_pt__28->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_H_pt__28->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_H_pt__28->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_H_pt__28->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_H_pt__28->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_H_pt__28->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_tagOnly_18->Modified();
   H_pt_tagOnly_18->cd();
   H_pt_tagOnly_18->SetSelected(H_pt_tagOnly_18);
}
