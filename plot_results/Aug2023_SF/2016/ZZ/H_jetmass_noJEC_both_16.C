#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_noJEC_both_16()
{
//=========Macro generated from canvas: H_jetmass_noJEC_both_16/H_jetmass_noJEC_both_16
//=========  (Fri Sep  1 13:23:45 2023) by ROOT version 6.28/04
   TCanvas *H_jetmass_noJEC_both_16 = new TCanvas("H_jetmass_noJEC_both_16", "H_jetmass_noJEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_both_16->SetHighLightColor(2);
   H_jetmass_noJEC_both_16->Range(-60,-0.9721182,340,8.749064);
   H_jetmass_noJEC_both_16->SetFillColor(0);
   H_jetmass_noJEC_both_16->SetBorderMode(0);
   H_jetmass_noJEC_both_16->SetBorderSize(2);
   H_jetmass_noJEC_both_16->SetLeftMargin(0.15);
   H_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   H_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_noJEC__1001 = new TH1D("VbbHcc_both_H_jetmass_noJEC__1001","",150,0,300);
   VbbHcc_both_H_jetmass_noJEC__1001->SetBinContent(2,0.2061981);
   VbbHcc_both_H_jetmass_noJEC__1001->SetBinContent(3,0.4997476);
   VbbHcc_both_H_jetmass_noJEC__1001->SetBinContent(4,5.83901);
   VbbHcc_both_H_jetmass_noJEC__1001->SetBinContent(5,5.986437);
   VbbHcc_both_H_jetmass_noJEC__1001->SetBinContent(6,7.406615);
   VbbHcc_both_H_jetmass_noJEC__1001->SetBinContent(7,6.530691);
   VbbHcc_both_H_jetmass_noJEC__1001->SetBinContent(8,2.421158);
   VbbHcc_both_H_jetmass_noJEC__1001->SetBinContent(9,1.606787);
   VbbHcc_both_H_jetmass_noJEC__1001->SetBinContent(10,2.624263);
   VbbHcc_both_H_jetmass_noJEC__1001->SetBinContent(11,0.7300163);
   VbbHcc_both_H_jetmass_noJEC__1001->SetBinContent(12,0.8056681);
   VbbHcc_both_H_jetmass_noJEC__1001->SetBinContent(13,0.2573366);
   VbbHcc_both_H_jetmass_noJEC__1001->SetBinContent(15,0.7003875);
   VbbHcc_both_H_jetmass_noJEC__1001->SetBinContent(19,0.4495428);
   VbbHcc_both_H_jetmass_noJEC__1001->SetBinContent(20,0.3031301);
   VbbHcc_both_H_jetmass_noJEC__1001->SetBinContent(21,0.5286419);
   VbbHcc_both_H_jetmass_noJEC__1001->SetBinContent(52,0.2876854);
   VbbHcc_both_H_jetmass_noJEC__1001->SetBinError(2,0.2061981);
   VbbHcc_both_H_jetmass_noJEC__1001->SetBinError(3,0.3543882);
   VbbHcc_both_H_jetmass_noJEC__1001->SetBinError(4,1.151029);
   VbbHcc_both_H_jetmass_noJEC__1001->SetBinError(5,1.15916);
   VbbHcc_both_H_jetmass_noJEC__1001->SetBinError(6,1.240744);
   VbbHcc_both_H_jetmass_noJEC__1001->SetBinError(7,1.19651);
   VbbHcc_both_H_jetmass_noJEC__1001->SetBinError(8,0.710323);
   VbbHcc_both_H_jetmass_noJEC__1001->SetBinError(9,0.5980745);
   VbbHcc_both_H_jetmass_noJEC__1001->SetBinError(10,0.7688539);
   VbbHcc_both_H_jetmass_noJEC__1001->SetBinError(11,0.4266822);
   VbbHcc_both_H_jetmass_noJEC__1001->SetBinError(12,0.4298142);
   VbbHcc_both_H_jetmass_noJEC__1001->SetBinError(13,0.2573366);
   VbbHcc_both_H_jetmass_noJEC__1001->SetBinError(15,0.4098994);
   VbbHcc_both_H_jetmass_noJEC__1001->SetBinError(19,0.3188846);
   VbbHcc_both_H_jetmass_noJEC__1001->SetBinError(20,0.3031301);
   VbbHcc_both_H_jetmass_noJEC__1001->SetBinError(21,0.3738661);
   VbbHcc_both_H_jetmass_noJEC__1001->SetBinError(52,0.2876854);
   VbbHcc_both_H_jetmass_noJEC__1001->SetEntries(175);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_jetmass_noJEC__1001->SetFillColor(ci);
   VbbHcc_both_H_jetmass_noJEC__1001->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VbbHcc_both_H_jetmass_noJEC__1001->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetmass_noJEC__1001->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC__1001->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetmass_noJEC__1001->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC__1001->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC__1001->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC__1001->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC__1001->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetmass_noJEC__1001->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC__1001->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_both_16->Modified();
   H_jetmass_noJEC_both_16->cd();
   H_jetmass_noJEC_both_16->SetSelected(H_jetmass_noJEC_both_16);
}
