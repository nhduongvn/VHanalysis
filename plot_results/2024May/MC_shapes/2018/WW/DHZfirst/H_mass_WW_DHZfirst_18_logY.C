#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_WW_DHZfirst_18_logY()
{
//=========Macro generated from canvas: H_mass_WW_DHZfirst_18/H_mass_WW_DHZfirst_18
//=========  (Thu May 23 20:48:46 2024) by ROOT version 6.28/10
   TCanvas *H_mass_WW_DHZfirst_18 = new TCanvas("H_mass_WW_DHZfirst_18", "H_mass_WW_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_WW_DHZfirst_18->SetHighLightColor(2);
   H_mass_WW_DHZfirst_18->Range(-60,-0.7055499,340,0.1974021);
   H_mass_WW_DHZfirst_18->SetFillColor(0);
   H_mass_WW_DHZfirst_18->SetFillStyle(4000);
   H_mass_WW_DHZfirst_18->SetBorderMode(0);
   H_mass_WW_DHZfirst_18->SetBorderSize(2);
   H_mass_WW_DHZfirst_18->SetLogy();
   H_mass_WW_DHZfirst_18->SetLeftMargin(0.15);
   H_mass_WW_DHZfirst_18->SetFrameFillStyle(1000);
   H_mass_WW_DHZfirst_18->SetFrameBorderMode(0);
   H_mass_WW_DHZfirst_18->SetFrameFillStyle(1000);
   H_mass_WW_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_mass__1494 = new TH1D("VH_DHZfirst_H_mass__1494","",200,0,2000);
   VH_DHZfirst_H_mass__1494->SetBinContent(15,0.6140818);
   VH_DHZfirst_H_mass__1494->SetBinContent(18,0.6753953);
   VH_DHZfirst_H_mass__1494->SetBinContent(20,0.4850375);
   VH_DHZfirst_H_mass__1494->SetBinContent(36,0.5541235);
   VH_DHZfirst_H_mass__1494->SetBinContent(37,0.7744756);
   VH_DHZfirst_H_mass__1494->SetBinContent(38,0.6487306);
   VH_DHZfirst_H_mass__1494->SetBinContent(39,0.741126);
   VH_DHZfirst_H_mass__1494->SetBinContent(44,0.4370453);
   VH_DHZfirst_H_mass__1494->SetBinContent(69,0.5284769);
   VH_DHZfirst_H_mass__1494->SetBinError(15,0.6140818);
   VH_DHZfirst_H_mass__1494->SetBinError(18,0.6753953);
   VH_DHZfirst_H_mass__1494->SetBinError(20,0.4850375);
   VH_DHZfirst_H_mass__1494->SetBinError(36,0.5541235);
   VH_DHZfirst_H_mass__1494->SetBinError(37,0.7744756);
   VH_DHZfirst_H_mass__1494->SetBinError(38,0.6487306);
   VH_DHZfirst_H_mass__1494->SetBinError(39,0.741126);
   VH_DHZfirst_H_mass__1494->SetBinError(44,0.4370453);
   VH_DHZfirst_H_mass__1494->SetBinError(69,0.5284769);
   VH_DHZfirst_H_mass__1494->SetEntries(9);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_mass__1494->SetLineColor(ci);
   VH_DHZfirst_H_mass__1494->GetXaxis()->SetTitle("M_{H} [GeV]");
   VH_DHZfirst_H_mass__1494->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_H_mass__1494->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__1494->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_mass__1494->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__1494->GetYaxis()->SetTitle("Events/10.0 GeV");
   VH_DHZfirst_H_mass__1494->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__1494->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_mass__1494->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_mass__1494->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_mass__1494->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__1494->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__1494->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_mass__1494->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__1494->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_WW_DHZfirst_18->Modified();
   H_mass_WW_DHZfirst_18->cd();
   H_mass_WW_DHZfirst_18->SetSelected(H_mass_WW_DHZfirst_18);
}
