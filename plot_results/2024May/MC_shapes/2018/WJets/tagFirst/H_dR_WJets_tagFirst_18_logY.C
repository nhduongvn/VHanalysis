#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_WJets_tagFirst_18_logY()
{
//=========Macro generated from canvas: H_dR_WJets_tagFirst_18/H_dR_WJets_tagFirst_18
//=========  (Thu May 23 20:48:28 2024) by ROOT version 6.28/10
   TCanvas *H_dR_WJets_tagFirst_18 = new TCanvas("H_dR_WJets_tagFirst_18", "H_dR_WJets_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_WJets_tagFirst_18->SetHighLightColor(2);
   H_dR_WJets_tagFirst_18->Range(-1.24,-1.2865,7.026667,3.727359);
   H_dR_WJets_tagFirst_18->SetFillColor(0);
   H_dR_WJets_tagFirst_18->SetFillStyle(4000);
   H_dR_WJets_tagFirst_18->SetBorderMode(0);
   H_dR_WJets_tagFirst_18->SetBorderSize(2);
   H_dR_WJets_tagFirst_18->SetLogy();
   H_dR_WJets_tagFirst_18->SetLeftMargin(0.15);
   H_dR_WJets_tagFirst_18->SetFrameFillStyle(1000);
   H_dR_WJets_tagFirst_18->SetFrameBorderMode(0);
   H_dR_WJets_tagFirst_18->SetFrameFillStyle(1000);
   H_dR_WJets_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_H_dR__162 = new TH1D("VH_tagFirst_H_dR__162","",30,0,6);
   VH_tagFirst_H_dR__162->SetBinContent(2,0.3280318);
   VH_tagFirst_H_dR__162->SetBinContent(3,688.0229);
   VH_tagFirst_H_dR__162->SetBinContent(4,888.0231);
   VH_tagFirst_H_dR__162->SetBinContent(5,665.6366);
   VH_tagFirst_H_dR__162->SetBinContent(6,623.7809);
   VH_tagFirst_H_dR__162->SetBinContent(7,454.6927);
   VH_tagFirst_H_dR__162->SetBinContent(8,511.681);
   VH_tagFirst_H_dR__162->SetBinContent(9,476.052);
   VH_tagFirst_H_dR__162->SetBinContent(10,496.4427);
   VH_tagFirst_H_dR__162->SetBinContent(11,589.4485);
   VH_tagFirst_H_dR__162->SetBinContent(12,559.3952);
   VH_tagFirst_H_dR__162->SetBinContent(13,667.7652);
   VH_tagFirst_H_dR__162->SetBinContent(14,683.6982);
   VH_tagFirst_H_dR__162->SetBinContent(15,795.5773);
   VH_tagFirst_H_dR__162->SetBinContent(16,805.9339);
   VH_tagFirst_H_dR__162->SetBinContent(17,777.5978);
   VH_tagFirst_H_dR__162->SetBinContent(18,721.3459);
   VH_tagFirst_H_dR__162->SetBinContent(19,653.5147);
   VH_tagFirst_H_dR__162->SetBinContent(20,499.2935);
   VH_tagFirst_H_dR__162->SetBinContent(21,382.7191);
   VH_tagFirst_H_dR__162->SetBinContent(22,378.5715);
   VH_tagFirst_H_dR__162->SetBinContent(23,254.8615);
   VH_tagFirst_H_dR__162->SetBinContent(24,260.8614);
   VH_tagFirst_H_dR__162->SetBinContent(25,182.1528);
   VH_tagFirst_H_dR__162->SetBinContent(26,182.4215);
   VH_tagFirst_H_dR__162->SetBinContent(27,141.6836);
   VH_tagFirst_H_dR__162->SetBinContent(28,138.5654);
   VH_tagFirst_H_dR__162->SetBinContent(29,93.10172);
   VH_tagFirst_H_dR__162->SetBinContent(30,88.69044);
   VH_tagFirst_H_dR__162->SetBinContent(31,51.53648);
   VH_tagFirst_H_dR__162->SetBinError(2,0.2353546);
   VH_tagFirst_H_dR__162->SetBinError(3,36.14466);
   VH_tagFirst_H_dR__162->SetBinError(4,72.43411);
   VH_tagFirst_H_dR__162->SetBinError(5,41.10779);
   VH_tagFirst_H_dR__162->SetBinError(6,52.60639);
   VH_tagFirst_H_dR__162->SetBinError(7,29.5986);
   VH_tagFirst_H_dR__162->SetBinError(8,41.14849);
   VH_tagFirst_H_dR__162->SetBinError(9,30.98495);
   VH_tagFirst_H_dR__162->SetBinError(10,33.89811);
   VH_tagFirst_H_dR__162->SetBinError(11,51.56657);
   VH_tagFirst_H_dR__162->SetBinError(12,39.08098);
   VH_tagFirst_H_dR__162->SetBinError(13,44.5774);
   VH_tagFirst_H_dR__162->SetBinError(14,37.68752);
   VH_tagFirst_H_dR__162->SetBinError(15,48.09205);
   VH_tagFirst_H_dR__162->SetBinError(16,47.76692);
   VH_tagFirst_H_dR__162->SetBinError(17,65.77659);
   VH_tagFirst_H_dR__162->SetBinError(18,71.28054);
   VH_tagFirst_H_dR__162->SetBinError(19,38.40009);
   VH_tagFirst_H_dR__162->SetBinError(20,39.25049);
   VH_tagFirst_H_dR__162->SetBinError(21,24.04392);
   VH_tagFirst_H_dR__162->SetBinError(22,33.78367);
   VH_tagFirst_H_dR__162->SetBinError(23,19.3315);
   VH_tagFirst_H_dR__162->SetBinError(24,29.97491);
   VH_tagFirst_H_dR__162->SetBinError(25,19.97382);
   VH_tagFirst_H_dR__162->SetBinError(26,25.66184);
   VH_tagFirst_H_dR__162->SetBinError(27,18.07735);
   VH_tagFirst_H_dR__162->SetBinError(28,16.62449);
   VH_tagFirst_H_dR__162->SetBinError(29,11.54991);
   VH_tagFirst_H_dR__162->SetBinError(30,14.35241);
   VH_tagFirst_H_dR__162->SetBinError(31,6.931812);
   VH_tagFirst_H_dR__162->SetEntries(42358);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_dR__162->SetLineColor(ci);
   VH_tagFirst_H_dR__162->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VH_tagFirst_H_dR__162->GetXaxis()->SetRange(1,31);
   VH_tagFirst_H_dR__162->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR__162->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_dR__162->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR__162->GetYaxis()->SetTitle("Events/0.2");
   VH_tagFirst_H_dR__162->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR__162->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_H_dR__162->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_H_dR__162->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_H_dR__162->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR__162->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR__162->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_dR__162->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR__162->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_WJets_tagFirst_18->Modified();
   H_dR_WJets_tagFirst_18->cd();
   H_dR_WJets_tagFirst_18->SetSelected(H_dR_WJets_tagFirst_18);
}
