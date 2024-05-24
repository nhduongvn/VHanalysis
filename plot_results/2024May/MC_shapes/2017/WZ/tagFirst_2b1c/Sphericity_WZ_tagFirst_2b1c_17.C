#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WZ_tagFirst_2b1c_17()
{
//=========Macro generated from canvas: Sphericity_WZ_tagFirst_2b1c_17/Sphericity_WZ_tagFirst_2b1c_17
//=========  (Fri May 24 12:42:43 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WZ_tagFirst_2b1c_17 = new TCanvas("Sphericity_WZ_tagFirst_2b1c_17", "Sphericity_WZ_tagFirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WZ_tagFirst_2b1c_17->SetHighLightColor(2);
   Sphericity_WZ_tagFirst_2b1c_17->Range(-0.2,-13.63018,1.133333,122.6716);
   Sphericity_WZ_tagFirst_2b1c_17->SetFillColor(0);
   Sphericity_WZ_tagFirst_2b1c_17->SetFillStyle(4000);
   Sphericity_WZ_tagFirst_2b1c_17->SetBorderMode(0);
   Sphericity_WZ_tagFirst_2b1c_17->SetBorderSize(2);
   Sphericity_WZ_tagFirst_2b1c_17->SetLeftMargin(0.15);
   Sphericity_WZ_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_WZ_tagFirst_2b1c_17->SetFrameBorderMode(0);
   Sphericity_WZ_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_WZ_tagFirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Sphericity__2606 = new TH1D("VH_tagFirst_2b1c_Sphericity__2606","",25,0,1);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinContent(1,103.849);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinContent(2,89.30792);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinContent(3,51.80052);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinContent(4,31.55374);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinContent(5,18.8479);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinContent(6,12.74739);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinContent(7,3.56311);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinContent(8,0.4983723);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinContent(9,0.721431);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinContent(10,1.080232);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinContent(11,1.553573);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinContent(12,0.3114266);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinContent(13,0.4144233);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinContent(14,1.062476);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinContent(15,0.4034665);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinContent(16,1.136199);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinContent(17,0.1216993);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinContent(20,0.05107598);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinError(1,5.6616);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinError(2,5.113656);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinError(3,3.905815);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinError(4,3.101948);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinError(5,2.374073);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinError(6,2.023285);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinError(7,1.01276);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinError(8,0.3605814);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinError(9,0.4398191);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinError(10,0.6044576);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinError(11,0.7657224);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinError(12,0.2407514);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinError(13,0.2932202);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinError(14,0.7334481);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinError(15,0.2868011);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinError(16,0.7224805);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinError(17,0.1216993);
   VH_tagFirst_2b1c_Sphericity__2606->SetBinError(20,0.05107598);
   VH_tagFirst_2b1c_Sphericity__2606->SetEntries(1369);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Sphericity__2606->SetLineColor(ci);
   VH_tagFirst_2b1c_Sphericity__2606->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_2b1c_Sphericity__2606->GetXaxis()->SetRange(1,25);
   VH_tagFirst_2b1c_Sphericity__2606->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2606->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2606->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2606->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_2b1c_Sphericity__2606->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2606->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Sphericity__2606->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Sphericity__2606->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Sphericity__2606->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2606->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2606->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2606->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2606->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WZ_tagFirst_2b1c_17->Modified();
   Sphericity_WZ_tagFirst_2b1c_17->cd();
   Sphericity_WZ_tagFirst_2b1c_17->SetSelected(Sphericity_WZ_tagFirst_2b1c_17);
}
