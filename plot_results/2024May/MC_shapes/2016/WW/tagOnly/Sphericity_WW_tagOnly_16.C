#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WW_tagOnly_16()
{
//=========Macro generated from canvas: Sphericity_WW_tagOnly_16/Sphericity_WW_tagOnly_16
//=========  (Fri May 24 12:42:21 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WW_tagOnly_16 = new TCanvas("Sphericity_WW_tagOnly_16", "Sphericity_WW_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WW_tagOnly_16->SetHighLightColor(2);
   Sphericity_WW_tagOnly_16->Range(-0.2,-3.955514,1.133333,35.59963);
   Sphericity_WW_tagOnly_16->SetFillColor(0);
   Sphericity_WW_tagOnly_16->SetFillStyle(4000);
   Sphericity_WW_tagOnly_16->SetBorderMode(0);
   Sphericity_WW_tagOnly_16->SetBorderSize(2);
   Sphericity_WW_tagOnly_16->SetLeftMargin(0.15);
   Sphericity_WW_tagOnly_16->SetFrameFillStyle(1000);
   Sphericity_WW_tagOnly_16->SetFrameBorderMode(0);
   Sphericity_WW_tagOnly_16->SetFrameFillStyle(1000);
   Sphericity_WW_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Sphericity__1162 = new TH1D("VH_tagOnly_Sphericity__1162","",25,0,1);
   VH_tagOnly_Sphericity__1162->SetBinContent(1,30.13725);
   VH_tagOnly_Sphericity__1162->SetBinContent(2,24.39214);
   VH_tagOnly_Sphericity__1162->SetBinContent(3,11.45434);
   VH_tagOnly_Sphericity__1162->SetBinContent(4,8.673489);
   VH_tagOnly_Sphericity__1162->SetBinContent(5,6.056781);
   VH_tagOnly_Sphericity__1162->SetBinContent(6,2.603888);
   VH_tagOnly_Sphericity__1162->SetBinContent(7,1.475937);
   VH_tagOnly_Sphericity__1162->SetBinContent(8,0.9597562);
   VH_tagOnly_Sphericity__1162->SetBinContent(9,0.479748);
   VH_tagOnly_Sphericity__1162->SetBinContent(10,0.3298047);
   VH_tagOnly_Sphericity__1162->SetBinContent(11,0.1457808);
   VH_tagOnly_Sphericity__1162->SetBinContent(12,0.2938963);
   VH_tagOnly_Sphericity__1162->SetBinContent(13,0.09998136);
   VH_tagOnly_Sphericity__1162->SetBinContent(14,0.2527046);
   VH_tagOnly_Sphericity__1162->SetBinContent(16,0.09760838);
   VH_tagOnly_Sphericity__1162->SetBinContent(19,0.09931191);
   VH_tagOnly_Sphericity__1162->SetBinError(1,1.91551);
   VH_tagOnly_Sphericity__1162->SetBinError(2,1.680386);
   VH_tagOnly_Sphericity__1162->SetBinError(3,1.158839);
   VH_tagOnly_Sphericity__1162->SetBinError(4,1.038098);
   VH_tagOnly_Sphericity__1162->SetBinError(5,0.8752159);
   VH_tagOnly_Sphericity__1162->SetBinError(6,0.575465);
   VH_tagOnly_Sphericity__1162->SetBinError(7,0.4123475);
   VH_tagOnly_Sphericity__1162->SetBinError(8,0.3422101);
   VH_tagOnly_Sphericity__1162->SetBinError(9,0.2408176);
   VH_tagOnly_Sphericity__1162->SetBinError(10,0.2340206);
   VH_tagOnly_Sphericity__1162->SetBinError(11,0.1457808);
   VH_tagOnly_Sphericity__1162->SetBinError(12,0.1731848);
   VH_tagOnly_Sphericity__1162->SetBinError(13,0.09998136);
   VH_tagOnly_Sphericity__1162->SetBinError(14,0.1791132);
   VH_tagOnly_Sphericity__1162->SetBinError(16,0.09760838);
   VH_tagOnly_Sphericity__1162->SetBinError(19,0.09931191);
   VH_tagOnly_Sphericity__1162->SetEntries(766);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Sphericity__1162->SetLineColor(ci);
   VH_tagOnly_Sphericity__1162->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_Sphericity__1162->GetXaxis()->SetRange(1,25);
   VH_tagOnly_Sphericity__1162->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1162->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1162->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1162->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_Sphericity__1162->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1162->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Sphericity__1162->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Sphericity__1162->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Sphericity__1162->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1162->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1162->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1162->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1162->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WW_tagOnly_16->Modified();
   Sphericity_WW_tagOnly_16->cd();
   Sphericity_WW_tagOnly_16->SetSelected(Sphericity_WW_tagOnly_16);
}
