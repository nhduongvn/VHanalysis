#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_ZJets_tagFirst_16_logY()
{
//=========Macro generated from canvas: Z_dR_ZJets_tagFirst_16/Z_dR_ZJets_tagFirst_16
//=========  (Thu May 23 20:48:28 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_ZJets_tagFirst_16 = new TCanvas("Z_dR_ZJets_tagFirst_16", "Z_dR_ZJets_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_ZJets_tagFirst_16->SetHighLightColor(2);
   Z_dR_ZJets_tagFirst_16->Range(-1.2,-1.042678,6.8,4.087066);
   Z_dR_ZJets_tagFirst_16->SetFillColor(0);
   Z_dR_ZJets_tagFirst_16->SetFillStyle(4000);
   Z_dR_ZJets_tagFirst_16->SetBorderMode(0);
   Z_dR_ZJets_tagFirst_16->SetBorderSize(2);
   Z_dR_ZJets_tagFirst_16->SetLogy();
   Z_dR_ZJets_tagFirst_16->SetLeftMargin(0.15);
   Z_dR_ZJets_tagFirst_16->SetFrameFillStyle(1000);
   Z_dR_ZJets_tagFirst_16->SetFrameBorderMode(0);
   Z_dR_ZJets_tagFirst_16->SetFrameFillStyle(1000);
   Z_dR_ZJets_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Z_dR__133 = new TH1D("VH_tagFirst_Z_dR__133","",30,0,6);
   VH_tagFirst_Z_dR__133->SetBinContent(2,0.5906447);
   VH_tagFirst_Z_dR__133->SetBinContent(3,1372.561);
   VH_tagFirst_Z_dR__133->SetBinContent(4,1979.442);
   VH_tagFirst_Z_dR__133->SetBinContent(5,1807.993);
   VH_tagFirst_Z_dR__133->SetBinContent(6,1610.888);
   VH_tagFirst_Z_dR__133->SetBinContent(7,1164.467);
   VH_tagFirst_Z_dR__133->SetBinContent(8,835.6691);
   VH_tagFirst_Z_dR__133->SetBinContent(9,635.7515);
   VH_tagFirst_Z_dR__133->SetBinContent(10,541.8699);
   VH_tagFirst_Z_dR__133->SetBinContent(11,533.848);
   VH_tagFirst_Z_dR__133->SetBinContent(12,519.6428);
   VH_tagFirst_Z_dR__133->SetBinContent(13,536.4404);
   VH_tagFirst_Z_dR__133->SetBinContent(14,605.0815);
   VH_tagFirst_Z_dR__133->SetBinContent(15,640.594);
   VH_tagFirst_Z_dR__133->SetBinContent(16,649.5256);
   VH_tagFirst_Z_dR__133->SetBinContent(17,591.4749);
   VH_tagFirst_Z_dR__133->SetBinContent(18,587.9577);
   VH_tagFirst_Z_dR__133->SetBinContent(19,524.0292);
   VH_tagFirst_Z_dR__133->SetBinContent(20,430.7703);
   VH_tagFirst_Z_dR__133->SetBinContent(21,365.0272);
   VH_tagFirst_Z_dR__133->SetBinContent(22,301.6768);
   VH_tagFirst_Z_dR__133->SetBinContent(23,275.254);
   VH_tagFirst_Z_dR__133->SetBinContent(24,228.2745);
   VH_tagFirst_Z_dR__133->SetBinContent(25,226.1056);
   VH_tagFirst_Z_dR__133->SetBinContent(26,232.7432);
   VH_tagFirst_Z_dR__133->SetBinContent(27,234.3184);
   VH_tagFirst_Z_dR__133->SetBinContent(28,225.8273);
   VH_tagFirst_Z_dR__133->SetBinContent(29,193.4459);
   VH_tagFirst_Z_dR__133->SetBinContent(30,126.6422);
   VH_tagFirst_Z_dR__133->SetBinContent(31,75.30814);
   VH_tagFirst_Z_dR__133->SetBinError(2,0.2169443);
   VH_tagFirst_Z_dR__133->SetBinError(3,14.58842);
   VH_tagFirst_Z_dR__133->SetBinError(4,18.4632);
   VH_tagFirst_Z_dR__133->SetBinError(5,22.92605);
   VH_tagFirst_Z_dR__133->SetBinError(6,29.89801);
   VH_tagFirst_Z_dR__133->SetBinError(7,27.51981);
   VH_tagFirst_Z_dR__133->SetBinError(8,23.20253);
   VH_tagFirst_Z_dR__133->SetBinError(9,19.72384);
   VH_tagFirst_Z_dR__133->SetBinError(10,16.50811);
   VH_tagFirst_Z_dR__133->SetBinError(11,17.21063);
   VH_tagFirst_Z_dR__133->SetBinError(12,15.85061);
   VH_tagFirst_Z_dR__133->SetBinError(13,14.82689);
   VH_tagFirst_Z_dR__133->SetBinError(14,16.50701);
   VH_tagFirst_Z_dR__133->SetBinError(15,16.92919);
   VH_tagFirst_Z_dR__133->SetBinError(16,16.54412);
   VH_tagFirst_Z_dR__133->SetBinError(17,14.39801);
   VH_tagFirst_Z_dR__133->SetBinError(18,15.83785);
   VH_tagFirst_Z_dR__133->SetBinError(19,15.52133);
   VH_tagFirst_Z_dR__133->SetBinError(20,12.78527);
   VH_tagFirst_Z_dR__133->SetBinError(21,11.82432);
   VH_tagFirst_Z_dR__133->SetBinError(22,10.7993);
   VH_tagFirst_Z_dR__133->SetBinError(23,11.44731);
   VH_tagFirst_Z_dR__133->SetBinError(24,9.623524);
   VH_tagFirst_Z_dR__133->SetBinError(25,10.79923);
   VH_tagFirst_Z_dR__133->SetBinError(26,10.33942);
   VH_tagFirst_Z_dR__133->SetBinError(27,10.78377);
   VH_tagFirst_Z_dR__133->SetBinError(28,8.588128);
   VH_tagFirst_Z_dR__133->SetBinError(29,6.757403);
   VH_tagFirst_Z_dR__133->SetBinError(30,5.451542);
   VH_tagFirst_Z_dR__133->SetBinError(31,4.794833);
   VH_tagFirst_Z_dR__133->SetEntries(170056);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_dR__133->SetLineColor(ci);
   VH_tagFirst_Z_dR__133->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_tagFirst_Z_dR__133->GetXaxis()->SetRange(1,30);
   VH_tagFirst_Z_dR__133->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR__133->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_dR__133->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR__133->GetYaxis()->SetTitle("Events/0.2");
   VH_tagFirst_Z_dR__133->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR__133->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Z_dR__133->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Z_dR__133->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Z_dR__133->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR__133->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR__133->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_dR__133->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR__133->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_ZJets_tagFirst_16->Modified();
   Z_dR_ZJets_tagFirst_16->cd();
   Z_dR_ZJets_tagFirst_16->SetSelected(Z_dR_ZJets_tagFirst_16);
}
