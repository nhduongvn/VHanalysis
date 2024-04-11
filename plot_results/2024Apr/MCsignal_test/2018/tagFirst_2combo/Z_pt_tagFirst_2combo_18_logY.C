#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_tagFirst_2combo_18_logY()
{
//=========Macro generated from canvas: Z_pt_tagFirst_2combo_18/Z_pt_tagFirst_2combo_18
//=========  (Thu Apr 11 14:04:09 2024) by ROOT version 6.28/10
   TCanvas *Z_pt_tagFirst_2combo_18 = new TCanvas("Z_pt_tagFirst_2combo_18", "Z_pt_tagFirst_2combo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_pt_tagFirst_2combo_18->SetHighLightColor(2);
   Z_pt_tagFirst_2combo_18->Range(59.99999,-108.4768,1660,976.2907);
   Z_pt_tagFirst_2combo_18->SetFillColor(0);
   Z_pt_tagFirst_2combo_18->SetFillStyle(4000);
   Z_pt_tagFirst_2combo_18->SetBorderMode(0);
   Z_pt_tagFirst_2combo_18->SetBorderSize(2);
   Z_pt_tagFirst_2combo_18->SetLeftMargin(0.15);
   Z_pt_tagFirst_2combo_18->SetFrameFillStyle(1000);
   Z_pt_tagFirst_2combo_18->SetFrameBorderMode(0);
   Z_pt_tagFirst_2combo_18->SetFrameFillStyle(1000);
   Z_pt_tagFirst_2combo_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2combo_Z_pt__99 = new TH1D("VH_tagFirst_2combo_Z_pt__99","",500,0,2000);
   VH_tagFirst_2combo_Z_pt__99->SetBinContent(33,428.6841);
   VH_tagFirst_2combo_Z_pt__99->SetBinContent(71,690.8691);
   VH_tagFirst_2combo_Z_pt__99->SetBinContent(115,826.4895);
   VH_tagFirst_2combo_Z_pt__99->SetBinContent(140,249.8734);
   VH_tagFirst_2combo_Z_pt__99->SetBinError(33,428.6841);
   VH_tagFirst_2combo_Z_pt__99->SetBinError(71,690.8691);
   VH_tagFirst_2combo_Z_pt__99->SetBinError(115,826.4895);
   VH_tagFirst_2combo_Z_pt__99->SetBinError(140,249.8734);
   VH_tagFirst_2combo_Z_pt__99->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2combo_Z_pt__99->SetLineColor(ci);
   VH_tagFirst_2combo_Z_pt__99->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   VH_tagFirst_2combo_Z_pt__99->GetXaxis()->SetRange(76,375);
   VH_tagFirst_2combo_Z_pt__99->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Z_pt__99->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_Z_pt__99->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Z_pt__99->GetYaxis()->SetTitle("Events/4.0 GeV");
   VH_tagFirst_2combo_Z_pt__99->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Z_pt__99->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2combo_Z_pt__99->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2combo_Z_pt__99->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2combo_Z_pt__99->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Z_pt__99->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Z_pt__99->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_Z_pt__99->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Z_pt__99->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_tagFirst_2combo_18->Modified();
   Z_pt_tagFirst_2combo_18->cd();
   Z_pt_tagFirst_2combo_18->SetSelected(Z_pt_tagFirst_2combo_18);
}
