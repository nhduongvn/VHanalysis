#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZJets_tagOnly_18()
{
//=========Macro generated from canvas: Sphericity_ZJets_tagOnly_18/Sphericity_ZJets_tagOnly_18
//=========  (Fri May 24 12:42:21 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZJets_tagOnly_18 = new TCanvas("Sphericity_ZJets_tagOnly_18", "Sphericity_ZJets_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZJets_tagOnly_18->SetHighLightColor(2);
   Sphericity_ZJets_tagOnly_18->Range(-0.2,-1114.048,1.133333,10026.44);
   Sphericity_ZJets_tagOnly_18->SetFillColor(0);
   Sphericity_ZJets_tagOnly_18->SetFillStyle(4000);
   Sphericity_ZJets_tagOnly_18->SetBorderMode(0);
   Sphericity_ZJets_tagOnly_18->SetBorderSize(2);
   Sphericity_ZJets_tagOnly_18->SetLeftMargin(0.15);
   Sphericity_ZJets_tagOnly_18->SetFrameFillStyle(1000);
   Sphericity_ZJets_tagOnly_18->SetFrameBorderMode(0);
   Sphericity_ZJets_tagOnly_18->SetFrameFillStyle(1000);
   Sphericity_ZJets_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Sphericity__1155 = new TH1D("VH_tagOnly_Sphericity__1155","",25,0,1);
   VH_tagOnly_Sphericity__1155->SetBinContent(1,8487.987);
   VH_tagOnly_Sphericity__1155->SetBinContent(2,6364.996);
   VH_tagOnly_Sphericity__1155->SetBinContent(3,3740.029);
   VH_tagOnly_Sphericity__1155->SetBinContent(4,2253.135);
   VH_tagOnly_Sphericity__1155->SetBinContent(5,1289.167);
   VH_tagOnly_Sphericity__1155->SetBinContent(6,690.7205);
   VH_tagOnly_Sphericity__1155->SetBinContent(7,356.4901);
   VH_tagOnly_Sphericity__1155->SetBinContent(8,217.2179);
   VH_tagOnly_Sphericity__1155->SetBinContent(9,152.4202);
   VH_tagOnly_Sphericity__1155->SetBinContent(10,113.7581);
   VH_tagOnly_Sphericity__1155->SetBinContent(11,80.65514);
   VH_tagOnly_Sphericity__1155->SetBinContent(12,57.88562);
   VH_tagOnly_Sphericity__1155->SetBinContent(13,39.91133);
   VH_tagOnly_Sphericity__1155->SetBinContent(14,23.80562);
   VH_tagOnly_Sphericity__1155->SetBinContent(15,25.93735);
   VH_tagOnly_Sphericity__1155->SetBinContent(16,17.91054);
   VH_tagOnly_Sphericity__1155->SetBinContent(17,14.73068);
   VH_tagOnly_Sphericity__1155->SetBinContent(18,9.840257);
   VH_tagOnly_Sphericity__1155->SetBinContent(19,3.83041);
   VH_tagOnly_Sphericity__1155->SetBinContent(20,1.15916);
   VH_tagOnly_Sphericity__1155->SetBinContent(21,0.9932285);
   VH_tagOnly_Sphericity__1155->SetBinContent(22,0.1315472);
   VH_tagOnly_Sphericity__1155->SetBinContent(23,1.364529);
   VH_tagOnly_Sphericity__1155->SetBinError(1,85.07557);
   VH_tagOnly_Sphericity__1155->SetBinError(2,84.43493);
   VH_tagOnly_Sphericity__1155->SetBinError(3,66.27685);
   VH_tagOnly_Sphericity__1155->SetBinError(4,44.55708);
   VH_tagOnly_Sphericity__1155->SetBinError(5,29.09909);
   VH_tagOnly_Sphericity__1155->SetBinError(6,20.37585);
   VH_tagOnly_Sphericity__1155->SetBinError(7,14.76918);
   VH_tagOnly_Sphericity__1155->SetBinError(8,14.99297);
   VH_tagOnly_Sphericity__1155->SetBinError(9,10.443);
   VH_tagOnly_Sphericity__1155->SetBinError(10,15.1111);
   VH_tagOnly_Sphericity__1155->SetBinError(11,7.09662);
   VH_tagOnly_Sphericity__1155->SetBinError(12,4.434242);
   VH_tagOnly_Sphericity__1155->SetBinError(13,3.521198);
   VH_tagOnly_Sphericity__1155->SetBinError(14,2.7006);
   VH_tagOnly_Sphericity__1155->SetBinError(15,2.879429);
   VH_tagOnly_Sphericity__1155->SetBinError(16,2.357426);
   VH_tagOnly_Sphericity__1155->SetBinError(17,2.881832);
   VH_tagOnly_Sphericity__1155->SetBinError(18,2.369131);
   VH_tagOnly_Sphericity__1155->SetBinError(19,1.541035);
   VH_tagOnly_Sphericity__1155->SetBinError(20,0.6028082);
   VH_tagOnly_Sphericity__1155->SetBinError(21,0.5350004);
   VH_tagOnly_Sphericity__1155->SetBinError(22,0.1315472);
   VH_tagOnly_Sphericity__1155->SetBinError(23,1.364529);
   VH_tagOnly_Sphericity__1155->SetEntries(86590);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Sphericity__1155->SetLineColor(ci);
   VH_tagOnly_Sphericity__1155->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_Sphericity__1155->GetXaxis()->SetRange(1,25);
   VH_tagOnly_Sphericity__1155->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1155->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1155->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1155->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_Sphericity__1155->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1155->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Sphericity__1155->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Sphericity__1155->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Sphericity__1155->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1155->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1155->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1155->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1155->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZJets_tagOnly_18->Modified();
   Sphericity_ZJets_tagOnly_18->cd();
   Sphericity_ZJets_tagOnly_18->SetSelected(Sphericity_ZJets_tagOnly_18);
}
