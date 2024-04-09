#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tagFirst_18()
{
//=========Macro generated from canvas: Sphericity_tagFirst_18/Sphericity_tagFirst_18
//=========  (Mon Apr  8 11:27:51 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_tagFirst_18 = new TCanvas("Sphericity_tagFirst_18", "Sphericity_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tagFirst_18->SetHighLightColor(2);
   Sphericity_tagFirst_18->Range(-0.2,-0.1198296,1.133333,1.078467);
   Sphericity_tagFirst_18->SetFillColor(0);
   Sphericity_tagFirst_18->SetFillStyle(4000);
   Sphericity_tagFirst_18->SetBorderMode(0);
   Sphericity_tagFirst_18->SetBorderSize(2);
   Sphericity_tagFirst_18->SetLeftMargin(0.15);
   Sphericity_tagFirst_18->SetFrameFillStyle(1000);
   Sphericity_tagFirst_18->SetFrameBorderMode(0);
   Sphericity_tagFirst_18->SetFrameFillStyle(1000);
   Sphericity_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__45 = new TH1D("VH_tagFirst_Sphericity__45","",25,0,1);
   VH_tagFirst_Sphericity__45->SetBinContent(1,0.9129877);
   VH_tagFirst_Sphericity__45->SetBinContent(2,0.7930118);
   VH_tagFirst_Sphericity__45->SetBinContent(3,0.4034951);
   VH_tagFirst_Sphericity__45->SetBinContent(4,0.3331308);
   VH_tagFirst_Sphericity__45->SetBinContent(5,0.2019741);
   VH_tagFirst_Sphericity__45->SetBinContent(6,0.07835556);
   VH_tagFirst_Sphericity__45->SetBinContent(7,0.04866815);
   VH_tagFirst_Sphericity__45->SetBinContent(8,0.02412944);
   VH_tagFirst_Sphericity__45->SetBinContent(9,0.002487843);
   VH_tagFirst_Sphericity__45->SetBinContent(10,0.008128139);
   VH_tagFirst_Sphericity__45->SetBinContent(11,0.005651034);
   VH_tagFirst_Sphericity__45->SetBinContent(12,0.002705867);
   VH_tagFirst_Sphericity__45->SetBinContent(13,0.002296912);
   VH_tagFirst_Sphericity__45->SetBinContent(18,0.002696336);
   VH_tagFirst_Sphericity__45->SetBinError(1,0.06368836);
   VH_tagFirst_Sphericity__45->SetBinError(2,0.05513305);
   VH_tagFirst_Sphericity__45->SetBinError(3,0.04054432);
   VH_tagFirst_Sphericity__45->SetBinError(4,0.03408124);
   VH_tagFirst_Sphericity__45->SetBinError(5,0.02637419);
   VH_tagFirst_Sphericity__45->SetBinError(6,0.01538846);
   VH_tagFirst_Sphericity__45->SetBinError(7,0.01575997);
   VH_tagFirst_Sphericity__45->SetBinError(8,0.009199688);
   VH_tagFirst_Sphericity__45->SetBinError(9,0.002487843);
   VH_tagFirst_Sphericity__45->SetBinError(10,0.004757543);
   VH_tagFirst_Sphericity__45->SetBinError(11,0.003379341);
   VH_tagFirst_Sphericity__45->SetBinError(12,0.002705867);
   VH_tagFirst_Sphericity__45->SetBinError(13,0.002296912);
   VH_tagFirst_Sphericity__45->SetBinError(18,0.002696336);
   VH_tagFirst_Sphericity__45->SetEntries(939);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Sphericity__45->SetLineColor(ci);
   VH_tagFirst_Sphericity__45->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__45->GetXaxis()->SetRange(1,25);
   VH_tagFirst_Sphericity__45->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__45->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__45->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__45->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_Sphericity__45->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__45->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Sphericity__45->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Sphericity__45->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Sphericity__45->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__45->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__45->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__45->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__45->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tagFirst_18->Modified();
   Sphericity_tagFirst_18->cd();
   Sphericity_tagFirst_18->SetSelected(Sphericity_tagFirst_18);
}
