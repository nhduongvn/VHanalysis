#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZHbb_DHZfirst_17_logY()
{
//=========Macro generated from canvas: Sphericity_ZHbb_DHZfirst_17/Sphericity_ZHbb_DHZfirst_17
//=========  (Thu May 23 20:48:51 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZHbb_DHZfirst_17 = new TCanvas("Sphericity_ZHbb_DHZfirst_17", "Sphericity_ZHbb_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZHbb_DHZfirst_17->SetHighLightColor(2);
   Sphericity_ZHbb_DHZfirst_17->Range(-0.2,-4.727487,1.133333,1.58656);
   Sphericity_ZHbb_DHZfirst_17->SetFillColor(0);
   Sphericity_ZHbb_DHZfirst_17->SetFillStyle(4000);
   Sphericity_ZHbb_DHZfirst_17->SetBorderMode(0);
   Sphericity_ZHbb_DHZfirst_17->SetBorderSize(2);
   Sphericity_ZHbb_DHZfirst_17->SetLogy();
   Sphericity_ZHbb_DHZfirst_17->SetLeftMargin(0.15);
   Sphericity_ZHbb_DHZfirst_17->SetFrameFillStyle(1000);
   Sphericity_ZHbb_DHZfirst_17->SetFrameBorderMode(0);
   Sphericity_ZHbb_DHZfirst_17->SetFrameFillStyle(1000);
   Sphericity_ZHbb_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Sphericity__1865 = new TH1D("VH_DHZfirst_Sphericity__1865","",25,0,1);
   VH_DHZfirst_Sphericity__1865->SetBinContent(1,4.759989);
   VH_DHZfirst_Sphericity__1865->SetBinContent(2,4.269161);
   VH_DHZfirst_Sphericity__1865->SetBinContent(3,2.440151);
   VH_DHZfirst_Sphericity__1865->SetBinContent(4,1.601408);
   VH_DHZfirst_Sphericity__1865->SetBinContent(5,1.104604);
   VH_DHZfirst_Sphericity__1865->SetBinContent(6,0.5014352);
   VH_DHZfirst_Sphericity__1865->SetBinContent(7,0.1495782);
   VH_DHZfirst_Sphericity__1865->SetBinContent(8,0.02651409);
   VH_DHZfirst_Sphericity__1865->SetBinContent(9,0.008514742);
   VH_DHZfirst_Sphericity__1865->SetBinContent(10,0.00318192);
   VH_DHZfirst_Sphericity__1865->SetBinContent(11,0.002917719);
   VH_DHZfirst_Sphericity__1865->SetBinContent(12,0.000755558);
   VH_DHZfirst_Sphericity__1865->SetBinContent(13,0.00408449);
   VH_DHZfirst_Sphericity__1865->SetBinContent(14,0.0004029945);
   VH_DHZfirst_Sphericity__1865->SetBinContent(16,0.0001603053);
   VH_DHZfirst_Sphericity__1865->SetBinError(1,0.08003529);
   VH_DHZfirst_Sphericity__1865->SetBinError(2,0.07323044);
   VH_DHZfirst_Sphericity__1865->SetBinError(3,0.05600956);
   VH_DHZfirst_Sphericity__1865->SetBinError(4,0.04488748);
   VH_DHZfirst_Sphericity__1865->SetBinError(5,0.03952058);
   VH_DHZfirst_Sphericity__1865->SetBinError(6,0.02829406);
   VH_DHZfirst_Sphericity__1865->SetBinError(7,0.01473934);
   VH_DHZfirst_Sphericity__1865->SetBinError(8,0.004658313);
   VH_DHZfirst_Sphericity__1865->SetBinError(9,0.002940337);
   VH_DHZfirst_Sphericity__1865->SetBinError(10,0.001162569);
   VH_DHZfirst_Sphericity__1865->SetBinError(11,0.002348868);
   VH_DHZfirst_Sphericity__1865->SetBinError(12,0.0004390941);
   VH_DHZfirst_Sphericity__1865->SetBinError(13,0.003115968);
   VH_DHZfirst_Sphericity__1865->SetBinError(14,0.0004029945);
   VH_DHZfirst_Sphericity__1865->SetBinError(16,0.0001603053);
   VH_DHZfirst_Sphericity__1865->SetEntries(24184);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__1865->SetLineColor(ci);
   VH_DHZfirst_Sphericity__1865->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_Sphericity__1865->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_Sphericity__1865->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1865->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1865->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1865->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_Sphericity__1865->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1865->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Sphericity__1865->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Sphericity__1865->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Sphericity__1865->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1865->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1865->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1865->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1865->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZHbb_DHZfirst_17->Modified();
   Sphericity_ZHbb_DHZfirst_17->cd();
   Sphericity_ZHbb_DHZfirst_17->SetSelected(Sphericity_ZHbb_DHZfirst_17);
}
