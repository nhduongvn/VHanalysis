#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_QCD_tagOnly_2b1c_18()
{
//=========Macro generated from canvas: Aplanarity_QCD_tagOnly_2b1c_18/Aplanarity_QCD_tagOnly_2b1c_18
//=========  (Fri May 24 12:42:55 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_QCD_tagOnly_2b1c_18 = new TCanvas("Aplanarity_QCD_tagOnly_2b1c_18", "Aplanarity_QCD_tagOnly_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_QCD_tagOnly_2b1c_18->SetHighLightColor(2);
   Aplanarity_QCD_tagOnly_2b1c_18->Range(-0.2,-921811.7,1.133333,8296305);
   Aplanarity_QCD_tagOnly_2b1c_18->SetFillColor(0);
   Aplanarity_QCD_tagOnly_2b1c_18->SetFillStyle(4000);
   Aplanarity_QCD_tagOnly_2b1c_18->SetBorderMode(0);
   Aplanarity_QCD_tagOnly_2b1c_18->SetBorderSize(2);
   Aplanarity_QCD_tagOnly_2b1c_18->SetLeftMargin(0.15);
   Aplanarity_QCD_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_QCD_tagOnly_2b1c_18->SetFrameBorderMode(0);
   Aplanarity_QCD_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_QCD_tagOnly_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Aplanarity__3339 = new TH1D("VH_tagOnly_2b1c_Aplanarity__3339","",50,0,1);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinContent(1,7023327);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinContent(2,950945.4);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinContent(3,231893.7);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinContent(4,68577.48);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinContent(5,45377.7);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinContent(6,11254.36);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinContent(7,4812.776);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinContent(8,7820.905);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinContent(9,1829.622);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinContent(10,1204.344);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinContent(11,945.5194);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinContent(12,1231.706);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinContent(13,968.6765);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinContent(14,80.41726);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinContent(15,18.85816);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinContent(16,75.99182);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinContent(17,54.94792);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinContent(18,28.03405);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinContent(19,0.3737896);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinError(1,73542.37);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinError(2,27330.2);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinError(3,11875.08);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinError(4,6361.781);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinError(5,23033.54);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinError(6,2221.097);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinError(7,1267.979);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinError(8,3953.23);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinError(9,576.3976);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinError(10,414.6243);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinError(11,395.3433);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinError(12,929.6899);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinError(13,754.1334);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinError(14,39.43704);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinError(15,15.10149);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinError(16,64.59735);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinError(17,54.67253);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinError(18,28.03405);
   VH_tagOnly_2b1c_Aplanarity__3339->SetBinError(19,0.3737896);
   VH_tagOnly_2b1c_Aplanarity__3339->SetEntries(258336);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Aplanarity__3339->SetLineColor(ci);
   VH_tagOnly_2b1c_Aplanarity__3339->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_2b1c_Aplanarity__3339->GetXaxis()->SetRange(1,50);
   VH_tagOnly_2b1c_Aplanarity__3339->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3339->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3339->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3339->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_2b1c_Aplanarity__3339->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3339->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Aplanarity__3339->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Aplanarity__3339->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Aplanarity__3339->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3339->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3339->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3339->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3339->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_QCD_tagOnly_2b1c_18->Modified();
   Aplanarity_QCD_tagOnly_2b1c_18->cd();
   Aplanarity_QCD_tagOnly_2b1c_18->SetSelected(Aplanarity_QCD_tagOnly_2b1c_18);
}
