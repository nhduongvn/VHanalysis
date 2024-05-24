#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZHbb_tagFirst_2b1c_17_logY()
{
//=========Macro generated from canvas: Sphericity_ZHbb_tagFirst_2b1c_17/Sphericity_ZHbb_tagFirst_2b1c_17
//=========  (Thu May 23 20:49:02 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZHbb_tagFirst_2b1c_17 = new TCanvas("Sphericity_ZHbb_tagFirst_2b1c_17", "Sphericity_ZHbb_tagFirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZHbb_tagFirst_2b1c_17->SetHighLightColor(2);
   Sphericity_ZHbb_tagFirst_2b1c_17->Range(-0.2,-3.602353,1.133333,2.781568);
   Sphericity_ZHbb_tagFirst_2b1c_17->SetFillColor(0);
   Sphericity_ZHbb_tagFirst_2b1c_17->SetFillStyle(4000);
   Sphericity_ZHbb_tagFirst_2b1c_17->SetBorderMode(0);
   Sphericity_ZHbb_tagFirst_2b1c_17->SetBorderSize(2);
   Sphericity_ZHbb_tagFirst_2b1c_17->SetLogy();
   Sphericity_ZHbb_tagFirst_2b1c_17->SetLeftMargin(0.15);
   Sphericity_ZHbb_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_ZHbb_tagFirst_2b1c_17->SetFrameBorderMode(0);
   Sphericity_ZHbb_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_ZHbb_tagFirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Sphericity__2585 = new TH1D("VH_tagFirst_2b1c_Sphericity__2585","",25,0,1);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinContent(1,73.38839);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinContent(2,62.00048);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinContent(3,35.27367);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinContent(4,22.82799);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinContent(5,14.41086);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinContent(6,7.630308);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinContent(7,3.549045);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinContent(8,1.917889);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinContent(9,1.170731);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinContent(10,0.8366883);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinContent(11,0.5894389);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinContent(12,0.4886101);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinContent(13,0.3546473);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinContent(14,0.2463039);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinContent(15,0.2099574);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinContent(16,0.1497874);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinContent(17,0.1219698);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinContent(18,0.06196174);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinContent(19,0.03687304);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinContent(20,0.01429686);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinContent(21,0.002173045);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinContent(22,0.003404762);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinContent(23,0.00394395);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinError(1,0.3243798);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinError(2,0.2954609);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinError(3,0.2205948);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinError(4,0.1799664);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinError(5,0.1490944);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinError(6,0.1065528);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinError(7,0.07360566);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinError(8,0.0534619);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinError(9,0.04181564);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinError(10,0.03578056);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinError(11,0.02909627);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinError(12,0.02553758);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinError(13,0.02248732);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinError(14,0.0175735);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinError(15,0.01697853);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinError(16,0.01295801);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinError(17,0.01389384);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinError(18,0.007444066);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinError(19,0.005773101);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinError(20,0.003777036);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinError(21,0.000853269);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinError(22,0.002140456);
   VH_tagFirst_2b1c_Sphericity__2585->SetBinError(23,0.003002862);
   VH_tagFirst_2b1c_Sphericity__2585->SetEntries(379757);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Sphericity__2585->SetLineColor(ci);
   VH_tagFirst_2b1c_Sphericity__2585->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_2b1c_Sphericity__2585->GetXaxis()->SetRange(1,25);
   VH_tagFirst_2b1c_Sphericity__2585->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2585->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2585->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2585->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_2b1c_Sphericity__2585->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2585->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Sphericity__2585->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Sphericity__2585->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Sphericity__2585->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2585->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2585->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2585->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2585->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZHbb_tagFirst_2b1c_17->Modified();
   Sphericity_ZHbb_tagFirst_2b1c_17->cd();
   Sphericity_ZHbb_tagFirst_2b1c_17->SetSelected(Sphericity_ZHbb_tagFirst_2b1c_17);
}
