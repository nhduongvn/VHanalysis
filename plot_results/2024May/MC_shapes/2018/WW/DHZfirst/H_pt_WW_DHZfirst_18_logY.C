#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_WW_DHZfirst_18_logY()
{
//=========Macro generated from canvas: H_pt_WW_DHZfirst_18/H_pt_WW_DHZfirst_18
//=========  (Fri May 24 12:42:27 2024) by ROOT version 6.28/10
   TCanvas *H_pt_WW_DHZfirst_18 = new TCanvas("H_pt_WW_DHZfirst_18", "H_pt_WW_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_pt_WW_DHZfirst_18->SetHighLightColor(2);
   H_pt_WW_DHZfirst_18->Range(59.99999,-0.6636429,1660,0.1927458);
   H_pt_WW_DHZfirst_18->SetFillColor(0);
   H_pt_WW_DHZfirst_18->SetFillStyle(4000);
   H_pt_WW_DHZfirst_18->SetBorderMode(0);
   H_pt_WW_DHZfirst_18->SetBorderSize(2);
   H_pt_WW_DHZfirst_18->SetLogy();
   H_pt_WW_DHZfirst_18->SetLeftMargin(0.15);
   H_pt_WW_DHZfirst_18->SetFrameFillStyle(1000);
   H_pt_WW_DHZfirst_18->SetFrameBorderMode(0);
   H_pt_WW_DHZfirst_18->SetFrameFillStyle(1000);
   H_pt_WW_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_pt__1554 = new TH1D("VH_DHZfirst_H_pt__1554","",500,0,2000);
   VH_DHZfirst_H_pt__1554->SetBinContent(29,0.4850375);
   VH_DHZfirst_H_pt__1554->SetBinContent(48,1.085776);
   VH_DHZfirst_H_pt__1554->SetBinContent(51,0.741126);
   VH_DHZfirst_H_pt__1554->SetBinContent(56,0.5541235);
   VH_DHZfirst_H_pt__1554->SetBinContent(58,0.7744756);
   VH_DHZfirst_H_pt__1554->SetBinContent(85,0.6753953);
   VH_DHZfirst_H_pt__1554->SetBinContent(102,0.6140818);
   VH_DHZfirst_H_pt__1554->SetBinContent(115,0.5284769);
   VH_DHZfirst_H_pt__1554->SetBinError(29,0.4850375);
   VH_DHZfirst_H_pt__1554->SetBinError(48,0.7822148);
   VH_DHZfirst_H_pt__1554->SetBinError(51,0.741126);
   VH_DHZfirst_H_pt__1554->SetBinError(56,0.5541235);
   VH_DHZfirst_H_pt__1554->SetBinError(58,0.7744756);
   VH_DHZfirst_H_pt__1554->SetBinError(85,0.6753953);
   VH_DHZfirst_H_pt__1554->SetBinError(102,0.6140818);
   VH_DHZfirst_H_pt__1554->SetBinError(115,0.5284769);
   VH_DHZfirst_H_pt__1554->SetEntries(9);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_pt__1554->SetLineColor(ci);
   VH_DHZfirst_H_pt__1554->GetXaxis()->SetTitle("H p_{T} [GeV]");
   VH_DHZfirst_H_pt__1554->GetXaxis()->SetRange(76,375);
   VH_DHZfirst_H_pt__1554->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_pt__1554->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_pt__1554->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_pt__1554->GetYaxis()->SetTitle("Events/4.0 GeV");
   VH_DHZfirst_H_pt__1554->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_pt__1554->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_pt__1554->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_pt__1554->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_pt__1554->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_pt__1554->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_pt__1554->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_pt__1554->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_pt__1554->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_WW_DHZfirst_18->Modified();
   H_pt_WW_DHZfirst_18->cd();
   H_pt_WW_DHZfirst_18->SetSelected(H_pt_WW_DHZfirst_18);
}
