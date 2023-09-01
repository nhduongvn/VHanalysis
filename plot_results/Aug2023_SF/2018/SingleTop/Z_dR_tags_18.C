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
   Z_dR_tags_18->Range(-1.2,-14.17116,6.8,127.5404);
   Z_dR_tags_18->SetFillColor(0);
   Z_dR_tags_18->SetBorderMode(0);
   Z_dR_tags_18->SetBorderSize(2);
   Z_dR_tags_18->SetLeftMargin(0.15);
   Z_dR_tags_18->SetFrameBorderMode(0);
   Z_dR_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR__65 = new TH1D("VbbHcc_tags_Z_dR__65","",30,0,6);
   VbbHcc_tags_Z_dR__65->SetBinContent(3,41.11068);
   VbbHcc_tags_Z_dR__65->SetBinContent(4,63.0653);
   VbbHcc_tags_Z_dR__65->SetBinContent(5,59.61508);
   VbbHcc_tags_Z_dR__65->SetBinContent(6,73.26253);
   VbbHcc_tags_Z_dR__65->SetBinContent(7,59.20929);
   VbbHcc_tags_Z_dR__65->SetBinContent(8,70.23491);
   VbbHcc_tags_Z_dR__65->SetBinContent(9,78.23814);
   VbbHcc_tags_Z_dR__65->SetBinContent(10,80.99452);
   VbbHcc_tags_Z_dR__65->SetBinContent(11,79.64674);
   VbbHcc_tags_Z_dR__65->SetBinContent(12,89.3881);
   VbbHcc_tags_Z_dR__65->SetBinContent(13,103.9315);
   VbbHcc_tags_Z_dR__65->SetBinContent(14,92.12395);
   VbbHcc_tags_Z_dR__65->SetBinContent(15,107.9707);
   VbbHcc_tags_Z_dR__65->SetBinContent(16,101.0562);
   VbbHcc_tags_Z_dR__65->SetBinContent(17,98.37094);
   VbbHcc_tags_Z_dR__65->SetBinContent(18,94.43107);
   VbbHcc_tags_Z_dR__65->SetBinContent(19,76.48367);
   VbbHcc_tags_Z_dR__65->SetBinContent(20,72.22535);
   VbbHcc_tags_Z_dR__65->SetBinContent(21,67.54771);
   VbbHcc_tags_Z_dR__65->SetBinContent(22,48.26162);
   VbbHcc_tags_Z_dR__65->SetBinContent(23,39.02421);
   VbbHcc_tags_Z_dR__65->SetBinContent(24,33.71047);
   VbbHcc_tags_Z_dR__65->SetBinContent(25,28.90059);
   VbbHcc_tags_Z_dR__65->SetBinContent(26,24.06823);
   VbbHcc_tags_Z_dR__65->SetBinContent(27,17.95357);
   VbbHcc_tags_Z_dR__65->SetBinContent(28,15.13472);
   VbbHcc_tags_Z_dR__65->SetBinContent(29,10.17195);
   VbbHcc_tags_Z_dR__65->SetBinContent(30,7.847779);
   VbbHcc_tags_Z_dR__65->SetBinContent(31,5.944911);
   VbbHcc_tags_Z_dR__65->SetBinError(3,3.22347);
   VbbHcc_tags_Z_dR__65->SetBinError(4,5.237321);
   VbbHcc_tags_Z_dR__65->SetBinError(5,4.687564);
   VbbHcc_tags_Z_dR__65->SetBinError(6,5.712642);
   VbbHcc_tags_Z_dR__65->SetBinError(7,4.740691);
   VbbHcc_tags_Z_dR__65->SetBinError(8,5.176786);
   VbbHcc_tags_Z_dR__65->SetBinError(9,5.737338);
   VbbHcc_tags_Z_dR__65->SetBinError(10,6.150406);
   VbbHcc_tags_Z_dR__65->SetBinError(11,5.447509);
   VbbHcc_tags_Z_dR__65->SetBinError(12,6.436752);
   VbbHcc_tags_Z_dR__65->SetBinError(13,7.3896);
   VbbHcc_tags_Z_dR__65->SetBinError(14,5.633866);
   VbbHcc_tags_Z_dR__65->SetBinError(15,6.459119);
   VbbHcc_tags_Z_dR__65->SetBinError(16,6.382965);
   VbbHcc_tags_Z_dR__65->SetBinError(17,6.086564);
   VbbHcc_tags_Z_dR__65->SetBinError(18,8.735255);
   VbbHcc_tags_Z_dR__65->SetBinError(19,5.349614);
   VbbHcc_tags_Z_dR__65->SetBinError(20,5.706205);
   VbbHcc_tags_Z_dR__65->SetBinError(21,5.606035);
   VbbHcc_tags_Z_dR__65->SetBinError(22,4.141332);
   VbbHcc_tags_Z_dR__65->SetBinError(23,3.761323);
   VbbHcc_tags_Z_dR__65->SetBinError(24,3.69685);
   VbbHcc_tags_Z_dR__65->SetBinError(25,3.013179);
   VbbHcc_tags_Z_dR__65->SetBinError(26,3.073824);
   VbbHcc_tags_Z_dR__65->SetBinError(27,2.927996);
   VbbHcc_tags_Z_dR__65->SetBinError(28,2.296803);
   VbbHcc_tags_Z_dR__65->SetBinError(29,1.629542);
   VbbHcc_tags_Z_dR__65->SetBinError(30,1.426178);
   VbbHcc_tags_Z_dR__65->SetBinError(31,1.433321);
   VbbHcc_tags_Z_dR__65->SetEntries(13198);

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
