#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_18()
{
//=========Macro generated from canvas: Z_dR_tags_18/Z_dR_tags_18
//=========  (Fri Sep  1 13:34:42 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_tags_18 = new TCanvas("Z_dR_tags_18", "Z_dR_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tags_18->SetHighLightColor(2);
   Z_dR_tags_18->Range(-1.2,-0.002486367,6.8,0.0223773);
   Z_dR_tags_18->SetFillColor(0);
   Z_dR_tags_18->SetBorderMode(0);
   Z_dR_tags_18->SetBorderSize(2);
   Z_dR_tags_18->SetLeftMargin(0.15);
   Z_dR_tags_18->SetFrameBorderMode(0);
   Z_dR_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR__75 = new TH1D("VbbHcc_tags_Z_dR__75","",30,0,6);
   VbbHcc_tags_Z_dR__75->SetBinContent(3,0.008651929);
   VbbHcc_tags_Z_dR__75->SetBinContent(4,0.01475022);
   VbbHcc_tags_Z_dR__75->SetBinContent(5,0.01894375);
   VbbHcc_tags_Z_dR__75->SetBinContent(6,0.01167622);
   VbbHcc_tags_Z_dR__75->SetBinContent(7,0.007743849);
   VbbHcc_tags_Z_dR__75->SetBinContent(8,0.002642138);
   VbbHcc_tags_Z_dR__75->SetBinContent(9,0.003070873);
   VbbHcc_tags_Z_dR__75->SetBinContent(10,0.0008323173);
   VbbHcc_tags_Z_dR__75->SetBinContent(11,0.001996362);
   VbbHcc_tags_Z_dR__75->SetBinContent(12,0.002393185);
   VbbHcc_tags_Z_dR__75->SetBinContent(13,0.003636392);
   VbbHcc_tags_Z_dR__75->SetBinContent(14,0.001344324);
   VbbHcc_tags_Z_dR__75->SetBinContent(15,0.003251423);
   VbbHcc_tags_Z_dR__75->SetBinContent(16,0.001943109);
   VbbHcc_tags_Z_dR__75->SetBinContent(17,0.003281232);
   VbbHcc_tags_Z_dR__75->SetBinContent(18,0.004261771);
   VbbHcc_tags_Z_dR__75->SetBinContent(19,0.001873209);
   VbbHcc_tags_Z_dR__75->SetBinContent(20,0.002821599);
   VbbHcc_tags_Z_dR__75->SetBinContent(21,0.0009191528);
   VbbHcc_tags_Z_dR__75->SetBinContent(22,0.001754401);
   VbbHcc_tags_Z_dR__75->SetBinContent(23,0.001595844);
   VbbHcc_tags_Z_dR__75->SetBinContent(25,0.0004478306);
   VbbHcc_tags_Z_dR__75->SetBinContent(26,0.00090549);
   VbbHcc_tags_Z_dR__75->SetBinContent(27,0.001536417);
   VbbHcc_tags_Z_dR__75->SetBinContent(28,0.003742122);
   VbbHcc_tags_Z_dR__75->SetBinContent(29,0.0004230643);
   VbbHcc_tags_Z_dR__75->SetBinContent(30,0.0003839353);
   VbbHcc_tags_Z_dR__75->SetBinError(3,0.001950992);
   VbbHcc_tags_Z_dR__75->SetBinError(4,0.00239249);
   VbbHcc_tags_Z_dR__75->SetBinError(5,0.002973131);
   VbbHcc_tags_Z_dR__75->SetBinError(6,0.002438843);
   VbbHcc_tags_Z_dR__75->SetBinError(7,0.001872329);
   VbbHcc_tags_Z_dR__75->SetBinError(8,0.001033094);
   VbbHcc_tags_Z_dR__75->SetBinError(9,0.001344324);
   VbbHcc_tags_Z_dR__75->SetBinError(10,0.0005177798);
   VbbHcc_tags_Z_dR__75->SetBinError(11,0.0008358697);
   VbbHcc_tags_Z_dR__75->SetBinError(12,0.0009897947);
   VbbHcc_tags_Z_dR__75->SetBinError(13,0.001081206);
   VbbHcc_tags_Z_dR__75->SetBinError(14,0.0006995248);
   VbbHcc_tags_Z_dR__75->SetBinError(15,0.001074406);
   VbbHcc_tags_Z_dR__75->SetBinError(16,0.0008270433);
   VbbHcc_tags_Z_dR__75->SetBinError(17,0.001033305);
   VbbHcc_tags_Z_dR__75->SetBinError(18,0.001373031);
   VbbHcc_tags_Z_dR__75->SetBinError(19,0.000847351);
   VbbHcc_tags_Z_dR__75->SetBinError(20,0.001104531);
   VbbHcc_tags_Z_dR__75->SetBinError(21,0.0005344882);
   VbbHcc_tags_Z_dR__75->SetBinError(22,0.00104163);
   VbbHcc_tags_Z_dR__75->SetBinError(23,0.0007491572);
   VbbHcc_tags_Z_dR__75->SetBinError(25,0.0003232222);
   VbbHcc_tags_Z_dR__75->SetBinError(26,0.0005317671);
   VbbHcc_tags_Z_dR__75->SetBinError(27,0.0009116773);
   VbbHcc_tags_Z_dR__75->SetBinError(28,0.001160699);
   VbbHcc_tags_Z_dR__75->SetBinError(29,0.0004230643);
   VbbHcc_tags_Z_dR__75->SetBinError(30,0.0003839353);
   VbbHcc_tags_Z_dR__75->SetEntries(298);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR__75->SetFillColor(ci);
   VbbHcc_tags_Z_dR__75->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_tags_Z_dR__75->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR__75->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__75->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR__75->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__75->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__75->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__75->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__75->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR__75->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__75->Draw("HIST");
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
