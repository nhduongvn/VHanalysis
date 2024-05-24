#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_SingleTop_tagFirst_2b1c_17()
{
//=========Macro generated from canvas: Sphericity_SingleTop_tagFirst_2b1c_17/Sphericity_SingleTop_tagFirst_2b1c_17
//=========  (Fri May 24 12:42:43 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_SingleTop_tagFirst_2b1c_17 = new TCanvas("Sphericity_SingleTop_tagFirst_2b1c_17", "Sphericity_SingleTop_tagFirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_SingleTop_tagFirst_2b1c_17->SetHighLightColor(2);
   Sphericity_SingleTop_tagFirst_2b1c_17->Range(-0.2,-1445.321,1.133333,13007.89);
   Sphericity_SingleTop_tagFirst_2b1c_17->SetFillColor(0);
   Sphericity_SingleTop_tagFirst_2b1c_17->SetFillStyle(4000);
   Sphericity_SingleTop_tagFirst_2b1c_17->SetBorderMode(0);
   Sphericity_SingleTop_tagFirst_2b1c_17->SetBorderSize(2);
   Sphericity_SingleTop_tagFirst_2b1c_17->SetLeftMargin(0.15);
   Sphericity_SingleTop_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_SingleTop_tagFirst_2b1c_17->SetFrameBorderMode(0);
   Sphericity_SingleTop_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_SingleTop_tagFirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Sphericity__2600 = new TH1D("VH_tagFirst_2b1c_Sphericity__2600","",25,0,1);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinContent(1,11011.97);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinContent(2,9126.476);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinContent(3,5278.649);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinContent(4,3037.235);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinContent(5,1727.06);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinContent(6,937.1426);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinContent(7,515.8514);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinContent(8,299.2607);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinContent(9,185.1144);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinContent(10,128.169);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinContent(11,87.89562);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinContent(12,69.93597);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinContent(13,48.71961);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinContent(14,37.08773);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinContent(15,33.41144);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinContent(16,21.97264);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinContent(17,13.87381);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinContent(18,10.91169);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinContent(19,5.836152);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinContent(20,2.656168);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinContent(21,1.256323);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinContent(22,0.2876624);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinError(1,46.51818);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinError(2,41.47602);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinError(3,31.63597);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinError(4,24.67534);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinError(5,18.68877);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinError(6,13.83928);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinError(7,10.7931);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinError(8,7.975935);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinError(9,6.126229);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinError(10,4.967967);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinError(11,4.409642);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinError(12,3.978694);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinError(13,3.099828);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinError(14,2.692855);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinError(15,2.915464);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinError(16,2.407665);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinError(17,1.549853);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinError(18,1.904643);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinError(19,1.132494);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinError(20,1.20788);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinError(21,0.5470003);
   VH_tagFirst_2b1c_Sphericity__2600->SetBinError(22,0.2285099);
   VH_tagFirst_2b1c_Sphericity__2600->SetEntries(434434);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Sphericity__2600->SetLineColor(ci);
   VH_tagFirst_2b1c_Sphericity__2600->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_2b1c_Sphericity__2600->GetXaxis()->SetRange(1,25);
   VH_tagFirst_2b1c_Sphericity__2600->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2600->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2600->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2600->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_2b1c_Sphericity__2600->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2600->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Sphericity__2600->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Sphericity__2600->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Sphericity__2600->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2600->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2600->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2600->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2600->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_SingleTop_tagFirst_2b1c_17->Modified();
   Sphericity_SingleTop_tagFirst_2b1c_17->cd();
   Sphericity_SingleTop_tagFirst_2b1c_17->SetSelected(Sphericity_SingleTop_tagFirst_2b1c_17);
}
