#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZJets_tagFirst_2b1c_16()
{
//=========Macro generated from canvas: Sphericity_ZJets_tagFirst_2b1c_16/Sphericity_ZJets_tagFirst_2b1c_16
//=========  (Fri May 24 12:42:43 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZJets_tagFirst_2b1c_16 = new TCanvas("Sphericity_ZJets_tagFirst_2b1c_16", "Sphericity_ZJets_tagFirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZJets_tagFirst_2b1c_16->SetHighLightColor(2);
   Sphericity_ZJets_tagFirst_2b1c_16->Range(-0.2,-2143.169,1.133333,19288.52);
   Sphericity_ZJets_tagFirst_2b1c_16->SetFillColor(0);
   Sphericity_ZJets_tagFirst_2b1c_16->SetFillStyle(4000);
   Sphericity_ZJets_tagFirst_2b1c_16->SetBorderMode(0);
   Sphericity_ZJets_tagFirst_2b1c_16->SetBorderSize(2);
   Sphericity_ZJets_tagFirst_2b1c_16->SetLeftMargin(0.15);
   Sphericity_ZJets_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_ZJets_tagFirst_2b1c_16->SetFrameBorderMode(0);
   Sphericity_ZJets_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_ZJets_tagFirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Sphericity__2593 = new TH1D("VH_tagFirst_2b1c_Sphericity__2593","",25,0,1);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinContent(1,16328.91);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinContent(2,13339.31);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinContent(3,7840.166);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinContent(4,4698.303);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinContent(5,2682.178);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinContent(6,1318.798);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinContent(7,646.1039);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinContent(8,355.8479);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinContent(9,225.0948);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinContent(10,168.3866);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinContent(11,118.0847);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinContent(12,89.41908);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinContent(13,80.79099);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinContent(14,59.3729);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinContent(15,42.46954);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinContent(16,31.9556);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinContent(17,21.96924);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinContent(18,15.98375);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinContent(19,7.995278);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinContent(20,3.382795);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinContent(21,1.274355);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinContent(22,0.3021249);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinContent(23,0.0793761);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinError(1,83.0107);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinError(2,85.68283);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinError(3,64.1526);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinError(4,46.88189);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinError(5,33.18801);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinError(6,20.36927);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinError(7,14.94475);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinError(8,8.720462);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinError(9,6.30965);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinError(10,5.659628);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinError(11,3.576085);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinError(12,3.08554);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinError(13,4.881917);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinError(14,3.862124);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinError(15,2.720027);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinError(16,2.645989);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinError(17,1.448994);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinError(18,2.184813);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinError(19,0.9620834);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinError(20,0.576514);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinError(21,0.3837736);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinError(22,0.2569024);
   VH_tagFirst_2b1c_Sphericity__2593->SetBinError(23,0.0793761);
   VH_tagFirst_2b1c_Sphericity__2593->SetEntries(422319);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Sphericity__2593->SetLineColor(ci);
   VH_tagFirst_2b1c_Sphericity__2593->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_2b1c_Sphericity__2593->GetXaxis()->SetRange(1,25);
   VH_tagFirst_2b1c_Sphericity__2593->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2593->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2593->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2593->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_2b1c_Sphericity__2593->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2593->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Sphericity__2593->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Sphericity__2593->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Sphericity__2593->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2593->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2593->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2593->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2593->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZJets_tagFirst_2b1c_16->Modified();
   Sphericity_ZJets_tagFirst_2b1c_16->cd();
   Sphericity_ZJets_tagFirst_2b1c_16->SetSelected(Sphericity_ZJets_tagFirst_2b1c_16);
}
