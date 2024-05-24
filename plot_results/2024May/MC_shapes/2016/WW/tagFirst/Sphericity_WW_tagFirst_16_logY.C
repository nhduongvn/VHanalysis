#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WW_tagFirst_16_logY()
{
//=========Macro generated from canvas: Sphericity_WW_tagFirst_16/Sphericity_WW_tagFirst_16
//=========  (Thu May 23 20:48:32 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WW_tagFirst_16 = new TCanvas("Sphericity_WW_tagFirst_16", "Sphericity_WW_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WW_tagFirst_16->SetHighLightColor(2);
   Sphericity_WW_tagFirst_16->Range(-0.2,-1.695861,1.133333,2.14732);
   Sphericity_WW_tagFirst_16->SetFillColor(0);
   Sphericity_WW_tagFirst_16->SetFillStyle(4000);
   Sphericity_WW_tagFirst_16->SetBorderMode(0);
   Sphericity_WW_tagFirst_16->SetBorderSize(2);
   Sphericity_WW_tagFirst_16->SetLogy();
   Sphericity_WW_tagFirst_16->SetLeftMargin(0.15);
   Sphericity_WW_tagFirst_16->SetFrameFillStyle(1000);
   Sphericity_WW_tagFirst_16->SetFrameBorderMode(0);
   Sphericity_WW_tagFirst_16->SetFrameFillStyle(1000);
   Sphericity_WW_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__442 = new TH1D("VH_tagFirst_Sphericity__442","",25,0,1);
   VH_tagFirst_Sphericity__442->SetBinContent(1,30.58111);
   VH_tagFirst_Sphericity__442->SetBinContent(2,24.93056);
   VH_tagFirst_Sphericity__442->SetBinContent(3,11.56557);
   VH_tagFirst_Sphericity__442->SetBinContent(4,8.674058);
   VH_tagFirst_Sphericity__442->SetBinContent(5,6.306);
   VH_tagFirst_Sphericity__442->SetBinContent(6,2.603888);
   VH_tagFirst_Sphericity__442->SetBinContent(7,1.475937);
   VH_tagFirst_Sphericity__442->SetBinContent(8,0.9597562);
   VH_tagFirst_Sphericity__442->SetBinContent(9,0.479748);
   VH_tagFirst_Sphericity__442->SetBinContent(10,0.3298047);
   VH_tagFirst_Sphericity__442->SetBinContent(11,0.1457808);
   VH_tagFirst_Sphericity__442->SetBinContent(12,0.2938963);
   VH_tagFirst_Sphericity__442->SetBinContent(13,0.09998136);
   VH_tagFirst_Sphericity__442->SetBinContent(14,0.2527046);
   VH_tagFirst_Sphericity__442->SetBinContent(15,0.1323879);
   VH_tagFirst_Sphericity__442->SetBinContent(16,0.09760838);
   VH_tagFirst_Sphericity__442->SetBinContent(19,0.09931191);
   VH_tagFirst_Sphericity__442->SetBinError(1,1.938676);
   VH_tagFirst_Sphericity__442->SetBinError(2,1.702375);
   VH_tagFirst_Sphericity__442->SetBinError(3,1.164165);
   VH_tagFirst_Sphericity__442->SetBinError(4,1.038153);
   VH_tagFirst_Sphericity__442->SetBinError(5,0.8934799);
   VH_tagFirst_Sphericity__442->SetBinError(6,0.575465);
   VH_tagFirst_Sphericity__442->SetBinError(7,0.4123475);
   VH_tagFirst_Sphericity__442->SetBinError(8,0.3422101);
   VH_tagFirst_Sphericity__442->SetBinError(9,0.2408176);
   VH_tagFirst_Sphericity__442->SetBinError(10,0.2340206);
   VH_tagFirst_Sphericity__442->SetBinError(11,0.1457808);
   VH_tagFirst_Sphericity__442->SetBinError(12,0.1731848);
   VH_tagFirst_Sphericity__442->SetBinError(13,0.09998136);
   VH_tagFirst_Sphericity__442->SetBinError(14,0.1791132);
   VH_tagFirst_Sphericity__442->SetBinError(15,0.1323879);
   VH_tagFirst_Sphericity__442->SetBinError(16,0.09760838);
   VH_tagFirst_Sphericity__442->SetBinError(19,0.09931191);
   VH_tagFirst_Sphericity__442->SetEntries(777);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Sphericity__442->SetLineColor(ci);
   VH_tagFirst_Sphericity__442->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__442->GetXaxis()->SetRange(1,25);
   VH_tagFirst_Sphericity__442->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__442->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__442->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__442->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_Sphericity__442->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__442->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Sphericity__442->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Sphericity__442->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Sphericity__442->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__442->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__442->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__442->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__442->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WW_tagFirst_16->Modified();
   Sphericity_WW_tagFirst_16->cd();
   Sphericity_WW_tagFirst_16->SetSelected(Sphericity_WW_tagFirst_16);
}
