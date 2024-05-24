#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_SingleTop_tagOnly_18()
{
//=========Macro generated from canvas: Aplanarity_SingleTop_tagOnly_18/Aplanarity_SingleTop_tagOnly_18
//=========  (Fri May 24 12:42:22 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_SingleTop_tagOnly_18 = new TCanvas("Aplanarity_SingleTop_tagOnly_18", "Aplanarity_SingleTop_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_SingleTop_tagOnly_18->SetHighLightColor(2);
   Aplanarity_SingleTop_tagOnly_18->Range(-0.2,-3887.202,1.133333,34984.82);
   Aplanarity_SingleTop_tagOnly_18->SetFillColor(0);
   Aplanarity_SingleTop_tagOnly_18->SetFillStyle(4000);
   Aplanarity_SingleTop_tagOnly_18->SetBorderMode(0);
   Aplanarity_SingleTop_tagOnly_18->SetBorderSize(2);
   Aplanarity_SingleTop_tagOnly_18->SetLeftMargin(0.15);
   Aplanarity_SingleTop_tagOnly_18->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_tagOnly_18->SetFrameBorderMode(0);
   Aplanarity_SingleTop_tagOnly_18->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Aplanarity__1191 = new TH1D("VH_tagOnly_Aplanarity__1191","",50,0,1);
   VH_tagOnly_Aplanarity__1191->SetBinContent(1,29616.78);
   VH_tagOnly_Aplanarity__1191->SetBinContent(2,3943.266);
   VH_tagOnly_Aplanarity__1191->SetBinContent(3,1019.517);
   VH_tagOnly_Aplanarity__1191->SetBinContent(4,379.8446);
   VH_tagOnly_Aplanarity__1191->SetBinContent(5,154.0922);
   VH_tagOnly_Aplanarity__1191->SetBinContent(6,67.54791);
   VH_tagOnly_Aplanarity__1191->SetBinContent(7,43.92812);
   VH_tagOnly_Aplanarity__1191->SetBinContent(8,28.70666);
   VH_tagOnly_Aplanarity__1191->SetBinContent(9,13.06017);
   VH_tagOnly_Aplanarity__1191->SetBinContent(10,5.061101);
   VH_tagOnly_Aplanarity__1191->SetBinContent(11,2.97282);
   VH_tagOnly_Aplanarity__1191->SetBinContent(12,3.147744);
   VH_tagOnly_Aplanarity__1191->SetBinContent(13,1.932603);
   VH_tagOnly_Aplanarity__1191->SetBinContent(14,1.555253);
   VH_tagOnly_Aplanarity__1191->SetBinContent(15,0.5021663);
   VH_tagOnly_Aplanarity__1191->SetBinContent(16,0.4570763);
   VH_tagOnly_Aplanarity__1191->SetBinContent(17,0.6066017);
   VH_tagOnly_Aplanarity__1191->SetBinContent(18,0.1400055);
   VH_tagOnly_Aplanarity__1191->SetBinError(1,116.9156);
   VH_tagOnly_Aplanarity__1191->SetBinError(2,41.12322);
   VH_tagOnly_Aplanarity__1191->SetBinError(3,21.95323);
   VH_tagOnly_Aplanarity__1191->SetBinError(4,12.27926);
   VH_tagOnly_Aplanarity__1191->SetBinError(5,8.499232);
   VH_tagOnly_Aplanarity__1191->SetBinError(6,5.024586);
   VH_tagOnly_Aplanarity__1191->SetBinError(7,7.769598);
   VH_tagOnly_Aplanarity__1191->SetBinError(8,4.301042);
   VH_tagOnly_Aplanarity__1191->SetBinError(9,2.246276);
   VH_tagOnly_Aplanarity__1191->SetBinError(10,1.002661);
   VH_tagOnly_Aplanarity__1191->SetBinError(11,0.8957859);
   VH_tagOnly_Aplanarity__1191->SetBinError(12,1.193606);
   VH_tagOnly_Aplanarity__1191->SetBinError(13,0.6242975);
   VH_tagOnly_Aplanarity__1191->SetBinError(14,0.6744158);
   VH_tagOnly_Aplanarity__1191->SetBinError(15,0.3440735);
   VH_tagOnly_Aplanarity__1191->SetBinError(16,0.32166);
   VH_tagOnly_Aplanarity__1191->SetBinError(17,0.3534786);
   VH_tagOnly_Aplanarity__1191->SetBinError(18,0.09080051);
   VH_tagOnly_Aplanarity__1191->SetEntries(232514);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__1191->SetLineColor(ci);
   VH_tagOnly_Aplanarity__1191->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_Aplanarity__1191->GetXaxis()->SetRange(1,50);
   VH_tagOnly_Aplanarity__1191->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1191->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1191->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1191->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_Aplanarity__1191->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1191->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Aplanarity__1191->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Aplanarity__1191->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Aplanarity__1191->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1191->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1191->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1191->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1191->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_SingleTop_tagOnly_18->Modified();
   Aplanarity_SingleTop_tagOnly_18->cd();
   Aplanarity_SingleTop_tagOnly_18->SetSelected(Aplanarity_SingleTop_tagOnly_18);
}
