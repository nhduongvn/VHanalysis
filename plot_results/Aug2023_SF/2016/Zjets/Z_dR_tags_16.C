#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_16()
{
//=========Macro generated from canvas: Z_dR_tags_16/Z_dR_tags_16
//=========  (Fri Sep  1 13:23:30 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_tags_16 = new TCanvas("Z_dR_tags_16", "Z_dR_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tags_16->SetHighLightColor(2);
   Z_dR_tags_16->Range(-1.2,-14.82256,6.8,133.403);
   Z_dR_tags_16->SetFillColor(0);
   Z_dR_tags_16->SetBorderMode(0);
   Z_dR_tags_16->SetBorderSize(2);
   Z_dR_tags_16->SetLeftMargin(0.15);
   Z_dR_tags_16->SetFrameBorderMode(0);
   Z_dR_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR__67 = new TH1D("VbbHcc_tags_Z_dR__67","",30,0,6);
   VbbHcc_tags_Z_dR__67->SetBinContent(3,68.45682);
   VbbHcc_tags_Z_dR__67->SetBinContent(4,109.0249);
   VbbHcc_tags_Z_dR__67->SetBinContent(5,112.9337);
   VbbHcc_tags_Z_dR__67->SetBinContent(6,92.88841);
   VbbHcc_tags_Z_dR__67->SetBinContent(7,92.65886);
   VbbHcc_tags_Z_dR__67->SetBinContent(8,76.21441);
   VbbHcc_tags_Z_dR__67->SetBinContent(9,58.86558);
   VbbHcc_tags_Z_dR__67->SetBinContent(10,62.87757);
   VbbHcc_tags_Z_dR__67->SetBinContent(11,66.1482);
   VbbHcc_tags_Z_dR__67->SetBinContent(12,75.94279);
   VbbHcc_tags_Z_dR__67->SetBinContent(13,77.5111);
   VbbHcc_tags_Z_dR__67->SetBinContent(14,94.22312);
   VbbHcc_tags_Z_dR__67->SetBinContent(15,88.66964);
   VbbHcc_tags_Z_dR__67->SetBinContent(16,97.07266);
   VbbHcc_tags_Z_dR__67->SetBinContent(17,102.5864);
   VbbHcc_tags_Z_dR__67->SetBinContent(18,74.8648);
   VbbHcc_tags_Z_dR__67->SetBinContent(19,67.31518);
   VbbHcc_tags_Z_dR__67->SetBinContent(20,58.31375);
   VbbHcc_tags_Z_dR__67->SetBinContent(21,49.94145);
   VbbHcc_tags_Z_dR__67->SetBinContent(22,39.18964);
   VbbHcc_tags_Z_dR__67->SetBinContent(23,34.68716);
   VbbHcc_tags_Z_dR__67->SetBinContent(24,27.22202);
   VbbHcc_tags_Z_dR__67->SetBinContent(25,24.52844);
   VbbHcc_tags_Z_dR__67->SetBinContent(26,17.20115);
   VbbHcc_tags_Z_dR__67->SetBinContent(27,18.82769);
   VbbHcc_tags_Z_dR__67->SetBinContent(28,16.76113);
   VbbHcc_tags_Z_dR__67->SetBinContent(29,10.56363);
   VbbHcc_tags_Z_dR__67->SetBinContent(30,10.51169);
   VbbHcc_tags_Z_dR__67->SetBinContent(31,4.621522);
   VbbHcc_tags_Z_dR__67->SetBinError(3,2.527931);
   VbbHcc_tags_Z_dR__67->SetBinError(4,6.088038);
   VbbHcc_tags_Z_dR__67->SetBinError(5,5.267783);
   VbbHcc_tags_Z_dR__67->SetBinError(6,6.405976);
   VbbHcc_tags_Z_dR__67->SetBinError(7,8.291995);
   VbbHcc_tags_Z_dR__67->SetBinError(8,7.398024);
   VbbHcc_tags_Z_dR__67->SetBinError(9,4.240481);
   VbbHcc_tags_Z_dR__67->SetBinError(10,5.742666);
   VbbHcc_tags_Z_dR__67->SetBinError(11,5.60505);
   VbbHcc_tags_Z_dR__67->SetBinError(12,5.882509);
   VbbHcc_tags_Z_dR__67->SetBinError(13,5.79316);
   VbbHcc_tags_Z_dR__67->SetBinError(14,7.4272);
   VbbHcc_tags_Z_dR__67->SetBinError(15,5.873227);
   VbbHcc_tags_Z_dR__67->SetBinError(16,7.005107);
   VbbHcc_tags_Z_dR__67->SetBinError(17,8.597272);
   VbbHcc_tags_Z_dR__67->SetBinError(18,5.576245);
   VbbHcc_tags_Z_dR__67->SetBinError(19,5.472643);
   VbbHcc_tags_Z_dR__67->SetBinError(20,5.608132);
   VbbHcc_tags_Z_dR__67->SetBinError(21,5.665457);
   VbbHcc_tags_Z_dR__67->SetBinError(22,4.708112);
   VbbHcc_tags_Z_dR__67->SetBinError(23,5.469908);
   VbbHcc_tags_Z_dR__67->SetBinError(24,4.311714);
   VbbHcc_tags_Z_dR__67->SetBinError(25,3.577209);
   VbbHcc_tags_Z_dR__67->SetBinError(26,2.488176);
   VbbHcc_tags_Z_dR__67->SetBinError(27,2.438797);
   VbbHcc_tags_Z_dR__67->SetBinError(28,2.524018);
   VbbHcc_tags_Z_dR__67->SetBinError(29,1.176759);
   VbbHcc_tags_Z_dR__67->SetBinError(30,2.57513);
   VbbHcc_tags_Z_dR__67->SetBinError(31,0.8383067);
   VbbHcc_tags_Z_dR__67->SetEntries(14937);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR__67->SetFillColor(ci);
   VbbHcc_tags_Z_dR__67->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_tags_Z_dR__67->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR__67->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__67->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR__67->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__67->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__67->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__67->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__67->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR__67->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__67->Draw("HIST");
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
