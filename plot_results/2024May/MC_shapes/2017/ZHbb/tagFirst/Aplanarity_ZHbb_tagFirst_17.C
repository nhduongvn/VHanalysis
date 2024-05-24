#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZHbb_tagFirst_17()
{
//=========Macro generated from canvas: Aplanarity_ZHbb_tagFirst_17/Aplanarity_ZHbb_tagFirst_17
//=========  (Fri May 24 12:42:11 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZHbb_tagFirst_17 = new TCanvas("Aplanarity_ZHbb_tagFirst_17", "Aplanarity_ZHbb_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZHbb_tagFirst_17->SetHighLightColor(2);
   Aplanarity_ZHbb_tagFirst_17->Range(-0.2,-12.20324,1.133333,109.8292);
   Aplanarity_ZHbb_tagFirst_17->SetFillColor(0);
   Aplanarity_ZHbb_tagFirst_17->SetFillStyle(4000);
   Aplanarity_ZHbb_tagFirst_17->SetBorderMode(0);
   Aplanarity_ZHbb_tagFirst_17->SetBorderSize(2);
   Aplanarity_ZHbb_tagFirst_17->SetLeftMargin(0.15);
   Aplanarity_ZHbb_tagFirst_17->SetFrameFillStyle(1000);
   Aplanarity_ZHbb_tagFirst_17->SetFrameBorderMode(0);
   Aplanarity_ZHbb_tagFirst_17->SetFrameFillStyle(1000);
   Aplanarity_ZHbb_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Aplanarity__455 = new TH1D("VH_tagFirst_Aplanarity__455","",50,0,1);
   VH_tagFirst_Aplanarity__455->SetBinContent(1,92.9771);
   VH_tagFirst_Aplanarity__455->SetBinContent(2,9.626812);
   VH_tagFirst_Aplanarity__455->SetBinContent(3,2.301278);
   VH_tagFirst_Aplanarity__455->SetBinContent(4,0.7672476);
   VH_tagFirst_Aplanarity__455->SetBinContent(5,0.3788544);
   VH_tagFirst_Aplanarity__455->SetBinContent(6,0.1412753);
   VH_tagFirst_Aplanarity__455->SetBinContent(7,0.1072611);
   VH_tagFirst_Aplanarity__455->SetBinContent(8,0.03821094);
   VH_tagFirst_Aplanarity__455->SetBinContent(9,0.02846428);
   VH_tagFirst_Aplanarity__455->SetBinContent(10,0.02655904);
   VH_tagFirst_Aplanarity__455->SetBinContent(11,0.01035382);
   VH_tagFirst_Aplanarity__455->SetBinContent(12,0.01463459);
   VH_tagFirst_Aplanarity__455->SetBinContent(13,0.005392406);
   VH_tagFirst_Aplanarity__455->SetBinContent(14,0.002092572);
   VH_tagFirst_Aplanarity__455->SetBinContent(15,0.0004278628);
   VH_tagFirst_Aplanarity__455->SetBinContent(16,0.0005089974);
   VH_tagFirst_Aplanarity__455->SetBinContent(17,0.0003482848);
   VH_tagFirst_Aplanarity__455->SetBinContent(19,0.006303422);
   VH_tagFirst_Aplanarity__455->SetBinContent(20,0.0004072878);
   VH_tagFirst_Aplanarity__455->SetBinContent(21,0.0003700873);
   VH_tagFirst_Aplanarity__455->SetBinError(1,0.3661166);
   VH_tagFirst_Aplanarity__455->SetBinError(2,0.1163722);
   VH_tagFirst_Aplanarity__455->SetBinError(3,0.05685324);
   VH_tagFirst_Aplanarity__455->SetBinError(4,0.03284325);
   VH_tagFirst_Aplanarity__455->SetBinError(5,0.02325441);
   VH_tagFirst_Aplanarity__455->SetBinError(6,0.01291358);
   VH_tagFirst_Aplanarity__455->SetBinError(7,0.01248368);
   VH_tagFirst_Aplanarity__455->SetBinError(8,0.005292348);
   VH_tagFirst_Aplanarity__455->SetBinError(9,0.005558055);
   VH_tagFirst_Aplanarity__455->SetBinError(10,0.009712299);
   VH_tagFirst_Aplanarity__455->SetBinError(11,0.003140694);
   VH_tagFirst_Aplanarity__455->SetBinError(12,0.007100682);
   VH_tagFirst_Aplanarity__455->SetBinError(13,0.002622896);
   VH_tagFirst_Aplanarity__455->SetBinError(14,0.0008583249);
   VH_tagFirst_Aplanarity__455->SetBinError(15,0.0004278628);
   VH_tagFirst_Aplanarity__455->SetBinError(16,0.0003700688);
   VH_tagFirst_Aplanarity__455->SetBinError(17,0.0003482848);
   VH_tagFirst_Aplanarity__455->SetBinError(19,0.003587297);
   VH_tagFirst_Aplanarity__455->SetBinError(20,0.0004072878);
   VH_tagFirst_Aplanarity__455->SetBinError(21,0.0003700873);
   VH_tagFirst_Aplanarity__455->SetEntries(173680);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__455->SetLineColor(ci);
   VH_tagFirst_Aplanarity__455->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_Aplanarity__455->GetXaxis()->SetRange(1,50);
   VH_tagFirst_Aplanarity__455->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__455->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__455->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__455->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_Aplanarity__455->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__455->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Aplanarity__455->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Aplanarity__455->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Aplanarity__455->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__455->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__455->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__455->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__455->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZHbb_tagFirst_17->Modified();
   Aplanarity_ZHbb_tagFirst_17->cd();
   Aplanarity_ZHbb_tagFirst_17->SetSelected(Aplanarity_ZHbb_tagFirst_17);
}
