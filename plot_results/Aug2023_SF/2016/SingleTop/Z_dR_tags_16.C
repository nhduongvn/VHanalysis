#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_16()
{
//=========Macro generated from canvas: Z_dR_tags_16/Z_dR_tags_16
//=========  (Tue Sep  5 10:48:26 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_tags_16 = new TCanvas("Z_dR_tags_16", "Z_dR_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tags_16->SetHighLightColor(2);
   Z_dR_tags_16->Range(-1.2,-4.56421,6.8,41.07789);
   Z_dR_tags_16->SetFillColor(0);
   Z_dR_tags_16->SetBorderMode(0);
   Z_dR_tags_16->SetBorderSize(2);
   Z_dR_tags_16->SetLeftMargin(0.15);
   Z_dR_tags_16->SetFrameBorderMode(0);
   Z_dR_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR__65 = new TH1D("VbbHcc_tags_Z_dR__65","",30,0,6);
   VbbHcc_tags_Z_dR__65->SetBinContent(3,17.04493);
   VbbHcc_tags_Z_dR__65->SetBinContent(4,20.65145);
   VbbHcc_tags_Z_dR__65->SetBinContent(5,19.88683);
   VbbHcc_tags_Z_dR__65->SetBinContent(6,21.35084);
   VbbHcc_tags_Z_dR__65->SetBinContent(7,22.99523);
   VbbHcc_tags_Z_dR__65->SetBinContent(8,23.25752);
   VbbHcc_tags_Z_dR__65->SetBinContent(9,28.42195);
   VbbHcc_tags_Z_dR__65->SetBinContent(10,25.81359);
   VbbHcc_tags_Z_dR__65->SetBinContent(11,32.64958);
   VbbHcc_tags_Z_dR__65->SetBinContent(12,31.83211);
   VbbHcc_tags_Z_dR__65->SetBinContent(13,33.37883);
   VbbHcc_tags_Z_dR__65->SetBinContent(14,32.75632);
   VbbHcc_tags_Z_dR__65->SetBinContent(15,33.0746);
   VbbHcc_tags_Z_dR__65->SetBinContent(16,34.77493);
   VbbHcc_tags_Z_dR__65->SetBinContent(17,29.17098);
   VbbHcc_tags_Z_dR__65->SetBinContent(18,30.56856);
   VbbHcc_tags_Z_dR__65->SetBinContent(19,26.14726);
   VbbHcc_tags_Z_dR__65->SetBinContent(20,22.4996);
   VbbHcc_tags_Z_dR__65->SetBinContent(21,18.94315);
   VbbHcc_tags_Z_dR__65->SetBinContent(22,16.19983);
   VbbHcc_tags_Z_dR__65->SetBinContent(23,13.73363);
   VbbHcc_tags_Z_dR__65->SetBinContent(24,10.2724);
   VbbHcc_tags_Z_dR__65->SetBinContent(25,8.534672);
   VbbHcc_tags_Z_dR__65->SetBinContent(26,7.356328);
   VbbHcc_tags_Z_dR__65->SetBinContent(27,4.102632);
   VbbHcc_tags_Z_dR__65->SetBinContent(28,4.453608);
   VbbHcc_tags_Z_dR__65->SetBinContent(29,2.756006);
   VbbHcc_tags_Z_dR__65->SetBinContent(30,2.919967);
   VbbHcc_tags_Z_dR__65->SetBinContent(31,2.071721);
   VbbHcc_tags_Z_dR__65->SetBinError(3,1.65706);
   VbbHcc_tags_Z_dR__65->SetBinError(4,1.780235);
   VbbHcc_tags_Z_dR__65->SetBinError(5,1.797376);
   VbbHcc_tags_Z_dR__65->SetBinError(6,1.740977);
   VbbHcc_tags_Z_dR__65->SetBinError(7,1.848781);
   VbbHcc_tags_Z_dR__65->SetBinError(8,1.812257);
   VbbHcc_tags_Z_dR__65->SetBinError(9,2.167802);
   VbbHcc_tags_Z_dR__65->SetBinError(10,2.025198);
   VbbHcc_tags_Z_dR__65->SetBinError(11,2.332479);
   VbbHcc_tags_Z_dR__65->SetBinError(12,2.303873);
   VbbHcc_tags_Z_dR__65->SetBinError(13,2.287365);
   VbbHcc_tags_Z_dR__65->SetBinError(14,2.257484);
   VbbHcc_tags_Z_dR__65->SetBinError(15,2.216763);
   VbbHcc_tags_Z_dR__65->SetBinError(16,2.278716);
   VbbHcc_tags_Z_dR__65->SetBinError(17,2.03886);
   VbbHcc_tags_Z_dR__65->SetBinError(18,2.184329);
   VbbHcc_tags_Z_dR__65->SetBinError(19,2.023961);
   VbbHcc_tags_Z_dR__65->SetBinError(20,1.868538);
   VbbHcc_tags_Z_dR__65->SetBinError(21,1.736375);
   VbbHcc_tags_Z_dR__65->SetBinError(22,1.632859);
   VbbHcc_tags_Z_dR__65->SetBinError(23,1.39791);
   VbbHcc_tags_Z_dR__65->SetBinError(24,1.292539);
   VbbHcc_tags_Z_dR__65->SetBinError(25,1.178189);
   VbbHcc_tags_Z_dR__65->SetBinError(26,0.9970956);
   VbbHcc_tags_Z_dR__65->SetBinError(27,0.7428695);
   VbbHcc_tags_Z_dR__65->SetBinError(28,0.8032866);
   VbbHcc_tags_Z_dR__65->SetBinError(29,0.5210161);
   VbbHcc_tags_Z_dR__65->SetBinError(30,0.6782247);
   VbbHcc_tags_Z_dR__65->SetBinError(31,0.5945305);
   VbbHcc_tags_Z_dR__65->SetEntries(9408);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tags_16->Modified();
   Z_dR_tags_16->cd();
   Z_dR_tags_16->SetSelected(Z_dR_tags_16);
}
