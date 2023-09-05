#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_18()
{
//=========Macro generated from canvas: Z_dR_tags_18/Z_dR_tags_18
//=========  (Tue Sep  5 10:48:06 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_tags_18 = new TCanvas("Z_dR_tags_18", "Z_dR_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tags_18->SetHighLightColor(2);
   Z_dR_tags_18->Range(-1.2,-13.786,6.8,124.074);
   Z_dR_tags_18->SetFillColor(0);
   Z_dR_tags_18->SetBorderMode(0);
   Z_dR_tags_18->SetBorderSize(2);
   Z_dR_tags_18->SetLeftMargin(0.15);
   Z_dR_tags_18->SetFrameBorderMode(0);
   Z_dR_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR__65 = new TH1D("VbbHcc_tags_Z_dR__65","",30,0,6);
   VbbHcc_tags_Z_dR__65->SetBinContent(3,40.06266);
   VbbHcc_tags_Z_dR__65->SetBinContent(4,61.45225);
   VbbHcc_tags_Z_dR__65->SetBinContent(5,55.73654);
   VbbHcc_tags_Z_dR__65->SetBinContent(6,74.6991);
   VbbHcc_tags_Z_dR__65->SetBinContent(7,57.14513);
   VbbHcc_tags_Z_dR__65->SetBinContent(8,74.31611);
   VbbHcc_tags_Z_dR__65->SetBinContent(9,79.99998);
   VbbHcc_tags_Z_dR__65->SetBinContent(10,81.71717);
   VbbHcc_tags_Z_dR__65->SetBinContent(11,82.96641);
   VbbHcc_tags_Z_dR__65->SetBinContent(12,91.63518);
   VbbHcc_tags_Z_dR__65->SetBinContent(13,102.9813);
   VbbHcc_tags_Z_dR__65->SetBinContent(14,92.51326);
   VbbHcc_tags_Z_dR__65->SetBinContent(15,105.0362);
   VbbHcc_tags_Z_dR__65->SetBinContent(16,102.6667);
   VbbHcc_tags_Z_dR__65->SetBinContent(17,98.58058);
   VbbHcc_tags_Z_dR__65->SetBinContent(18,94.92967);
   VbbHcc_tags_Z_dR__65->SetBinContent(19,77.44149);
   VbbHcc_tags_Z_dR__65->SetBinContent(20,70.73196);
   VbbHcc_tags_Z_dR__65->SetBinContent(21,65.57319);
   VbbHcc_tags_Z_dR__65->SetBinContent(22,48.02867);
   VbbHcc_tags_Z_dR__65->SetBinContent(23,38.92365);
   VbbHcc_tags_Z_dR__65->SetBinContent(24,34.70488);
   VbbHcc_tags_Z_dR__65->SetBinContent(25,28.64561);
   VbbHcc_tags_Z_dR__65->SetBinContent(26,24.3486);
   VbbHcc_tags_Z_dR__65->SetBinContent(27,17.49698);
   VbbHcc_tags_Z_dR__65->SetBinContent(28,14.92935);
   VbbHcc_tags_Z_dR__65->SetBinContent(29,10.4741);
   VbbHcc_tags_Z_dR__65->SetBinContent(30,7.699994);
   VbbHcc_tags_Z_dR__65->SetBinContent(31,6.104159);
   VbbHcc_tags_Z_dR__65->SetBinError(3,3.170694);
   VbbHcc_tags_Z_dR__65->SetBinError(4,5.142777);
   VbbHcc_tags_Z_dR__65->SetBinError(5,4.397924);
   VbbHcc_tags_Z_dR__65->SetBinError(6,5.62815);
   VbbHcc_tags_Z_dR__65->SetBinError(7,4.014664);
   VbbHcc_tags_Z_dR__65->SetBinError(8,5.349595);
   VbbHcc_tags_Z_dR__65->SetBinError(9,5.885741);
   VbbHcc_tags_Z_dR__65->SetBinError(10,6.42672);
   VbbHcc_tags_Z_dR__65->SetBinError(11,5.728243);
   VbbHcc_tags_Z_dR__65->SetBinError(12,6.58901);
   VbbHcc_tags_Z_dR__65->SetBinError(13,6.950692);
   VbbHcc_tags_Z_dR__65->SetBinError(14,5.620091);
   VbbHcc_tags_Z_dR__65->SetBinError(15,6.234999);
   VbbHcc_tags_Z_dR__65->SetBinError(16,6.42264);
   VbbHcc_tags_Z_dR__65->SetBinError(17,6.10811);
   VbbHcc_tags_Z_dR__65->SetBinError(18,8.589871);
   VbbHcc_tags_Z_dR__65->SetBinError(19,5.449903);
   VbbHcc_tags_Z_dR__65->SetBinError(20,5.514983);
   VbbHcc_tags_Z_dR__65->SetBinError(21,5.58552);
   VbbHcc_tags_Z_dR__65->SetBinError(22,4.070356);
   VbbHcc_tags_Z_dR__65->SetBinError(23,3.690019);
   VbbHcc_tags_Z_dR__65->SetBinError(24,3.707962);
   VbbHcc_tags_Z_dR__65->SetBinError(25,3.06188);
   VbbHcc_tags_Z_dR__65->SetBinError(26,3.038264);
   VbbHcc_tags_Z_dR__65->SetBinError(27,2.967893);
   VbbHcc_tags_Z_dR__65->SetBinError(28,2.225048);
   VbbHcc_tags_Z_dR__65->SetBinError(29,1.668652);
   VbbHcc_tags_Z_dR__65->SetBinError(30,1.438782);
   VbbHcc_tags_Z_dR__65->SetBinError(31,1.394981);
   VbbHcc_tags_Z_dR__65->SetEntries(14615);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR__65->SetFillColor(ci);
   VbbHcc_tags_Z_dR__65->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_tags_Z_dR__65->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR__65->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__65->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR__65->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__65->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__65->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__65->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__65->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR__65->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__65->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tags_18->Modified();
   Z_dR_tags_18->cd();
   Z_dR_tags_18->SetSelected(Z_dR_tags_18);
}
