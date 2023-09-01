#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_16()
{
//=========Macro generated from canvas: Z_dR_both_16/Z_dR_both_16
//=========  (Fri Sep  1 13:23:42 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_both_16 = new TCanvas("Z_dR_both_16", "Z_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_both_16->SetHighLightColor(2);
   Z_dR_both_16->Range(-1.2,-0.5764011,6.8,5.187609);
   Z_dR_both_16->SetFillColor(0);
   Z_dR_both_16->SetBorderMode(0);
   Z_dR_both_16->SetBorderSize(2);
   Z_dR_both_16->SetLeftMargin(0.15);
   Z_dR_both_16->SetFrameBorderMode(0);
   Z_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dR__791 = new TH1D("VbbHcc_both_Z_dR__791","",30,0,6);
   VbbHcc_both_Z_dR__791->SetBinContent(3,0.6623906);
   VbbHcc_both_Z_dR__791->SetBinContent(4,4.391627);
   VbbHcc_both_Z_dR__791->SetBinContent(5,4.043633);
   VbbHcc_both_Z_dR__791->SetBinContent(6,2.509249);
   VbbHcc_both_Z_dR__791->SetBinContent(7,1.046748);
   VbbHcc_both_Z_dR__791->SetBinContent(8,1.301682);
   VbbHcc_both_Z_dR__791->SetBinContent(9,1.746736);
   VbbHcc_both_Z_dR__791->SetBinContent(10,1.12232);
   VbbHcc_both_Z_dR__791->SetBinContent(11,2.136099);
   VbbHcc_both_Z_dR__791->SetBinContent(12,1.704338);
   VbbHcc_both_Z_dR__791->SetBinContent(13,2.09352);
   VbbHcc_both_Z_dR__791->SetBinContent(14,1.685542);
   VbbHcc_both_Z_dR__791->SetBinContent(15,1.321547);
   VbbHcc_both_Z_dR__791->SetBinContent(16,1.643107);
   VbbHcc_both_Z_dR__791->SetBinContent(17,1.668736);
   VbbHcc_both_Z_dR__791->SetBinContent(18,1.84532);
   VbbHcc_both_Z_dR__791->SetBinContent(19,0.7209632);
   VbbHcc_both_Z_dR__791->SetBinContent(20,0.4068173);
   VbbHcc_both_Z_dR__791->SetBinContent(21,0.2889616);
   VbbHcc_both_Z_dR__791->SetBinContent(22,1.110291);
   VbbHcc_both_Z_dR__791->SetBinContent(23,0.2548583);
   VbbHcc_both_Z_dR__791->SetBinContent(26,0.7704104);
   VbbHcc_both_Z_dR__791->SetBinContent(27,0.7225394);
   VbbHcc_both_Z_dR__791->SetBinContent(28,0.2621723);
   VbbHcc_both_Z_dR__791->SetBinContent(29,0.6859066);
   VbbHcc_both_Z_dR__791->SetBinContent(30,0.8316028);
   VbbHcc_both_Z_dR__791->SetBinContent(31,0.2061981);
   VbbHcc_both_Z_dR__791->SetBinError(3,0.3870999);
   VbbHcc_both_Z_dR__791->SetBinError(4,0.9988148);
   VbbHcc_both_Z_dR__791->SetBinError(5,0.9201881);
   VbbHcc_both_Z_dR__791->SetBinError(6,0.7388125);
   VbbHcc_both_Z_dR__791->SetBinError(7,0.4419904);
   VbbHcc_both_Z_dR__791->SetBinError(8,0.5507696);
   VbbHcc_both_Z_dR__791->SetBinError(9,0.5927773);
   VbbHcc_both_Z_dR__791->SetBinError(10,0.5074182);
   VbbHcc_both_Z_dR__791->SetBinError(11,0.6869387);
   VbbHcc_both_Z_dR__791->SetBinError(12,0.6259412);
   VbbHcc_both_Z_dR__791->SetBinError(13,0.7127127);
   VbbHcc_both_Z_dR__791->SetBinError(14,0.6190531);
   VbbHcc_both_Z_dR__791->SetBinError(15,0.5930933);
   VbbHcc_both_Z_dR__791->SetBinError(16,0.5883127);
   VbbHcc_both_Z_dR__791->SetBinError(17,0.5880034);
   VbbHcc_both_Z_dR__791->SetBinError(18,0.6259021);
   VbbHcc_both_Z_dR__791->SetBinError(19,0.4237114);
   VbbHcc_both_Z_dR__791->SetBinError(20,0.2877042);
   VbbHcc_both_Z_dR__791->SetBinError(21,0.2889616);
   VbbHcc_both_Z_dR__791->SetBinError(22,0.500289);
   VbbHcc_both_Z_dR__791->SetBinError(23,0.2548583);
   VbbHcc_both_Z_dR__791->SetBinError(26,0.4464348);
   VbbHcc_both_Z_dR__791->SetBinError(27,0.3626787);
   VbbHcc_both_Z_dR__791->SetBinError(28,0.2621723);
   VbbHcc_both_Z_dR__791->SetBinError(29,0.3979602);
   VbbHcc_both_Z_dR__791->SetBinError(30,0.4229259);
   VbbHcc_both_Z_dR__791->SetBinError(31,0.2061981);
   VbbHcc_both_Z_dR__791->SetEntries(175);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR__791->SetFillColor(ci);
   VbbHcc_both_Z_dR__791->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_both_Z_dR__791->GetXaxis()->SetRange(1,30);
   VbbHcc_both_Z_dR__791->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__791->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR__791->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__791->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__791->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__791->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__791->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR__791->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__791->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_both_16->Modified();
   Z_dR_both_16->cd();
   Z_dR_both_16->SetSelected(Z_dR_both_16);
}
