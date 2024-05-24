#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WW_tagFirst_2b1c_16_logY()
{
//=========Macro generated from canvas: Sphericity_WW_tagFirst_2b1c_16/Sphericity_WW_tagFirst_2b1c_16
//=========  (Thu May 23 20:49:02 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WW_tagFirst_2b1c_16 = new TCanvas("Sphericity_WW_tagFirst_2b1c_16", "Sphericity_WW_tagFirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WW_tagFirst_2b1c_16->SetHighLightColor(2);
   Sphericity_WW_tagFirst_2b1c_16->Range(-0.2,-1.748167,1.133333,2.618074);
   Sphericity_WW_tagFirst_2b1c_16->SetFillColor(0);
   Sphericity_WW_tagFirst_2b1c_16->SetFillStyle(4000);
   Sphericity_WW_tagFirst_2b1c_16->SetBorderMode(0);
   Sphericity_WW_tagFirst_2b1c_16->SetBorderSize(2);
   Sphericity_WW_tagFirst_2b1c_16->SetLogy();
   Sphericity_WW_tagFirst_2b1c_16->SetLeftMargin(0.15);
   Sphericity_WW_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_WW_tagFirst_2b1c_16->SetFrameBorderMode(0);
   Sphericity_WW_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_WW_tagFirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Sphericity__2602 = new TH1D("VH_tagFirst_2b1c_Sphericity__2602","",25,0,1);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinContent(1,80.1495);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinContent(2,62.85944);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinContent(3,36.43532);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinContent(4,22.71811);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinContent(5,15.06403);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinContent(6,7.026534);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinContent(7,3.582872);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinContent(8,1.971962);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinContent(9,1.548053);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinContent(10,0.9744645);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinContent(11,0.6249014);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinContent(12,0.6436037);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinContent(13,0.3133476);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinContent(14,0.2527046);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinContent(16,0.09760838);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinContent(17,0.122329);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinContent(18,0.1350121);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinContent(19,0.2279017);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinError(1,3.03922);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinError(2,2.661246);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinError(3,2.033366);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinError(4,1.614752);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinError(5,1.34847);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinError(6,0.9065799);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinError(7,0.6677547);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinError(8,0.4846141);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinError(9,0.4096836);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinError(10,0.3537211);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinError(11,0.2850688);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinError(12,0.2673716);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinError(13,0.1609163);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinError(14,0.1791132);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinError(16,0.09760838);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinError(17,0.122329);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinError(18,0.1350121);
   VH_tagFirst_2b1c_Sphericity__2602->SetBinError(19,0.1624752);
   VH_tagFirst_2b1c_Sphericity__2602->SetEntries(2141);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Sphericity__2602->SetLineColor(ci);
   VH_tagFirst_2b1c_Sphericity__2602->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_2b1c_Sphericity__2602->GetXaxis()->SetRange(1,25);
   VH_tagFirst_2b1c_Sphericity__2602->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2602->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2602->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2602->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_2b1c_Sphericity__2602->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2602->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Sphericity__2602->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Sphericity__2602->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Sphericity__2602->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2602->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2602->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2602->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2602->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WW_tagFirst_2b1c_16->Modified();
   Sphericity_WW_tagFirst_2b1c_16->cd();
   Sphericity_WW_tagFirst_2b1c_16->SetSelected(Sphericity_WW_tagFirst_2b1c_16);
}
