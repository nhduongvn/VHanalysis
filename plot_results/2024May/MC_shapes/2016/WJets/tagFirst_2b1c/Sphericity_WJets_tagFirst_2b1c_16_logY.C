#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WJets_tagFirst_2b1c_16_logY()
{
//=========Macro generated from canvas: Sphericity_WJets_tagFirst_2b1c_16/Sphericity_WJets_tagFirst_2b1c_16
//=========  (Thu May 23 20:49:02 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WJets_tagFirst_2b1c_16 = new TCanvas("Sphericity_WJets_tagFirst_2b1c_16", "Sphericity_WJets_tagFirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WJets_tagFirst_2b1c_16->SetHighLightColor(2);
   Sphericity_WJets_tagFirst_2b1c_16->Range(-0.2,-2.500448,1.133333,5.004883);
   Sphericity_WJets_tagFirst_2b1c_16->SetFillColor(0);
   Sphericity_WJets_tagFirst_2b1c_16->SetFillStyle(4000);
   Sphericity_WJets_tagFirst_2b1c_16->SetBorderMode(0);
   Sphericity_WJets_tagFirst_2b1c_16->SetBorderSize(2);
   Sphericity_WJets_tagFirst_2b1c_16->SetLogy();
   Sphericity_WJets_tagFirst_2b1c_16->SetLeftMargin(0.15);
   Sphericity_WJets_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_WJets_tagFirst_2b1c_16->SetFrameBorderMode(0);
   Sphericity_WJets_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_WJets_tagFirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Sphericity__2590 = new TH1D("VH_tagFirst_2b1c_Sphericity__2590","",25,0,1);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinContent(1,9479.843);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinContent(2,7474.83);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinContent(3,4322.82);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinContent(4,2634.756);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinContent(5,1505.3);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinContent(6,810.1088);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinContent(7,385.7926);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinContent(8,210.3877);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinContent(9,145.3663);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinContent(10,101.9559);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinContent(11,91.619);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinContent(12,58.11386);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinContent(13,42.53134);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinContent(14,29.25465);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinContent(15,20.24004);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinContent(16,20.94965);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinContent(17,10.06827);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinContent(18,6.428093);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinContent(19,4.249983);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinContent(20,1.509371);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinContent(21,0.1518185);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinContent(22,0.06642157);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinContent(23,0.03557255);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinError(1,95.51861);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinError(2,97.26981);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinError(3,70.51918);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinError(4,54.42851);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinError(5,38.31066);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinError(6,26.72325);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinError(7,19.01184);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinError(8,12.76631);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinError(9,8.347496);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinError(10,5.760545);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinError(11,11.33723);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinError(12,6.491145);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinError(13,3.480869);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinError(14,2.743791);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinError(15,1.839067);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinError(16,4.292357);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinError(17,1.421912);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinError(18,0.876751);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinError(19,0.7265127);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinError(20,0.4357815);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinError(21,0.1078381);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinError(22,0.06642157);
   VH_tagFirst_2b1c_Sphericity__2590->SetBinError(23,0.03557255);
   VH_tagFirst_2b1c_Sphericity__2590->SetEntries(261754);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Sphericity__2590->SetLineColor(ci);
   VH_tagFirst_2b1c_Sphericity__2590->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_2b1c_Sphericity__2590->GetXaxis()->SetRange(1,25);
   VH_tagFirst_2b1c_Sphericity__2590->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2590->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2590->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2590->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_2b1c_Sphericity__2590->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2590->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Sphericity__2590->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Sphericity__2590->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Sphericity__2590->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2590->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2590->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2590->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2590->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WJets_tagFirst_2b1c_16->Modified();
   Sphericity_WJets_tagFirst_2b1c_16->cd();
   Sphericity_WJets_tagFirst_2b1c_16->SetSelected(Sphericity_WJets_tagFirst_2b1c_16);
}
