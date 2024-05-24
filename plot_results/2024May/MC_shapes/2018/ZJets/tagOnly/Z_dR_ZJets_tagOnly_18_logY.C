#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_ZJets_tagOnly_18_logY()
{
//=========Macro generated from canvas: Z_dR_ZJets_tagOnly_18/Z_dR_ZJets_tagOnly_18
//=========  (Thu May 23 20:48:38 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_ZJets_tagOnly_18 = new TCanvas("Z_dR_ZJets_tagOnly_18", "Z_dR_ZJets_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_ZJets_tagOnly_18->SetHighLightColor(2);
   Z_dR_ZJets_tagOnly_18->Range(-1.2,-1.310731,6.8,4.303799);
   Z_dR_ZJets_tagOnly_18->SetFillColor(0);
   Z_dR_ZJets_tagOnly_18->SetFillStyle(4000);
   Z_dR_ZJets_tagOnly_18->SetBorderMode(0);
   Z_dR_ZJets_tagOnly_18->SetBorderSize(2);
   Z_dR_ZJets_tagOnly_18->SetLogy();
   Z_dR_ZJets_tagOnly_18->SetLeftMargin(0.15);
   Z_dR_ZJets_tagOnly_18->SetFrameFillStyle(1000);
   Z_dR_ZJets_tagOnly_18->SetFrameBorderMode(0);
   Z_dR_ZJets_tagOnly_18->SetFrameFillStyle(1000);
   Z_dR_ZJets_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Z_dR__855 = new TH1D("VH_tagOnly_Z_dR__855","",30,0,6);
   VH_tagOnly_Z_dR__855->SetBinContent(2,0.3562475);
   VH_tagOnly_Z_dR__855->SetBinContent(3,2057.519);
   VH_tagOnly_Z_dR__855->SetBinContent(4,2916.065);
   VH_tagOnly_Z_dR__855->SetBinContent(5,2440.779);
   VH_tagOnly_Z_dR__855->SetBinContent(6,1881.502);
   VH_tagOnly_Z_dR__855->SetBinContent(7,1309.218);
   VH_tagOnly_Z_dR__855->SetBinContent(8,929.8976);
   VH_tagOnly_Z_dR__855->SetBinContent(9,769.4319);
   VH_tagOnly_Z_dR__855->SetBinContent(10,714.8762);
   VH_tagOnly_Z_dR__855->SetBinContent(11,703.3851);
   VH_tagOnly_Z_dR__855->SetBinContent(12,644.6114);
   VH_tagOnly_Z_dR__855->SetBinContent(13,701.9048);
   VH_tagOnly_Z_dR__855->SetBinContent(14,760.2454);
   VH_tagOnly_Z_dR__855->SetBinContent(15,820.0648);
   VH_tagOnly_Z_dR__855->SetBinContent(16,854.7318);
   VH_tagOnly_Z_dR__855->SetBinContent(17,838.7387);
   VH_tagOnly_Z_dR__855->SetBinContent(18,755.268);
   VH_tagOnly_Z_dR__855->SetBinContent(19,719.1038);
   VH_tagOnly_Z_dR__855->SetBinContent(20,637.8988);
   VH_tagOnly_Z_dR__855->SetBinContent(21,500.501);
   VH_tagOnly_Z_dR__855->SetBinContent(22,409.4524);
   VH_tagOnly_Z_dR__855->SetBinContent(23,364.8166);
   VH_tagOnly_Z_dR__855->SetBinContent(24,312.8355);
   VH_tagOnly_Z_dR__855->SetBinContent(25,289.1298);
   VH_tagOnly_Z_dR__855->SetBinContent(26,313.5513);
   VH_tagOnly_Z_dR__855->SetBinContent(27,318.4518);
   VH_tagOnly_Z_dR__855->SetBinContent(28,342.1739);
   VH_tagOnly_Z_dR__855->SetBinContent(29,309.7769);
   VH_tagOnly_Z_dR__855->SetBinContent(30,211.9246);
   VH_tagOnly_Z_dR__855->SetBinContent(31,115.8643);
   VH_tagOnly_Z_dR__855->SetBinError(2,0.2097473);
   VH_tagOnly_Z_dR__855->SetBinError(3,34.41714);
   VH_tagOnly_Z_dR__855->SetBinError(4,41.38632);
   VH_tagOnly_Z_dR__855->SetBinError(5,44.23493);
   VH_tagOnly_Z_dR__855->SetBinError(6,49.37971);
   VH_tagOnly_Z_dR__855->SetBinError(7,38.93394);
   VH_tagOnly_Z_dR__855->SetBinError(8,30.09079);
   VH_tagOnly_Z_dR__855->SetBinError(9,28.27257);
   VH_tagOnly_Z_dR__855->SetBinError(10,30.14668);
   VH_tagOnly_Z_dR__855->SetBinError(11,30.20782);
   VH_tagOnly_Z_dR__855->SetBinError(12,21.02444);
   VH_tagOnly_Z_dR__855->SetBinError(13,24.58886);
   VH_tagOnly_Z_dR__855->SetBinError(14,24.0904);
   VH_tagOnly_Z_dR__855->SetBinError(15,27.1679);
   VH_tagOnly_Z_dR__855->SetBinError(16,31.21317);
   VH_tagOnly_Z_dR__855->SetBinError(17,35.79976);
   VH_tagOnly_Z_dR__855->SetBinError(18,27.51999);
   VH_tagOnly_Z_dR__855->SetBinError(19,33.50846);
   VH_tagOnly_Z_dR__855->SetBinError(20,28.85629);
   VH_tagOnly_Z_dR__855->SetBinError(21,25.52109);
   VH_tagOnly_Z_dR__855->SetBinError(22,15.91594);
   VH_tagOnly_Z_dR__855->SetBinError(23,18.19501);
   VH_tagOnly_Z_dR__855->SetBinError(24,15.42088);
   VH_tagOnly_Z_dR__855->SetBinError(25,15.83044);
   VH_tagOnly_Z_dR__855->SetBinError(26,15.22773);
   VH_tagOnly_Z_dR__855->SetBinError(27,21.02159);
   VH_tagOnly_Z_dR__855->SetBinError(28,19.07723);
   VH_tagOnly_Z_dR__855->SetBinError(29,15.97418);
   VH_tagOnly_Z_dR__855->SetBinError(30,11.98173);
   VH_tagOnly_Z_dR__855->SetBinError(31,8.990639);
   VH_tagOnly_Z_dR__855->SetEntries(86590);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Z_dR__855->SetLineColor(ci);
   VH_tagOnly_Z_dR__855->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_tagOnly_Z_dR__855->GetXaxis()->SetRange(1,30);
   VH_tagOnly_Z_dR__855->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__855->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_dR__855->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__855->GetYaxis()->SetTitle("Events/0.2");
   VH_tagOnly_Z_dR__855->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__855->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Z_dR__855->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Z_dR__855->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Z_dR__855->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__855->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__855->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_dR__855->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__855->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_ZJets_tagOnly_18->Modified();
   Z_dR_ZJets_tagOnly_18->cd();
   Z_dR_ZJets_tagOnly_18->SetSelected(Z_dR_ZJets_tagOnly_18);
}
