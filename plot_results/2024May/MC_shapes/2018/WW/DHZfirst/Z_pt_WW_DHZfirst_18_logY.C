#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_WW_DHZfirst_18_logY()
{
//=========Macro generated from canvas: Z_pt_WW_DHZfirst_18/Z_pt_WW_DHZfirst_18
//=========  (Fri May 24 12:42:26 2024) by ROOT version 6.28/10
   TCanvas *Z_pt_WW_DHZfirst_18 = new TCanvas("Z_pt_WW_DHZfirst_18", "Z_pt_WW_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_pt_WW_DHZfirst_18->SetHighLightColor(2);
   Z_pt_WW_DHZfirst_18->Range(59.99999,-0.6636429,1660,0.1927458);
   Z_pt_WW_DHZfirst_18->SetFillColor(0);
   Z_pt_WW_DHZfirst_18->SetFillStyle(4000);
   Z_pt_WW_DHZfirst_18->SetBorderMode(0);
   Z_pt_WW_DHZfirst_18->SetBorderSize(2);
   Z_pt_WW_DHZfirst_18->SetLogy();
   Z_pt_WW_DHZfirst_18->SetLeftMargin(0.15);
   Z_pt_WW_DHZfirst_18->SetFrameFillStyle(1000);
   Z_pt_WW_DHZfirst_18->SetFrameBorderMode(0);
   Z_pt_WW_DHZfirst_18->SetFrameFillStyle(1000);
   Z_pt_WW_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_pt__1524 = new TH1D("VH_DHZfirst_Z_pt__1524","",500,0,2000);
   VH_DHZfirst_Z_pt__1524->SetBinContent(8,0.7744756);
   VH_DHZfirst_Z_pt__1524->SetBinContent(23,0.5541235);
   VH_DHZfirst_Z_pt__1524->SetBinContent(34,0.6487306);
   VH_DHZfirst_Z_pt__1524->SetBinContent(39,0.4370453);
   VH_DHZfirst_Z_pt__1524->SetBinContent(55,0.741126);
   VH_DHZfirst_Z_pt__1524->SetBinContent(58,0.4850375);
   VH_DHZfirst_Z_pt__1524->SetBinContent(66,0.6140818);
   VH_DHZfirst_Z_pt__1524->SetBinContent(94,0.6753953);
   VH_DHZfirst_Z_pt__1524->SetBinContent(111,0.5284769);
   VH_DHZfirst_Z_pt__1524->SetBinError(8,0.7744756);
   VH_DHZfirst_Z_pt__1524->SetBinError(23,0.5541235);
   VH_DHZfirst_Z_pt__1524->SetBinError(34,0.6487306);
   VH_DHZfirst_Z_pt__1524->SetBinError(39,0.4370453);
   VH_DHZfirst_Z_pt__1524->SetBinError(55,0.741126);
   VH_DHZfirst_Z_pt__1524->SetBinError(58,0.4850375);
   VH_DHZfirst_Z_pt__1524->SetBinError(66,0.6140818);
   VH_DHZfirst_Z_pt__1524->SetBinError(94,0.6753953);
   VH_DHZfirst_Z_pt__1524->SetBinError(111,0.5284769);
   VH_DHZfirst_Z_pt__1524->SetEntries(9);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_pt__1524->SetLineColor(ci);
   VH_DHZfirst_Z_pt__1524->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   VH_DHZfirst_Z_pt__1524->GetXaxis()->SetRange(76,375);
   VH_DHZfirst_Z_pt__1524->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_pt__1524->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_pt__1524->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_pt__1524->GetYaxis()->SetTitle("Events/4.0 GeV");
   VH_DHZfirst_Z_pt__1524->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_pt__1524->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_pt__1524->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_pt__1524->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_pt__1524->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_pt__1524->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_pt__1524->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_pt__1524->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_pt__1524->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_WW_DHZfirst_18->Modified();
   Z_pt_WW_DHZfirst_18->cd();
   Z_pt_WW_DHZfirst_18->SetSelected(Z_pt_WW_DHZfirst_18);
}
