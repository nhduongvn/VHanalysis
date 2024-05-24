#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_WJets_tagOnly_17_logY()
{
//=========Macro generated from canvas: H_dR_WJets_tagOnly_17/H_dR_WJets_tagOnly_17
//=========  (Thu May 23 20:48:38 2024) by ROOT version 6.28/10
   TCanvas *H_dR_WJets_tagOnly_17 = new TCanvas("H_dR_WJets_tagOnly_17", "H_dR_WJets_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_WJets_tagOnly_17->SetHighLightColor(2);
   H_dR_WJets_tagOnly_17->Range(-1.24,-2.136534,7.026667,3.420241);
   H_dR_WJets_tagOnly_17->SetFillColor(0);
   H_dR_WJets_tagOnly_17->SetFillStyle(4000);
   H_dR_WJets_tagOnly_17->SetBorderMode(0);
   H_dR_WJets_tagOnly_17->SetBorderSize(2);
   H_dR_WJets_tagOnly_17->SetLogy();
   H_dR_WJets_tagOnly_17->SetLeftMargin(0.15);
   H_dR_WJets_tagOnly_17->SetFrameFillStyle(1000);
   H_dR_WJets_tagOnly_17->SetFrameBorderMode(0);
   H_dR_WJets_tagOnly_17->SetFrameFillStyle(1000);
   H_dR_WJets_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_H_dR__881 = new TH1D("VH_tagOnly_H_dR__881","",30,0,6);
   VH_tagOnly_H_dR__881->SetBinContent(2,0.05250173);
   VH_tagOnly_H_dR__881->SetBinContent(3,310.5505);
   VH_tagOnly_H_dR__881->SetBinContent(4,366.2851);
   VH_tagOnly_H_dR__881->SetBinContent(5,296.6155);
   VH_tagOnly_H_dR__881->SetBinContent(6,291.6084);
   VH_tagOnly_H_dR__881->SetBinContent(7,224.4101);
   VH_tagOnly_H_dR__881->SetBinContent(8,266.3054);
   VH_tagOnly_H_dR__881->SetBinContent(9,228.1421);
   VH_tagOnly_H_dR__881->SetBinContent(10,226.7345);
   VH_tagOnly_H_dR__881->SetBinContent(11,234.66);
   VH_tagOnly_H_dR__881->SetBinContent(12,217.5017);
   VH_tagOnly_H_dR__881->SetBinContent(13,295.8554);
   VH_tagOnly_H_dR__881->SetBinContent(14,322.8516);
   VH_tagOnly_H_dR__881->SetBinContent(15,335.3394);
   VH_tagOnly_H_dR__881->SetBinContent(16,386.38);
   VH_tagOnly_H_dR__881->SetBinContent(17,325.8738);
   VH_tagOnly_H_dR__881->SetBinContent(18,297.7442);
   VH_tagOnly_H_dR__881->SetBinContent(19,265.2558);
   VH_tagOnly_H_dR__881->SetBinContent(20,273.6232);
   VH_tagOnly_H_dR__881->SetBinContent(21,202.8174);
   VH_tagOnly_H_dR__881->SetBinContent(22,176.3626);
   VH_tagOnly_H_dR__881->SetBinContent(23,134.0883);
   VH_tagOnly_H_dR__881->SetBinContent(24,124.7854);
   VH_tagOnly_H_dR__881->SetBinContent(25,110.6932);
   VH_tagOnly_H_dR__881->SetBinContent(26,70.39281);
   VH_tagOnly_H_dR__881->SetBinContent(27,76.65448);
   VH_tagOnly_H_dR__881->SetBinContent(28,60.00952);
   VH_tagOnly_H_dR__881->SetBinContent(29,53.33268);
   VH_tagOnly_H_dR__881->SetBinContent(30,39.64738);
   VH_tagOnly_H_dR__881->SetBinContent(31,25.56438);
   VH_tagOnly_H_dR__881->SetBinError(2,0.03894385);
   VH_tagOnly_H_dR__881->SetBinError(3,12.4927);
   VH_tagOnly_H_dR__881->SetBinError(4,17.40456);
   VH_tagOnly_H_dR__881->SetBinError(5,16.27799);
   VH_tagOnly_H_dR__881->SetBinError(6,22.73618);
   VH_tagOnly_H_dR__881->SetBinError(7,14.74038);
   VH_tagOnly_H_dR__881->SetBinError(8,25.58816);
   VH_tagOnly_H_dR__881->SetBinError(9,15.27534);
   VH_tagOnly_H_dR__881->SetBinError(10,14.11367);
   VH_tagOnly_H_dR__881->SetBinError(11,14.65067);
   VH_tagOnly_H_dR__881->SetBinError(12,12.57718);
   VH_tagOnly_H_dR__881->SetBinError(13,17.60154);
   VH_tagOnly_H_dR__881->SetBinError(14,26.11137);
   VH_tagOnly_H_dR__881->SetBinError(15,21.39804);
   VH_tagOnly_H_dR__881->SetBinError(16,21.5625);
   VH_tagOnly_H_dR__881->SetBinError(17,17.01978);
   VH_tagOnly_H_dR__881->SetBinError(18,14.92186);
   VH_tagOnly_H_dR__881->SetBinError(19,15.02104);
   VH_tagOnly_H_dR__881->SetBinError(20,24.32447);
   VH_tagOnly_H_dR__881->SetBinError(21,11.59615);
   VH_tagOnly_H_dR__881->SetBinError(22,13.04862);
   VH_tagOnly_H_dR__881->SetBinError(23,8.865978);
   VH_tagOnly_H_dR__881->SetBinError(24,13.9654);
   VH_tagOnly_H_dR__881->SetBinError(25,11.29774);
   VH_tagOnly_H_dR__881->SetBinError(26,5.399438);
   VH_tagOnly_H_dR__881->SetBinError(27,12.06621);
   VH_tagOnly_H_dR__881->SetBinError(28,7.215614);
   VH_tagOnly_H_dR__881->SetBinError(29,6.111087);
   VH_tagOnly_H_dR__881->SetBinError(30,6.472967);
   VH_tagOnly_H_dR__881->SetBinError(31,3.508284);
   VH_tagOnly_H_dR__881->SetEntries(42681);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_H_dR__881->SetLineColor(ci);
   VH_tagOnly_H_dR__881->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VH_tagOnly_H_dR__881->GetXaxis()->SetRange(1,31);
   VH_tagOnly_H_dR__881->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_H_dR__881->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_H_dR__881->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_H_dR__881->GetYaxis()->SetTitle("Events/0.2");
   VH_tagOnly_H_dR__881->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_H_dR__881->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_H_dR__881->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_H_dR__881->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_H_dR__881->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_H_dR__881->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_H_dR__881->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_H_dR__881->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_H_dR__881->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_WJets_tagOnly_17->Modified();
   H_dR_WJets_tagOnly_17->cd();
   H_dR_WJets_tagOnly_17->SetSelected(H_dR_WJets_tagOnly_17);
}
