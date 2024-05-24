#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZJets_tagFirst_2b1c_17()
{
//=========Macro generated from canvas: Aplanarity_ZJets_tagFirst_2b1c_17/Aplanarity_ZJets_tagFirst_2b1c_17
//=========  (Fri May 24 12:42:43 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZJets_tagFirst_2b1c_17 = new TCanvas("Aplanarity_ZJets_tagFirst_2b1c_17", "Aplanarity_ZJets_tagFirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZJets_tagFirst_2b1c_17->SetHighLightColor(2);
   Aplanarity_ZJets_tagFirst_2b1c_17->Range(-0.2,-3042.051,1.133333,27378.45);
   Aplanarity_ZJets_tagFirst_2b1c_17->SetFillColor(0);
   Aplanarity_ZJets_tagFirst_2b1c_17->SetFillStyle(4000);
   Aplanarity_ZJets_tagFirst_2b1c_17->SetBorderMode(0);
   Aplanarity_ZJets_tagFirst_2b1c_17->SetBorderSize(2);
   Aplanarity_ZJets_tagFirst_2b1c_17->SetLeftMargin(0.15);
   Aplanarity_ZJets_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_ZJets_tagFirst_2b1c_17->SetFrameBorderMode(0);
   Aplanarity_ZJets_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_ZJets_tagFirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Aplanarity__2624 = new TH1D("VH_tagFirst_2b1c_Aplanarity__2624","",50,0,1);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinContent(1,23177.53);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinContent(2,2614.628);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinContent(3,662.5461);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinContent(4,225.935);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinContent(5,92.0735);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinContent(6,44.1417);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinContent(7,21.55782);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinContent(8,13.38734);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinContent(9,7.802474);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinContent(10,5.773993);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinContent(11,4.959782);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinContent(12,1.500877);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinContent(13,0.7970828);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinContent(14,0.6541136);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinContent(15,0.9970982);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinContent(16,0.2480902);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinContent(17,0.1716034);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinContent(18,0.04175844);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinError(1,109.4552);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinError(2,39.81252);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinError(3,21.65688);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinError(4,10.47509);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinError(5,5.197227);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinError(6,4.595311);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinError(7,2.381577);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinError(8,2.626366);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinError(9,1.274289);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinError(10,1.212679);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinError(11,1.061223);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinError(12,0.4049802);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinError(13,0.3402676);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinError(14,0.2374636);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinError(15,0.3611381);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinError(16,0.1511234);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinError(17,0.09948488);
   VH_tagFirst_2b1c_Aplanarity__2624->SetBinError(18,0.04175844);
   VH_tagFirst_2b1c_Aplanarity__2624->SetEntries(202500);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Aplanarity__2624->SetLineColor(ci);
   VH_tagFirst_2b1c_Aplanarity__2624->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_2b1c_Aplanarity__2624->GetXaxis()->SetRange(1,50);
   VH_tagFirst_2b1c_Aplanarity__2624->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2624->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2624->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2624->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_2b1c_Aplanarity__2624->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2624->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Aplanarity__2624->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Aplanarity__2624->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Aplanarity__2624->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2624->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2624->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2624->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2624->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZJets_tagFirst_2b1c_17->Modified();
   Aplanarity_ZJets_tagFirst_2b1c_17->cd();
   Aplanarity_ZJets_tagFirst_2b1c_17->SetSelected(Aplanarity_ZJets_tagFirst_2b1c_17);
}
