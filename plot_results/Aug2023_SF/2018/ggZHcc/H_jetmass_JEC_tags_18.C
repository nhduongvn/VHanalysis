#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_JEC_tags_18()
{
//=========Macro generated from canvas: H_jetmass_JEC_tags_18/H_jetmass_JEC_tags_18
//=========  (Fri Sep  1 13:34:46 2023) by ROOT version 6.28/04
   TCanvas *H_jetmass_JEC_tags_18 = new TCanvas("H_jetmass_JEC_tags_18", "H_jetmass_JEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_tags_18->SetHighLightColor(2);
   H_jetmass_JEC_tags_18->Range(-60,-0.002768462,340,0.02491615);
   H_jetmass_JEC_tags_18->SetFillColor(0);
   H_jetmass_JEC_tags_18->SetBorderMode(0);
   H_jetmass_JEC_tags_18->SetBorderSize(2);
   H_jetmass_JEC_tags_18->SetLeftMargin(0.15);
   H_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   H_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_JEC__300 = new TH1D("VbbHcc_tags_H_jetmass_JEC__300","",150,0,300);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(2,0.0004185758);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(3,0.001553123);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(4,0.009598453);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(5,0.02109304);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(6,0.02047376);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(7,0.00959009);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(8,0.0135135);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(9,0.008301626);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(10,0.003920114);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(11,0.00393524);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(12,0.004431089);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(13,0.002175993);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(14,0.001419046);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(15,0.00152912);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(16,0.0009097638);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(17,0.001595105);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(18,0.0001735906);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(21,0.0003131055);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(23,0.0003552754);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(24,0.0001450742);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(25,0.0002629992);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(27,0.0002929909);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(30,0.0008214753);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(2,0.0004185758);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(3,0.0007949597);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(4,0.002076282);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(5,0.002771136);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(6,0.003439589);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(7,0.001894685);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(8,0.002306859);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(9,0.001759902);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(10,0.001164543);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(11,0.001218905);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(12,0.001470008);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(13,0.0008374492);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(14,0.0007180613);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(15,0.0008251254);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(16,0.0005402315);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(17,0.0009599423);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(18,0.0001735906);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(21,0.0003131055);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(23,0.0003552754);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(24,0.0001450742);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(25,0.0002629992);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(27,0.0002929909);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(30,0.0008214753);
   VbbHcc_tags_H_jetmass_JEC__300->SetEntries(298);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_jetmass_JEC__300->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_JEC__300->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_H_jetmass_JEC__300->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_JEC__300->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC__300->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetmass_JEC__300->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC__300->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC__300->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC__300->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC__300->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetmass_JEC__300->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC__300->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_tags_18->Modified();
   H_jetmass_JEC_tags_18->cd();
   H_jetmass_JEC_tags_18->SetSelected(H_jetmass_JEC_tags_18);
}
