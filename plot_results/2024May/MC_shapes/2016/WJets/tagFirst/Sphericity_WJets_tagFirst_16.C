#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WJets_tagFirst_16()
{
//=========Macro generated from canvas: Sphericity_WJets_tagFirst_16/Sphericity_WJets_tagFirst_16
//=========  (Fri May 24 12:42:11 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WJets_tagFirst_16 = new TCanvas("Sphericity_WJets_tagFirst_16", "Sphericity_WJets_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WJets_tagFirst_16->SetHighLightColor(2);
   Sphericity_WJets_tagFirst_16->Range(-0.2,-477.5169,1.133333,4297.652);
   Sphericity_WJets_tagFirst_16->SetFillColor(0);
   Sphericity_WJets_tagFirst_16->SetFillStyle(4000);
   Sphericity_WJets_tagFirst_16->SetBorderMode(0);
   Sphericity_WJets_tagFirst_16->SetBorderSize(2);
   Sphericity_WJets_tagFirst_16->SetLeftMargin(0.15);
   Sphericity_WJets_tagFirst_16->SetFrameFillStyle(1000);
   Sphericity_WJets_tagFirst_16->SetFrameBorderMode(0);
   Sphericity_WJets_tagFirst_16->SetFrameFillStyle(1000);
   Sphericity_WJets_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__430 = new TH1D("VH_tagFirst_Sphericity__430","",25,0,1);
   VH_tagFirst_Sphericity__430->SetBinContent(1,3638.223);
   VH_tagFirst_Sphericity__430->SetBinContent(2,2753.882);
   VH_tagFirst_Sphericity__430->SetBinContent(3,1593.358);
   VH_tagFirst_Sphericity__430->SetBinContent(4,1007.969);
   VH_tagFirst_Sphericity__430->SetBinContent(5,601.6008);
   VH_tagFirst_Sphericity__430->SetBinContent(6,318.7795);
   VH_tagFirst_Sphericity__430->SetBinContent(7,165.3908);
   VH_tagFirst_Sphericity__430->SetBinContent(8,84.89883);
   VH_tagFirst_Sphericity__430->SetBinContent(9,62.43608);
   VH_tagFirst_Sphericity__430->SetBinContent(10,49.42932);
   VH_tagFirst_Sphericity__430->SetBinContent(11,43.49444);
   VH_tagFirst_Sphericity__430->SetBinContent(12,27.65275);
   VH_tagFirst_Sphericity__430->SetBinContent(13,16.20573);
   VH_tagFirst_Sphericity__430->SetBinContent(14,9.907523);
   VH_tagFirst_Sphericity__430->SetBinContent(15,8.975899);
   VH_tagFirst_Sphericity__430->SetBinContent(16,10.72088);
   VH_tagFirst_Sphericity__430->SetBinContent(17,4.190628);
   VH_tagFirst_Sphericity__430->SetBinContent(18,2.116236);
   VH_tagFirst_Sphericity__430->SetBinContent(19,2.581051);
   VH_tagFirst_Sphericity__430->SetBinContent(20,0.6377674);
   VH_tagFirst_Sphericity__430->SetBinContent(21,0.08314192);
   VH_tagFirst_Sphericity__430->SetBinContent(23,0.03557255);
   VH_tagFirst_Sphericity__430->SetBinError(1,55.15685);
   VH_tagFirst_Sphericity__430->SetBinError(2,52.8584);
   VH_tagFirst_Sphericity__430->SetBinError(3,39.31962);
   VH_tagFirst_Sphericity__430->SetBinError(4,31.53767);
   VH_tagFirst_Sphericity__430->SetBinError(5,24.86069);
   VH_tagFirst_Sphericity__430->SetBinError(6,15.52802);
   VH_tagFirst_Sphericity__430->SetBinError(7,11.77652);
   VH_tagFirst_Sphericity__430->SetBinError(8,7.275343);
   VH_tagFirst_Sphericity__430->SetBinError(9,5.956271);
   VH_tagFirst_Sphericity__430->SetBinError(10,4.314556);
   VH_tagFirst_Sphericity__430->SetBinError(11,9.811459);
   VH_tagFirst_Sphericity__430->SetBinError(12,5.638201);
   VH_tagFirst_Sphericity__430->SetBinError(13,1.801583);
   VH_tagFirst_Sphericity__430->SetBinError(14,1.305276);
   VH_tagFirst_Sphericity__430->SetBinError(15,1.323456);
   VH_tagFirst_Sphericity__430->SetBinError(16,3.854004);
   VH_tagFirst_Sphericity__430->SetBinError(17,0.5932799);
   VH_tagFirst_Sphericity__430->SetBinError(18,0.4292663);
   VH_tagFirst_Sphericity__430->SetBinError(19,0.5942606);
   VH_tagFirst_Sphericity__430->SetBinError(20,0.2764143);
   VH_tagFirst_Sphericity__430->SetBinError(21,0.08314192);
   VH_tagFirst_Sphericity__430->SetBinError(23,0.03557255);
   VH_tagFirst_Sphericity__430->SetEntries(115312);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Sphericity__430->SetLineColor(ci);
   VH_tagFirst_Sphericity__430->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__430->GetXaxis()->SetRange(1,25);
   VH_tagFirst_Sphericity__430->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__430->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__430->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__430->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_Sphericity__430->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__430->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Sphericity__430->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Sphericity__430->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Sphericity__430->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__430->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__430->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__430->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__430->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WJets_tagFirst_16->Modified();
   Sphericity_WJets_tagFirst_16->cd();
   Sphericity_WJets_tagFirst_16->SetSelected(Sphericity_WJets_tagFirst_16);
}
