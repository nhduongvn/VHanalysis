#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WJets_tagOnly_2b1c_17()
{
//=========Macro generated from canvas: Sphericity_WJets_tagOnly_2b1c_17/Sphericity_WJets_tagOnly_2b1c_17
//=========  (Fri May 24 12:42:55 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WJets_tagOnly_2b1c_17 = new TCanvas("Sphericity_WJets_tagOnly_2b1c_17", "Sphericity_WJets_tagOnly_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WJets_tagOnly_2b1c_17->SetHighLightColor(2);
   Sphericity_WJets_tagOnly_2b1c_17->Range(-0.2,-734.2103,1.133333,6607.892);
   Sphericity_WJets_tagOnly_2b1c_17->SetFillColor(0);
   Sphericity_WJets_tagOnly_2b1c_17->SetFillStyle(4000);
   Sphericity_WJets_tagOnly_2b1c_17->SetBorderMode(0);
   Sphericity_WJets_tagOnly_2b1c_17->SetBorderSize(2);
   Sphericity_WJets_tagOnly_2b1c_17->SetLeftMargin(0.15);
   Sphericity_WJets_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_WJets_tagOnly_2b1c_17->SetFrameBorderMode(0);
   Sphericity_WJets_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_WJets_tagOnly_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Sphericity__3311 = new TH1D("VH_tagOnly_2b1c_Sphericity__3311","",25,0,1);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinContent(1,5593.983);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinContent(2,4141.461);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinContent(3,2392.365);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinContent(4,1375.074);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinContent(5,830.3949);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinContent(6,419.138);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinContent(7,214.2913);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinContent(8,113.2579);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinContent(9,73.63941);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinContent(10,61.31336);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinContent(11,34.47704);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinContent(12,30.41655);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinContent(13,25.91971);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinContent(14,27.84408);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinContent(15,8.382216);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinContent(16,8.845877);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinContent(17,6.572318);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinContent(18,3.945286);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinContent(19,1.6387);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinContent(20,0.4322725);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinContent(21,0.3082855);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinContent(22,0.2019254);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinError(1,84.18843);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinError(2,75.63551);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinError(3,56.48718);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinError(4,38.47893);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinError(5,39.52819);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinError(6,18.69544);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinError(7,15.28804);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinError(8,7.714293);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinError(9,8.37766);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinError(10,9.962384);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinError(11,3.200433);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinError(12,5.430221);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinError(13,4.944809);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinError(14,7.237083);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinError(15,1.120634);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinError(16,1.237265);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinError(17,1.175508);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinError(18,0.8086295);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinError(19,0.4337113);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinError(20,0.2997294);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinError(21,0.2941233);
   VH_tagOnly_2b1c_Sphericity__3311->SetBinError(22,0.2019254);
   VH_tagOnly_2b1c_Sphericity__3311->SetEntries(96679);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Sphericity__3311->SetLineColor(ci);
   VH_tagOnly_2b1c_Sphericity__3311->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_2b1c_Sphericity__3311->GetXaxis()->SetRange(1,25);
   VH_tagOnly_2b1c_Sphericity__3311->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3311->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3311->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3311->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_2b1c_Sphericity__3311->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3311->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Sphericity__3311->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Sphericity__3311->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Sphericity__3311->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3311->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3311->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3311->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3311->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WJets_tagOnly_2b1c_17->Modified();
   Sphericity_WJets_tagOnly_2b1c_17->cd();
   Sphericity_WJets_tagOnly_2b1c_17->SetSelected(Sphericity_WJets_tagOnly_2b1c_17);
}
