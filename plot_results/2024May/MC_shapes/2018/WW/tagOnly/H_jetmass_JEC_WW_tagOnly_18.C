#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_JEC_WW_tagOnly_18()
{
//=========Macro generated from canvas: H_jetmass_JEC_WW_tagOnly_18/H_jetmass_JEC_WW_tagOnly_18
//=========  (Fri May 24 12:42:23 2024) by ROOT version 6.28/10
   TCanvas *H_jetmass_JEC_WW_tagOnly_18 = new TCanvas("H_jetmass_JEC_WW_tagOnly_18", "H_jetmass_JEC_WW_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_WW_tagOnly_18->SetHighLightColor(2);
   H_jetmass_JEC_WW_tagOnly_18->Range(-60,-2.448574,340,22.03717);
   H_jetmass_JEC_WW_tagOnly_18->SetFillColor(0);
   H_jetmass_JEC_WW_tagOnly_18->SetFillStyle(4000);
   H_jetmass_JEC_WW_tagOnly_18->SetBorderMode(0);
   H_jetmass_JEC_WW_tagOnly_18->SetBorderSize(2);
   H_jetmass_JEC_WW_tagOnly_18->SetLeftMargin(0.15);
   H_jetmass_JEC_WW_tagOnly_18->SetFrameFillStyle(1000);
   H_jetmass_JEC_WW_tagOnly_18->SetFrameBorderMode(0);
   H_jetmass_JEC_WW_tagOnly_18->SetFrameFillStyle(1000);
   H_jetmass_JEC_WW_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_H_jetmass_JEC__1314 = new TH1D("VH_tagOnly_H_jetmass_JEC__1314","",150,0,300);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinContent(3,1.51623);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinContent(4,10.85449);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinContent(5,18.64914);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinContent(6,18.6558);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinContent(7,15.96139);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinContent(8,8.700867);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinContent(9,4.013665);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinContent(10,11.76093);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinContent(11,2.233712);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinContent(12,4.938598);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinContent(13,4.779446);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinContent(14,1.227585);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinContent(15,0.7794853);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinContent(17,0.2917935);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinContent(18,1.361903);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinContent(19,0.4813809);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinContent(20,0.6140818);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinContent(21,0.5220207);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinContent(23,0.4851978);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinContent(44,0.3599908);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinError(3,1.092027);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinError(4,3.511974);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinError(5,3.951906);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinError(6,4.446982);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinError(7,3.92742);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinError(8,3.062863);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinError(9,1.535806);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinError(10,3.626365);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinError(11,1.186063);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinError(12,1.966295);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinError(13,1.984501);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinError(14,0.8760642);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinError(15,0.7794853);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinError(17,0.2917935);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinError(18,0.9973889);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinError(19,0.4813809);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinError(20,0.6140818);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinError(21,0.5220207);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinError(23,0.4851978);
   VH_tagOnly_H_jetmass_JEC__1314->SetBinError(44,0.3599908);
   VH_tagOnly_H_jetmass_JEC__1314->SetEntries(144);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_H_jetmass_JEC__1314->SetLineColor(ci);
   VH_tagOnly_H_jetmass_JEC__1314->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VH_tagOnly_H_jetmass_JEC__1314->GetXaxis()->SetRange(1,150);
   VH_tagOnly_H_jetmass_JEC__1314->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_H_jetmass_JEC__1314->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_H_jetmass_JEC__1314->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_H_jetmass_JEC__1314->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_tagOnly_H_jetmass_JEC__1314->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_H_jetmass_JEC__1314->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_H_jetmass_JEC__1314->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_H_jetmass_JEC__1314->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_H_jetmass_JEC__1314->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_H_jetmass_JEC__1314->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_H_jetmass_JEC__1314->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_H_jetmass_JEC__1314->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_H_jetmass_JEC__1314->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_WW_tagOnly_18->Modified();
   H_jetmass_JEC_WW_tagOnly_18->cd();
   H_jetmass_JEC_WW_tagOnly_18->SetSelected(H_jetmass_JEC_WW_tagOnly_18);
}
