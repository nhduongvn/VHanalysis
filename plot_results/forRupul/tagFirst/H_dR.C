#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR()
{
//=========Macro generated from canvas: H_dR/H_dR
//=========  (Wed Mar 27 16:46:16 2024) by ROOT version 6.28/10
   TCanvas *H_dR = new TCanvas("H_dR", "H_dR",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR->SetHighLightColor(2);
   H_dR->Range(-1.24,-0.04144114,7.026667,0.3729702);
   H_dR->SetFillColor(0);
   H_dR->SetFillStyle(4000);
   H_dR->SetBorderMode(0);
   H_dR->SetBorderSize(2);
   H_dR->SetLeftMargin(0.15);
   H_dR->SetFrameFillStyle(1000);
   H_dR->SetFrameBorderMode(0);
   H_dR->SetFrameFillStyle(1000);
   H_dR->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_H_dR__6 = new TH1D("VH_tagFirst_H_dR__6","",30,0,6);
   VH_tagFirst_H_dR__6->SetBinContent(3,0.1885304);
   VH_tagFirst_H_dR__6->SetBinContent(4,0.315742);
   VH_tagFirst_H_dR__6->SetBinContent(5,0.2635558);
   VH_tagFirst_H_dR__6->SetBinContent(6,0.295149);
   VH_tagFirst_H_dR__6->SetBinContent(7,0.1338056);
   VH_tagFirst_H_dR__6->SetBinContent(8,0.1314217);
   VH_tagFirst_H_dR__6->SetBinContent(9,0.0908915);
   VH_tagFirst_H_dR__6->SetBinContent(10,0.06174721);
   VH_tagFirst_H_dR__6->SetBinContent(11,0.09650308);
   VH_tagFirst_H_dR__6->SetBinContent(12,0.1102108);
   VH_tagFirst_H_dR__6->SetBinContent(13,0.09931485);
   VH_tagFirst_H_dR__6->SetBinContent(14,0.09713003);
   VH_tagFirst_H_dR__6->SetBinContent(15,0.136573);
   VH_tagFirst_H_dR__6->SetBinContent(16,0.1059962);
   VH_tagFirst_H_dR__6->SetBinContent(17,0.1285713);
   VH_tagFirst_H_dR__6->SetBinContent(18,0.09311587);
   VH_tagFirst_H_dR__6->SetBinContent(19,0.09002086);
   VH_tagFirst_H_dR__6->SetBinContent(20,0.08879949);
   VH_tagFirst_H_dR__6->SetBinContent(21,0.06157);
   VH_tagFirst_H_dR__6->SetBinContent(22,0.04435755);
   VH_tagFirst_H_dR__6->SetBinContent(23,0.02497563);
   VH_tagFirst_H_dR__6->SetBinContent(24,0.02122712);
   VH_tagFirst_H_dR__6->SetBinContent(25,0.02642138);
   VH_tagFirst_H_dR__6->SetBinContent(26,0.007328675);
   VH_tagFirst_H_dR__6->SetBinContent(27,0.01867583);
   VH_tagFirst_H_dR__6->SetBinContent(28,0.03186432);
   VH_tagFirst_H_dR__6->SetBinContent(29,0.02137651);
   VH_tagFirst_H_dR__6->SetBinContent(30,0.01786652);
   VH_tagFirst_H_dR__6->SetBinContent(31,0.01697641);
   VH_tagFirst_H_dR__6->SetBinError(3,0.02392354);
   VH_tagFirst_H_dR__6->SetBinError(4,0.04023276);
   VH_tagFirst_H_dR__6->SetBinError(5,0.0287106);
   VH_tagFirst_H_dR__6->SetBinError(6,0.03572026);
   VH_tagFirst_H_dR__6->SetBinError(7,0.02060254);
   VH_tagFirst_H_dR__6->SetBinError(8,0.02559038);
   VH_tagFirst_H_dR__6->SetBinError(9,0.01827192);
   VH_tagFirst_H_dR__6->SetBinError(10,0.01490216);
   VH_tagFirst_H_dR__6->SetBinError(11,0.02064132);
   VH_tagFirst_H_dR__6->SetBinError(12,0.02778876);
   VH_tagFirst_H_dR__6->SetBinError(13,0.01921291);
   VH_tagFirst_H_dR__6->SetBinError(14,0.0182864);
   VH_tagFirst_H_dR__6->SetBinError(15,0.02075084);
   VH_tagFirst_H_dR__6->SetBinError(16,0.01848032);
   VH_tagFirst_H_dR__6->SetBinError(17,0.02116508);
   VH_tagFirst_H_dR__6->SetBinError(18,0.01855423);
   VH_tagFirst_H_dR__6->SetBinError(19,0.0184043);
   VH_tagFirst_H_dR__6->SetBinError(20,0.02391553);
   VH_tagFirst_H_dR__6->SetBinError(21,0.01454261);
   VH_tagFirst_H_dR__6->SetBinError(22,0.01342121);
   VH_tagFirst_H_dR__6->SetBinError(23,0.008100465);
   VH_tagFirst_H_dR__6->SetBinError(24,0.00834624);
   VH_tagFirst_H_dR__6->SetBinError(25,0.008474075);
   VH_tagFirst_H_dR__6->SetBinError(26,0.004246922);
   VH_tagFirst_H_dR__6->SetBinError(27,0.007193855);
   VH_tagFirst_H_dR__6->SetBinError(28,0.009189114);
   VH_tagFirst_H_dR__6->SetBinError(29,0.008357297);
   VH_tagFirst_H_dR__6->SetBinError(30,0.006805148);
   VH_tagFirst_H_dR__6->SetBinError(31,0.007371426);
   VH_tagFirst_H_dR__6->SetEntries(939);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_dR__6->SetLineColor(ci);
   VH_tagFirst_H_dR__6->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VH_tagFirst_H_dR__6->GetXaxis()->SetRange(1,31);
   VH_tagFirst_H_dR__6->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR__6->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_dR__6->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR__6->GetYaxis()->SetTitle("Events/0.2");
   VH_tagFirst_H_dR__6->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR__6->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_H_dR__6->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_H_dR__6->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_H_dR__6->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR__6->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR__6->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_dR__6->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR__6->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR->Modified();
   H_dR->cd();
   H_dR->SetSelected(H_dR);
}
