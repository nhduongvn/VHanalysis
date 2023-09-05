#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_18()
{
//=========Macro generated from canvas: H_dR_tags_18/H_dR_tags_18
//=========  (Tue Sep  5 10:48:06 2023) by ROOT version 6.28/04
   TCanvas *H_dR_tags_18 = new TCanvas("H_dR_tags_18", "H_dR_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tags_18->SetHighLightColor(2);
   H_dR_tags_18->Range(-1.2,-45.38267,6.8,408.444);
   H_dR_tags_18->SetFillColor(0);
   H_dR_tags_18->SetBorderMode(0);
   H_dR_tags_18->SetBorderSize(2);
   H_dR_tags_18->SetLeftMargin(0.15);
   H_dR_tags_18->SetFrameBorderMode(0);
   H_dR_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR__82 = new TH1D("VbbHcc_tags_H_dR__82","",30,0,6);
   VbbHcc_tags_H_dR__82->SetBinContent(3,201.6661);
   VbbHcc_tags_H_dR__82->SetBinContent(4,248.5);
   VbbHcc_tags_H_dR__82->SetBinContent(5,217.3767);
   VbbHcc_tags_H_dR__82->SetBinContent(6,217.9126);
   VbbHcc_tags_H_dR__82->SetBinContent(7,152.042);
   VbbHcc_tags_H_dR__82->SetBinContent(8,141.4336);
   VbbHcc_tags_H_dR__82->SetBinContent(9,145.411);
   VbbHcc_tags_H_dR__82->SetBinContent(10,144.5351);
   VbbHcc_tags_H_dR__82->SetBinContent(11,169.7083);
   VbbHcc_tags_H_dR__82->SetBinContent(12,209.8615);
   VbbHcc_tags_H_dR__82->SetBinContent(13,231.2892);
   VbbHcc_tags_H_dR__82->SetBinContent(14,248.8012);
   VbbHcc_tags_H_dR__82->SetBinContent(15,261.3923);
   VbbHcc_tags_H_dR__82->SetBinContent(16,345.7727);
   VbbHcc_tags_H_dR__82->SetBinContent(17,269.0137);
   VbbHcc_tags_H_dR__82->SetBinContent(18,289.043);
   VbbHcc_tags_H_dR__82->SetBinContent(19,219.6532);
   VbbHcc_tags_H_dR__82->SetBinContent(20,188.7115);
   VbbHcc_tags_H_dR__82->SetBinContent(21,138.3024);
   VbbHcc_tags_H_dR__82->SetBinContent(22,133.2157);
   VbbHcc_tags_H_dR__82->SetBinContent(23,91.88944);
   VbbHcc_tags_H_dR__82->SetBinContent(24,63.39203);
   VbbHcc_tags_H_dR__82->SetBinContent(25,64.63136);
   VbbHcc_tags_H_dR__82->SetBinContent(26,52.9087);
   VbbHcc_tags_H_dR__82->SetBinContent(27,41.58271);
   VbbHcc_tags_H_dR__82->SetBinContent(28,33.08973);
   VbbHcc_tags_H_dR__82->SetBinContent(29,27.86426);
   VbbHcc_tags_H_dR__82->SetBinContent(30,21.24262);
   VbbHcc_tags_H_dR__82->SetBinContent(31,15.69407);
   VbbHcc_tags_H_dR__82->SetBinError(3,10.7452);
   VbbHcc_tags_H_dR__82->SetBinError(4,10.70927);
   VbbHcc_tags_H_dR__82->SetBinError(5,11.33396);
   VbbHcc_tags_H_dR__82->SetBinError(6,15.66834);
   VbbHcc_tags_H_dR__82->SetBinError(7,9.55846);
   VbbHcc_tags_H_dR__82->SetBinError(8,8.254986);
   VbbHcc_tags_H_dR__82->SetBinError(9,8.663263);
   VbbHcc_tags_H_dR__82->SetBinError(10,10.79931);
   VbbHcc_tags_H_dR__82->SetBinError(11,10.4705);
   VbbHcc_tags_H_dR__82->SetBinError(12,13.71391);
   VbbHcc_tags_H_dR__82->SetBinError(13,13.38519);
   VbbHcc_tags_H_dR__82->SetBinError(14,13.99457);
   VbbHcc_tags_H_dR__82->SetBinError(15,12.24013);
   VbbHcc_tags_H_dR__82->SetBinError(16,38.73661);
   VbbHcc_tags_H_dR__82->SetBinError(17,14.65809);
   VbbHcc_tags_H_dR__82->SetBinError(18,18.99928);
   VbbHcc_tags_H_dR__82->SetBinError(19,13.83182);
   VbbHcc_tags_H_dR__82->SetBinError(20,14.33241);
   VbbHcc_tags_H_dR__82->SetBinError(21,9.779194);
   VbbHcc_tags_H_dR__82->SetBinError(22,18.37629);
   VbbHcc_tags_H_dR__82->SetBinError(23,11.33865);
   VbbHcc_tags_H_dR__82->SetBinError(24,4.980126);
   VbbHcc_tags_H_dR__82->SetBinError(25,7.914476);
   VbbHcc_tags_H_dR__82->SetBinError(26,4.829152);
   VbbHcc_tags_H_dR__82->SetBinError(27,4.531244);
   VbbHcc_tags_H_dR__82->SetBinError(28,3.961702);
   VbbHcc_tags_H_dR__82->SetBinError(29,3.261084);
   VbbHcc_tags_H_dR__82->SetBinError(30,3.230898);
   VbbHcc_tags_H_dR__82->SetBinError(31,2.374337);
   VbbHcc_tags_H_dR__82->SetEntries(18512);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR__82->SetFillColor(ci);
   VbbHcc_tags_H_dR__82->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_tags_H_dR__82->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR__82->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__82->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR__82->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__82->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__82->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__82->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__82->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR__82->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__82->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_18->Modified();
   H_dR_tags_18->cd();
   H_dR_tags_18->SetSelected(H_dR_tags_18);
}
