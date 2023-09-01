#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dPhi_both_16()
{
//=========Macro generated from canvas: Z_dPhi_both_16/Z_dPhi_both_16
//=========  (Fri Sep  1 13:23:43 2023) by ROOT version 6.28/04
   TCanvas *Z_dPhi_both_16 = new TCanvas("Z_dPhi_both_16", "Z_dPhi_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dPhi_both_16->SetHighLightColor(2);
   Z_dPhi_both_16->Range(-0.8,-0.05116092,4.533333,0.4604482);
   Z_dPhi_both_16->SetFillColor(0);
   Z_dPhi_both_16->SetBorderMode(0);
   Z_dPhi_both_16->SetBorderSize(2);
   Z_dPhi_both_16->SetLeftMargin(0.15);
   Z_dPhi_both_16->SetFrameBorderMode(0);
   Z_dPhi_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dPhi__820 = new TH1D("VbbHcc_both_Z_dPhi__820","",120,0,4);
   VbbHcc_both_Z_dPhi__820->SetBinContent(0,2.222823);
   VbbHcc_both_Z_dPhi__820->SetBinContent(1,0.2704609);
   VbbHcc_both_Z_dPhi__820->SetBinContent(2,0.3897974);
   VbbHcc_both_Z_dPhi__820->SetBinContent(3,0.08004759);
   VbbHcc_both_Z_dPhi__820->SetBinContent(6,0.08794218);
   VbbHcc_both_Z_dPhi__820->SetBinContent(10,0.1433357);
   VbbHcc_both_Z_dPhi__820->SetBinContent(11,0.08449427);
   VbbHcc_both_Z_dPhi__820->SetBinContent(12,0.08696594);
   VbbHcc_both_Z_dPhi__820->SetBinContent(13,0.06786106);
   VbbHcc_both_Z_dPhi__820->SetBinContent(19,0.08760819);
   VbbHcc_both_Z_dPhi__820->SetBinContent(20,0.1227835);
   VbbHcc_both_Z_dPhi__820->SetBinContent(21,0.07985507);
   VbbHcc_both_Z_dPhi__820->SetBinContent(22,0.1919734);
   VbbHcc_both_Z_dPhi__820->SetBinContent(23,0.09930289);
   VbbHcc_both_Z_dPhi__820->SetBinContent(24,0.08483032);
   VbbHcc_both_Z_dPhi__820->SetBinContent(29,0.05989596);
   VbbHcc_both_Z_dPhi__820->SetBinContent(30,0.08310132);
   VbbHcc_both_Z_dPhi__820->SetBinContent(31,0.0792178);
   VbbHcc_both_Z_dPhi__820->SetBinContent(32,0.06914471);
   VbbHcc_both_Z_dPhi__820->SetBinContent(35,0.08569184);
   VbbHcc_both_Z_dPhi__820->SetBinContent(37,0.0849636);
   VbbHcc_both_Z_dPhi__820->SetBinContent(44,0.1428178);
   VbbHcc_both_Z_dPhi__820->SetBinContent(48,0.1098299);
   VbbHcc_both_Z_dPhi__820->SetBinContent(55,0.07500666);
   VbbHcc_both_Z_dPhi__820->SetBinError(0,0.4739133);
   VbbHcc_both_Z_dPhi__820->SetBinError(1,0.1581752);
   VbbHcc_both_Z_dPhi__820->SetBinError(2,0.19846);
   VbbHcc_both_Z_dPhi__820->SetBinError(3,0.08004759);
   VbbHcc_both_Z_dPhi__820->SetBinError(6,0.08794218);
   VbbHcc_both_Z_dPhi__820->SetBinError(10,0.1433357);
   VbbHcc_both_Z_dPhi__820->SetBinError(11,0.08449427);
   VbbHcc_both_Z_dPhi__820->SetBinError(12,0.08696594);
   VbbHcc_both_Z_dPhi__820->SetBinError(13,0.06786106);
   VbbHcc_both_Z_dPhi__820->SetBinError(19,0.08760819);
   VbbHcc_both_Z_dPhi__820->SetBinError(20,0.1227835);
   VbbHcc_both_Z_dPhi__820->SetBinError(21,0.07985507);
   VbbHcc_both_Z_dPhi__820->SetBinError(22,0.1357477);
   VbbHcc_both_Z_dPhi__820->SetBinError(23,0.09930289);
   VbbHcc_both_Z_dPhi__820->SetBinError(24,0.08483032);
   VbbHcc_both_Z_dPhi__820->SetBinError(29,0.05989596);
   VbbHcc_both_Z_dPhi__820->SetBinError(30,0.08310132);
   VbbHcc_both_Z_dPhi__820->SetBinError(31,0.0792178);
   VbbHcc_both_Z_dPhi__820->SetBinError(32,0.06914471);
   VbbHcc_both_Z_dPhi__820->SetBinError(35,0.08569184);
   VbbHcc_both_Z_dPhi__820->SetBinError(37,0.0849636);
   VbbHcc_both_Z_dPhi__820->SetBinError(44,0.1428178);
   VbbHcc_both_Z_dPhi__820->SetBinError(48,0.1098299);
   VbbHcc_both_Z_dPhi__820->SetBinError(55,0.07500666);
   VbbHcc_both_Z_dPhi__820->SetEntries(52);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dPhi__820->SetFillColor(ci);
   VbbHcc_both_Z_dPhi__820->GetXaxis()->SetTitle("#Delta#phi(b,b)");
   VbbHcc_both_Z_dPhi__820->GetXaxis()->SetRange(1,120);
   VbbHcc_both_Z_dPhi__820->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dPhi__820->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dPhi__820->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dPhi__820->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dPhi__820->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dPhi__820->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dPhi__820->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dPhi__820->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dPhi__820->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dPhi_both_16->Modified();
   Z_dPhi_both_16->cd();
   Z_dPhi_both_16->SetSelected(Z_dPhi_both_16);
}
