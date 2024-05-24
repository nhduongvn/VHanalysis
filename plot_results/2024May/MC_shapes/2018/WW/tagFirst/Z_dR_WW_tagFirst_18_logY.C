#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_WW_tagFirst_18_logY()
{
//=========Macro generated from canvas: Z_dR_WW_tagFirst_18/Z_dR_WW_tagFirst_18
//=========  (Thu May 23 20:48:28 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_WW_tagFirst_18 = new TCanvas("Z_dR_WW_tagFirst_18", "Z_dR_WW_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_WW_tagFirst_18->SetHighLightColor(2);
   Z_dR_WW_tagFirst_18->Range(-1.2,-0.5447602,6.8,1.360368);
   Z_dR_WW_tagFirst_18->SetFillColor(0);
   Z_dR_WW_tagFirst_18->SetFillStyle(4000);
   Z_dR_WW_tagFirst_18->SetBorderMode(0);
   Z_dR_WW_tagFirst_18->SetBorderSize(2);
   Z_dR_WW_tagFirst_18->SetLogy();
   Z_dR_WW_tagFirst_18->SetLeftMargin(0.15);
   Z_dR_WW_tagFirst_18->SetFrameFillStyle(1000);
   Z_dR_WW_tagFirst_18->SetFrameBorderMode(0);
   Z_dR_WW_tagFirst_18->SetFrameFillStyle(1000);
   Z_dR_WW_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Z_dR__144 = new TH1D("VH_tagFirst_Z_dR__144","",30,0,6);
   VH_tagFirst_Z_dR__144->SetBinContent(3,7.412416);
   VH_tagFirst_Z_dR__144->SetBinContent(4,6.258771);
   VH_tagFirst_Z_dR__144->SetBinContent(5,5.597402);
   VH_tagFirst_Z_dR__144->SetBinContent(6,2.582202);
   VH_tagFirst_Z_dR__144->SetBinContent(7,3.988894);
   VH_tagFirst_Z_dR__144->SetBinContent(8,3.961651);
   VH_tagFirst_Z_dR__144->SetBinContent(9,6.772758);
   VH_tagFirst_Z_dR__144->SetBinContent(10,6.617758);
   VH_tagFirst_Z_dR__144->SetBinContent(11,3.070075);
   VH_tagFirst_Z_dR__144->SetBinContent(12,3.990744);
   VH_tagFirst_Z_dR__144->SetBinContent(13,5.409419);
   VH_tagFirst_Z_dR__144->SetBinContent(14,6.507998);
   VH_tagFirst_Z_dR__144->SetBinContent(15,7.722106);
   VH_tagFirst_Z_dR__144->SetBinContent(16,3.142858);
   VH_tagFirst_Z_dR__144->SetBinContent(17,5.186408);
   VH_tagFirst_Z_dR__144->SetBinContent(18,5.98489);
   VH_tagFirst_Z_dR__144->SetBinContent(19,4.058128);
   VH_tagFirst_Z_dR__144->SetBinContent(20,7.803806);
   VH_tagFirst_Z_dR__144->SetBinContent(21,1.589842);
   VH_tagFirst_Z_dR__144->SetBinContent(22,2.466686);
   VH_tagFirst_Z_dR__144->SetBinContent(23,2.725484);
   VH_tagFirst_Z_dR__144->SetBinContent(24,1.513499);
   VH_tagFirst_Z_dR__144->SetBinContent(25,1.901606);
   VH_tagFirst_Z_dR__144->SetBinContent(26,1.892221);
   VH_tagFirst_Z_dR__144->SetBinContent(27,0.8846727);
   VH_tagFirst_Z_dR__144->SetBinContent(29,0.910261);
   VH_tagFirst_Z_dR__144->SetBinContent(30,2.853952);
   VH_tagFirst_Z_dR__144->SetBinError(3,2.501151);
   VH_tagFirst_Z_dR__144->SetBinError(4,2.131753);
   VH_tagFirst_Z_dR__144->SetBinError(5,2.598373);
   VH_tagFirst_Z_dR__144->SetBinError(6,1.581913);
   VH_tagFirst_Z_dR__144->SetBinError(7,2.259991);
   VH_tagFirst_Z_dR__144->SetBinError(8,1.661245);
   VH_tagFirst_Z_dR__144->SetBinError(9,2.683146);
   VH_tagFirst_Z_dR__144->SetBinError(10,3.064402);
   VH_tagFirst_Z_dR__144->SetBinError(11,1.582623);
   VH_tagFirst_Z_dR__144->SetBinError(12,1.777397);
   VH_tagFirst_Z_dR__144->SetBinError(13,2.288997);
   VH_tagFirst_Z_dR__144->SetBinError(14,2.414752);
   VH_tagFirst_Z_dR__144->SetBinError(15,3.011324);
   VH_tagFirst_Z_dR__144->SetBinError(16,1.659661);
   VH_tagFirst_Z_dR__144->SetBinError(17,2.046266);
   VH_tagFirst_Z_dR__144->SetBinError(18,2.452288);
   VH_tagFirst_Z_dR__144->SetBinError(19,1.670253);
   VH_tagFirst_Z_dR__144->SetBinError(20,2.741885);
   VH_tagFirst_Z_dR__144->SetBinError(21,0.9540092);
   VH_tagFirst_Z_dR__144->SetBinError(22,1.246511);
   VH_tagFirst_Z_dR__144->SetBinError(23,1.657149);
   VH_tagFirst_Z_dR__144->SetBinError(24,0.884527);
   VH_tagFirst_Z_dR__144->SetBinError(25,0.9905354);
   VH_tagFirst_Z_dR__144->SetBinError(26,1.111594);
   VH_tagFirst_Z_dR__144->SetBinError(27,0.6295793);
   VH_tagFirst_Z_dR__144->SetBinError(29,0.910261);
   VH_tagFirst_Z_dR__144->SetBinError(30,1.894868);
   VH_tagFirst_Z_dR__144->SetEntries(150);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_dR__144->SetLineColor(ci);
   VH_tagFirst_Z_dR__144->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_tagFirst_Z_dR__144->GetXaxis()->SetRange(1,30);
   VH_tagFirst_Z_dR__144->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR__144->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_dR__144->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR__144->GetYaxis()->SetTitle("Events/0.2");
   VH_tagFirst_Z_dR__144->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR__144->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Z_dR__144->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Z_dR__144->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Z_dR__144->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR__144->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR__144->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_dR__144->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR__144->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_WW_tagFirst_18->Modified();
   Z_dR_WW_tagFirst_18->cd();
   Z_dR_WW_tagFirst_18->SetSelected(Z_dR_WW_tagFirst_18);
}
