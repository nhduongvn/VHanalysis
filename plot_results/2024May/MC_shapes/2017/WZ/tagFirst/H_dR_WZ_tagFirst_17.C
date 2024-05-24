#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_WZ_tagFirst_17()
{
//=========Macro generated from canvas: H_dR_WZ_tagFirst_17/H_dR_WZ_tagFirst_17
//=========  (Fri May 24 12:42:08 2024) by ROOT version 6.28/10
   TCanvas *H_dR_WZ_tagFirst_17 = new TCanvas("H_dR_WZ_tagFirst_17", "H_dR_WZ_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_WZ_tagFirst_17->SetHighLightColor(2);
   H_dR_WZ_tagFirst_17->Range(-1.24,-2.30392,7.026667,20.73528);
   H_dR_WZ_tagFirst_17->SetFillColor(0);
   H_dR_WZ_tagFirst_17->SetFillStyle(4000);
   H_dR_WZ_tagFirst_17->SetBorderMode(0);
   H_dR_WZ_tagFirst_17->SetBorderSize(2);
   H_dR_WZ_tagFirst_17->SetLeftMargin(0.15);
   H_dR_WZ_tagFirst_17->SetFrameFillStyle(1000);
   H_dR_WZ_tagFirst_17->SetFrameBorderMode(0);
   H_dR_WZ_tagFirst_17->SetFrameFillStyle(1000);
   H_dR_WZ_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_H_dR__176 = new TH1D("VH_tagFirst_H_dR__176","",30,0,6);
   VH_tagFirst_H_dR__176->SetBinContent(3,9.00557);
   VH_tagFirst_H_dR__176->SetBinContent(4,17.55367);
   VH_tagFirst_H_dR__176->SetBinContent(5,8.626124);
   VH_tagFirst_H_dR__176->SetBinContent(6,7.735796);
   VH_tagFirst_H_dR__176->SetBinContent(7,4.137528);
   VH_tagFirst_H_dR__176->SetBinContent(8,4.060731);
   VH_tagFirst_H_dR__176->SetBinContent(9,6.87287);
   VH_tagFirst_H_dR__176->SetBinContent(10,3.986064);
   VH_tagFirst_H_dR__176->SetBinContent(11,4.151598);
   VH_tagFirst_H_dR__176->SetBinContent(12,6.71846);
   VH_tagFirst_H_dR__176->SetBinContent(13,5.123651);
   VH_tagFirst_H_dR__176->SetBinContent(14,5.638879);
   VH_tagFirst_H_dR__176->SetBinContent(15,9.361465);
   VH_tagFirst_H_dR__176->SetBinContent(16,10.54694);
   VH_tagFirst_H_dR__176->SetBinContent(17,10.29929);
   VH_tagFirst_H_dR__176->SetBinContent(18,8.221937);
   VH_tagFirst_H_dR__176->SetBinContent(19,6.655931);
   VH_tagFirst_H_dR__176->SetBinContent(20,4.233282);
   VH_tagFirst_H_dR__176->SetBinContent(21,4.851874);
   VH_tagFirst_H_dR__176->SetBinContent(22,2.282424);
   VH_tagFirst_H_dR__176->SetBinContent(23,2.918293);
   VH_tagFirst_H_dR__176->SetBinContent(24,1.286774);
   VH_tagFirst_H_dR__176->SetBinContent(25,1.802935);
   VH_tagFirst_H_dR__176->SetBinContent(26,1.210145);
   VH_tagFirst_H_dR__176->SetBinContent(27,1.06937);
   VH_tagFirst_H_dR__176->SetBinContent(28,2.047541);
   VH_tagFirst_H_dR__176->SetBinContent(29,1.742269);
   VH_tagFirst_H_dR__176->SetBinContent(30,0.7959322);
   VH_tagFirst_H_dR__176->SetBinError(3,1.710828);
   VH_tagFirst_H_dR__176->SetBinError(4,2.528318);
   VH_tagFirst_H_dR__176->SetBinError(5,1.438795);
   VH_tagFirst_H_dR__176->SetBinError(6,1.852057);
   VH_tagFirst_H_dR__176->SetBinError(7,1.19011);
   VH_tagFirst_H_dR__176->SetBinError(8,1.24116);
   VH_tagFirst_H_dR__176->SetBinError(9,1.471789);
   VH_tagFirst_H_dR__176->SetBinError(10,1.187812);
   VH_tagFirst_H_dR__176->SetBinError(11,1.164412);
   VH_tagFirst_H_dR__176->SetBinError(12,1.368791);
   VH_tagFirst_H_dR__176->SetBinError(13,1.246818);
   VH_tagFirst_H_dR__176->SetBinError(14,1.227781);
   VH_tagFirst_H_dR__176->SetBinError(15,1.829775);
   VH_tagFirst_H_dR__176->SetBinError(16,1.854537);
   VH_tagFirst_H_dR__176->SetBinError(17,2.038073);
   VH_tagFirst_H_dR__176->SetBinError(18,1.724699);
   VH_tagFirst_H_dR__176->SetBinError(19,1.514257);
   VH_tagFirst_H_dR__176->SetBinError(20,1.197326);
   VH_tagFirst_H_dR__176->SetBinError(21,1.305215);
   VH_tagFirst_H_dR__176->SetBinError(22,0.7832372);
   VH_tagFirst_H_dR__176->SetBinError(23,0.7282032);
   VH_tagFirst_H_dR__176->SetBinError(24,0.5428009);
   VH_tagFirst_H_dR__176->SetBinError(25,0.7928253);
   VH_tagFirst_H_dR__176->SetBinError(26,0.5498901);
   VH_tagFirst_H_dR__176->SetBinError(27,0.5337269);
   VH_tagFirst_H_dR__176->SetBinError(28,0.8392801);
   VH_tagFirst_H_dR__176->SetBinError(29,0.7352777);
   VH_tagFirst_H_dR__176->SetBinError(30,0.4001954);
   VH_tagFirst_H_dR__176->SetEntries(620);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_dR__176->SetLineColor(ci);
   VH_tagFirst_H_dR__176->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VH_tagFirst_H_dR__176->GetXaxis()->SetRange(1,31);
   VH_tagFirst_H_dR__176->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR__176->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_dR__176->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR__176->GetYaxis()->SetTitle("Events/0.2");
   VH_tagFirst_H_dR__176->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR__176->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_H_dR__176->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_H_dR__176->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_H_dR__176->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR__176->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR__176->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_dR__176->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR__176->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_WZ_tagFirst_17->Modified();
   H_dR_WZ_tagFirst_17->cd();
   H_dR_WZ_tagFirst_17->SetSelected(H_dR_WZ_tagFirst_17);
}
