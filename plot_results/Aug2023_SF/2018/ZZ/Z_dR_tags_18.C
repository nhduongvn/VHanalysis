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
   Z_dR_tags_18->Range(-1.2,-1.525643,6.8,13.73079);
   Z_dR_tags_18->SetFillColor(0);
   Z_dR_tags_18->SetBorderMode(0);
   Z_dR_tags_18->SetBorderSize(2);
   Z_dR_tags_18->SetLeftMargin(0.15);
   Z_dR_tags_18->SetFrameBorderMode(0);
   Z_dR_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR__71 = new TH1D("VbbHcc_tags_Z_dR__71","",30,0,6);
   VbbHcc_tags_Z_dR__71->SetBinContent(3,3.164517);
   VbbHcc_tags_Z_dR__71->SetBinContent(4,4.654552);
   VbbHcc_tags_Z_dR__71->SetBinContent(5,11.62395);
   VbbHcc_tags_Z_dR__71->SetBinContent(6,2.75303);
   VbbHcc_tags_Z_dR__71->SetBinContent(7,3.463956);
   VbbHcc_tags_Z_dR__71->SetBinContent(8,1.799185);
   VbbHcc_tags_Z_dR__71->SetBinContent(9,1.948067);
   VbbHcc_tags_Z_dR__71->SetBinContent(10,0.8743783);
   VbbHcc_tags_Z_dR__71->SetBinContent(11,1.718322);
   VbbHcc_tags_Z_dR__71->SetBinContent(12,0.7551616);
   VbbHcc_tags_Z_dR__71->SetBinContent(13,3.36299);
   VbbHcc_tags_Z_dR__71->SetBinContent(14,6.425602);
   VbbHcc_tags_Z_dR__71->SetBinContent(15,7.930703);
   VbbHcc_tags_Z_dR__71->SetBinContent(16,6.365474);
   VbbHcc_tags_Z_dR__71->SetBinContent(17,5.580293);
   VbbHcc_tags_Z_dR__71->SetBinContent(18,4.389992);
   VbbHcc_tags_Z_dR__71->SetBinContent(19,4.50656);
   VbbHcc_tags_Z_dR__71->SetBinContent(20,2.040611);
   VbbHcc_tags_Z_dR__71->SetBinContent(21,2.011185);
   VbbHcc_tags_Z_dR__71->SetBinContent(22,1.705315);
   VbbHcc_tags_Z_dR__71->SetBinContent(23,2.081746);
   VbbHcc_tags_Z_dR__71->SetBinContent(25,0.6773673);
   VbbHcc_tags_Z_dR__71->SetBinContent(26,0.9165194);
   VbbHcc_tags_Z_dR__71->SetBinContent(27,0.267111);
   VbbHcc_tags_Z_dR__71->SetBinContent(28,0.2627183);
   VbbHcc_tags_Z_dR__71->SetBinContent(29,0.4759768);
   VbbHcc_tags_Z_dR__71->SetBinContent(30,0.2682427);
   VbbHcc_tags_Z_dR__71->SetBinError(3,1.049799);
   VbbHcc_tags_Z_dR__71->SetBinError(4,1.367019);
   VbbHcc_tags_Z_dR__71->SetBinError(5,2.375729);
   VbbHcc_tags_Z_dR__71->SetBinError(6,1.145435);
   VbbHcc_tags_Z_dR__71->SetBinError(7,1.377212);
   VbbHcc_tags_Z_dR__71->SetBinError(8,0.8391619);
   VbbHcc_tags_Z_dR__71->SetBinError(9,0.8055831);
   VbbHcc_tags_Z_dR__71->SetBinError(10,0.5096857);
   VbbHcc_tags_Z_dR__71->SetBinError(11,0.7774007);
   VbbHcc_tags_Z_dR__71->SetBinError(12,0.4570164);
   VbbHcc_tags_Z_dR__71->SetBinError(13,1.124914);
   VbbHcc_tags_Z_dR__71->SetBinError(14,1.574455);
   VbbHcc_tags_Z_dR__71->SetBinError(15,1.780338);
   VbbHcc_tags_Z_dR__71->SetBinError(16,1.645126);
   VbbHcc_tags_Z_dR__71->SetBinError(17,1.384766);
   VbbHcc_tags_Z_dR__71->SetBinError(18,1.364385);
   VbbHcc_tags_Z_dR__71->SetBinError(19,1.355753);
   VbbHcc_tags_Z_dR__71->SetBinError(20,0.88148);
   VbbHcc_tags_Z_dR__71->SetBinError(21,0.9245421);
   VbbHcc_tags_Z_dR__71->SetBinError(22,0.825533);
   VbbHcc_tags_Z_dR__71->SetBinError(23,0.9788894);
   VbbHcc_tags_Z_dR__71->SetBinError(25,0.6773673);
   VbbHcc_tags_Z_dR__71->SetBinError(26,0.5485621);
   VbbHcc_tags_Z_dR__71->SetBinError(27,0.267111);
   VbbHcc_tags_Z_dR__71->SetBinError(28,0.2627183);
   VbbHcc_tags_Z_dR__71->SetBinError(29,0.3365672);
   VbbHcc_tags_Z_dR__71->SetBinError(30,0.2682427);
   VbbHcc_tags_Z_dR__71->SetEntries(230);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR__71->SetFillColor(ci);
   VbbHcc_tags_Z_dR__71->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_tags_Z_dR__71->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR__71->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__71->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR__71->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__71->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__71->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__71->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__71->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR__71->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__71->Draw("HIST");
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
