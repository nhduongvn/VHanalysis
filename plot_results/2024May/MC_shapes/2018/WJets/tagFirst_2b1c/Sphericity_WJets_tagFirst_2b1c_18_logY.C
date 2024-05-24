#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WJets_tagFirst_2b1c_18_logY()
{
//=========Macro generated from canvas: Sphericity_WJets_tagFirst_2b1c_18/Sphericity_WJets_tagFirst_2b1c_18
//=========  (Thu May 23 20:49:02 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WJets_tagFirst_2b1c_18 = new TCanvas("Sphericity_WJets_tagFirst_2b1c_18", "Sphericity_WJets_tagFirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WJets_tagFirst_2b1c_18->SetHighLightColor(2);
   Sphericity_WJets_tagFirst_2b1c_18->Range(-0.2,-1.149036,1.133333,4.876806);
   Sphericity_WJets_tagFirst_2b1c_18->SetFillColor(0);
   Sphericity_WJets_tagFirst_2b1c_18->SetFillStyle(4000);
   Sphericity_WJets_tagFirst_2b1c_18->SetBorderMode(0);
   Sphericity_WJets_tagFirst_2b1c_18->SetBorderSize(2);
   Sphericity_WJets_tagFirst_2b1c_18->SetLogy();
   Sphericity_WJets_tagFirst_2b1c_18->SetLeftMargin(0.15);
   Sphericity_WJets_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_WJets_tagFirst_2b1c_18->SetFrameBorderMode(0);
   Sphericity_WJets_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_WJets_tagFirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Sphericity__2592 = new TH1D("VH_tagFirst_2b1c_Sphericity__2592","",25,0,1);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinContent(1,9923.68);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinContent(2,7464.723);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinContent(3,4168.566);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinContent(4,2617.955);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinContent(5,1497.905);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinContent(6,772.4149);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinContent(7,414.7734);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinContent(8,303.5946);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinContent(9,160.1966);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinContent(10,156.1453);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinContent(11,74.30808);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinContent(12,75.73899);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinContent(13,45.12656);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinContent(14,29.50475);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinContent(15,28.31629);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinContent(16,27.73832);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinContent(17,11.38886);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinContent(18,8.032935);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinContent(19,2.558522);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinContent(20,1.175461);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinContent(21,2.31318);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinContent(22,0.5683004);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinError(1,179.9156);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinError(2,190.8937);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinError(3,105.9315);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinError(4,90.48314);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinError(5,83.5394);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinError(6,40.68024);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinError(7,26.36928);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinError(8,30.56912);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinError(9,17.47418);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinError(10,20.0704);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinError(11,7.646687);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinError(12,17.21026);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinError(13,4.543706);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinError(14,3.305796);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinError(15,4.249426);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinError(16,6.962088);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinError(17,2.016609);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinError(18,2.811118);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinError(19,0.8217814);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinError(20,0.5328863);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinError(21,2.31318);
   VH_tagFirst_2b1c_Sphericity__2592->SetBinError(22,0.4536592);
   VH_tagFirst_2b1c_Sphericity__2592->SetEntries(84815);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Sphericity__2592->SetLineColor(ci);
   VH_tagFirst_2b1c_Sphericity__2592->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_2b1c_Sphericity__2592->GetXaxis()->SetRange(1,25);
   VH_tagFirst_2b1c_Sphericity__2592->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2592->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2592->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2592->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_2b1c_Sphericity__2592->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2592->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Sphericity__2592->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Sphericity__2592->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Sphericity__2592->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2592->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2592->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2592->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2592->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WJets_tagFirst_2b1c_18->Modified();
   Sphericity_WJets_tagFirst_2b1c_18->cd();
   Sphericity_WJets_tagFirst_2b1c_18->SetSelected(Sphericity_WJets_tagFirst_2b1c_18);
}
