#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_WJets_tagOnly_16_logY()
{
//=========Macro generated from canvas: H_dR_WJets_tagOnly_16/H_dR_WJets_tagOnly_16
//=========  (Thu May 23 20:48:38 2024) by ROOT version 6.28/10
   TCanvas *H_dR_WJets_tagOnly_16 = new TCanvas("H_dR_WJets_tagOnly_16", "H_dR_WJets_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_WJets_tagOnly_16->SetHighLightColor(2);
   H_dR_WJets_tagOnly_16->Range(-1.24,-1.069052,7.026667,3.495351);
   H_dR_WJets_tagOnly_16->SetFillColor(0);
   H_dR_WJets_tagOnly_16->SetFillStyle(4000);
   H_dR_WJets_tagOnly_16->SetBorderMode(0);
   H_dR_WJets_tagOnly_16->SetBorderSize(2);
   H_dR_WJets_tagOnly_16->SetLogy();
   H_dR_WJets_tagOnly_16->SetLeftMargin(0.15);
   H_dR_WJets_tagOnly_16->SetFrameFillStyle(1000);
   H_dR_WJets_tagOnly_16->SetFrameBorderMode(0);
   H_dR_WJets_tagOnly_16->SetFrameFillStyle(1000);
   H_dR_WJets_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_H_dR__880 = new TH1D("VH_tagOnly_H_dR__880","",30,0,6);
   VH_tagOnly_H_dR__880->SetBinContent(2,0.4879986);
   VH_tagOnly_H_dR__880->SetBinContent(3,485.4451);
   VH_tagOnly_H_dR__880->SetBinContent(4,575.8789);
   VH_tagOnly_H_dR__880->SetBinContent(5,532.4344);
   VH_tagOnly_H_dR__880->SetBinContent(6,485.9971);
   VH_tagOnly_H_dR__880->SetBinContent(7,400.7519);
   VH_tagOnly_H_dR__880->SetBinContent(8,380.6824);
   VH_tagOnly_H_dR__880->SetBinContent(9,377.2699);
   VH_tagOnly_H_dR__880->SetBinContent(10,379.3919);
   VH_tagOnly_H_dR__880->SetBinContent(11,373.935);
   VH_tagOnly_H_dR__880->SetBinContent(12,451.1167);
   VH_tagOnly_H_dR__880->SetBinContent(13,459.7064);
   VH_tagOnly_H_dR__880->SetBinContent(14,466.9191);
   VH_tagOnly_H_dR__880->SetBinContent(15,551.4147);
   VH_tagOnly_H_dR__880->SetBinContent(16,577.2466);
   VH_tagOnly_H_dR__880->SetBinContent(17,552.8612);
   VH_tagOnly_H_dR__880->SetBinContent(18,536.4875);
   VH_tagOnly_H_dR__880->SetBinContent(19,454.6152);
   VH_tagOnly_H_dR__880->SetBinContent(20,377.9182);
   VH_tagOnly_H_dR__880->SetBinContent(21,343.9479);
   VH_tagOnly_H_dR__880->SetBinContent(22,266.6764);
   VH_tagOnly_H_dR__880->SetBinContent(23,227.4665);
   VH_tagOnly_H_dR__880->SetBinContent(24,179.5602);
   VH_tagOnly_H_dR__880->SetBinContent(25,165.8389);
   VH_tagOnly_H_dR__880->SetBinContent(26,140.3883);
   VH_tagOnly_H_dR__880->SetBinContent(27,116.9199);
   VH_tagOnly_H_dR__880->SetBinContent(28,103.7946);
   VH_tagOnly_H_dR__880->SetBinContent(29,91.36122);
   VH_tagOnly_H_dR__880->SetBinContent(30,55.06555);
   VH_tagOnly_H_dR__880->SetBinContent(31,54.72469);
   VH_tagOnly_H_dR__880->SetBinError(2,0.2386503);
   VH_tagOnly_H_dR__880->SetBinError(3,13.96695);
   VH_tagOnly_H_dR__880->SetBinError(4,18.37299);
   VH_tagOnly_H_dR__880->SetBinError(5,25.6892);
   VH_tagOnly_H_dR__880->SetBinError(6,26.30583);
   VH_tagOnly_H_dR__880->SetBinError(7,20.7575);
   VH_tagOnly_H_dR__880->SetBinError(8,20.01127);
   VH_tagOnly_H_dR__880->SetBinError(9,20.29094);
   VH_tagOnly_H_dR__880->SetBinError(10,19.31573);
   VH_tagOnly_H_dR__880->SetBinError(11,17.27004);
   VH_tagOnly_H_dR__880->SetBinError(12,21.68484);
   VH_tagOnly_H_dR__880->SetBinError(13,21.9687);
   VH_tagOnly_H_dR__880->SetBinError(14,17.14374);
   VH_tagOnly_H_dR__880->SetBinError(15,23.61041);
   VH_tagOnly_H_dR__880->SetBinError(16,22.83603);
   VH_tagOnly_H_dR__880->SetBinError(17,22.47464);
   VH_tagOnly_H_dR__880->SetBinError(18,22.35376);
   VH_tagOnly_H_dR__880->SetBinError(19,20.48612);
   VH_tagOnly_H_dR__880->SetBinError(20,16.93601);
   VH_tagOnly_H_dR__880->SetBinError(21,18.37658);
   VH_tagOnly_H_dR__880->SetBinError(22,14.18429);
   VH_tagOnly_H_dR__880->SetBinError(23,14.21217);
   VH_tagOnly_H_dR__880->SetBinError(24,12.45427);
   VH_tagOnly_H_dR__880->SetBinError(25,13.87813);
   VH_tagOnly_H_dR__880->SetBinError(26,11.83271);
   VH_tagOnly_H_dR__880->SetBinError(27,12.68498);
   VH_tagOnly_H_dR__880->SetBinError(28,11.69394);
   VH_tagOnly_H_dR__880->SetBinError(29,8.796472);
   VH_tagOnly_H_dR__880->SetBinError(30,6.310913);
   VH_tagOnly_H_dR__880->SetBinError(31,8.334913);
   VH_tagOnly_H_dR__880->SetEntries(110079);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_H_dR__880->SetLineColor(ci);
   VH_tagOnly_H_dR__880->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VH_tagOnly_H_dR__880->GetXaxis()->SetRange(1,31);
   VH_tagOnly_H_dR__880->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_H_dR__880->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_H_dR__880->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_H_dR__880->GetYaxis()->SetTitle("Events/0.2");
   VH_tagOnly_H_dR__880->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_H_dR__880->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_H_dR__880->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_H_dR__880->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_H_dR__880->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_H_dR__880->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_H_dR__880->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_H_dR__880->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_H_dR__880->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_WJets_tagOnly_16->Modified();
   H_dR_WJets_tagOnly_16->cd();
   H_dR_WJets_tagOnly_16->SetSelected(H_dR_WJets_tagOnly_16);
}
