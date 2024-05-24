#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WW_DHZfirst_16()
{
//=========Macro generated from canvas: Sphericity_WW_DHZfirst_16/Sphericity_WW_DHZfirst_16
//=========  (Fri May 24 12:42:32 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WW_DHZfirst_16 = new TCanvas("Sphericity_WW_DHZfirst_16", "Sphericity_WW_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WW_DHZfirst_16->SetHighLightColor(2);
   Sphericity_WW_DHZfirst_16->Range(-0.2,-0.3523208,1.133333,3.170887);
   Sphericity_WW_DHZfirst_16->SetFillColor(0);
   Sphericity_WW_DHZfirst_16->SetFillStyle(4000);
   Sphericity_WW_DHZfirst_16->SetBorderMode(0);
   Sphericity_WW_DHZfirst_16->SetBorderSize(2);
   Sphericity_WW_DHZfirst_16->SetLeftMargin(0.15);
   Sphericity_WW_DHZfirst_16->SetFrameFillStyle(1000);
   Sphericity_WW_DHZfirst_16->SetFrameBorderMode(0);
   Sphericity_WW_DHZfirst_16->SetFrameFillStyle(1000);
   Sphericity_WW_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Sphericity__1882 = new TH1D("VH_DHZfirst_Sphericity__1882","",25,0,1);
   VH_DHZfirst_Sphericity__1882->SetBinContent(1,2.163076);
   VH_DHZfirst_Sphericity__1882->SetBinContent(2,2.684348);
   VH_DHZfirst_Sphericity__1882->SetBinContent(3,1.099575);
   VH_DHZfirst_Sphericity__1882->SetBinContent(4,0.4552001);
   VH_DHZfirst_Sphericity__1882->SetBinContent(5,0.4862962);
   VH_DHZfirst_Sphericity__1882->SetBinContent(6,0.3360981);
   VH_DHZfirst_Sphericity__1882->SetBinError(1,0.506358);
   VH_DHZfirst_Sphericity__1882->SetBinError(2,0.5453574);
   VH_DHZfirst_Sphericity__1882->SetBinError(3,0.3441643);
   VH_DHZfirst_Sphericity__1882->SetBinError(4,0.2051763);
   VH_DHZfirst_Sphericity__1882->SetBinError(5,0.2440647);
   VH_DHZfirst_Sphericity__1882->SetBinError(6,0.2026493);
   VH_DHZfirst_Sphericity__1882->SetEntries(67);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__1882->SetLineColor(ci);
   VH_DHZfirst_Sphericity__1882->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_Sphericity__1882->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_Sphericity__1882->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1882->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1882->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1882->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_Sphericity__1882->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1882->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Sphericity__1882->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Sphericity__1882->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Sphericity__1882->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1882->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1882->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1882->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1882->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WW_DHZfirst_16->Modified();
   Sphericity_WW_DHZfirst_16->cd();
   Sphericity_WW_DHZfirst_16->SetSelected(Sphericity_WW_DHZfirst_16);
}
